/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241112
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned short) var_4))) ? (1161116012997245330ULL) : (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_2])), (var_11)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] = (((!(((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1])))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_2] [i_2] [i_2] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_2] [i_3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_11 [(signed char)14] [i_0] [(unsigned short)8] [i_1] [i_2] [i_2]), (((/* implicit */int) var_8))))) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_9 [i_0] [i_0])))) : (arr_4 [i_0])))));
                        var_15 = ((/* implicit */unsigned char) (short)-6213);
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (arr_17 [i_3] [i_3] [i_3])))) ? (min((arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_2] [i_0]), (((/* implicit */int) arr_0 [i_1] [i_4 - 1])))) : (((/* implicit */int) arr_0 [(short)1] [i_4 + 1]))));
                            arr_18 [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_2] = ((/* implicit */short) arr_4 [(unsigned char)5]);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((max((0ULL), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_4 + 2] [i_4]))))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            var_18 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((arr_9 [i_3] [i_1]), (((/* implicit */unsigned short) arr_7 [i_3] [(unsigned char)3] [i_1]))))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) arr_0 [2ULL] [i_2]))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (arr_14 [i_1] [i_1] [(_Bool)1] [i_5] [i_3])));
                            var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_2] [i_2] [i_5])), (arr_5 [i_3])))) ? (((((/* implicit */_Bool) 16777216U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))) : (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) var_2);
                            var_22 = ((/* implicit */int) ((arr_3 [i_0]) ? (arr_15 [i_6 + 1] [(short)14] [i_3] [i_3] [(short)14] [i_0]) : (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_3])), (((arr_23 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0 - 1] [i_0]) / (var_10))))))));
                            var_23 = ((/* implicit */int) max((var_23), (max((((/* implicit */int) (!(((var_3) != (var_10)))))), (arr_4 [i_3])))));
                            arr_25 [i_0] [i_2] [i_1] [i_2] [10] [i_6 - 1] = ((/* implicit */unsigned long long int) ((_Bool) (+(2ULL))));
                            arr_26 [i_0] [4] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_2] [i_6 - 2]) / (((/* implicit */int) var_1))))));
                        }
                        for (int i_7 = 2; i_7 < 17; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */short) arr_3 [i_0 + 1])), (arr_0 [i_7 + 1] [i_0 + 2]))))));
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [12ULL]))))) ? (arr_4 [i_2]) : (var_9)))), (((((/* implicit */_Bool) var_4)) ? ((+(arr_5 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_5))))))));
                        }
                        arr_30 [i_0] [i_2] = max(((+(((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2])))), (((/* implicit */int) min((arr_9 [i_0 - 1] [i_0 - 1]), (arr_9 [i_1] [i_3])))));
                    }
                    var_26 = ((/* implicit */int) var_14);
                }
            } 
        } 
    } 
    var_27 &= ((/* implicit */short) max((min((((/* implicit */int) var_6)), (((((/* implicit */int) var_13)) & (var_4))))), (((/* implicit */int) ((short) var_11)))));
    var_28 += ((/* implicit */signed char) min((((/* implicit */int) var_13)), (min((((/* implicit */int) ((short) var_1))), (var_4)))));
}
