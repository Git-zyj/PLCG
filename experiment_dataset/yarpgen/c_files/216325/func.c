/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216325
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((unsigned int) arr_0 [i_1] [i_0])), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))));
                var_10 = ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((10352408418130512692ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))))))) == (var_2))));
                        arr_12 [i_3] [i_2 - 1] [i_1] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_3] [i_1] [i_0]), (arr_11 [i_0] [i_1] [i_2 + 2] [i_3] [0ULL])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 - 2] [i_0])) > (((/* implicit */int) var_1))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (arr_8 [i_0] [i_3] [(short)8] [i_2 + 1]))))));
                        var_12 = (((-(max((arr_11 [i_0] [i_1] [i_1] [i_2 + 1] [i_3]), (arr_0 [i_0] [i_2 + 3]))))) & (min((((/* implicit */unsigned long long int) ((signed char) (signed char)-67))), (((unsigned long long int) arr_7 [i_0] [14] [i_2] [i_3])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2 - 1] [i_2 + 2] [i_3])) ? (var_8) : (arr_11 [i_0] [i_2] [i_2 + 1] [i_2 - 1] [i_4]));
                            var_13 = ((/* implicit */short) ((signed char) var_2));
                            var_14 = ((/* implicit */signed char) var_3);
                            arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 - 1]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3198411976U)) >= (((((/* implicit */unsigned long long int) var_2)) & (min((arr_18 [i_0] [i_1] [i_2 - 1]), (arr_7 [i_3] [i_2 + 1] [i_1] [i_0])))))));
                            arr_19 [(unsigned char)8] [i_1] [i_2] [i_3] [i_5] [i_5] [i_5] = min((((unsigned long long int) arr_11 [i_0] [i_3] [i_3] [i_2 + 2] [i_1])), (((/* implicit */unsigned long long int) var_6)));
                            var_16 = ((/* implicit */unsigned long long int) var_2);
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) ((arr_4 [7ULL] [i_0] [i_2 + 3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (var_8)))))));
                            arr_24 [i_6] [i_6] [i_3] [i_2 - 2] [i_1] [i_6] [i_0] = arr_8 [i_3] [i_0] [i_0] [(signed char)4];
                        }
                    }
                    arr_25 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) || (((/* implicit */_Bool) var_6))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) arr_4 [i_7 - 1] [i_2 + 1] [i_1]);
                        var_19 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_7 + 1])))) ? (((/* implicit */int) arr_22 [i_0])) : (max((((/* implicit */int) (short)-21816)), (((((/* implicit */_Bool) 14972137509282187247ULL)) ? (((/* implicit */int) (short)21817)) : (((/* implicit */int) (signed char)31))))))));
                    }
                }
                for (unsigned int i_8 = 3; i_8 < 13; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) var_0);
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)80)) && (((/* implicit */_Bool) 14ULL))));
                                var_22 = ((/* implicit */signed char) min((((unsigned long long int) max((arr_10 [i_10] [i_9] [i_8] [i_1]), (((/* implicit */int) arr_2 [i_10] [i_9]))))), (((/* implicit */unsigned long long int) max((arr_2 [i_9] [3U]), (var_0))))));
                                var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [3ULL] [i_8 - 3] [i_8 - 3])) * (((/* implicit */int) arr_30 [i_1] [i_8 + 1] [i_8]))))), ((~(((((/* implicit */_Bool) arr_18 [i_10] [i_8] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))))));
                            }
                        } 
                    } 
                    var_24 = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))) ^ (max((var_7), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_1] [i_8 - 3] [i_8 + 2])))))));
                    var_25 ^= ((/* implicit */unsigned long long int) var_5);
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (~(((/* implicit */int) var_1)))))) & (((/* implicit */int) var_1))));
                }
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0])))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_7);
}
