/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45997
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    arr_7 [i_0] [i_2] [i_1] [i_2 - 3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) arr_5 [i_2] [0U] [(short)7])) & (var_2))) != (var_2)))) <= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned short)5] [(unsigned short)5] [7])) && (var_5)))) != (((/* implicit */int) arr_5 [i_2] [i_1] [(_Bool)1])))))));
                    var_12 = ((/* implicit */int) ((_Bool) ((unsigned long long int) arr_2 [i_0] [i_1] [i_2])));
                    var_13 ^= ((/* implicit */unsigned long long int) var_9);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [0ULL] [i_1] [i_2] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 2]))) : (arr_2 [i_2 + 2] [0LL] [i_3])));
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) != (var_11))))) <= (((((/* implicit */_Bool) -1398266158)) ? (8516160068986041084ULL) : (((/* implicit */unsigned long long int) 1398266158))))));
                        var_14 = ((/* implicit */long long int) arr_3 [5ULL] [5ULL]);
                        arr_13 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [(unsigned short)11] [i_3] [i_3] [i_3] [i_3])))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1] [i_3])) : (var_11)))));
                        arr_14 [i_0] [i_0] [(signed char)8] [i_0] [i_2] = (!(((/* implicit */_Bool) arr_2 [(unsigned short)6] [i_1] [4LL])));
                    }
                }
                for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_8))));
                    var_16 = ((/* implicit */int) min((var_16), (((((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_4))))) <= (((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])))) ? (((/* implicit */int) ((_Bool) ((4880224U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))))))) : (((/* implicit */int) ((short) arr_8 [14LL] [i_4] [i_4 + 1] [i_0])))))));
                }
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0] [2] [i_1] [i_1])) : (((/* implicit */int) var_3)))) * ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))) ? (arr_1 [i_1]) : (((/* implicit */int) ((_Bool) var_11)))));
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) max((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_17 [i_0]))), (((/* implicit */unsigned long long int) ((_Bool) var_0))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            arr_27 [14U] [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (((var_7) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                            {
                                arr_31 [i_0] [5U] [i_0] [5U] [5U] [i_0] &= ((/* implicit */unsigned short) var_1);
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7]))))) ? (((arr_18 [9] [(unsigned char)5] [11U]) * (var_11))) : (arr_18 [i_0] [i_1] [i_5])));
                                var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [10U] [i_1] [0U] [i_1] [i_1])) && (((/* implicit */_Bool) var_11))))) << (((arr_2 [i_0] [i_1] [13LL]) - (11805740624849922163ULL)))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7] [i_5] [i_5] [i_1] [i_0])) ? (arr_29 [6U] [i_1] [i_5] [i_6] [i_0]) : (arr_29 [i_0] [i_1] [i_5] [i_6] [6]))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                            {
                                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                                var_22 = ((((/* implicit */_Bool) arr_22 [i_0] [i_6])) ? (((/* implicit */int) arr_22 [i_8] [i_0])) : (var_2));
                                arr_34 [i_0] [i_8] [i_5] [i_6] [i_8] [i_8] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8)))));
                                arr_35 [i_8] [i_8] [i_8] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_0] [7LL] [i_0] [i_0])) / (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0] [i_6] [i_0]))));
                                arr_36 [9ULL] [i_8] [9ULL] [(signed char)14] [i_8] [11ULL] = ((/* implicit */_Bool) ((short) arr_15 [i_8] [i_8] [i_8] [i_0]));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) & ((~(((/* implicit */int) var_1)))))), (((/* implicit */int) var_4))));
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_2) + (2147483647))) << (((var_8) - (11364989962984019353ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) var_5))))))))) : (var_11))))));
    var_25 = ((/* implicit */unsigned short) max((var_2), (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    var_26 = ((/* implicit */signed char) var_11);
}
