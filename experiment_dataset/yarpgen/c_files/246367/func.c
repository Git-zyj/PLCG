/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246367
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
    var_18 *= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_19 += ((/* implicit */signed char) ((max((1177238969248315914LL), (((/* implicit */long long int) arr_2 [i_0 - 1] [i_2])))) < (((/* implicit */long long int) ((arr_9 [i_3] [15LL] [i_2] [i_1] [15LL] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))))));
                        arr_11 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((45053105U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))));
                    }
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2] [i_0] [i_2] [i_0]))));
                        arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(min((((var_14) + (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_6)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4249914191U)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_10 [i_2] [i_1 - 1] [i_2] [i_4])))) ^ (((/* implicit */int) arr_14 [i_5]))));
                            var_21 *= ((/* implicit */long long int) ((-641677431) + (((/* implicit */int) arr_4 [i_4] [i_2] [i_2]))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            var_22 += ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4249914190U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)73))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_22 [i_6] [i_6 + 4] [7LL] [7LL] [i_2] [7LL] [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_4] [i_6])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_6 [i_2] [i_1] [i_2]))))), (var_12)));
                            arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_11);
                            arr_25 [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) arr_8 [i_4] [i_0] [i_2] [i_4]);
                        }
                    }
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_1 + 2] [i_2])))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_24 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_7)), (arr_29 [i_1] [i_7] [i_1] [i_7] [i_7] [i_7] [i_7 + 3])))), (min(((~(var_14))), (((/* implicit */unsigned int) ((unsigned char) (unsigned short)60297)))))));
                                var_25 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_29 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] [i_1 - 1] [i_8])))) < (((((/* implicit */_Bool) 3967014717U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_8]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_31 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)23606))) < (3374031628U))))), ((~(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0])))))))));
        var_26 = ((/* implicit */short) ((min((max((var_9), (((/* implicit */unsigned int) (short)26839)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)40548)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))) >= (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0] [i_0])))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
    {
        var_27 = arr_17 [i_9];
        arr_35 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (45053105U)))), (min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_9])))))))));
        var_28 |= ((/* implicit */short) ((((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) 7205574447111480455LL))))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_10)))) >= (var_0))))));
    }
    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        var_29 = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) ((int) var_14))), (((arr_38 [i_10]) * (arr_38 [i_10]))))), (min((max((0U), (arr_37 [(unsigned short)15] [i_10]))), (min((arr_38 [i_10]), (arr_38 [i_10])))))));
        arr_40 [i_10] [i_10] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_37 [i_10] [i_10])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))) - (118313202183984893LL))) : (((/* implicit */long long int) var_14))))));
    }
}
