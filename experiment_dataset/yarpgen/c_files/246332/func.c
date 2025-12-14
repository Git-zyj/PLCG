/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246332
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) var_11))) - (18446744073709551615ULL)));
    var_19 = ((/* implicit */short) 9223372036854775807LL);
    var_20 *= ((/* implicit */unsigned short) (+(((((unsigned int) var_10)) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4294966784LL))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), (arr_2 [i_0]))))) : ((-(var_5)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) var_16);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) 9223372036854775807LL);
                            arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) 2147483647));
                        }
                        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((1108307720798208ULL) - (((/* implicit */unsigned long long int) var_17))))))))));
                            var_24 = ((/* implicit */long long int) arr_11 [i_5] [i_5] [i_3] [i_1] [i_0] [i_1] [i_0]);
                            arr_18 [i_5] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (((~(arr_7 [i_0]))) - (var_12)));
                            var_25 *= ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1]);
                            var_26 |= ((/* implicit */signed char) 9223372036854775807LL);
                        }
                        arr_19 [i_0] [i_1] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */long long int) var_11);
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [i_2 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_2 - 1]))));
                    }
                    for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((9223372036854775807LL) / (9223372036854775807LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10643)))));
                        var_29 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 + 1] [i_1] [i_6] [i_6 - 1] [i_1] [i_1] [i_6]))) / (((unsigned long long int) (unsigned short)41285))));
                        var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((-9223372036854775807LL - 1LL)))) - (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_2 - 1] [i_2 + 1] [i_1] [i_0])))));
                    }
                    var_31 = ((/* implicit */long long int) var_4);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) arr_22 [i_2 + 1])))), (min((((/* implicit */int) arr_24 [i_0] [i_0])), ((+(((/* implicit */int) arr_17 [i_2] [i_7]))))))));
                                var_33 = ((/* implicit */signed char) var_0);
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) - (var_0))) / (min((var_0), (((/* implicit */long long int) var_16))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_16))) / ((-9223372036854775807LL - 1LL)))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32256)) - (((/* implicit */int) (unsigned short)41285)))))))) : (min((((/* implicit */unsigned long long int) arr_26 [i_0] [i_7] [i_2 - 1] [i_2] [i_8] [i_2 - 1] [i_2])), (((unsigned long long int) var_10))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) (unsigned char)255))) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_2))))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
}
