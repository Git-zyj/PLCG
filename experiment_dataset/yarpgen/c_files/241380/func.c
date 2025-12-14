/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241380
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
    var_16 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((((min((3932826833105729250ULL), (((/* implicit */unsigned long long int) var_1)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [0LL] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_3 [i_2])))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned char)140)))), (((/* implicit */int) arr_1 [(_Bool)1])))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) ((3932826833105729240ULL) < (((/* implicit */unsigned long long int) -7082004110331973966LL)))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) (_Bool)1);
                            var_20 = ((/* implicit */short) (+(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]);
                            var_22 = ((/* implicit */unsigned char) arr_0 [i_5]);
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_3 + 2]), (arr_7 [i_3 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((long long int) arr_7 [i_3 - 1]))));
                            var_24 = ((/* implicit */unsigned char) ((_Bool) arr_4 [i_0] [i_1] [i_1 + 1] [i_1 - 3]));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (((/* implicit */int) arr_1 [i_6 + 1])) : (((/* implicit */int) arr_5 [i_6 + 1] [i_3 + 1] [i_1 + 1] [i_1 + 1]))))));
                            var_26 |= ((/* implicit */long long int) arr_15 [i_0] [(unsigned char)2] [i_0] [i_0]);
                        }
                        var_27 = ((/* implicit */int) arr_8 [i_1 - 3] [i_1] [i_1] [i_1] [i_0]);
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) 409543914);
                        var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_10)))) ? (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 1] [i_2])) != (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 3] [i_2]))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 3; i_8 < 11; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */short) ((int) arr_3 [i_8 + 1]));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_6 [i_9] [i_1 + 1])) * (((((/* implicit */unsigned long long int) 2575491908U)) - (3832550437696961804ULL)))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) (((_Bool)0) ? (arr_9 [i_0] [i_0] [i_2] [i_8] [(unsigned short)3]) : (arr_14 [i_0] [i_1] [i_1] [i_1 - 2] [i_8 - 3])));
                            var_33 = ((/* implicit */signed char) arr_15 [i_10] [i_8 + 1] [i_1] [i_1 - 3]);
                        }
                        var_34 = ((/* implicit */unsigned long long int) ((var_7) - (((int) arr_10 [i_8] [i_2] [i_1] [i_1] [i_0] [1ULL]))));
                        /* LoopSeq 3 */
                        for (signed char i_11 = 2; i_11 < 11; i_11 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned short) max((var_35), ((unsigned short)31343)));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1 - 2] [i_1 + 1] [i_8 - 2])) ? (16476086702298515424ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_8] [i_11]))));
                            var_38 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                            var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_29 [i_11 - 1] [i_8 - 1] [i_8 - 3] [i_8 - 3] [i_1 - 2]))));
                        }
                        for (short i_12 = 2; i_12 < 10; i_12 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned int) (-(6244351760068687857LL)));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_12] [i_12 + 1] [i_8 - 2] [i_1 - 1])) / (var_15)));
                            arr_37 [i_12] [i_8 - 3] [i_2] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (~(arr_9 [i_12] [(_Bool)1] [i_12 - 2] [i_12] [i_12])));
                            var_42 = arr_23 [i_0] [i_0] [i_0] [i_0];
                        }
                        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                            arr_42 [i_13] = ((/* implicit */signed char) ((11150803523966985829ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_13] [i_13] [(signed char)8] [i_8] [i_8 - 2] [i_0])))));
                        }
                    }
                }
            } 
        } 
    } 
    var_43 *= min((var_2), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_3))))));
}
