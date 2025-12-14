/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20709
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
    var_17 &= ((/* implicit */short) min((((/* implicit */unsigned int) var_4)), (var_16)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) (((-(((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) var_2))))))) - (((/* implicit */long long int) var_16))));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((arr_5 [i_2 - 2] [i_0 - 1]), ((~(arr_5 [i_2 + 1] [i_0 + 1]))))))));
                        var_19 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_4 [i_1] [i_2 - 2] [i_3 - 1]))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            arr_14 [i_3] [i_3] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */long long int) var_4);
                            var_20 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((((var_10) != (var_10))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_12 [8] [i_1] [i_2] [16] [i_4])))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_5) : (((/* implicit */int) (_Bool)1))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((9223372036854775786LL) != (((/* implicit */long long int) 0U))))) / (arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) ? (((/* implicit */int) (_Bool)1)) : (((int) var_11))));
                            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) ? ((~(((/* implicit */int) var_1)))) : (arr_9 [i_0 - 1] [i_0] [i_0] [i_0] [i_3 + 1])));
                        }
                        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) 
                        {
                            arr_17 [i_2 + 1] [i_3] [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15)))));
                            arr_18 [i_3] [i_1] [i_2 - 2] [i_3] [i_5] = min((((/* implicit */unsigned int) 688569556)), (3096450538U));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_13 [i_0] [i_1] [(short)18] [i_3 + 1]))));
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_3 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [0LL] [i_3] [i_5])) ? (((/* implicit */unsigned int) var_5)) : (arr_15 [i_1] [(short)17] [(short)17] [i_3] [i_5])))) : (arr_2 [i_2 - 1]))) >> (((max((min((((/* implicit */long long int) var_2)), (var_9))), (((/* implicit */long long int) ((-4815275790038435703LL) >= (-61802768466702411LL)))))) - (38969LL)))));
                        }
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) arr_3 [i_0 + 1]);
                            var_26 -= ((/* implicit */unsigned short) -4815275790038435729LL);
                        }
                    }
                    var_27 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0]))) : (arr_1 [i_2 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) arr_6 [i_0] [(unsigned char)15] [i_2])))))), (max((arr_2 [i_1]), (((/* implicit */long long int) ((var_16) > (arr_3 [i_0])))))))))));
                }
            } 
        } 
    } 
}
