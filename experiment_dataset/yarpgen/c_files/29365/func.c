/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29365
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        var_14 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-83)))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 - 1])) >= (((/* implicit */int) arr_10 [i_2 - 1]))))) : (min(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_7))))));
                        arr_14 [i_1] [i_1] = ((/* implicit */long long int) var_9);
                        arr_15 [i_1] = ((/* implicit */unsigned char) arr_9 [i_1] [i_2 - 1] [(unsigned short)1] [i_1]);
                    }
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_13)))) ? (((((/* implicit */int) arr_2 [i_2 - 1])) + (((((/* implicit */int) (unsigned short)47165)) - (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) min(((signed char)-73), ((signed char)-73)))) ? (((/* implicit */int) arr_8 [i_0] [i_4] [i_2 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [(unsigned char)17]))))))))))));
                        arr_18 [16] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (signed char)-73)))) >= (((/* implicit */int) (signed char)-73))));
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(3019424093217907757LL))), (((/* implicit */long long int) ((int) var_3))))))));
                        var_17 = ((/* implicit */long long int) var_0);
                        arr_19 [(signed char)22] [i_1] [4LL] [i_0] |= ((/* implicit */unsigned char) (+(max((arr_9 [i_4] [i_2] [(signed char)22] [i_4]), (((/* implicit */unsigned long long int) var_10))))));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_22 [i_1] [i_2 - 1] [22LL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 16089126322139252762ULL)) ? (min((((/* implicit */unsigned long long int) (signed char)38)), (arr_9 [i_2] [i_2] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_11)))), (((((/* implicit */int) arr_21 [(unsigned char)5] [(unsigned char)5] [i_2] [i_2])) >= (var_8)))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) var_3);
                            var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (min((8184394451816692934ULL), (((/* implicit */unsigned long long int) arr_0 [i_6]))))))) ? (((((/* implicit */_Bool) arr_23 [18LL] [(unsigned char)0] [i_2] [i_2] [(short)2] [i_2 - 1])) ? (arr_9 [i_0] [4ULL] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47142)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)47142))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17109)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (unsigned char)191)))))));
                            var_20 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((unsigned char)191), (arr_12 [i_0] [i_6] [i_6] [i_5])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-32749)))), (((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [(short)19] [(short)19] [i_2 - 1]))));
                        }
                        for (signed char i_7 = 1; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) (unsigned char)189);
                            var_22 = arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)2];
                            arr_28 [i_1] [18LL] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_13);
                        }
                        for (signed char i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_8] [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0] |= ((/* implicit */unsigned char) max((arr_30 [i_0] [i_1] [i_2] [i_0] [i_8 + 1]), (((/* implicit */int) arr_5 [i_5]))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), ((unsigned char)7)));
                        }
                        for (signed char i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            arr_36 [(unsigned short)21] [(signed char)13] [i_2 - 1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((unsigned char) (-(var_8))));
                            var_24 = ((/* implicit */unsigned char) ((((((long long int) var_0)) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [20] [(unsigned char)6])) ? (((/* implicit */int) arr_12 [i_9] [(signed char)2] [i_2] [(unsigned char)1])) : (((/* implicit */int) arr_32 [16] [i_1] [i_2] [i_2]))))))) ? (((/* implicit */int) arr_33 [i_1] [i_1] [7] [i_5] [(signed char)5] [i_5] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32748)) / (((/* implicit */int) var_2))))))))));
                            arr_37 [i_1] [(short)13] [i_2] [i_5] [i_9 + 3] = ((/* implicit */int) arr_4 [i_9] [i_1]);
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                        {
                            arr_40 [i_1] [i_5] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]))));
                            arr_41 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                        {
                            arr_44 [i_0] [i_2] [i_1] [i_5] [i_11] = ((/* implicit */short) ((var_1) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(signed char)10] [i_2 - 1])) ? (arr_11 [i_0] [i_0]) : (((/* implicit */int) arr_38 [13] [i_1])))))));
                            var_25 = ((/* implicit */short) (unsigned short)18370);
                            var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -172933838)) ? ((-(var_8))) : ((~(((/* implicit */int) (unsigned char)64))))));
                            var_27 = ((/* implicit */unsigned short) arr_1 [i_0]);
                            arr_45 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((unsigned char) var_1));
                        }
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                        {
                            arr_50 [i_0] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */unsigned char) ((max((arr_1 [i_2 - 1]), (((/* implicit */long long int) (signed char)73)))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_2 - 1]))))));
                            arr_51 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)229)) && (((/* implicit */_Bool) (short)6144)))) ? (3940649673949184LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-88)))));
                            var_28 = ((/* implicit */unsigned char) (~(arr_9 [i_1] [20] [i_2] [i_1])));
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                        {
                            arr_54 [i_13] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_2] [(signed char)3] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_32 [i_13] [i_0] [i_0] [i_1])) != (-1509186416))))) : (arr_34 [i_0] [i_1] [i_2] [i_5] [23])));
                            arr_55 [i_0] [i_1] [(signed char)23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_13] [i_1])) ? (((/* implicit */int) arr_42 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_1]))));
                        }
                        var_29 = ((/* implicit */short) (~(((/* implicit */int) arr_21 [i_1] [6] [i_2] [(_Bool)1]))));
                        /* LoopSeq 2 */
                        for (signed char i_14 = 4; i_14 < 23; i_14 += 1) 
                        {
                            var_30 |= ((/* implicit */unsigned long long int) 9223372036854775807LL);
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17109))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_29 [i_14])) / (((/* implicit */int) arr_27 [i_0] [(short)13] [(unsigned short)2] [(signed char)9] [i_0])))) != (((/* implicit */int) ((((/* implicit */int) arr_32 [i_0] [i_1] [i_2] [15LL])) >= (var_10)))))))) : (((((/* implicit */_Bool) ((unsigned char) (unsigned short)57635))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_14] [i_5] [i_2 - 1] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_56 [9ULL] [i_0] [i_2] [i_2] [i_2] [i_14] [i_1])) : (((/* implicit */int) var_9))))) : (max((((/* implicit */long long int) (unsigned short)0)), (var_13)))))));
                            var_32 ^= ((/* implicit */unsigned long long int) var_8);
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 3; i_15 < 23; i_15 += 3) 
                        {
                            arr_60 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_27 [i_0] [i_1] [i_0] [i_5] [i_15]);
                            arr_61 [1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [9LL] [i_1] [i_0])) ? (((/* implicit */int) arr_38 [(short)1] [i_2])) : (((/* implicit */int) (signed char)112))))) ? (var_10) : (((/* implicit */int) ((((/* implicit */int) arr_47 [i_5] [(signed char)3] [i_5] [i_5] [(unsigned char)4] [i_5])) != (((/* implicit */int) var_7)))))));
                            var_33 = ((/* implicit */short) var_1);
                            arr_62 [14LL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = arr_5 [i_1];
                            arr_63 [i_15] [i_5] [i_2] [i_5] [i_0] |= ((/* implicit */unsigned char) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_16 = 1; i_16 < 23; i_16 += 4) 
                    {
                        arr_66 [i_0] [i_0] [i_1] [(signed char)15] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)8722))));
                        var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_16] [i_16] [i_16])) ? (((/* implicit */int) (unsigned short)24017)) : (((/* implicit */int) arr_13 [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 - 1] [(unsigned short)19] [i_16]))));
                        arr_67 [i_0] |= ((/* implicit */signed char) (+(((/* implicit */int) arr_25 [i_16 + 1]))));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? ((-(arr_17 [(signed char)3] [i_1] [i_2] [i_16]))) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_1] [i_16] [i_16] [i_16] [i_0]))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) arr_64 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                        arr_70 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) arr_57 [i_0] [i_0] [i_1] [i_0] [i_0])))) : ((+(((/* implicit */int) (short)(-32767 - 1)))))));
                        arr_71 [i_0] [i_1] [i_1] [i_2] [i_1] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_2 - 1] [i_1] [i_2 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) arr_47 [i_0] [(unsigned short)15] [i_0] [i_17] [i_2] [(signed char)21])) ? (((/* implicit */int) arr_46 [i_17] [i_0] [i_2 - 1] [i_17] [i_0] [i_17] [i_0])) : (((/* implicit */int) var_9))))));
                    }
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) arr_17 [i_2] [i_2 - 1] [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        for (int i_19 = 0; i_19 < 24; i_19 += 1) 
                        {
                            {
                                arr_77 [i_1] [i_1] = ((/* implicit */unsigned short) min(((short)5766), (((/* implicit */short) max(((signed char)127), (var_2))))));
                                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) arr_73 [i_0] [(unsigned short)4] [i_0] [i_18]))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */int) arr_76 [(unsigned short)11] [i_0] [i_0] [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_20 = 2; i_20 < 21; i_20 += 2) 
    {
        for (int i_21 = 0; i_21 < 23; i_21 += 1) 
        {
            {
                arr_82 [i_21] [i_21] = ((/* implicit */signed char) 0);
                var_40 ^= ((/* implicit */unsigned char) var_13);
                arr_83 [(unsigned char)14] [i_20] [(signed char)18] |= ((/* implicit */signed char) arr_52 [(unsigned short)22] [i_21] [i_20] [i_20] [(unsigned short)22]);
            }
        } 
    } 
    var_41 = ((/* implicit */int) var_1);
}
