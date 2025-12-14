/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227258
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (+(-6879580369076243826LL))))));
            var_12 += ((/* implicit */signed char) var_3);
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >> (((/* implicit */int) arr_1 [i_0]))));
        }
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned int) ((unsigned short) 5570934460414311963ULL));
            var_14 = ((/* implicit */unsigned int) ((min((var_9), (((/* implicit */unsigned long long int) ((unsigned char) var_2))))) >> (((/* implicit */int) arr_1 [i_0]))));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_1 [i_0]))))) ? (((arr_3 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_1))));
            var_17 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_4 [i_2] [i_0] [i_0])), (((arr_3 [i_0]) / (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_11 [i_0] [i_0])))) ? ((+(((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_3] [i_5])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) var_8)))))) : (max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))));
                                arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((unsigned char) arr_1 [i_4])))) <= (((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_4] [i_4])) ? (((/* implicit */int) arr_5 [i_3 + 3] [i_5] [i_5])) : (((/* implicit */int) arr_5 [i_3 + 1] [i_6] [i_6]))))));
                                var_19 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_6] [i_3] [i_3] [i_3]))))) : (max((((/* implicit */unsigned long long int) var_10)), (var_9))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) arr_14 [i_3 + 4] [i_3] [i_4] [i_3 + 4])))));
                }
            } 
        } 
    }
    var_20 = var_3;
}
