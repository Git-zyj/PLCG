/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246368
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
    var_13 = ((/* implicit */unsigned short) (~(var_0)));
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_11)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] = ((short) 15001622947817226266ULL);
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) min((max((arr_1 [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */short) var_1))));
                var_15 = ((/* implicit */short) (_Bool)1);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_2 + 1])) - (84)))));
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */int) var_2)) * (((/* implicit */int) var_12))))));
                                arr_17 [i_2] [i_1] = ((/* implicit */int) ((_Bool) (!(arr_3 [i_0]))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_0] [i_1] = (~(((/* implicit */int) (_Bool)1)));
                    arr_19 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3445121125892325350ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)10903))));
                    var_16 -= ((/* implicit */unsigned short) ((short) arr_7 [i_1] [i_1 - 1] [i_1 - 1]));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 3579890341194399618LL))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4466)) ? (((/* implicit */unsigned long long int) 2186717912581167599LL)) : (3445121125892325331ULL)));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)1643))));
                            arr_27 [i_0] [i_1] = ((/* implicit */unsigned short) (signed char)-109);
                            var_20 = ((/* implicit */long long int) arr_9 [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1 - 1]);
                            arr_28 [i_0] [i_5] [i_2] [i_5] [i_6] [i_6] &= ((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) || (((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_24 [i_0] [i_5] [(signed char)16] [i_5] [(signed char)8] [i_2]))))));
                        }
                        for (signed char i_7 = 1; i_7 < 21; i_7 += 3) /* same iter space */
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_11 [i_1] [i_1] [i_7 - 1]);
                            var_21 ^= arr_23 [i_0] [i_0] [i_0] [(signed char)13];
                        }
                        for (signed char i_8 = 1; i_8 < 21; i_8 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((6769582679171182049LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10899))))))));
                            arr_37 [i_1] = ((/* implicit */short) ((-5258746017774336538LL) / (((long long int) (short)-1626))));
                        }
                        var_23 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_1 + 1]))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_9] = ((/* implicit */short) arr_22 [i_0] [i_0] [i_0] [i_0]);
                        var_24 &= (~(((/* implicit */int) arr_23 [i_1 - 1] [(unsigned short)8] [i_1] [i_1])));
                        arr_41 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_29 [i_0] [(short)18] [i_2] [i_9] [(short)18])))) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                        arr_42 [i_0] [i_1] [15LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_1] [i_1] [i_2] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))));
                        var_25 -= ((/* implicit */_Bool) ((((arr_10 [i_0] [i_0] [i_0] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) ((signed char) arr_12 [(_Bool)1] [(_Bool)1] [(short)2] [i_0] [i_2])))));
                    }
                }
                for (unsigned short i_10 = 1; i_10 < 21; i_10 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (short)-1626)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26093))) : (-1473932855592350468LL))));
                    arr_45 [i_1] [i_1] [(unsigned short)11] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) arr_31 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))), (max((((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_1 + 1] [i_10] [i_10])), (arr_38 [i_1] [i_1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 3; i_12 < 19; i_12 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) (((((_Bool)1) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_51 [i_0] [17LL] [i_0] [i_0] [i_0] [i_0] [(unsigned short)13])) : (((/* implicit */int) arr_24 [i_0] [i_1] [(unsigned short)8] [i_11] [i_11] [3LL])))) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((short) arr_23 [i_1 + 1] [13ULL] [i_1 + 1] [13ULL])))));
                                var_28 = ((/* implicit */short) var_6);
                                arr_54 [i_1] [i_11] [i_10 + 1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61070))) <= (7768569107106602939LL))))) - (min((((/* implicit */unsigned long long int) var_2)), (arr_6 [i_1] [i_1])))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) arr_52 [i_10 - 1] [i_1] [(signed char)7] [i_1] [i_12])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_13 = 1; i_13 < 21; i_13 += 4) /* same iter space */
                {
                    arr_57 [i_1] [i_1] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) -5893527680455061209LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37772)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))) : (1749599553183688472LL))))));
                    var_29 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_13 - 1] [i_1 - 1]))));
                    arr_58 [19ULL] [i_1] [i_13] = ((/* implicit */signed char) ((long long int) arr_55 [i_0] [i_13 - 1] [i_1]));
                    var_30 = ((/* implicit */signed char) arr_21 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1] [(short)5]);
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
                        {
                            var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [(unsigned short)2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_47 [(signed char)18] [(signed char)18] [i_13] [i_13] [i_13 + 1])) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_14])) ? (((/* implicit */int) arr_59 [i_0] [i_1])) : (((/* implicit */int) arr_20 [i_14]))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_55 [(unsigned short)12] [i_1 - 1] [i_1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)13] [i_14] [i_15])) : (((/* implicit */int) var_6))))));
                            var_33 += ((/* implicit */short) var_2);
                            var_34 = ((/* implicit */signed char) arr_38 [i_1] [i_1 + 1] [i_1] [i_1 - 1]);
                        }
                        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                        {
                            arr_69 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */int) (short)-21058)) + (((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_16]))))));
                            arr_70 [i_14] [i_1] [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                            arr_71 [i_0] [i_1] [i_1] [i_13] [i_14] [i_1] [i_16] = ((/* implicit */signed char) (+((+(var_0)))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_52 [i_16] [i_14] [i_13 + 1] [i_14] [i_0]))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                        {
                            var_36 = ((/* implicit */_Bool) arr_52 [(_Bool)1] [i_1] [i_1 - 1] [i_14] [i_17]);
                            arr_74 [i_0] [i_1] [(short)20] [i_14] [i_1] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_17] [i_1] [i_13 - 1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_46 [i_0] [i_0]))))) : ((+(((/* implicit */int) (unsigned short)53547)))));
                        }
                        for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                        {
                            arr_77 [i_1] [i_13 - 1] [i_14] [i_13 - 1] [i_13 - 1] [i_1] [i_1] = ((/* implicit */short) var_5);
                            arr_78 [i_1] [i_1] [i_14] [i_13 + 1] [i_0] [i_1] [i_0] = var_7;
                            arr_79 [i_0] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_1 + 1] [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_1])) + ((-(((/* implicit */int) var_3))))));
                            var_37 *= (_Bool)0;
                        }
                        var_38 *= ((/* implicit */short) ((((/* implicit */int) arr_46 [i_0] [i_13 + 1])) + (((/* implicit */int) arr_46 [i_0] [i_0]))));
                    }
                }
            }
        } 
    } 
}
