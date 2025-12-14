/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3315
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
    var_11 &= ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    arr_7 [3U] [i_1] [i_1] [2LL] = ((/* implicit */short) -2085526703);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) 5462912154078349907LL);
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 3; i_4 < 7; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_4] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) & (arr_0 [i_4])))));
                            arr_14 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (short i_5 = 1; i_5 < 9; i_5 += 1) 
                        {
                            var_12 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_5 + 1] [i_2] [i_3 + 2])) ? (arr_8 [i_2] [i_5 + 1] [5ULL] [i_3 + 2]) : (((/* implicit */long long int) 255U))));
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) 4ULL))));
                        }
                        var_14 = ((/* implicit */long long int) 255U);
                    }
                }
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) arr_12 [(unsigned short)6])))) >= (((((/* implicit */_Bool) 1404122981)) ? (((/* implicit */int) (unsigned char)242)) : (var_0))))))) <= (max((((4294967048U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17805)) ? (arr_11 [i_1 + 2] [i_0]) : (-858526105)))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */unsigned int) 2097151)) : (4294967295U)))))))));
        arr_21 [(short)6] [(short)14] = 10ULL;
    }
}
