/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49514
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [(signed char)5] [i_2 - 2] [(signed char)1] [(signed char)5] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [3U])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_5 [i_0] [i_1] [i_2 + 2])))));
                    arr_8 [1U] [i_1] [8U] = ((/* implicit */unsigned short) var_3);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        var_13 = ((/* implicit */unsigned int) var_5);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 - 2] [i_2 + 1] [i_2 - 2])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (4294967295U))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) (short)26900)) - (((/* implicit */int) (short)24179)))))));
                            arr_18 [i_0] [i_0] [(_Bool)0] [i_0] [i_0] = ((/* implicit */signed char) min((arr_16 [i_0] [(signed char)4] [i_0] [i_0] [i_0] [i_0]), (((((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [4] [i_2 + 2] [9] [i_2 + 2])) >> (((/* implicit */int) arr_10 [i_2] [i_2] [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 + 2]))))));
                        }
                        for (unsigned char i_6 = 4; i_6 < 8; i_6 += 4) 
                        {
                            var_16 = min((((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967265U)) < (var_5)))), (min((var_8), (((/* implicit */unsigned int) (signed char)-122)))));
                            arr_21 [i_0] [i_0] [i_0] [(signed char)10] [i_0] [1U] &= ((((/* implicit */_Bool) 3094248791U)) ? (57U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22511))));
                            arr_22 [10] [(signed char)4] [i_2 - 2] [i_2 - 2] = ((((/* implicit */_Bool) 3777322101265958762ULL)) ? (3777322101265958761ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 4; i_7 < 11; i_7 += 4) 
                        {
                            arr_27 [10U] [i_1] [i_2] [10U] [10U] = ((/* implicit */int) -1580490650367216179LL);
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2 + 1] [i_4] [(unsigned short)3] [i_7 - 4] [(short)10])) ? (arr_6 [i_7 - 1] [i_7 - 3]) : (arr_17 [i_2 + 1] [i_4] [(signed char)0] [i_7 + 1] [i_7])));
                            arr_28 [(signed char)9] [(short)11] [(signed char)9] [i_7 - 1] [(short)11] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22511))) : (var_6)));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((((1988804430U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24520))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)94))))) : (4263188315U)))));
                            var_19 = ((/* implicit */short) arr_25 [i_7 - 1] [1LL] [i_2 + 2] [i_7 - 1]);
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65530)) << (((var_0) - (12873346124482207878ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [5LL] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_8 - 2]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_16 [0] [(unsigned short)8] [i_2] [i_4] [(unsigned short)5] [i_8 + 2])) : (3207491742U)))));
                            var_21 = -1405594347677750450LL;
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2 - 2] [8LL] [i_8 - 1])) * (((/* implicit */int) arr_3 [i_2 - 1] [i_8] [i_8 - 1])))))));
                        }
                        var_23 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_1)), (var_5))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (var_8))))))), (min((max((14669421972443592854ULL), (((/* implicit */unsigned long long int) arr_0 [1LL])))), (var_0)))));
                    }
                    arr_31 [5U] = (signed char)110;
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_0);
}
