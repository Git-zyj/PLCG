/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53587
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
    var_18 = ((/* implicit */_Bool) ((int) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
                /* LoopSeq 2 */
                for (signed char i_2 = 4; i_2 < 24; i_2 += 1) 
                {
                    var_19 = (short)22278;
                    var_20 = ((/* implicit */signed char) min((((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) var_15)))) || (((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_2]) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_5 [i_1])))))))), (((short) arr_3 [i_0] [i_1] [i_2]))));
                    var_21 = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_13)))))) * (((((/* implicit */int) (signed char)94)) & (((/* implicit */int) (unsigned short)0))))));
                }
                for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((arr_2 [i_0] [i_1]) | (4432789177228919976LL)));
                        var_23 = ((/* implicit */_Bool) ((unsigned char) 1965907577));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) (unsigned short)4307);
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_0] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1])))))) << (((((11U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [(_Bool)1] [i_1] [i_0]))))) - (4294780863U)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_3 + 2] [i_1] = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)23))))) + ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_6] [i_3 - 1] [i_0])) : (((/* implicit */int) var_5)))));
                        arr_22 [i_0] [i_0] [i_3] [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) var_8);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max((((arr_19 [i_0] [i_0] [i_0] [i_0]) - (arr_19 [i_0] [i_0] [i_3 + 1] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3] [i_3] [i_0])))))))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((((/* implicit */int) var_16)) + (((/* implicit */int) (short)22264)))) >= (((/* implicit */int) (short)25280))))), (arr_2 [i_1] [i_0]))))));
                        var_28 = ((/* implicit */signed char) min((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1])), (((arr_15 [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_1]))))));
                    }
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0)))), ((_Bool)1)))) | (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_7 [i_0] [i_1] [24] [i_3]) : (((/* implicit */int) (!(((/* implicit */_Bool) 1834644562U))))))))))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        var_30 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_8]))) != (((unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_9] [i_1] [i_0]))));
                        var_31 = ((/* implicit */_Bool) var_11);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            arr_36 [i_0] [i_1] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_35 [i_8] [i_1] [i_8 + 1])) > (((/* implicit */int) (signed char)-83))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1]))));
                        }
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (4294967295U)));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 23; i_11 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [i_11] [i_11] [i_11] [i_0])) | (arr_28 [i_0] [i_1] [i_8 + 2] [i_11])));
                        var_35 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_36 += (signed char)103;
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 23; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 2; i_13 < 21; i_13 += 3) /* same iter space */
                        {
                            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_8 + 2])) * (((/* implicit */int) arr_18 [i_0] [i_0] [i_8] [i_12] [i_12] [i_0])))))));
                            var_38 &= ((/* implicit */unsigned long long int) ((int) var_9));
                        }
                        for (unsigned int i_14 = 2; i_14 < 21; i_14 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) arr_15 [i_1]);
                            arr_47 [i_1] [i_1] [i_8] [i_12 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [(_Bool)0] [i_12 + 2] [i_12 + 1] [i_12 + 2]))));
                            arr_48 [i_1] [i_1] [i_1] = (!((!(((/* implicit */_Bool) var_14)))));
                        }
                        for (long long int i_15 = 2; i_15 < 24; i_15 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_8] [i_15]);
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_29 [i_15]))) ^ (((/* implicit */int) arr_26 [i_0] [i_1] [i_0]))));
                        }
                        var_42 *= ((/* implicit */signed char) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_32 [i_12 - 1] [i_8] [i_8 + 2]))));
                        var_43 = ((/* implicit */unsigned long long int) 29360128U);
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 2; i_16 < 21; i_16 += 2) 
                        {
                            var_44 = ((/* implicit */_Bool) ((arr_42 [i_0] [i_1] [i_8] [i_12] [i_12]) << (((arr_42 [i_0] [i_0] [i_16 + 2] [i_12 + 1] [i_16]) - (18041291956511890130ULL)))));
                            var_45 *= (signed char)-99;
                            var_46 = (signed char)-44;
                        }
                        var_47 = ((/* implicit */signed char) var_8);
                    }
                }
                for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_49 [i_1] [i_0] [i_1] [i_1] [i_1])), (-8000978505492490059LL)))) && (((((/* implicit */_Bool) arr_44 [i_0] [i_17] [i_1] [i_17] [i_17] [i_0])) && (((/* implicit */_Bool) arr_11 [i_1]))))));
                    var_49 = ((/* implicit */unsigned int) max(((signed char)-83), (((/* implicit */signed char) arr_55 [i_0] [i_0] [i_17] [i_17]))));
                }
                for (unsigned short i_18 = 3; i_18 < 24; i_18 += 1) 
                {
                    var_50 = ((/* implicit */signed char) var_10);
                    var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) arr_13 [i_18 + 1] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 3; i_20 < 22; i_20 += 1) 
                        {
                            {
                                arr_65 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_59 [i_18] [i_18] [i_1]);
                                var_52 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_50 [i_20] [i_20] [i_20] [i_20 + 1] [i_20 - 2]))))), (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_18 + 1] [i_0] [i_19] [i_19]))) : (arr_0 [i_20 - 1])))));
                                var_53 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((4294967284U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) * (((var_2) / (var_2))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_21 = 2; i_21 < 15; i_21 += 2) 
    {
        for (unsigned int i_22 = 0; i_22 < 17; i_22 += 2) 
        {
            {
                var_54 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (signed char)82))));
                var_55 = ((/* implicit */signed char) min((((/* implicit */int) (!(arr_60 [i_21 - 1] [i_22])))), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (arr_7 [i_22] [i_21] [i_22] [i_21])))) & (((/* implicit */int) arr_10 [i_21] [i_22] [i_21]))))));
            }
        } 
    } 
    var_56 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) min(((signed char)-116), ((signed char)-90)))) + (117)))))), (((((/* implicit */_Bool) ((446623964) << (((((((/* implicit */int) (signed char)-99)) + (130))) - (30)))))) ? (0U) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))));
}
