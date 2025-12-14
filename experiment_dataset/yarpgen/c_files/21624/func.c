/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21624
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_10 += ((/* implicit */unsigned int) ((long long int) -5808779994459006746LL));
        var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */long long int) var_6)) : (127LL)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))) : (((1679156214) / (((/* implicit */int) arr_2 [i_0 + 1]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
            {
                var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-27546)), ((~(((/* implicit */int) arr_7 [i_1]))))));
                arr_8 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) var_7)), (var_9))) >= ((((_Bool)0) ? (0U) : (arr_6 [i_1] [(short)11]))))))) % (var_9)));
            }
            for (short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
            {
                var_13 = var_8;
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_14 [i_1] [(short)6] [i_1 + 2] [i_0 - 1]))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_1] [i_4] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) var_5);
                        arr_19 [i_1] [5LL] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((arr_9 [i_1 + 1] [i_4] [i_4] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        arr_20 [i_0] [i_1] [i_0] = ((((/* implicit */int) (short)-27546)) + (((/* implicit */int) (_Bool)1)));
                    }
                    for (long long int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
                    {
                        arr_24 [(short)3] [i_1] [3LL] [2U] [5LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_12 [2LL] [i_1 + 2] [i_3] [i_1] [i_3])) : (((/* implicit */int) (_Bool)1))))), (arr_17 [1U] [i_1] [i_3] [i_1] [i_6])))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27539)) ? (((/* implicit */int) (short)27542)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))) : (((long long int) 2568170687192078218LL))))));
                        var_15 = ((/* implicit */short) max((min((9223372036854775805LL), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27549))) : (arr_14 [i_1] [i_1] [(short)12] [12LL]))))), (((/* implicit */long long int) max((536870912U), (arr_1 [i_0 - 1]))))));
                    }
                }
                for (short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                {
                    var_16 += var_3;
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [8] [9LL] [6LL] [i_1]) >> (((arr_15 [i_3] [7LL] [i_1 - 1] [i_1 + 2] [i_0] [i_0 + 1]) - (1750897471U)))))) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_18 = ((/* implicit */long long int) arr_4 [9U]);
                }
            }
            arr_29 [i_0] [3U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4349672000161998436LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [(short)12] [(short)6] [i_1])))))))) ? (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [7U])) ? (((/* implicit */long long int) arr_25 [i_1] [i_1] [i_1])) : (max((((/* implicit */long long int) var_7)), (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_27 [i_0] [i_1] [i_1 + 1]), (arr_27 [3U] [i_1] [4U])))))));
        }
        /* vectorizable */
        for (long long int i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 9; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            arr_40 [i_8] [i_9] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) -1056158030635881834LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (var_0)))));
                            arr_41 [i_0] [12U] [6U] &= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) arr_36 [(_Bool)1] [i_10] [i_9 - 1] [i_8 + 1])) : (var_0)));
                        }
                        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((unsigned int) arr_32 [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) >= (var_0)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            var_20 *= (~(arr_10 [4LL] [i_9 + 3] [i_8] [4LL]));
                            arr_44 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 290031361)) ? (var_0) : (((/* implicit */long long int) arr_17 [i_0] [i_9] [i_9] [(signed char)2] [(short)11]))))) ? (((/* implicit */int) arr_7 [i_9])) : (((/* implicit */int) ((short) (_Bool)1)))));
                            var_21 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1546666117U)));
                            var_22 += 4294967295U;
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) (signed char)2)) == (((/* implicit */int) (_Bool)1)))))));
        }
        var_24 |= ((/* implicit */unsigned int) ((short) ((short) arr_16 [6] [6] [(signed char)11] [9U] [i_0 - 1])));
    }
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) != (var_4))))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) (short)-31844)) == (var_4)))))));
    var_26 = ((/* implicit */short) ((var_8) % (((/* implicit */long long int) ((unsigned int) var_4)))));
}
