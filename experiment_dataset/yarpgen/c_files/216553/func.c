/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216553
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
    var_19 = ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned long long int) 127U))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), (((short) var_4)))))) : (var_2));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65176))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [10U] [i_1]))) : (arr_0 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)14]))) : (min((16383U), (((/* implicit */unsigned int) var_0))))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) | (-1LL)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)25266))))) ? (min((((/* implicit */long long int) ((1140244604U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65156)))))), (arr_1 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0]);
            }
        } 
    } 
    var_22 = (((!(((/* implicit */_Bool) min((1140244599U), (var_9)))))) ? (var_17) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18068)) % (((/* implicit */int) var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_2 + 1] [i_2 - 2]) | (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2 - 2]))))) : (arr_1 [i_2])));
                        var_24 = var_17;
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((52959514793856272LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_2] [12LL] [i_2])))))))), (arr_16 [i_5 + 4] [i_5 + 2] [i_5] [i_5 - 1] [i_5]))))));
                        arr_17 [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775806LL)) ? ((+(max((((/* implicit */unsigned int) arr_9 [i_2] [i_3] [i_4])), (arr_0 [i_2]))))) : (((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_3] [6LL] [i_3])) == (4866352761060889049ULL))))) : (arr_10 [i_4] [(unsigned short)6])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) arr_0 [i_2]);
                            arr_22 [i_2] [i_2] [i_2] [(unsigned char)1] [i_6] [i_7] = ((/* implicit */unsigned short) min((min((arr_5 [i_4 - 4] [i_4 - 4] [i_4 - 3]), (arr_5 [i_4 + 2] [i_4 + 2] [i_4 - 4]))), (((/* implicit */long long int) arr_15 [i_4 - 2] [i_4 - 1] [i_4 - 1]))));
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28227))) >= (arr_5 [i_2 + 1] [i_2 - 2] [i_4 - 3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_4 - 4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 1] [i_4 - 2])))))));
                        }
                        for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_25 [i_2] [(short)9] [i_2] [i_3] [i_4 + 1] [i_6] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2])) | (((/* implicit */int) var_1))));
                            var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */int) max((arr_18 [i_2 + 1] [i_4] [i_2 - 1] [i_2] [i_2 - 2] [i_2 + 1]), (arr_18 [i_2 - 1] [i_3] [i_4 - 3] [i_6] [i_8] [i_8])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) != (var_8))))));
                        }
                        arr_26 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) (unsigned short)28229))) == (arr_24 [i_2] [i_2 - 2] [i_2])));
                    }
                    var_29 &= ((/* implicit */unsigned long long int) arr_12 [i_2]);
                    arr_27 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((min((((((/* implicit */int) var_0)) * (((/* implicit */int) arr_20 [7ULL] [i_3] [i_2] [i_3] [i_4])))), (((((/* implicit */int) arr_9 [i_4] [8LL] [8LL])) - (((/* implicit */int) var_7)))))), (((((/* implicit */int) ((unsigned char) var_6))) - (((/* implicit */int) var_11))))));
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_3] [i_3] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_12 [i_2 + 1])) : (((/* implicit */int) var_1))))), ((-(((((/* implicit */_Bool) arr_5 [i_4 - 4] [i_3] [i_2])) ? (var_3) : (((/* implicit */unsigned long long int) arr_19 [i_2])))))))))));
                }
            } 
        } 
    } 
    var_31 = var_17;
}
