/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202750
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
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 1] [i_0]))));
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_3]))) : (3970217078243184676ULL)))));
                        var_22 = max((((((/* implicit */_Bool) max((14476526995466366946ULL), (14476526995466366939ULL)))) ? (var_13) : (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_2] [i_0])) >= (((/* implicit */int) arr_8 [i_0] [i_2] [i_1] [i_0]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            arr_13 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [7LL] [i_2]);
                            arr_14 [i_0] [i_0] [(unsigned char)6] [i_0] [(unsigned char)13] [i_0 + 1] [5LL] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_1] [i_4 + 2])) ? (14476526995466366946ULL) : (14476526995466366932ULL)))))) ? (((/* implicit */int) max((max((var_3), (var_7))), (var_1)))) : (((((/* implicit */_Bool) 4095)) ? (((-69877392) * (((/* implicit */int) arr_7 [i_0] [i_2] [i_0])))) : (((/* implicit */int) ((unsigned short) arr_9 [i_3] [i_2] [i_1])))))));
                            arr_15 [i_0 - 3] [i_0 - 3] [i_0] [3ULL] = ((/* implicit */long long int) var_13);
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_3 + 2] [i_1] [i_0])))) ? (max((((/* implicit */int) (unsigned char)85)), (var_14))) : (((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_0] [i_3 - 2] [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0]))))) ? ((+(arr_10 [9] [9] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))))))))));
                            arr_16 [i_0] [i_0] [4ULL] [i_3 + 2] [i_3 + 2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4] [i_3 - 1]))));
                        }
                        /* vectorizable */
                        for (short i_5 = 4; i_5 < 13; i_5 += 4) 
                        {
                            arr_21 [i_1] [i_0] [i_2] [i_3] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [13ULL] [i_2] [i_3] [i_5 - 3] [i_1] [13ULL])) || (((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_5] [i_5 - 3] [2LL] [i_0 - 3]))));
                            var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_3] [10] [i_2] [i_1] [i_1] [(short)4]))))) != (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_5 + 1])) ? (var_13) : (arr_10 [(short)11] [(short)11] [i_3 - 2]))));
                        }
                        var_25 += ((/* implicit */long long int) arr_19 [i_0] [i_1] [i_3 - 1] [8]);
                        arr_22 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 66846720)) && (((/* implicit */_Bool) arr_17 [i_0] [i_0 + 2] [i_1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))));
                    }
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (signed char)48))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-48)), (-69877405)))) : (((max((11966894558857452490ULL), (((/* implicit */unsigned long long int) (unsigned char)25)))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-69)))))))));
                        var_27 = ((/* implicit */unsigned char) (-(((unsigned long long int) arr_24 [i_0] [i_1] [i_1] [i_6]))));
                        arr_26 [(_Bool)1] [i_0] [1ULL] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 8589934591ULL)) ? (((/* implicit */int) (unsigned char)166)) : (var_13)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (signed char)60)) : (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(_Bool)1])) * (((/* implicit */int) arr_7 [i_0] [i_2] [i_0])))))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? ((-(var_2))) : (((var_3) ? (var_16) : (((/* implicit */int) (signed char)45)))))));
}
