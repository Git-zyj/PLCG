/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22649
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] [i_1] = ((/* implicit */_Bool) max(((-(((((/* implicit */int) var_0)) / (424401096))))), ((-(((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1]))))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_0 + 1]))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_0])) ? (((((/* implicit */int) var_11)) & (((/* implicit */int) arr_12 [i_0] [i_0] [(short)17])))) : (((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_3] [i_0 + 1]))));
                        var_16 ^= ((/* implicit */signed char) var_10);
                    }
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) arr_20 [i_6] [i_6] [i_6 + 1] [i_6 - 2] [i_6 - 1]);
                            arr_22 [i_3] [i_0] [i_3] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_3] [i_1] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_3] [i_3] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_6] [i_5])))) : (((/* implicit */int) (unsigned short)5469))));
                            var_18 = ((/* implicit */signed char) arr_5 [i_0 + 1] [i_0 - 2] [i_0]);
                            arr_23 [i_3] = ((/* implicit */long long int) 424401103);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            arr_28 [i_1] [i_3 + 1] [i_5] [i_3] = ((/* implicit */signed char) -424401096);
                            var_19 *= ((/* implicit */unsigned char) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_11 [i_5])));
                        }
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_3 - 3])) : (((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_1] [i_3 - 1] [i_5])))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_25 [i_5]))));
                        var_22 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_3 + 1]))));
                        var_23 = ((/* implicit */unsigned short) (-(arr_1 [i_0 - 2])));
                    }
                    arr_29 [i_0] [i_1] [12ULL] |= ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_3 + 1] [15LL]);
                    var_24 = ((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2]);
                }
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((424401096), (((/* implicit */int) var_0)))))))));
                    var_26 = ((/* implicit */int) ((((((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), (var_14)))) ^ ((-(((/* implicit */int) arr_14 [i_1])))))) != (max((((arr_27 [12U] [i_8] [6ULL] [i_1] [i_0]) | (((/* implicit */int) arr_20 [(signed char)7] [i_0] [(signed char)7] [i_1] [i_8])))), (((/* implicit */int) arr_30 [i_0]))))));
                    var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_17 [i_0 - 1] [12LL] [12LL] [i_0]), (((/* implicit */short) var_0))))), (((((/* implicit */_Bool) arr_17 [i_0 - 2] [0] [0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_0 + 1] [(_Bool)1] [(_Bool)1] [i_0]))))));
                }
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 3; i_11 < 17; i_11 += 3) 
                        {
                            {
                                arr_40 [i_0] [i_0 + 1] [i_0] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (max((((/* implicit */unsigned long long int) -467881358)), (3489458428021849961ULL))) : (((/* implicit */unsigned long long int) (-(((unsigned int) 14957285645687701654ULL)))))));
                                arr_41 [i_0] [i_11] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0])) ? (((/* implicit */int) arr_32 [i_0])) : (((/* implicit */int) arr_30 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (arr_32 [i_0 - 2]))))) : (((((/* implicit */_Bool) arr_32 [i_0])) ? (3489458428021849961ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0]))))));
                                arr_42 [i_11] [(_Bool)1] [i_9] [i_11] [12] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-26082)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_38 [i_0 + 1] [i_1] [i_9] [i_9] [i_11] [i_0 + 1]) : (arr_2 [i_10] [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            }
                        } 
                    } 
                    arr_43 [i_0 + 1] [i_1] [i_9] [i_9] &= ((/* implicit */short) ((((_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) max((arr_34 [i_9] [10ULL] [0U] [i_9]), (arr_3 [i_9])))) > (((/* implicit */int) arr_25 [(unsigned char)6]))))) : (((/* implicit */int) var_3))));
                }
                var_28 ^= ((/* implicit */int) arr_35 [i_1] [i_0] [i_0]);
            }
        } 
    } 
    var_29 = max((((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (var_13)))) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) var_5)) : (var_1))));
}
