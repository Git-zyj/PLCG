/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52429
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
    var_12 -= ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned short) var_10);
                var_14 = ((/* implicit */_Bool) (unsigned short)59931);
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = arr_0 [(unsigned short)2] [i_1];
                                var_16 = ((/* implicit */long long int) arr_6 [i_0 - 1] [i_1] [16LL] [i_1]);
                                arr_12 [13LL] [13LL] = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)19496))))));
                    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_2])) | (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0 - 1] [(_Bool)1] [i_2] [(_Bool)1]))))) ? (max((arr_3 [i_1] [23ULL]), (arr_3 [i_1] [i_0 - 1]))) : (min((471252912513033372ULL), (arr_3 [i_1] [i_1])))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [(unsigned short)5] [i_5])) / (((/* implicit */int) arr_5 [(signed char)15]))));
                    arr_15 [i_0] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_5]))));
                    var_20 = ((/* implicit */_Bool) ((arr_7 [i_5] [i_5] [(signed char)23] [i_1] [i_1] [(unsigned short)18]) ? (((long long int) (_Bool)1)) : (((long long int) (_Bool)0))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1] [20LL] [i_6]))) : (471252912513033378ULL)))) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1])) : (((/* implicit */int) var_8))));
                    var_22 = ((/* implicit */signed char) var_3);
                    var_23 ^= ((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_6]);
                }
            }
        } 
    } 
}
