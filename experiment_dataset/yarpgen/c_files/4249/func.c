/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4249
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_10 = ((/* implicit */int) min((var_10), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3)))))))));
                    arr_7 [i_0] [i_1] [i_2] = arr_6 [i_1] [i_0];
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (arr_9 [i_3] [i_2] [i_1] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_3]));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(2)));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */unsigned int) var_6);
                            var_12 = ((/* implicit */int) ((arr_2 [i_0] [i_1] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        }
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_20 [i_5] [i_3] [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_0])) || (((/* implicit */_Bool) var_6))));
                            var_13 = ((/* implicit */int) var_7);
                        }
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_24 [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_3]))));
                            var_14 = ((/* implicit */signed char) arr_13 [i_6] [i_3] [i_3] [i_0] [i_2] [i_1] [i_0]);
                            var_15 *= ((/* implicit */signed char) arr_17 [i_0]);
                        }
                        var_16 |= ((arr_22 [i_0]) % (arr_22 [i_1]));
                    }
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_28 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_7]);
                    arr_29 [i_7] [i_1] [i_7] = ((/* implicit */unsigned int) ((int) var_6));
                }
                for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_17 = (+(-1517365407));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) max((arr_15 [i_0] [i_1] [i_1] [i_1] [i_10] [i_1]), (arr_15 [i_0] [i_1] [i_8] [i_0] [i_10] [i_10])))) ? (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_10] [i_10])) ? (3540088696U) : (((/* implicit */unsigned int) arr_25 [i_9] [i_8] [i_1] [i_0]))))))));
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_9] [i_10]))))) ? (((unsigned int) (signed char)-118)) : (((/* implicit */unsigned int) ((2147483637) / (2147483637)))))) >= (((/* implicit */unsigned int) min((arr_23 [i_0] [i_1] [i_8] [i_9] [i_10]), (((-1276222120) / (1073741823))))))));
                            var_20 = ((/* implicit */int) var_5);
                            arr_39 [i_10] [i_9] [i_9] [i_8] [i_0] [i_1] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-125)) ? (((((/* implicit */_Bool) 3329111381U)) ? (692420485U) : (((/* implicit */unsigned int) 5)))) : (((/* implicit */unsigned int) ((int) arr_6 [i_0] [i_1])))));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_21 = ((1659400868) + (((int) (signed char)-6)));
                            var_22 = (+(((/* implicit */int) arr_12 [i_0] [i_1] [i_8] [i_9] [i_11])));
                            arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) ((signed char) var_1)));
                        }
                        for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            arr_46 [i_9] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-44)) | (((/* implicit */int) (signed char)-96))));
                            arr_47 [i_0] [i_1] [i_8] [i_9] [i_12] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_0))) ? (((arr_2 [i_12] [i_9] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((arr_18 [i_0] [i_1] [i_8] [i_9] [i_9] [i_12]) - (arr_18 [i_12] [i_9] [i_9] [i_1] [i_1] [i_0]))))));
                        }
                        for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            arr_51 [i_0] = ((/* implicit */int) (signed char)65);
                            var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_22 [i_1])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)33)), (arr_30 [i_0] [i_1])))) : (arr_15 [i_13] [i_13] [i_0] [i_8] [i_1] [i_0])));
                        }
                        arr_52 [i_8] [i_9] = arr_2 [i_1] [i_8] [i_1];
                        arr_53 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */int) max((3540088696U), (((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_0]))));
                        arr_54 [i_9] [i_8] [i_1] [i_0] = ((/* implicit */int) var_4);
                        var_24 = var_3;
                    }
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        arr_58 [i_14] [i_1] [i_1] [i_1] [i_1] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-49)) != ((-(5)))));
                        arr_59 [i_14] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(-26)));
                        /* LoopSeq 4 */
                        for (int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            arr_63 [i_15] [i_14] [i_0] = ((/* implicit */int) var_7);
                            arr_64 [i_14] [i_8] [i_14] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            arr_67 [i_14] [i_1] [i_8] [i_14] [i_1] [i_0] = var_3;
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14] = min(((((-(2596244157U))) | (max((var_0), (((/* implicit */unsigned int) (signed char)-1)))))), (((/* implicit */unsigned int) var_1)));
                        }
                        /* vectorizable */
                        for (signed char i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) arr_62 [i_0] [i_0] [i_0] [i_0] [i_14]);
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_62 [i_0] [i_0] [i_0] [i_0] [i_8])) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) (signed char)100))))))));
                        }
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                        {
                            var_27 *= ((unsigned int) arr_37 [i_18]);
                            arr_75 [i_18] [i_14] [i_18] [i_18] [i_18] [i_18] = 3188246131U;
                        }
                        var_28 &= ((/* implicit */unsigned int) arr_72 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_29 *= (signed char)120;
                    arr_76 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1451509872U)) ? (33488896U) : (2971445973U)));
                    var_30 = ((/* implicit */int) var_1);
                }
                for (signed char i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        for (int i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            {
                                arr_83 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_2) - (1439761767))))) : (((/* implicit */int) var_6)))));
                                var_31 = ((/* implicit */int) arr_80 [i_0] [i_1] [i_19] [i_20] [i_21]);
                            }
                        } 
                    } 
                    arr_84 [i_0] [i_1] [i_19] [i_19] = ((/* implicit */unsigned int) var_2);
                    arr_85 [i_0] [i_1] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 2147483647)) <= (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_19])));
                    arr_86 [i_0] [i_0] [i_0] [i_19] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_0] [i_0] [i_0] [i_0] [i_19])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (signed char)-3)) : (((((arr_62 [i_0] [i_1] [i_0] [i_19] [i_19]) + (2147483647))) << (((((arr_62 [i_0] [i_0] [i_0] [i_0] [i_19]) + (1715174324))) - (26)))))));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 24; i_22 += 2) 
                    {
                        for (signed char i_23 = 0; i_23 < 24; i_23 += 1) 
                        {
                            {
                                var_32 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)0))));
                                arr_92 [i_23] [i_22] [i_19] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))) | (2614988060U)));
                                var_33 = ((((/* implicit */int) (signed char)2)) ^ ((~(((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                }
                var_34 |= ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) 705052102)), (min((arr_61 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1]), (((/* implicit */unsigned int) arr_89 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_35 &= var_8;
    /* LoopNest 3 */
    for (unsigned int i_24 = 0; i_24 < 22; i_24 += 4) 
    {
        for (int i_25 = 0; i_25 < 22; i_25 += 4) 
        {
            for (unsigned int i_26 = 0; i_26 < 22; i_26 += 4) 
            {
                {
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 81885244)) <= (max((949873793U), (((/* implicit */unsigned int) arr_94 [i_24])))))))) : (((((((/* implicit */_Bool) arr_3 [i_26])) ? (((/* implicit */unsigned int) 1663278670)) : (var_0))) << ((((-(510))) + (530)))))));
                    var_37 *= ((/* implicit */signed char) 0U);
                    arr_100 [i_26] [i_25] [i_24] = ((((min((((/* implicit */int) var_6)), (arr_5 [i_24] [i_24] [i_24] [i_24]))) - (((/* implicit */int) ((signed char) 196126514U))))) - (((arr_26 [i_24] [i_25] [i_26]) + (arr_19 [i_26] [i_26] [i_26] [i_25] [i_24] [i_24] [i_25]))));
                }
            } 
        } 
    } 
}
