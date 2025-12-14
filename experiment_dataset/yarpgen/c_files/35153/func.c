/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35153
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_1] [i_1 - 3] = (~((-(144115188071661568ULL))));
                    arr_9 [i_0] [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned int) arr_6 [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2 - 2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_1 [i_0]);
                                arr_17 [i_1] = ((/* implicit */unsigned int) var_11);
                                arr_18 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_12 [i_0] [i_4])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_4))))))) : ((+(max((arr_5 [i_2]), (((/* implicit */unsigned long long int) -7182328967198248510LL))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 3; i_5 < 17; i_5 += 2) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2022289911171391519ULL)))) ? (arr_6 [i_1]) : ((-((+(2022289911171391519ULL)))))));
                    arr_21 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_5 - 1]);
                }
                for (unsigned char i_6 = 3; i_6 < 17; i_6 += 2) /* same iter space */
                {
                    arr_24 [i_1] = ((/* implicit */_Bool) max(((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_20 [i_6] [(unsigned short)14] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))))))));
                    var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1])), (var_7)));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_6)), (max((arr_10 [i_0] [i_1] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0])))))), ((~((+(arr_6 [i_0])))))))));
                }
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) var_3))))) ? (arr_29 [i_0] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_7] [i_1] [i_8])))))));
                        var_15 = ((/* implicit */int) -6646020120445791980LL);
                        var_16 &= ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_1 + 2] [i_1 - 1]))));
                        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                        var_18 = ((/* implicit */unsigned char) arr_4 [i_8] [i_1 + 2] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_19 |= ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [(unsigned short)18]);
                        arr_35 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_1] [i_9] [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_0 [i_7] [i_1 + 3]))));
                        arr_36 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-90);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1 - 3] [i_9] [i_1 + 1]))) - (arr_29 [i_1 - 2] [i_1 + 3]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        arr_40 [(signed char)8] [(signed char)8] [i_1] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) 2847708111U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [i_10])) & (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1 - 1] [i_1]))))));
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_11 [i_10] [i_11] [(unsigned char)13] [i_11]), (((/* implicit */unsigned int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_0 [i_11] [(signed char)15])))) : ((+(((/* implicit */int) (unsigned char)88)))))) <= (var_2)));
                            arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_11)) ? (arr_29 [i_10] [i_11]) : (((/* implicit */unsigned long long int) arr_1 [(unsigned char)11]))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_37 [i_1 - 2] [i_1 - 3] [i_1 + 2])))), ((+(arr_33 [i_0] [i_1 - 2] [i_1 - 3] [(_Bool)1] [i_1] [i_1 - 3])))));
                            arr_48 [i_10] [i_1] [i_10] [i_7] [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_28 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_12] [i_0])), (((max((arr_1 [i_0]), (arr_42 [i_0] [i_0] [i_1] [i_1] [i_10] [i_12]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1 - 3] [i_7] [i_12])))))));
                        }
                    }
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    arr_51 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (((+(var_7))) == (3658982315042830711ULL)));
                    var_22 = ((/* implicit */unsigned char) arr_46 [i_1 + 1] [i_1 + 1] [i_13] [i_13] [i_1 + 1]);
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_28 [i_0] [(unsigned char)4] [(unsigned char)14] [(signed char)13] [i_13] [i_13]))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) min((var_5), (min((((/* implicit */unsigned char) var_1)), (var_11))))))));
    var_25 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)32766))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) ((arr_2 [i_14]) + (arr_2 [i_14])));
        arr_54 [i_14] = ((/* implicit */long long int) arr_50 [i_14] [i_14] [i_14]);
        var_27 = ((/* implicit */unsigned int) (+(arr_29 [i_14] [i_14])));
    }
}
