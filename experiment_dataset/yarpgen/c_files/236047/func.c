/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236047
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2])))))) > (-1LL)));
        var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((long long int) var_12)) - (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) > (((/* implicit */unsigned long long int) var_9))))))))), (min((((((/* implicit */_Bool) var_3)) ? (arr_1 [(short)7] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [4U] [(unsigned char)1] [(short)2] [(short)14] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7863813057040925497ULL)) ? (((/* implicit */int) (short)8840)) : (((/* implicit */int) (unsigned char)12))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) - (3079640317U)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        arr_14 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) ((signed char) arr_1 [i_3] [i_2 - 1])))))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_6)))) ? (arr_13 [i_0 + 2] [(short)14] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_2 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_3 [2U] [i_0 - 1])) : (((/* implicit */int) arr_3 [2U] [i_0 - 1])))) > (((/* implicit */int) var_4))));
                    }
                    for (int i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        var_15 = (!(((/* implicit */_Bool) (unsigned short)65535)));
                        var_16 = ((/* implicit */unsigned char) ((((arr_1 [i_2 - 1] [i_4 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1]))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [11LL] [i_4 + 2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_4 + 1] [i_4 - 1]))))))));
                        arr_18 [i_1 + 1] [3U] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_1 - 2] [i_4 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_4 + 2])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_4 - 1]))))) : (max((arr_1 [i_1 - 2] [i_0 + 2]), (arr_1 [i_1 + 1] [i_0 - 1])))));
                    }
                    var_17 ^= ((/* implicit */long long int) ((((var_10) ? (((/* implicit */int) arr_17 [(unsigned short)14] [i_0] [i_0 + 1] [(short)13] [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1] [i_2])))) + (((/* implicit */int) ((short) -6622578583999470794LL)))));
                }
            } 
        } 
    }
    for (short i_5 = 2; i_5 < 14; i_5 += 2) 
    {
        var_18 -= ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 2] [i_5 + 1])))), (((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) arr_6 [i_5 + 1])) : ((-(((/* implicit */int) arr_3 [11U] [i_5 + 3]))))))));
        arr_22 [i_5] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_4 [i_5 + 4])), (arr_0 [i_5 + 2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_5 + 4])))))));
        var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [i_5 - 1])) ? (((/* implicit */int) arr_2 [i_5 + 1])) : (((/* implicit */int) arr_2 [i_5 + 1]))))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (((((/* implicit */_Bool) (short)0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned short)6))))) - ((-(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12)))));
}
