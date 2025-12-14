/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217466
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
    var_13 = ((/* implicit */unsigned int) (signed char)56);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = arr_5 [i_0] [i_0];
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            arr_13 [i_4] [i_0] [i_3 - 1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (((~(arr_7 [i_3 - 1] [i_3] [i_4 + 3] [i_4 + 3]))) | (arr_5 [i_3 + 1] [i_2])));
                            var_15 = ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_7 [i_1] [i_1] [i_3] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_0 [i_0]))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))));
                            var_16 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0]);
                            var_17 = ((/* implicit */unsigned short) min((arr_9 [(unsigned short)4] [i_4 - 1] [i_3 + 1] [i_3]), (arr_9 [i_2] [i_4 - 1] [i_3 + 1] [i_4 - 1])));
                        }
                        for (unsigned char i_5 = 4; i_5 < 10; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */signed char) max((arr_6 [i_5] [i_3] [i_1]), (max((max((arr_3 [i_0]), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_9))))))));
                            var_19 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_1] [i_1])) ? (arr_12 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (max((((/* implicit */long long int) arr_11 [i_1] [i_3] [i_2])), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) > (((/* implicit */long long int) (-(((((/* implicit */int) arr_1 [i_2] [i_5])) / (((/* implicit */int) var_4))))))));
                            var_20 = ((/* implicit */unsigned short) max((arr_6 [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) arr_15 [i_5 - 4] [i_3 + 1] [i_3 + 1]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) arr_9 [i_0] [i_0] [(unsigned char)6] [i_0])) + (var_0))));
                            arr_19 [i_0] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_4)) - (((/* implicit */int) var_1))))));
                            var_22 = ((/* implicit */unsigned short) ((unsigned int) (-(arr_15 [i_0] [i_0] [(unsigned char)1]))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_2] [i_3 + 1] [i_3] [i_3 - 1]);
                        }
                        var_23 = ((/* implicit */unsigned char) var_5);
                        var_24 = ((/* implicit */long long int) ((((((unsigned int) var_9)) > (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1025)) - (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))))) ? (((((var_5) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (((arr_6 [i_1] [i_2] [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_2])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_3])) || (((/* implicit */_Bool) var_11))))) : ((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_3 - 2]))))));
                            var_26 &= ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                            arr_24 [i_7] [i_0] [i_0] [(unsigned char)12] [i_0] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) var_8)))));
                            var_27 = ((/* implicit */unsigned char) ((arr_23 [i_3 - 1] [i_3] [i_3] [i_7] [i_7 + 1]) ? (((/* implicit */int) arr_23 [i_3 - 1] [i_7] [i_7] [i_3 - 1] [i_7 + 1])) : (((/* implicit */int) arr_23 [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 2] [i_7]))));
                            arr_25 [(_Bool)1] [i_7] [i_0] [i_2] [i_1] [i_7] [i_0] = ((/* implicit */unsigned char) (+(8070883436507595097LL)));
                        }
                        for (short i_8 = 2; i_8 < 11; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) arr_27 [i_3 - 1] [i_3 + 1] [i_3] [i_8 + 1] [i_3] [i_8 - 2] [i_8 - 1])) : (((/* implicit */int) var_9)))) - (((/* implicit */int) ((((/* implicit */_Bool) (-(var_6)))) || (((/* implicit */_Bool) var_4)))))));
                            var_29 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned char i_10 = 2; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] [11U] [i_10 + 1] = ((/* implicit */short) ((_Bool) ((_Bool) arr_22 [i_10 - 2] [i_10 + 2] [i_10 - 2] [i_10 - 1] [i_10] [i_10 + 2])));
                            /* LoopSeq 3 */
                            for (int i_11 = 1; i_11 < 11; i_11 += 4) 
                            {
                                var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)6042)) == (var_7)))))))));
                                var_31 = ((/* implicit */unsigned char) arr_7 [i_0] [i_9] [i_9] [i_10]);
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)82))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1] [i_9] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32767))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) | (523776U)))))));
                                var_33 = ((/* implicit */int) arr_14 [i_9] [i_9 - 1] [i_9] [i_10 + 2]);
                            }
                            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
                            {
                                var_34 = ((/* implicit */unsigned long long int) ((signed char) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (16376))), (((/* implicit */int) ((var_5) && (var_1)))))));
                                var_35 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) arr_0 [i_9 + 2])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)19946)) > (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_31 [i_12] [i_10] [i_10] [i_9] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [3U] [i_1] [3U] [3U]))) : (var_12)))))));
                            }
                            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                            {
                                var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((_Bool) arr_22 [i_10 - 2] [1LL] [i_10] [i_10 + 1] [i_10 - 2] [i_10 + 2])) ? (((((/* implicit */int) arr_22 [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 2])) & (((/* implicit */int) arr_22 [i_10 - 2] [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10 + 2])))) : (((/* implicit */int) min((arr_22 [i_10 + 2] [i_10] [i_10 + 2] [i_10 + 1] [i_10 - 1] [i_10 - 2]), (arr_22 [i_10 + 2] [i_10] [i_10] [i_10 + 2] [i_10 - 2] [i_10 - 1])))))))));
                                var_37 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((arr_42 [i_10] [i_1] [i_10] [i_10 + 1] [i_13]), (((/* implicit */short) (unsigned char)249))))))) ? (((max((((/* implicit */int) arr_29 [i_0] [i_1] [i_10 - 2])), (var_7))) / (((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) (short)-8192)))))))) : (2147483647)));
                                arr_43 [i_0] [i_1] [i_9] [i_10 + 2] [(signed char)2] = ((/* implicit */short) (+(((arr_7 [i_10] [i_9 + 2] [i_9] [i_10 + 2]) << (((((/* implicit */int) arr_29 [i_9 + 2] [i_9 + 2] [i_10 + 2])) - (85)))))));
                            }
                        }
                    } 
                } 
                var_38 = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])), (max((((/* implicit */long long int) arr_32 [i_0] [i_0] [(_Bool)1] [i_0] [i_1])), (var_11)))))));
            }
        } 
    } 
}
