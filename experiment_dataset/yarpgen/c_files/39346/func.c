/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39346
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 ^= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) arr_3 [i_1] [i_1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [(signed char)1] [i_4] [(signed char)7] = ((/* implicit */long long int) var_10);
                            var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4])))))) || (((/* implicit */_Bool) arr_8 [i_0] [i_0]))));
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((((/* implicit */_Bool) 13440495071989532314ULL)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned char)198))))));
                            arr_14 [8ULL] [(unsigned char)2] [i_4] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((var_3) + (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_5 [i_0] [i_1] [(unsigned short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_1] [i_2] [i_3] [i_4]))))))));
                            arr_15 [i_4] [i_4] [(unsigned short)0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4] [i_1] [(unsigned char)0] [i_3] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_2] [i_3]))));
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_15 = ((/* implicit */_Bool) var_10);
                            arr_19 [i_0] [i_0] [6] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_3] [i_2]))));
                            arr_20 [i_0] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_16 ^= (~(arr_17 [i_6] [(signed char)0] [i_2] [i_1] [2] [i_0]));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned long long int) (~(arr_7 [i_0])));
                        }
                        var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_3] [(unsigned char)10]))));
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_5 [i_0] [i_8] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) >> (((((((/* implicit */_Bool) arr_5 [2LL] [i_7] [i_7])) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) - (1514963629U)))));
                            arr_29 [i_0] [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_7] [i_8])) : ((~(((/* implicit */int) arr_2 [i_8] [i_2] [i_1]))))));
                            arr_30 [i_7] [i_7] [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) var_5);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_2] [i_7] [i_8]) ? (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [(signed char)3] [i_7])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_7] [i_7]))))) && (((/* implicit */_Bool) ((arr_7 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 7; i_9 += 1) /* same iter space */
                        {
                            var_20 += ((/* implicit */signed char) ((((arr_23 [i_7] [i_1] [i_7] [i_9 + 3] [4] [i_7]) >> (((((/* implicit */int) arr_12 [i_9 + 1] [i_9 + 2] [i_9 - 2] [10ULL] [i_2])) - (35714))))) & (((/* implicit */unsigned int) (-(var_9))))));
                            arr_34 [i_0] [i_1] [i_1] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_1))))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_9] [i_1] [6ULL] [6ULL] [i_9])))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_9] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_9] [i_7] [i_9] [i_2] [i_0])) : (((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_1))))));
                            arr_35 [i_2] [i_7] [i_2] [i_1] [i_2] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] [(signed char)10]))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (arr_4 [i_0] [i_0])))) ? (((((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_7] [i_2] [i_1])) * (((/* implicit */int) var_4)))) : (((/* implicit */int) var_10)))))));
                            arr_36 [i_9] [i_1] [i_2] [i_7] [i_9] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_9 + 1] [i_9 + 1])))), (((/* implicit */int) var_6))));
                            var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_12 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_7]), (arr_12 [(short)8] [i_9 - 2] [i_9 - 2] [(short)8] [i_7])))) ? (((((/* implicit */int) arr_12 [i_9] [i_9 + 1] [(signed char)6] [i_9] [i_2])) - (((/* implicit */int) arr_12 [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_2])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_12 [i_9 + 3] [i_9 + 4] [i_9 + 4] [i_9 + 2] [i_7]))))));
                        }
                        for (unsigned int i_10 = 2; i_10 < 7; i_10 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) (((-(((/* implicit */int) var_2)))) - (((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
                            var_23 = ((/* implicit */_Bool) max((arr_23 [i_0] [i_1] [i_7] [i_7] [i_10 + 4] [i_10 + 3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (unsigned short)65535)))))));
                            arr_41 [i_1] [i_0] [i_1] [i_1] [i_10 + 4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), (((arr_26 [i_2] [i_1] [i_2] [i_2]) >> (((((/* implicit */int) var_6)) + (118)))))));
                        }
                        var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_16 [i_0] [(unsigned short)10] [i_2] [i_2] [i_1] [i_7] [i_2]) : (arr_17 [i_7] [i_2] [(unsigned short)1] [i_1] [i_0] [i_0])))));
                        arr_42 [i_2] [i_2] [i_2] [9ULL] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_37 [(unsigned char)0] [i_1] [i_2] [i_1] [i_7] [i_7] [i_7])) || (((/* implicit */_Bool) arr_37 [i_0] [i_0] [(signed char)8] [i_2] [i_7] [i_7] [4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483643)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (unsigned char)205))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) * (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [1U] [i_2] [i_7]))))))))));
                        arr_43 [i_7] [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((arr_16 [i_7] [i_7] [i_1] [i_7] [i_2] [i_7] [i_0]) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) - (34)))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */int) var_5)) != (((((/* implicit */int) var_2)) + (((/* implicit */int) max((((/* implicit */short) var_6)), (var_5))))))));
    var_26 += ((/* implicit */short) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533))))))) << (((((/* implicit */int) var_7)) - (104)))));
}
