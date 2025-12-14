/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35602
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
    var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 3] [i_3 - 1] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) arr_4 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))) / (((arr_6 [(unsigned char)15] [3LL] [i_3 - 1]) >> ((((-(arr_7 [i_0] [i_0] [i_2] [i_3]))) + (36064150)))))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) arr_4 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))) / (((arr_6 [(unsigned char)15] [3LL] [i_3 - 1]) >> ((((((-(arr_7 [i_0] [i_0] [i_2] [i_3]))) + (36064150))) - (1822814436))))))));
                            arr_9 [i_0] [i_1] [i_0] = (+(((((/* implicit */_Bool) arr_7 [i_2 + 4] [i_0] [i_3 + 2] [i_3 + 2])) ? (arr_7 [i_2 + 2] [i_0] [i_3 + 3] [i_2 + 2]) : (arr_7 [i_2 + 4] [i_0] [i_3 + 2] [i_3]))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_4 [i_2] [i_2 + 3] [i_2 + 2] [i_2 + 3]))))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_2 - 1] [i_4 - 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) % (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0])))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_5] [(signed char)14] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_7 - 1] [i_5 - 2])) + (((/* implicit */int) arr_2 [i_7 - 1] [i_5 + 2])))) + (((((/* implicit */int) arr_2 [i_7 - 1] [i_5 - 1])) + (((/* implicit */int) arr_2 [i_7 - 1] [i_5 + 1]))))));
                                arr_23 [i_0] [i_1] [i_5 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) var_6))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [9U] [i_1] [i_6] [(unsigned char)11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_1 [i_5 - 2])))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_0] [i_0] [i_0]))) - (arr_1 [i_6]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_5 + 1] [i_0 - 2])))))));
                                var_14 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_0 + 1] [i_7 - 1] [i_0 + 1]))) * (((arr_19 [i_0 - 1] [i_5 + 2] [i_6] [i_7]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7 - 1] [i_0] [i_0] [i_1]))))))), (((/* implicit */unsigned long long int) (+(((var_0) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_6] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                                arr_24 [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_18 [i_1] [i_0] [i_0] [i_7])) : (((/* implicit */int) var_1)))) <= (((((/* implicit */_Bool) var_5)) ? (arr_7 [i_1] [i_0] [i_6] [i_7]) : (((/* implicit */int) var_9)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [19U] [i_7 - 1]))))) / (((/* implicit */int) arr_3 [3LL] [3LL])))) : (((var_5) % (((/* implicit */int) arr_4 [i_0 - 2] [i_5] [i_6] [i_7 - 1]))))));
                                arr_25 [i_6] [i_7] &= ((/* implicit */unsigned char) arr_11 [i_0] [i_0 + 2] [i_5] [i_5 - 1] [i_5 - 2] [i_7 - 1]);
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */int) min((((((/* implicit */_Bool) ((((arr_0 [i_0] [i_0]) + (2147483647))) << (((((var_8) + (2899183625025798534LL))) - (18LL)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [8] [(unsigned short)18]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_0 - 2] [i_0] [i_5] [i_5])))))))) : (((/* implicit */int) min((((((/* implicit */_Bool) ((((((arr_0 [i_0] [i_0]) - (2147483647))) + (2147483647))) << (((((var_8) + (2899183625025798534LL))) - (18LL)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [8] [(unsigned short)18]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_0 - 2] [i_0] [i_5] [i_5]))))))));
                }
                var_15 |= ((/* implicit */unsigned char) ((min((((((/* implicit */int) arr_20 [i_0 + 2] [i_1] [i_0] [i_0] [i_1] [i_0] [i_0 - 2])) * (((/* implicit */int) arr_20 [8ULL] [i_0] [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3])))), (((/* implicit */int) var_0)))) >> (((/* implicit */int) var_1))));
            }
        } 
    } 
}
