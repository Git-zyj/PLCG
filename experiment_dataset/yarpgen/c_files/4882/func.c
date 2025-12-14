/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4882
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
    var_14 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (arr_7 [i_3] [i_3] [i_3 - 1] [i_2]) : (((/* implicit */long long int) arr_2 [i_3 + 1])))) <= (((/* implicit */long long int) arr_3 [i_2]))));
                            var_16 -= ((((long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] [i_3 + 1])) && (((/* implicit */_Bool) var_6))))) > (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1]), (arr_8 [i_3 + 1] [i_3 - 1] [4ULL] [i_3] [(signed char)4] [i_3]))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [8ULL])), ((unsigned short)27400)));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                            {
                                var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [9U] [i_0] [i_0]))));
                                var_18 -= ((/* implicit */signed char) max((max((min((var_3), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))) + (18ULL)))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_3 [i_3]);
                            }
                        }
                    } 
                } 
                arr_14 [8] = var_0;
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_2 [i_1])))) != (var_0))) ? (((long long int) 9223372036854775790LL)) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (-9223372036854775800LL)))));
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((min((((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-518))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)30)) / (644798441)))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                var_19 = ((/* implicit */long long int) arr_9 [i_1]);
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_12))));
    var_21 -= ((/* implicit */unsigned short) var_9);
}
