/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230458
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))) - (arr_2 [i_0 + 2] [i_1 - 1] [i_0 - 1]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1]))));
                        var_18 = ((/* implicit */unsigned int) arr_7 [3ULL] [9ULL] [i_2] [i_3 - 3] [i_1] [i_3]);
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_7 [i_0 + 3] [i_0 + 3] [i_2] [i_3] [i_0 + 3] [i_2])))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_2] [(unsigned char)23])) ? (arr_5 [i_3] [i_2 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 - 1] [i_2]))))));
                        var_20 *= ((/* implicit */unsigned short) ((arr_7 [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_3 - 1] [i_0 + 3]) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))));
                        var_22 += ((/* implicit */unsigned char) arr_0 [i_0 + 3] [i_2 + 1]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_0 [i_2] [0]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0 + 4] [i_1] [i_2 + 1] [i_5] [i_6]))));
                            var_25 = 5563036831080755779LL;
                        }
                        var_26 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [13ULL] [i_5]);
                        arr_15 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_5] [i_2 - 1])) ? (arr_8 [i_1 - 1] [i_5]) : (arr_8 [i_0 + 1] [i_2 + 2])));
                    }
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [i_1 - 1] [i_2] [i_2 + 1] [i_1 - 1]))) * (arr_2 [i_2 + 1] [i_0 + 1] [i_0 + 1]))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_19 [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_19 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 1]))))));
                        var_29 = ((/* implicit */unsigned int) 17485761186448710877ULL);
                        var_30 = ((/* implicit */unsigned short) arr_2 [(unsigned char)22] [i_1] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_22 [i_8] [i_7] [i_8] [i_8] [i_1 - 1] [23LL] = ((/* implicit */_Bool) var_0);
                            arr_23 [i_0] [i_0] [22] [i_2 + 1] [i_0] [i_8] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (arr_11 [(signed char)22] [(signed char)22] [i_1] [i_2] [14U] [i_8])))) ? (((/* implicit */int) max((var_9), (var_9)))) : (((/* implicit */int) max((var_15), (var_8)))))), (((/* implicit */int) max((arr_10 [i_0] [i_1] [i_2] [i_7] [i_8] [i_7]), (arr_3 [i_0] [11ULL]))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) - (max((((/* implicit */unsigned long long int) var_12)), (arr_5 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1])))));
                            arr_29 [i_0] [i_1 - 1] [i_2 + 1] [i_1 - 1] [i_0] [i_7] [(unsigned short)8] = ((/* implicit */signed char) arr_25 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 4] [12LL]);
                            var_31 &= ((/* implicit */signed char) arr_0 [i_2] [i_7]);
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned char)2]);
                        arr_32 [i_0] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) -5563036831080755779LL)) ? (((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_2] [i_0 + 1] [i_2 - 1] [i_10 + 3])) : (((/* implicit */int) arr_18 [i_1 - 1] [i_1] [i_2] [i_0 + 1] [i_2] [i_2 + 2]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 3) 
                        {
                            arr_36 [i_0] [i_1] [(unsigned char)2] [i_10] [(unsigned char)2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(arr_34 [i_0 + 2] [i_2] [i_0 + 2])))) - (arr_24 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])));
                            arr_37 [i_11 + 1] [i_10] [i_10] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (+(arr_6 [i_10 + 3] [i_1] [i_10 + 3] [i_1 - 1])));
                            arr_38 [i_10] [i_1 - 1] [i_1] [i_2 + 1] [19ULL] [i_2] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) -5563036831080755780LL)))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_13 [i_11 + 3] [i_10 + 2] [i_2 + 1] [i_1 - 1] [i_0 - 1])) - (((arr_5 [i_0] [i_1 - 1] [i_2 - 1] [i_10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), ((~(arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                            arr_41 [i_10] [i_1 - 1] [i_2] [i_10] [i_1 - 1] = ((/* implicit */unsigned char) (-(((arr_9 [i_10] [i_10] [i_2] [i_1 - 1] [i_0 + 3]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) arr_31 [i_0] [i_1] [(_Bool)1] [i_10] [i_0]))));
                            var_36 = ((/* implicit */unsigned char) (+((+(-5563036831080755752LL)))));
                        }
                        var_37 = ((/* implicit */signed char) ((((-1322855290) + (2147483647))) >> ((((~(((/* implicit */int) (unsigned short)0)))) + (4)))));
                    }
                    for (short i_14 = 1; i_14 < 20; i_14 += 4) /* same iter space */
                    {
                        var_38 *= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-11))));
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (+(((unsigned long long int) ((_Bool) var_1))))))));
                        var_40 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_40 [i_0 - 1] [(signed char)0] [i_0 + 2])))))));
                        arr_46 [i_14] [i_1 - 1] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [i_2] [i_0 + 1] [i_0] [i_0] [i_0])) - (((/* implicit */int) var_5))))) - ((((+(arr_8 [i_0 + 3] [i_1 - 1]))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_26 [i_0] [i_1 - 1] [i_14 + 3] [i_14 + 3])), (arr_4 [i_14] [i_1] [i_1]))))))));
                        var_41 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) var_14)), (arr_5 [(unsigned char)21] [i_2 - 1] [i_2] [i_14])))))));
                    }
                    for (short i_15 = 1; i_15 < 20; i_15 += 4) /* same iter space */
                    {
                        arr_50 [(_Bool)1] [17] [7U] [i_15] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_35 [i_0] [(_Bool)1] [i_2]))))))) : (max((((arr_27 [i_0 + 2] [i_0 + 2] [i_2 - 1] [i_0 + 2] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) arr_20 [4] [4]))))));
                        var_42 = ((/* implicit */signed char) arr_14 [i_15 + 4] [(unsigned char)19] [i_2] [i_1] [(unsigned char)19] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (max((((var_2) ? (((/* implicit */long long int) -195871421)) : (5563036831080755792LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))))));
    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -827515967)))))) - (((/* implicit */int) var_10)))))));
}
