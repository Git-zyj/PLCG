/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226787
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_2 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (min((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (arr_2 [i_0] [i_0])))))) : (max((((/* implicit */unsigned long long int) (signed char)-83)), (18446744073709551615ULL))))))));
                var_16 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))), ((+(2185976108U)))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))))) : ((+((-(var_0))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_12);
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 21; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned char) (((~(((((/* implicit */unsigned long long int) arr_16 [i_2])) & (var_13))))) & (((/* implicit */unsigned long long int) ((2108991202U) % (2108991209U))))));
                                var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-120))))), (((((/* implicit */_Bool) max((arr_15 [i_4]), (((/* implicit */unsigned short) arr_8 [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (var_0)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 3; i_7 < 18; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 2; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((arr_7 [(unsigned char)14] [i_3]), (((/* implicit */int) arr_5 [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) (+(arr_16 [i_3])))) ? (min((((/* implicit */unsigned int) arr_17 [i_2] [i_3] [(unsigned char)2] [i_7 + 1] [i_8])), (2147483648U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_1))))))));
                            arr_24 [i_2] [i_3 - 1] [i_2] [i_4 - 2] [i_4] [i_8 - 1] = ((/* implicit */_Bool) ((int) (~(arr_7 [i_8 - 1] [i_3 + 1]))));
                        }
                        for (signed char i_9 = 2; i_9 < 20; i_9 += 3) /* same iter space */
                        {
                            arr_27 [i_2] [i_2] [i_4] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_2] [i_4] [i_2] [i_9])) << (0U)))), (((((/* implicit */_Bool) arr_4 [16U] [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [(signed char)9] [i_4] [i_4 - 1] [(signed char)9] [i_4]))))))), (((((((/* implicit */_Bool) 496714173)) || (((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59448))) : (min((((/* implicit */unsigned long long int) (signed char)49)), (arr_19 [i_2] [i_2] [i_4 - 3] [i_4] [i_9] [i_3])))))));
                            var_21 ^= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_26 [(unsigned short)19] [i_3] [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_26 [i_3 - 1] [i_3] [15ULL] [i_3] [i_3 - 1])) : (((/* implicit */int) arr_26 [i_3] [(signed char)12] [i_3] [i_3 + 1] [i_3 - 1])))));
                            var_22 = ((/* implicit */signed char) (short)18693);
                        }
                        arr_28 [i_7] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (unsigned char)212)) ^ ((~(((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_22 [i_4] [i_4] [i_4] [i_7] [i_2] [i_7])), (arr_20 [i_7] [i_4 - 3] [i_3] [i_2] [i_2])))) ? (((/* implicit */int) max(((unsigned char)229), (((/* implicit */unsigned char) var_11))))) : (((/* implicit */int) (unsigned char)80))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) -3599336896920887230LL);
    var_24 ^= ((/* implicit */unsigned int) (-(var_8)));
}
