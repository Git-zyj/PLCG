/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215963
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0] [i_0 - 1])), (((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) - (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((max(((+(arr_3 [i_0] [i_1]))), (((/* implicit */long long int) arr_6 [(unsigned char)2] [(signed char)2] [i_2] [i_0 - 1])))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((var_5) == (((/* implicit */long long int) var_7)))))))))))));
                    var_15 ^= ((/* implicit */unsigned int) arr_5 [i_0] [3LL] [8ULL] [i_0]);
                    var_16 = ((/* implicit */signed char) arr_0 [i_0 - 1]);
                    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                }
                arr_7 [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) <= ((-(((/* implicit */int) ((signed char) var_7)))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_13 [i_5 + 1] [i_4] [i_5] [i_3]), (arr_13 [i_5 - 1] [16U] [i_5] [i_5 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (arr_8 [i_3]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_23 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95)))))))) ? (max((arr_20 [i_6] [i_4] [3ULL] [i_6] [i_7] [i_6] [i_4]), (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_11 [i_3])))))) : (((/* implicit */int) (unsigned char)80))));
                                arr_24 [i_3] [12U] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) (_Bool)1);
                                var_20 = ((/* implicit */unsigned short) arr_21 [(unsigned char)3] [i_4] [i_5] [i_6] [i_6] [i_5]);
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_5] [i_6] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 445261858U)) ? (((/* implicit */int) arr_14 [(unsigned char)2])) : (((/* implicit */int) arr_14 [i_3])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)53916)), (var_2))))))))))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */unsigned long long int) ((int) arr_10 [i_3]));
                    var_23 &= ((/* implicit */signed char) var_13);
                }
            } 
        } 
    } 
}
