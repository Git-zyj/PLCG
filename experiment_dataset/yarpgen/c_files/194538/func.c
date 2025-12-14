/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194538
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
    var_15 = ((/* implicit */_Bool) max((var_5), (((unsigned long long int) ((((/* implicit */unsigned long long int) var_4)) == (var_8))))));
    var_16 = ((/* implicit */unsigned char) (-2147483647 - 1));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_8 [i_0] = ((18446744073709551603ULL) >> (((arr_7 [i_0 + 1] [i_0] [i_1]) - (3151417419U))));
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_7))));
        }
        arr_9 [i_0] [10] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) != (((/* implicit */int) var_9)))))))));
        var_18 = ((/* implicit */unsigned char) (-2147483647 - 1));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(arr_12 [i_2])));
        var_19 = ((/* implicit */signed char) ((min((var_7), (((/* implicit */unsigned long long int) (!(var_14)))))) & (arr_13 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_23 [(signed char)13] [6ULL] [(signed char)13] [(signed char)13] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_13 [i_2]), (((/* implicit */unsigned long long int) ((arr_17 [i_2] [i_2] [i_2] [7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))))))))) ? (((((/* implicit */_Bool) (signed char)69)) ? (18014394214514688LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (unsigned char)221)))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [12])))));
                                var_20 &= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4])))))) != (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) <= (var_5))) ? (max((arr_16 [i_2]), (((/* implicit */long long int) (signed char)-67)))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)27050), (((/* implicit */short) arr_15 [i_2] [i_3] [(signed char)7])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_29 [i_2] [i_2] [i_3] [i_4] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((signed char) arr_16 [i_4 - 1]));
                            arr_30 [i_2] [i_3] [i_4 - 1] [i_7] [i_8] [11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (arr_24 [i_2] [(signed char)11] [i_4] [i_7] [10LL] [i_3 - 1]) : (((/* implicit */long long int) arr_25 [i_2] [1] [i_2] [i_7] [i_8])))))));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_16 [i_2]) != (arr_24 [7] [i_3 - 1] [i_2] [i_2] [i_4 - 1] [i_2]))))) : (((((/* implicit */unsigned long long int) var_10)) ^ (var_5)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_10 = 2; i_10 < 12; i_10 += 1) 
                        {
                            arr_37 [i_2] &= ((((/* implicit */int) arr_11 [i_9 + 1])) >= (((/* implicit */int) arr_11 [i_9 + 1])));
                            var_22 &= ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                            arr_38 [i_10] [i_10] [(_Bool)1] [i_9] [i_10] [10] = ((/* implicit */int) arr_35 [i_3] [i_4] [i_9 - 1] [i_10 - 2] [i_10] [i_10]);
                        }
                        for (long long int i_11 = 1; i_11 < 12; i_11 += 1) 
                        {
                            arr_42 [i_2] [i_3] [i_2] [i_2] |= ((/* implicit */unsigned long long int) (+(arr_33 [i_2] [i_11] [i_4] [2ULL] [i_9 + 2] [(signed char)6] [4LL])));
                            var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(signed char)1] [i_3] [i_3] [i_3 + 3] [(_Bool)1]))) : (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                            arr_43 [i_2] [i_3] [i_2] [i_3] [i_3] [i_11] |= ((/* implicit */int) 7200594402999387148ULL);
                        }
                        for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            arr_48 [4LL] [i_9] [i_9] [10] [i_3] [i_2] = var_3;
                            arr_49 [i_2] [(_Bool)1] [i_2] [i_9] [i_12] |= ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_26 [i_4] [i_4] [i_4 - 1]));
                        }
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_36 [i_3 + 2] [i_3] [i_3] [i_3]))));
                        var_25 |= ((/* implicit */unsigned long long int) (+(-1279640004)));
                    }
                }
            } 
        } 
    }
}
