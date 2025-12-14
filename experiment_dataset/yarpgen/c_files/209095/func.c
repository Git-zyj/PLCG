/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209095
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((int) var_2)))));
        arr_4 [i_0] = ((/* implicit */signed char) ((long long int) arr_1 [i_0]));
        var_15 = (-(var_2));
    }
    var_16 = ((/* implicit */int) var_3);
    var_17 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        for (short i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_1] [i_2 + 2] [i_1])) <= (31)));
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6))));
                        var_19 = (signed char)-60;
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_1 + 2])) ^ (((/* implicit */int) arr_11 [i_1 + 2]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_21 -= ((/* implicit */_Bool) ((-606925384) / (var_9)));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) -606925390))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                arr_27 [3U] [i_1] [3U] [i_6] [(signed char)4] = ((/* implicit */unsigned int) -606925364);
                                var_23 = ((/* implicit */_Bool) (-(((long long int) (signed char)-4))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) arr_20 [i_2] [i_2 + 3] [(unsigned char)9]);
                }
                var_25 = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_2 + 1])) + (606925383))) ^ (((((/* implicit */int) arr_7 [i_2 + 2])) + (606925400)))));
                /* LoopSeq 4 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    arr_31 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] = ((/* implicit */_Bool) 0);
                    arr_32 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -606925361)) ? (((/* implicit */int) (short)4214)) : (((/* implicit */int) (signed char)87))))) ? (((/* implicit */int) (short)14452)) : (((/* implicit */int) var_4))));
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) arr_30 [i_1] [i_1] [i_9] [i_2]);
                    arr_35 [i_1] = ((/* implicit */_Bool) var_9);
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_27 -= ((/* implicit */signed char) 10959068154315355681ULL);
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) arr_9 [i_2] [(unsigned char)9] [i_11]);
                        var_29 = ((/* implicit */signed char) -9);
                        arr_44 [i_10] = ((/* implicit */short) var_2);
                        var_30 = ((/* implicit */_Bool) (signed char)-109);
                    }
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                    {
                        var_31 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? ((((-(var_2))) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 - 1] [i_1 - 1] [i_1 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((606925383) < (((/* implicit */int) (_Bool)1))))))));
                        var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((int) arr_16 [i_1 + 2] [i_1 + 2] [i_10 - 1] [i_12]))), (((((/* implicit */_Bool) arr_16 [i_1] [i_10 - 1] [i_10] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (arr_16 [i_1] [i_1] [i_1 + 1] [i_1 - 1])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            arr_49 [(short)21] [i_2] [i_10] [i_2] [(unsigned char)19] [i_13] [i_1] = ((/* implicit */signed char) arr_37 [i_1 + 2]);
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) -20597180)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_12))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            var_34 = (~(var_9));
                            var_35 = ((((((/* implicit */int) var_1)) + (((/* implicit */int) arr_30 [i_14] [i_12] [i_10] [i_2])))) | (((((/* implicit */_Bool) -606925361)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-10)))));
                            arr_54 [i_1] [i_1] [i_10] [i_10] [i_12] [i_14] = ((/* implicit */signed char) ((short) var_6));
                            var_36 = ((/* implicit */int) ((_Bool) (signed char)(-127 - 1)));
                        }
                        for (signed char i_15 = 1; i_15 < 20; i_15 += 2) 
                        {
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_56 [i_1 + 1] [i_1] [i_1 + 1] [i_10 - 1] [i_1])), (var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_10] [i_2 + 3] [i_1 + 2] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_56 [i_1] [i_1] [i_1 + 1] [i_10 - 1] [(unsigned char)14])))))));
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_47 [i_15 + 2]) >= (arr_47 [i_1 + 1]))))) / (2847485490U))))));
                            var_39 = ((/* implicit */_Bool) (signed char)9);
                        }
                    }
                    for (long long int i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
                    {
                        var_40 = (signed char)-2;
                        arr_61 [i_1] [i_10] [i_10] [(_Bool)1] [i_10 - 1] [i_10] = ((/* implicit */unsigned int) ((_Bool) ((arr_23 [i_1 - 1] [i_2 + 1]) - (arr_23 [i_1 + 2] [i_2 + 2]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        for (int i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) var_8))));
                                arr_68 [i_10] = ((/* implicit */signed char) max(((unsigned short)65530), (((/* implicit */unsigned short) (unsigned char)63))));
                                arr_69 [i_10] [i_2 + 1] [i_10 - 1] [i_17] [i_18] = var_4;
                                var_42 = ((/* implicit */signed char) arr_5 [7] [i_2]);
                            }
                        } 
                    } 
                }
                for (long long int i_19 = 3; i_19 < 21; i_19 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        for (unsigned char i_21 = 1; i_21 < 19; i_21 += 4) 
                        {
                            {
                                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((unsigned char) max((((/* implicit */long long int) var_7)), (arr_51 [i_20] [i_1 + 1] [i_1 - 1] [14] [i_1 + 1])))))));
                                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((5015878400617270734LL) <= (((/* implicit */long long int) (+(((/* implicit */int) arr_41 [i_21] [i_2] [i_19] [i_19 - 3] [i_2] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 32)) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_1))))))) : (((unsigned long long int) arr_41 [i_1 + 2] [i_2] [i_19 - 1] [(unsigned short)14] [i_21] [i_21])))))));
                                var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) var_2))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 22; i_22 += 3) 
                    {
                        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                        {
                            {
                                var_46 = ((/* implicit */signed char) var_5);
                                var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) (+(max((arr_60 [i_23 - 1] [i_22] [i_22] [10] [i_2 - 1] [i_1 + 2]), (((/* implicit */unsigned long long int) (unsigned char)69)))))))));
                                arr_83 [i_1 - 1] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_70 [i_23 - 1]), (arr_70 [i_23 - 1])))) - ((-(((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_24 = 2; i_24 < 19; i_24 += 2) 
                    {
                        for (long long int i_25 = 0; i_25 < 22; i_25 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */long long int) (~((-2147483647 - 1))));
                                var_49 *= ((/* implicit */short) (!(((((/* implicit */int) ((unsigned char) (signed char)-121))) >= (((/* implicit */int) (unsigned char)218))))));
                                arr_89 [i_1] [i_2] [i_19] [i_24] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))));
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)63)) ^ (((/* implicit */int) ((short) 2147483624)))));
                }
                /* LoopNest 2 */
                for (int i_26 = 2; i_26 < 21; i_26 += 1) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_51 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-15)) ? (-29) : (((/* implicit */int) (unsigned short)41195))))))), (min((11422309902747262229ULL), (((/* implicit */unsigned long long int) (short)20260))))));
                            /* LoopSeq 2 */
                            for (long long int i_28 = 1; i_28 < 19; i_28 += 4) /* same iter space */
                            {
                                var_52 = ((/* implicit */unsigned char) (signed char)2);
                                var_53 = var_4;
                            }
                            /* vectorizable */
                            for (long long int i_29 = 1; i_29 < 19; i_29 += 4) /* same iter space */
                            {
                                var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121))));
                                var_55 = ((/* implicit */signed char) (unsigned char)180);
                                arr_99 [i_29] [i_2] [i_26] [i_27] [i_29] [i_2] [i_29] = ((/* implicit */_Bool) var_6);
                                arr_100 [i_1] [i_29] [i_26] [i_27] [i_29] = ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)-33)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
