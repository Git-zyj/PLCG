/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205214
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
    var_20 = ((/* implicit */long long int) var_18);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((unsigned long long int) ((unsigned int) var_2)));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min(((~(((long long int) 18446744073709551615ULL)))), (8296197529867265158LL))))));
        var_22 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)97))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)-70)) : (arr_6 [i_1]))) : (arr_6 [i_1])));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            for (unsigned int i_3 = 3; i_3 < 21; i_3 += 3) 
            {
                {
                    var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_3 - 1] [i_1] [i_1]))))) || (((((/* implicit */int) arr_8 [i_3 - 2] [2U])) != (arr_6 [8])))));
                    arr_15 [i_1] [i_2] [i_3 - 2] [i_1] = ((/* implicit */int) var_18);
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_22 [i_5 - 3] [i_1] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */long long int) ((arr_12 [i_2 + 1] [i_4] [i_3 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 - 1] [i_2] [i_3 - 1]))) : (var_13)));
                                arr_23 [i_1] [i_2] [(unsigned char)14] [i_4] [i_2 - 1] = ((/* implicit */short) ((6742182769412031507LL) != (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)711)))))));
                                var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) >> (((/* implicit */int) arr_21 [i_5] [i_4] [i_3 + 1] [i_2]))))) ? (((/* implicit */int) (unsigned char)175)) : ((~(((/* implicit */int) (signed char)97))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) (~(var_11)));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (((~(2179218242961465484LL))) <= (((/* implicit */long long int) arr_10 [12])))))));
    }
}
