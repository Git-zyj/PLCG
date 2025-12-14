/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38640
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)30049)) % (2142855408))) << (((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)30049)))) + (16736))) - (2)))))) ? (((/* implicit */int) max((arr_2 [i_0]), (var_2)))) : (2147483647)));
        var_15 = var_7;
    }
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        arr_7 [i_1] &= arr_6 [i_1 + 1] [i_1 + 1];
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((arr_6 [i_1 - 1] [i_1 - 1]) == (((/* implicit */int) var_4)))))));
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_18 [(unsigned short)10] [i_4] [(unsigned short)8] [i_3] [i_2] [(unsigned short)3] = ((((/* implicit */int) var_4)) / (arr_11 [i_5] [i_3 + 1] [i_2]));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_3 + 1] [i_4 + 1])) : (((/* implicit */int) arr_10 [i_1 - 2] [i_3 - 1] [i_4 - 1]))));
                            var_18 = ((/* implicit */short) var_9);
                            var_19 = ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) var_2)));
                            var_20 = ((/* implicit */int) (unsigned short)40714);
                        }
                    } 
                } 
            }
            for (short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                var_21 &= ((/* implicit */short) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-206)) : (-704706028)))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_11))));
                            var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)40827)) | (((/* implicit */int) var_12))));
                            var_24 = ((int) arr_15 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 + 1]);
                            var_25 = ((/* implicit */int) arr_9 [i_6] [i_6]);
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_8])) && (((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
            }
            var_27 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-1379)) ? (((/* implicit */int) (short)206)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
        }
    }
    for (int i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        var_28 = ((/* implicit */short) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % ((-2147483647 - 1))))) ? (((/* implicit */int) var_8)) : (max((((/* implicit */int) var_3)), (774552902)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            var_29 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_9] [i_10])) || (((/* implicit */_Bool) var_4)))));
            var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_0)) - (((/* implicit */int) var_12))))));
        }
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)205)) : (((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9])))))) != (((/* implicit */int) ((unsigned short) arr_6 [i_9] [i_11]))))))));
            /* LoopSeq 3 */
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    for (short i_14 = 1; i_14 < 19; i_14 += 4) 
                    {
                        {
                            arr_43 [i_14 + 2] [i_14] [i_12] [i_9] [i_14] [i_9] = ((/* implicit */short) (((~(((((/* implicit */_Bool) (short)205)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_0)))))) > (((((/* implicit */_Bool) arr_6 [i_14 + 3] [i_14 + 2])) ? (((/* implicit */int) ((unsigned short) var_3))) : (var_9)))));
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) arr_25 [15] [i_11] [i_12] [i_13] [(short)11]))));
                        }
                    } 
                } 
                arr_44 [i_11] [i_11] = ((/* implicit */short) var_13);
                arr_45 [i_12] = ((/* implicit */unsigned short) var_9);
                arr_46 [i_9] [i_9] [i_9] = ((/* implicit */int) var_12);
            }
            for (short i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) 1971310154)) ? (322398141) : (((/* implicit */int) (short)206))));
                    var_34 = ((/* implicit */short) arr_25 [(unsigned short)11] [i_15] [5] [i_9] [i_9]);
                }
                for (short i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    var_35 = ((((/* implicit */_Bool) ((int) arr_41 [i_17] [i_17] [i_9] [(short)20] [i_9] [i_9] [i_9]))) ? (((((/* implicit */_Bool) min((arr_17 [i_9] [(unsigned short)12] [(unsigned short)12]), (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [(unsigned short)8] [i_9] [i_11] [i_9] [i_15] [(unsigned short)8]))))) : (max((var_9), (var_5))))) : (((((/* implicit */int) (unsigned short)55716)) / (min((((/* implicit */int) (short)205)), ((-2147483647 - 1)))))));
                    arr_56 [4] [(unsigned short)13] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_9] [i_9] [i_11] [i_9] [i_17])))))));
                    var_36 = ((/* implicit */unsigned short) ((((arr_11 [i_9] [i_11] [i_9]) | (var_5))) << (((((/* implicit */int) var_8)) - (32029)))));
                }
                for (short i_18 = 2; i_18 < 21; i_18 += 4) 
                {
                    arr_60 [i_11] [i_9] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_32 [i_18 - 1])) : (((/* implicit */int) arr_32 [i_18 - 1]))))));
                    var_37 ^= ((/* implicit */unsigned short) arr_34 [i_11] [i_15] [i_15]);
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_18] [i_18 + 1] [i_18 + 1] [i_18] [i_18])) ^ (max(((-2147483647 - 1)), (((/* implicit */int) arr_12 [i_11] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1]))))));
                }
                var_39 = ((/* implicit */int) ((short) ((unsigned short) (short)32767)));
            }
            for (unsigned short i_19 = 1; i_19 < 21; i_19 += 4) 
            {
                var_40 = ((/* implicit */short) ((unsigned short) arr_11 [i_19] [i_11] [(unsigned short)8]));
                arr_65 [i_19] [3] = ((/* implicit */int) arr_58 [i_9] [i_19] [i_9] [i_9] [i_9] [i_9]);
            }
            arr_66 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_13 [i_9] [i_9] [20] [20] [i_11]))))), (arr_39 [i_11] [i_11] [(unsigned short)21])))) >> (((((/* implicit */int) var_10)) - (41129)))));
            var_41 -= ((/* implicit */unsigned short) 146070143);
        }
        for (int i_20 = 2; i_20 < 21; i_20 += 4) 
        {
            arr_70 [i_9] [i_20] &= ((/* implicit */short) var_13);
            arr_71 [i_20] [i_9] = ((/* implicit */unsigned short) (+(var_7)));
        }
        var_42 = ((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) (unsigned short)47237)) ? (((/* implicit */int) (unsigned short)25522)) : (((/* implicit */int) (unsigned short)22514)))) <= (((/* implicit */int) ((((/* implicit */int) arr_49 [i_9] [i_9] [i_9])) <= (((/* implicit */int) arr_33 [i_9] [(short)8] [i_9]))))))));
    }
    /* LoopNest 3 */
    for (short i_21 = 1; i_21 < 10; i_21 += 4) 
    {
        for (unsigned short i_22 = 1; i_22 < 8; i_22 += 4) 
        {
            for (unsigned short i_23 = 3; i_23 < 8; i_23 += 4) 
            {
                {
                    var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_68 [(unsigned short)5] [i_22 + 2])) ? (arr_4 [10] [10]) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-16384)), (arr_58 [i_21] [19] [i_21] [13] [i_23] [(unsigned short)21])))) ? (((/* implicit */int) arr_50 [i_23 + 3] [(unsigned short)16] [(unsigned short)16])) : (max((arr_36 [i_23 + 2] [i_22] [i_21] [i_21]), (((/* implicit */int) (short)-206))))))));
                    var_44 |= ((/* implicit */short) ((min((((/* implicit */int) arr_61 [i_23 - 3] [i_22 + 2] [i_21 + 1])), (((((/* implicit */int) arr_55 [i_22])) - (264241152))))) / (max((((/* implicit */int) (unsigned short)59721)), (((int) arr_72 [i_22]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 3; i_24 < 9; i_24 += 4) 
                    {
                        arr_82 [i_24] [10] [i_21] [i_21] [10] [10] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_22] [i_23] [i_23])) || (((/* implicit */_Bool) 774552902))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_21])) || (((/* implicit */_Bool) var_12))))))) >> (((((/* implicit */int) ((short) max((var_0), (var_4))))) - (20211)))));
                        /* LoopSeq 1 */
                        for (int i_25 = 0; i_25 < 11; i_25 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_84 [i_21] [(unsigned short)10] [i_21] [i_24 - 1] [i_21])) ? (((/* implicit */int) ((short) ((int) var_13)))) : ((((-(var_5))) * (((((/* implicit */int) (short)30049)) / (-488554541)))))));
                            var_46 = (+(min((var_13), (((/* implicit */int) arr_31 [i_24 - 1])))));
                        }
                        /* LoopSeq 1 */
                        for (int i_26 = 0; i_26 < 11; i_26 += 4) 
                        {
                            arr_90 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((~(arr_34 [i_21 + 1] [i_22 + 3] [i_23 + 3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (2147483647)))))))));
                            var_47 = ((/* implicit */unsigned short) -700900339);
                            arr_91 [i_26] [i_26] [i_23] [i_26] [(short)2] [(short)0] [10] &= var_10;
                            arr_92 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_1)))), ((-(var_7)))));
                            var_48 = ((/* implicit */short) arr_73 [i_23] [i_26]);
                        }
                        var_49 = ((/* implicit */int) max((var_49), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_24 + 1] [i_22 + 2]))))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)2419)) : (((/* implicit */int) var_0)))) | (min((((/* implicit */int) (short)28894)), (arr_34 [i_21] [i_21] [i_23]))))) : (((/* implicit */int) ((201326592) >= (((((/* implicit */_Bool) var_2)) ? (var_7) : (arr_19 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1]))))))))));
                    }
                    for (int i_27 = 0; i_27 < 11; i_27 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_28 = 0; i_28 < 11; i_28 += 4) 
                        {
                            arr_97 [i_21] [3] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_21 + 1] [i_27])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_75 [i_22 - 1] [i_23 - 2]))))) ? (2147483647) : (min((((/* implicit */int) arr_40 [i_21 - 1] [i_22])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_69 [(short)0] [(short)20])) : (((/* implicit */int) arr_38 [i_22 + 3] [i_22 + 3] [i_22 + 3] [i_22 + 1] [(unsigned short)0] [i_22 - 1]))))))));
                            var_50 = ((/* implicit */int) (short)-207);
                        }
                        arr_98 [i_21] [i_21] [i_22] [i_21] [i_21] [i_27] = ((/* implicit */short) var_5);
                    }
                    var_51 = ((/* implicit */int) (short)-21510);
                }
            } 
        } 
    } 
    var_52 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
}
