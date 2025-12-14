/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223422
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
    var_11 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                        {
                            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 908227599U)) || (((/* implicit */_Bool) (+(-7473724595143468705LL))))));
                            var_13 = ((/* implicit */unsigned short) (((-(arr_9 [i_1] [i_0] [16] [i_2 - 3]))) != (((/* implicit */unsigned int) (-((+(2147483647))))))));
                            arr_13 [i_1] [i_1] [i_2] [i_1] [11U] = arr_5 [i_0] [i_1] [i_4];
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                        {
                            var_14 ^= ((/* implicit */int) ((arr_7 [i_0] [i_2 - 3] [i_0]) + (arr_14 [i_0] [i_0 + 1] [i_2] [i_3 - 1] [(unsigned short)0] [16LL] [i_5])));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_0 - 2])) / (((/* implicit */int) arr_11 [i_1] [i_0 + 2]))));
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            var_16 -= arr_0 [i_0 + 2];
                            var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 2])) ? (((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1] [i_2] [i_3] [i_6])) ? (arr_8 [i_0] [i_6]) : (((/* implicit */long long int) arr_9 [i_6] [i_1] [i_6] [i_3])))) : (arr_5 [i_0] [i_0] [i_3 - 1])))) ? ((-(arr_9 [i_0] [i_3 - 1] [20LL] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_8 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_3] [(unsigned short)18])) ? (((/* implicit */long long int) var_8)) : (2219273712659523890LL))))))))));
                            arr_20 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_6] &= ((/* implicit */long long int) (((-(((/* implicit */int) arr_10 [i_0] [i_6] [i_3 - 1] [i_2] [i_2 - 1] [i_0])))) / (((/* implicit */int) arr_10 [i_0] [i_6] [i_3 - 1] [i_3] [i_2 - 2] [i_0]))));
                            var_18 = arr_8 [i_6] [i_6];
                            arr_21 [i_0] [i_1] [i_1] [i_3] [(unsigned short)20] = arr_4 [i_0];
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_9 [i_1] [i_0 + 1] [i_2 - 1] [i_2 - 2]);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_17 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_7] [i_1])) : (((/* implicit */int) ((arr_8 [i_1] [i_1]) != (((/* implicit */long long int) arr_2 [i_3])))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_0 [i_0 - 2]))));
                            arr_27 [(unsigned short)1] [i_1] [i_1] [i_3] [i_7] = ((/* implicit */unsigned short) ((((-34197760270188541LL) ^ (((/* implicit */long long int) arr_19 [i_0] [0LL] [i_1] [i_3] [i_7] [i_0] [i_3])))) <= (arr_14 [i_1] [8LL] [i_2] [i_2] [i_2] [i_0 - 1] [i_1])));
                            arr_28 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_3 + 1] [i_3])) ? (arr_18 [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0] [i_3 - 1] [i_7]) : (arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2] [i_0] [i_3 - 1] [i_3])));
                        }
                        var_21 += ((/* implicit */long long int) (~((~(((/* implicit */int) arr_11 [i_0] [i_0]))))));
                        arr_29 [i_1] [i_1] [i_2] [i_3] = (((!(((/* implicit */_Bool) arr_24 [i_0] [i_0 + 1] [i_0] [i_1] [i_2 - 3] [18] [i_2])))) ? (((((-7592983397808251852LL) + (9223372036854775807LL))) << (((18LL) - (16LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_1] [i_2 - 2] [i_2 + 1] [i_2]))))));
                    }
                    arr_30 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_22 [i_0 - 1] [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_2 - 2] [i_2]) <= (arr_22 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2 + 1] [i_2]))))));
                    var_22 = arr_19 [i_0] [i_0] [i_1] [i_1] [13] [i_0] [0LL];
                    arr_31 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))) - (((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_2 + 1] [i_1] [i_0 - 1] [i_2] [i_1] [i_0])) ? (arr_18 [i_2 - 2] [i_2] [i_2] [i_0 - 1] [i_2] [(unsigned short)0] [i_1]) : (arr_1 [i_0 - 2] [i_2 - 1])))));
                }
            } 
        } 
    } 
}
