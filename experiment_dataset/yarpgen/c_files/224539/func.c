/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224539
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) (signed char)95))))))) ? (var_4) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (((var_4) * (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    arr_6 [i_2] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                    var_18 = ((/* implicit */unsigned short) ((unsigned int) arr_2 [(unsigned short)3] [i_2 + 3]));
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((+(-9223372036854775799LL))) : (((/* implicit */long long int) arr_5 [11U] [i_1] [11U]))));
                }
                /* LoopNest 3 */
                for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_20 = (i_3 % 2 == zero) ? (((((((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_1]) : (((/* implicit */int) arr_3 [(_Bool)1])))) >> (((arr_9 [i_3] [i_3 - 2] [i_4 + 2]) - (2286899238U))))) - (((/* implicit */int) max((((_Bool) arr_11 [i_0] [i_1] [12ULL] [13U] [(signed char)4] [i_5])), (((arr_11 [i_0] [i_0] [i_3] [i_4] [i_4] [i_3]) > (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))) : (((((((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_1]) : (((/* implicit */int) arr_3 [(_Bool)1])))) >> (((((arr_9 [i_3] [i_3 - 2] [i_4 + 2]) - (2286899238U))) - (4053148438U))))) - (((/* implicit */int) max((((_Bool) arr_11 [i_0] [i_1] [12ULL] [13U] [(signed char)4] [i_5])), (((arr_11 [i_0] [i_0] [i_3] [i_4] [i_4] [i_3]) > (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) (~((~(18014398509481983ULL)))));
                                arr_16 [i_0] [14LL] [i_3] [i_5] = ((/* implicit */_Bool) arr_13 [i_0]);
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -9223372036854775791LL)) || (((/* implicit */_Bool) 66060288U)))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(short)15]))) : (arr_4 [i_0] [i_1]))) + (((/* implicit */unsigned long long int) arr_9 [i_1] [(unsigned char)8] [i_1])))) : (((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned char) var_0);
    var_22 ^= ((/* implicit */_Bool) 2191652253U);
}
