/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191222
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2 - 3])) ? ((+(((/* implicit */int) ((((/* implicit */int) (short)6510)) > (((/* implicit */int) (short)32379))))))) : (arr_6 [i_0] [24U] [i_2] [3LL])));
                    }
                    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_4] = ((/* implicit */signed char) (+(((long long int) arr_11 [i_2 - 3] [i_4] [i_4 - 1]))));
                        var_16 = ((/* implicit */unsigned char) (((+(((/* implicit */int) max((((/* implicit */short) (unsigned char)65)), ((short)-32376)))))) * (((((/* implicit */_Bool) (+(arr_1 [i_0] [i_1])))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) var_11)))) : (((arr_2 [i_4]) / (arr_6 [i_0] [i_1] [i_2] [i_4 - 2])))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_5 [i_2])))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)38)) % (arr_10 [i_0] [i_2] [i_1] [i_0])))) - (var_9)))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_18 = ((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) min((var_8), (var_2))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_8) % (arr_14 [i_5] [i_1] [i_5] [i_0] [15LL] [i_1]))) >= (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_6] [4ULL] = ((/* implicit */long long int) arr_10 [i_0] [i_1] [16] [16]);
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)32386)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_10 [(unsigned char)18] [i_1] [(unsigned char)18] [i_5]) : (((/* implicit */int) var_11)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5] [i_6 + 3]))))))))));
                            arr_21 [8U] [i_5] [i_6] [16] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 - 3])) == (((/* implicit */int) var_10))))) & (((((/* implicit */int) (signed char)65)) * (((/* implicit */int) (unsigned char)32))))));
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_5] [(unsigned char)11] = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (var_8) : (arr_3 [i_2 - 1])))));
                        var_21 = ((/* implicit */long long int) ((short) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) var_5);
}
