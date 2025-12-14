/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29893
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
    var_12 |= ((_Bool) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_1 [i_0 + 3]))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((long long int) ((signed char) arr_0 [i_0]))))));
        var_15 ^= ((/* implicit */_Bool) ((unsigned short) ((signed char) 195666655U)));
        var_16 *= ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] = arr_7 [i_3];
                            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0] [(signed char)16])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((signed char) arr_11 [i_1] [i_1] [i_2] [i_1] [i_0]))))) : (max((-3637973062567514598LL), (((/* implicit */long long int) 0U))))));
                            var_18 *= ((/* implicit */signed char) arr_0 [i_4]);
                            arr_15 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_2 - 1] [i_0 + 1] [i_3] [i_2] = ((long long int) min((((/* implicit */long long int) ((short) arr_8 [i_0] [i_1] [i_2] [i_2 + 1] [i_1] [i_4]))), (max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4 - 1])), (arr_5 [i_1] [i_1] [i_3 + 2])))));
                        }
                        arr_16 [i_2] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((unsigned short) ((long long int) arr_1 [i_0 - 1])));
                    }
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_2] [i_2] [i_2] = ((/* implicit */short) ((long long int) ((signed char) (short)-237)));
                        arr_20 [i_2] [i_1] [i_1] = max((arr_12 [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_2 + 1] [i_2 - 1] [i_5 + 2]), (((/* implicit */unsigned long long int) ((signed char) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_5 + 1] [i_5 + 1]))));
                        var_19 += ((/* implicit */unsigned short) ((_Bool) max((arr_8 [i_0 + 2] [i_0 + 2] [i_1] [i_5] [i_5 + 2] [i_1]), (arr_8 [i_0] [i_0 + 3] [i_1] [i_2] [i_2] [i_5]))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_23 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((long long int) arr_9 [i_2] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 3] [i_1] [i_2] [i_6] [i_6])))));
                        arr_24 [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_2] [i_0 + 3] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)233)))) : (((((/* implicit */_Bool) 17623539475747966714ULL)) ? (arr_8 [i_0] [i_0] [i_2] [i_2] [i_2] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30095)))))));
                        var_20 ^= ((/* implicit */short) ((long long int) ((long long int) (unsigned char)80)));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned int) ((_Bool) arr_6 [i_1] [i_1] [i_1] [i_6]))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_21 [i_7] [i_2 - 1] [i_0 + 2]) : ((-9223372036854775807LL - 1LL))));
                        var_22 = ((/* implicit */int) arr_22 [i_2 + 1] [i_2] [i_2] [i_0]);
                    }
                    arr_29 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)246)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_0 + 3])))) : (max((min((17623539475747966721ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])))), (((unsigned long long int) (unsigned short)579))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) arr_33 [i_8]);
        var_24 = ((/* implicit */int) ((long long int) min((((/* implicit */short) arr_30 [i_8])), (arr_31 [i_8]))));
    }
}
