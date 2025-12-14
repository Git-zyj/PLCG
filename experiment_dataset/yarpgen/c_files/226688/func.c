/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226688
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned short) (signed char)-26);
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((arr_5 [i_0] [7ULL] [10U]) <= (((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) (unsigned short)55299)) ? (((/* implicit */int) (unsigned short)55272)) : (((/* implicit */int) (unsigned short)10237)))) : (((/* implicit */int) (unsigned short)10244))))));
                        var_15 = ((/* implicit */long long int) max((var_15), (arr_2 [i_3] [16ULL] [i_3])));
                        arr_10 [i_2] [i_0] [i_2] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)55272))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_3] [(unsigned short)5]))))) ? (arr_4 [i_2] [i_3 + 1] [15] [i_3]) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55309)) && (((/* implicit */_Bool) (unsigned short)55299))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_15 [i_0] [i_4] [(_Bool)1] [i_2] [i_4] [i_5])) ? (((/* implicit */int) arr_6 [i_0] [(short)10])) : (((/* implicit */int) arr_9 [(signed char)8] [7] [8U] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (unsigned short)10219)) : (arr_14 [(short)15] [i_1]))))), (arr_5 [i_0] [i_2] [i_2])));
                                var_18 = min((((((((/* implicit */_Bool) var_3)) ? (arr_11 [(_Bool)1] [i_2] [i_4] [(_Bool)0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10236))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1] [(unsigned char)8])) + (((/* implicit */int) arr_8 [i_0] [(unsigned short)11] [i_4] [(_Bool)1]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [i_2] [i_4]), (((/* implicit */unsigned short) arr_8 [(unsigned short)3] [(unsigned char)2] [i_4] [(_Bool)1]))))) ? (((/* implicit */int) max(((unsigned short)10237), (((/* implicit */unsigned short) arr_3 [(unsigned char)10] [i_2] [i_4]))))) : (((/* implicit */int) min((arr_7 [i_0] [i_5]), ((unsigned short)10237))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (~(arr_13 [(unsigned char)13] [i_1] [i_1] [(unsigned short)9] [15ULL] [i_2] [7ULL]))))) + (((/* implicit */int) (unsigned short)55306)))))));
                }
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1] [(short)9])) ? (((/* implicit */int) var_6)) : (arr_1 [i_6])));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_20 [i_7] [i_6] [7ULL] [3ULL] [i_1] [i_0] = ((/* implicit */long long int) var_11);
                        arr_21 [i_0] [8ULL] [(signed char)15] [i_7] = ((/* implicit */long long int) (unsigned short)10254);
                    }
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    var_21 = var_3;
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_3))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 14; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 15; i_10 += 2) 
                        {
                            {
                                arr_31 [6LL] [i_8] [(_Bool)1] [(short)5] [i_9] [15LL] = ((/* implicit */unsigned char) ((arr_19 [(unsigned char)11] [i_0] [i_9] [6U] [i_10 + 1]) != (((((/* implicit */long long int) var_0)) ^ (var_12)))));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_22 [13LL] [12LL] [i_1]))));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_29 [(unsigned short)9] [i_1] [(unsigned short)16] [(_Bool)1] [i_1]), (((/* implicit */long long int) var_7))))), (var_8))))));
                arr_32 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) max(((unsigned short)10238), ((unsigned short)55298))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [(short)13] [(signed char)7]))));
                    arr_35 [7] [i_11] [(short)4] [i_11] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [(unsigned char)6] [i_0] [i_11 - 1] [i_11 - 1])) || (((/* implicit */_Bool) arr_19 [(short)14] [i_0] [0] [i_11 - 1] [i_11 - 1])))))) != (max((arr_19 [i_0] [(_Bool)1] [i_0] [i_11 - 1] [i_11 - 1]), (arr_19 [(unsigned char)10] [i_0] [i_1] [i_11 - 1] [i_11 - 1])))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        arr_38 [8ULL] [4U] [i_0] [i_11] [6] = ((/* implicit */int) (unsigned short)55292);
                        arr_39 [i_11] [6] [i_11] [i_11] [(unsigned short)3] [8LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)55298)) ? (((/* implicit */long long int) arr_1 [(_Bool)1])) : (var_12))))))));
                    }
                }
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_8);
    var_27 = ((/* implicit */signed char) (unsigned short)10256);
}
