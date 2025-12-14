/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198884
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned short) (short)30706);
                    arr_9 [(signed char)5] [(signed char)5] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2]))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_6 [i_1] [(unsigned char)6]))));
                    arr_10 [i_2] [i_1] [i_2] [i_1 - 1] = ((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_0 [(unsigned char)11] [i_1 + 2]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3099132772102330335ULL)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */short) (unsigned char)112);
                            arr_16 [i_0] [(short)8] [i_2] [(unsigned char)10] [i_4] = ((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_0]);
                            arr_17 [i_2] [2LL] [i_2] [(_Bool)1] [i_0] = ((/* implicit */long long int) arr_1 [i_1]);
                            var_18 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_7)) : (var_11))), (((((/* implicit */_Bool) 15347611301607221280ULL)) ? (arr_7 [i_4 - 1] [i_4] [i_4]) : (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((short) 9223372036854775807LL))) : ((((_Bool)1) ? (((/* implicit */int) arr_8 [10LL] [i_3 + 2] [i_0])) : (arr_2 [i_1])))))));
                        }
                        arr_18 [i_2] [i_1 - 1] [i_1] [i_3] [(signed char)11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -16)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [9LL]))) - (-1808331741313802219LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_1 + 3] [i_1 + 2])))) : (((/* implicit */int) var_10))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        arr_22 [(short)7] [(short)7] = ((/* implicit */int) ((min(((+(((/* implicit */int) (short)-30707)))), (((((/* implicit */_Bool) arr_19 [i_0] [i_5 - 2] [(unsigned short)2])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_13)))))) <= (((/* implicit */int) (unsigned char)120))));
                        arr_23 [(unsigned char)3] [i_1] [i_1 + 3] [i_1] [i_1] [i_1 + 3] = ((/* implicit */signed char) ((((((/* implicit */int) var_5)) != (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1])) ? (var_11) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (short)32767)) : ((-(((/* implicit */int) var_5)))))) : ((~(arr_6 [12LL] [11LL])))));
                    }
                }
                arr_24 [i_0] [i_1 + 1] = ((/* implicit */unsigned int) ((arr_11 [6ULL] [i_1] [i_0] [(unsigned short)5]) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_0] [8LL] [i_0] [i_0] [i_0]), (var_12))))) : (arr_13 [10ULL])));
            }
        } 
    } 
    var_19 &= var_10;
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-9223372036854775785LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6459)))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (var_1)))) ? (((/* implicit */int) var_12)) : (var_11))))))));
}
