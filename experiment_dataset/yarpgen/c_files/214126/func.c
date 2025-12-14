/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214126
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_2])))) == (((/* implicit */int) (unsigned char)131))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_4)))))) + (2147483647))) << (((((max((((/* implicit */int) (short)(-32767 - 1))), ((~(((/* implicit */int) var_2)))))) + (23779))) - (8)))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_11))));
                                var_19 = ((/* implicit */short) var_14);
                                var_20 = ((/* implicit */unsigned char) max((((int) (!(((/* implicit */_Bool) (unsigned char)179))))), (((arr_11 [(short)9] [i_3 - 1] [i_4] [i_4] [i_4]) << (((((((/* implicit */int) var_13)) + (5954))) - (7)))))));
                                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >> (((max((((/* implicit */int) ((((/* implicit */int) var_14)) == (var_15)))), (((((var_11) + (2147483647))) << (((((var_11) + (1138061147))) - (17))))))) - (2018845022)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_9 [i_0]) : ((+(((/* implicit */int) (short)10202)))))))));
                    var_23 |= ((/* implicit */short) arr_5 [(short)15]);
                }
            } 
        } 
        arr_15 [(unsigned char)0] [i_0] = ((/* implicit */unsigned char) ((short) min((-2147483645), (((/* implicit */int) arr_5 [i_0])))));
        var_24 += ((((/* implicit */_Bool) min((arr_10 [i_0] [(short)4] [i_0] [i_0]), (((/* implicit */short) ((unsigned char) arr_4 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)26))) : (((((/* implicit */_Bool) var_10)) ? (((int) (short)27351)) : (((/* implicit */int) (unsigned char)68)))));
        arr_16 [(unsigned char)9] |= ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (short)-32751))));
    }
    var_25 = ((/* implicit */unsigned char) ((int) min(((short)-27928), (((/* implicit */short) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_10))))))));
    var_26 += ((/* implicit */int) (short)22701);
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)12172)) == (((/* implicit */int) max(((unsigned char)190), ((unsigned char)23))))));
            arr_25 [i_6 + 1] [i_6] [8] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_14)) - (139)))));
            arr_26 [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [i_6 + 3] [i_5])) ? (arr_0 [i_5] [i_6 + 3]) : (((/* implicit */int) (short)29402))))) ? ((-(((/* implicit */int) (short)-25337)))) : (((arr_0 [i_5] [i_6 + 3]) << (((arr_0 [i_5] [i_6 + 3]) - (1101093806)))))));
        }
        for (int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_28 = ((/* implicit */short) max((var_28), (var_4)));
            arr_30 [i_5] = ((/* implicit */unsigned char) -505543077);
            var_29 = var_5;
        }
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    {
                        arr_40 [i_5] [i_8] [i_9] [i_10] = ((((((/* implicit */int) (unsigned char)23)) == (((/* implicit */int) var_13)))) ? (((/* implicit */int) max((((var_8) == (((/* implicit */int) arr_34 [i_10] [i_9] [i_8])))), (((((/* implicit */int) arr_7 [15] [i_8] [i_10])) == (((/* implicit */int) arr_21 [i_8]))))))) : (((/* implicit */int) var_14)));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_29 [i_5] [i_8]))));
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_23 [i_10]))));
                        /* LoopSeq 1 */
                        for (short i_11 = 2; i_11 < 20; i_11 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((short) -1391584375)))));
                            var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)96))))) ? (var_11) : (((((arr_33 [i_5]) % (var_16))) % (((((/* implicit */int) (unsigned char)11)) << (((((/* implicit */int) var_13)) + (5950)))))))));
                            var_34 |= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_6 [i_11] [i_11] [i_11 - 2] [i_11 + 1]))) % (((int) arr_6 [i_5] [i_11 + 1] [i_11 - 1] [i_11 - 1]))));
                        }
                        arr_45 [i_5] [i_9] [i_9] |= ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)232))))) ? (-1423661612) : (((/* implicit */int) ((arr_44 [i_5] [i_5]) == (arr_44 [i_5] [i_9])))));
                    }
                } 
            } 
        } 
        var_35 = ((int) ((1252960718) == (566185218)));
        /* LoopSeq 2 */
        for (int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) arr_41 [i_12] [i_12] [i_12] [i_5] [i_5]))));
            var_37 += (+(((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (short)-30292)) : (var_7))));
            arr_48 [i_5] [i_5] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((-(((/* implicit */int) arr_34 [i_12] [i_12] [i_12])))) + (2147483647))) << (((((/* implicit */int) arr_7 [i_5] [i_5] [i_12])) - (173)))))) ? (((((/* implicit */int) ((unsigned char) var_11))) << (((((((/* implicit */int) arr_39 [i_5] [i_5] [i_12] [i_12])) << (((((/* implicit */int) (unsigned char)206)) - (190))))) - (14286833))))) : (arr_33 [i_5])));
        }
        for (unsigned char i_13 = 3; i_13 < 20; i_13 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_14 = 1; i_14 < 17; i_14 += 3) 
            {
                var_38 = ((/* implicit */unsigned char) max(((-(1523274731))), (((((/* implicit */_Bool) arr_41 [i_5] [i_13] [i_14] [(unsigned char)17] [i_14])) ? (var_11) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                var_39 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((int) -2077236394)) + (2147483647))) >> (((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)229))))))))));
                arr_54 [i_5] [i_5] [i_13 - 2] [i_14 + 2] &= ((int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_47 [i_13 - 3] [i_14 - 1] [i_14]))));
            }
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_46 [i_15])), (var_13)))) ? (((/* implicit */int) arr_13 [i_5] [(short)9] [(unsigned char)12] [i_5] [i_13 - 2])) : ((+(arr_36 [i_5] [(unsigned char)2] [i_15] [i_15])))))) ? (((((arr_56 [i_13] [i_13 - 1] [i_13] [i_13]) + (2147483647))) >> (((arr_56 [i_5] [i_13 - 3] [(unsigned char)3] [i_5]) + (58503212))))) : ((((((-(var_8))) + (2147483647))) << (((((int) 1423661611)) - (1423661611))))))))));
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])) == ((~(((((/* implicit */_Bool) (unsigned char)20)) ? (var_1) : (-1423661612)))))));
                var_42 += ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_16))) ? ((~(((((/* implicit */int) var_6)) % (((/* implicit */int) var_9)))))) : (((int) (unsigned char)23))));
                arr_58 [i_5] [i_13 + 1] [i_15] |= ((int) (!(((/* implicit */_Bool) arr_56 [i_5] [i_13] [i_15] [i_13 - 1]))));
            }
            /* LoopNest 3 */
            for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                for (int i_17 = 4; i_17 < 20; i_17 += 2) 
                {
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            var_43 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((int) 1423661612)), (((((/* implicit */int) (short)26317)) >> (((((/* implicit */int) var_3)) + (29276)))))))) ? (((((/* implicit */_Bool) arr_65 [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13 + 1])) ? ((~(1423661621))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)205)) == (((/* implicit */int) (unsigned char)50))))))) : (((/* implicit */int) max((arr_35 [i_13 + 1] [i_13 - 2] [i_17 - 4]), (((/* implicit */short) (unsigned char)48)))))));
                            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_41 [i_5] [i_13 + 1] [i_13 - 2] [i_13 - 2] [(unsigned char)8])) ? (((/* implicit */int) var_4)) : (arr_66 [i_13] [i_17 - 4] [(short)9])))))));
                        }
                    } 
                } 
            } 
        }
    }
}
