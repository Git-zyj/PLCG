/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53542
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
    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */int) arr_4 [i_0])), (min((((/* implicit */int) arr_4 [i_0])), (var_10))))) != (((/* implicit */int) min((var_7), (((/* implicit */short) var_5)))))));
                var_18 -= ((/* implicit */short) arr_0 [i_0]);
                var_19 = ((/* implicit */signed char) ((((((_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_12), (var_12)))))) != (var_10)));
                var_20 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(max((arr_0 [i_1]), (((/* implicit */long long int) (unsigned short)28060))))))), (min((arr_2 [i_0]), (arr_2 [i_1 - 1])))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */short) max((((/* implicit */signed char) var_5)), (((signed char) arr_0 [i_1]))))), (((short) min((arr_2 [i_0]), (arr_2 [i_0]))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))))) ? (min((min((arr_0 [i_1 + 1]), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) arr_5 [i_1 - 1] [i_3] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_0])))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12140490715408683822ULL)) ? (16874600445706982493ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15310)))))) ? ((+(313265560U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94)))));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_24 -= ((/* implicit */unsigned long long int) arr_1 [(short)2]);
                        var_25 = ((/* implicit */int) ((((((((/* implicit */_Bool) 12140490715408683819ULL)) || (((/* implicit */_Bool) arr_15 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_0])) ? (((/* implicit */int) arr_10 [(signed char)10] [(short)10] [i_2 + 1] [i_4] [(signed char)0] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [5U] [(_Bool)1] [i_0] [i_4]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (arr_2 [8LL])))) ? (((((/* implicit */_Bool) arr_0 [1U])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) min((arr_8 [(unsigned char)4] [1LL] [i_2] [i_0]), (((/* implicit */unsigned char) var_6))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [(signed char)11] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_2 + 1] [i_0]))));
                        var_27 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [(short)8] [i_1 + 1] [i_1 - 2] [i_5] [i_1 - 3] [i_5]))));
                        var_28 = ((/* implicit */int) ((arr_13 [4] [4] [i_1 - 1] [i_2 - 1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) (-(arr_2 [i_0])));
                        var_30 += ((/* implicit */unsigned long long int) (((+(arr_13 [i_2 + 2] [i_1 + 1] [i_2 + 2] [0LL] [0U]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [(signed char)10]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [10ULL]))) != (arr_15 [2LL])))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((short) arr_14 [i_0] [i_0] [i_1 - 2] [i_2 - 1] [10U]));
                        var_32 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_9)))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 3; i_8 < 8; i_8 += 4) 
                        {
                            var_33 = ((/* implicit */int) arr_18 [i_1 + 1]);
                            var_34 = ((/* implicit */long long int) var_2);
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_21 [i_0] [i_1 - 1] [i_0] [i_1 - 1])))))));
                            arr_31 [i_0] [i_1] [i_2] [i_0] [(signed char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22775)) ? (6306253358300867807ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))));
                            arr_32 [i_0] [i_0] [i_0] [i_7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [(signed char)11] [i_2 - 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0]))) : (4194544908U)));
                        }
                        for (unsigned short i_10 = 2; i_10 < 9; i_10 += 2) 
                        {
                            var_36 = ((/* implicit */long long int) var_0);
                            arr_35 [1] [i_0] [i_2] [i_7] [i_10 + 3] = ((/* implicit */unsigned int) var_10);
                            arr_36 [i_2] [i_0] = ((/* implicit */short) ((arr_20 [(unsigned char)4] [i_0] [i_2 + 1]) != (arr_20 [5LL] [i_0] [i_2 + 2])));
                            var_37 = ((/* implicit */signed char) var_14);
                        }
                        var_38 -= ((/* implicit */long long int) var_10);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            {
                                arr_42 [(_Bool)1] [i_1 - 1] [i_2] [i_11] [i_0] [i_11] = ((/* implicit */int) ((signed char) ((arr_2 [i_1 + 1]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_5 [6U] [4ULL] [i_0]))))))));
                                arr_43 [(signed char)4] [i_0] [i_2] [i_11] [(signed char)4] = ((((((/* implicit */int) ((-1367160059803819028LL) != (((/* implicit */long long int) 3981701736U))))) != (((/* implicit */int) arr_33 [(unsigned char)1] [i_1 - 2] [i_2 + 2] [(signed char)6] [i_12] [i_11] [6LL])))) ? ((-((-(((/* implicit */int) (short)22774)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)22775))))));
                                var_39 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_13 = 1; i_13 < 10; i_13 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_13] = ((int) (-(((/* implicit */int) arr_33 [i_13 + 2] [i_1] [i_1 - 1] [i_1] [(unsigned short)0] [i_13] [(unsigned short)0]))));
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [1] [i_13]))))) != (((/* implicit */int) arr_34 [2U] [i_1] [2U] [i_0]))));
                }
            }
        } 
    } 
    var_41 += ((/* implicit */long long int) var_12);
}
