/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27089
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-1))));
                        arr_9 [10LL] [10LL] [11LL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned short)65535))))) + (((/* implicit */int) arr_1 [i_1 + 1]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_2] [i_2] [i_4])) != (((/* implicit */int) var_11)))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_20 *= ((/* implicit */unsigned char) (-(var_10)));
                            var_21 = ((/* implicit */unsigned int) (+(var_4)));
                        }
                    }
                    for (int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!((((+(((/* implicit */int) arr_1 [i_0])))) < (max((var_8), (((/* implicit */int) (unsigned char)132)))))))))));
                        arr_18 [1] [i_1 - 2] [i_2] [i_6] [i_6] [i_2] = ((/* implicit */unsigned short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8029))) - (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)204)) < (((/* implicit */int) arr_2 [i_2]))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) - ((-(18446744073709551615ULL)))))));
                        arr_19 [(unsigned char)2] [i_1 - 2] [i_2] [i_6] [i_1] |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_16 [i_6])), (arr_6 [i_6] [i_6] [i_6] [i_6])))) * (max((((/* implicit */unsigned long long int) (unsigned char)236)), (18446744073709551602ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) var_2)), (var_16))) < (((((/* implicit */long long int) ((/* implicit */int) (signed char)78))) - (-1708177262884983924LL)))))))));
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) + (((((/* implicit */int) var_11)) + (var_8))))))));
                    }
                    arr_20 [(short)8] [(short)8] [i_2] &= ((/* implicit */unsigned int) max(((((-(var_4))) - (((/* implicit */long long int) (-(var_14)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) (short)-10932))))))))));
                    var_24 *= ((/* implicit */unsigned short) (+((~(((var_5) - (((/* implicit */int) arr_2 [9LL]))))))));
                }
                var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)243)) << (((((/* implicit */int) (signed char)-62)) + (84))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))) - ((-((+(arr_17 [i_1 - 1] [i_1] [i_1] [i_0])))))));
            }
        } 
    } 
    var_26 = var_10;
    var_27 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1))))) | (var_6))) != (var_7)));
}
