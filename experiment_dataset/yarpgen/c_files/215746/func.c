/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215746
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((unsigned int) 0)) : (((/* implicit */unsigned int) max((arr_2 [i_0] [i_1]), (((/* implicit */int) var_1))))))));
            arr_5 [i_0] [(unsigned short)0] = ((/* implicit */signed char) ((int) (unsigned short)511));
        }
        for (int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) arr_6 [i_2 + 3] [i_2] [i_2]);
            /* LoopNest 3 */
            for (unsigned short i_3 = 2; i_3 < 23; i_3 += 4) 
            {
                for (signed char i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    for (int i_5 = 3; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((int) (signed char)0));
                            arr_15 [i_5] [23] [i_5] [i_2 + 1] [i_5] = ((((/* implicit */_Bool) arr_8 [i_0] [(short)15])) ? (((int) -1263547857)) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_0] [i_3] [16])) : (var_8))) : (var_8))));
                            var_20 = ((/* implicit */int) ((short) arr_3 [i_4 + 2]));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_6 = 3; i_6 < 21; i_6 += 1) 
            {
                var_21 = ((((/* implicit */_Bool) (signed char)120)) ? (17) : (((/* implicit */int) (unsigned short)65025)));
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 2; i_8 < 23; i_8 += 4) 
                    {
                        arr_26 [(signed char)0] [i_7] [i_6 - 2] [i_2] [i_0] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (var_5));
                        var_22 = ((/* implicit */int) arr_25 [i_0] [i_2 + 1] [i_6 - 1] [i_6 - 1] [i_7] [i_7] [i_8 - 2]);
                    }
                    var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)15] [i_7] [i_6] [i_2 + 3] [i_2 - 1] [(signed char)12])) ? (var_5) : (var_10)))) ? (((((/* implicit */_Bool) (unsigned short)513)) ? ((-2147483647 - 1)) : (-7))) : (min((var_8), (((/* implicit */int) arr_3 [i_6])))))));
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 22; i_9 += 4) 
                {
                    var_24 = ((/* implicit */signed char) ((unsigned int) arr_14 [(short)12] [8U] [i_6 + 1] [i_9]));
                    var_25 += ((signed char) arr_21 [i_0] [i_2 + 4] [i_9 + 2]);
                }
            }
            for (unsigned short i_10 = 4; i_10 < 20; i_10 += 4) 
            {
                arr_31 [i_0] [(signed char)21] [i_2 + 2] [i_10 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10 - 1] [i_10] [i_10] [i_2 + 4] [i_2 + 3] [i_2 + 3])) ? (var_8) : (var_11)))) ? (((/* implicit */unsigned int) min((arr_12 [i_0] [i_2] [i_2 + 1] [i_2 + 3] [i_0]), (((/* implicit */int) arr_13 [i_10 + 3] [19U] [i_10 + 1] [(signed char)12] [i_2 + 4] [i_2]))))) : (((((/* implicit */_Bool) 3)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                arr_32 [i_10 - 2] [(signed char)0] [i_2 + 4] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_30 [i_0])) ? (((/* implicit */int) ((short) var_7))) : (arr_12 [i_10 - 3] [i_10 - 2] [i_10 - 1] [i_2 + 1] [i_2 + 3]))));
            }
            arr_33 [i_0] [i_0] [i_2 + 4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [7] [i_2 + 3] [i_2 + 2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((signed char) (signed char)105))) : (((/* implicit */int) arr_23 [i_2 + 2] [i_2 + 4]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_28 [i_0] [i_2 + 2]) : (arr_28 [i_0] [i_2 - 1])))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [(signed char)23] [i_0]), (((/* implicit */unsigned short) var_1)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_0] [i_0] [i_2]) : (arr_16 [i_0] [(unsigned short)7] [i_2 + 3] [i_2]))))))));
            var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 4] [i_2 + 3] [i_2 + 3])) ? (max((((/* implicit */unsigned int) var_5)), (arr_25 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2 - 1] [i_2 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 2] [(unsigned short)22] [8U])))))));
        }
        for (signed char i_11 = 1; i_11 < 23; i_11 += 2) 
        {
            var_27 = ((/* implicit */signed char) var_10);
            var_28 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) arr_19 [i_0] [i_0])), (((((/* implicit */_Bool) (short)26986)) ? (((/* implicit */unsigned int) -29)) : (1603716504U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_21 [(signed char)15] [i_11] [i_11 + 1]) : (arr_16 [i_0] [(short)8] [i_0] [14])))) ? (arr_25 [i_0] [i_11] [i_11 - 1] [16] [i_0] [i_11] [i_11 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_15))))))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned int) arr_8 [i_0] [i_11 + 1])), (max((((/* implicit */unsigned int) arr_16 [i_0] [(signed char)9] [i_11] [i_11])), (var_12)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) var_11)))));
        }
        /* LoopSeq 1 */
        for (int i_12 = 1; i_12 < 23; i_12 += 1) 
        {
            arr_38 [i_0] [i_12] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 3072)) ? (((/* implicit */int) (unsigned short)52350)) : (((/* implicit */int) (unsigned short)518)))));
            /* LoopSeq 1 */
            for (int i_13 = 1; i_13 < 21; i_13 += 3) 
            {
                var_30 = ((/* implicit */int) ((unsigned short) arr_19 [i_0] [i_0]));
                var_31 = var_10;
                var_32 = ((/* implicit */signed char) arr_11 [i_0] [i_12] [i_13]);
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_12 + 1] [i_13 + 2])) ? (arr_7 [i_0] [i_12 + 1] [i_12 + 1]) : (arr_7 [i_13 - 1] [i_12 + 1] [i_13 + 2])))) ? (((((/* implicit */_Bool) var_14)) ? (arr_7 [i_0] [i_12 - 1] [i_13 + 2]) : (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) var_13)) ? (arr_7 [(signed char)7] [i_12] [i_13 + 1]) : (arr_7 [i_0] [i_12 - 1] [i_13 + 2])))));
            }
        }
    }
    for (int i_14 = 2; i_14 < 19; i_14 += 4) 
    {
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -822204042)) ? (max((arr_25 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14] [i_14 - 2] [i_14 + 2] [i_14]), (((/* implicit */unsigned int) -1685660540)))) : (((/* implicit */unsigned int) max((var_5), (28))))))) ? (arr_22 [i_14 + 2] [i_14 - 2] [i_14] [i_14 - 1]) : (max((arr_21 [i_14 + 2] [i_14 - 2] [16]), (((/* implicit */int) arr_1 [i_14 - 2] [i_14 - 1]))))));
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_14 - 1])) ? (((/* implicit */int) ((signed char) 0U))) : (((/* implicit */int) arr_14 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14]))));
        var_36 = var_7;
    }
    for (signed char i_15 = 3; i_15 < 20; i_15 += 2) 
    {
        var_37 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_39 [i_15 + 1] [i_15])) ? (((/* implicit */int) arr_40 [i_15] [i_15 + 1] [i_15 - 1] [i_15])) : (max((1288179439), (((/* implicit */int) (unsigned short)0)))))), (((int) max((((/* implicit */unsigned short) arr_24 [i_15 - 1] [i_15 - 2] [i_15 + 1] [i_15] [i_15 - 2])), (var_16))))));
        /* LoopSeq 2 */
        for (int i_16 = 3; i_16 < 20; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                for (signed char i_18 = 1; i_18 < 20; i_18 += 1) 
                {
                    {
                        var_38 = max((((/* implicit */int) var_1)), (((int) ((unsigned short) arr_34 [i_17]))));
                        var_39 = ((/* implicit */int) var_3);
                    }
                } 
            } 
            var_40 = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) max((var_10), (var_5))))), (arr_55 [i_15 + 1] [i_15 - 2] [i_16 - 3] [i_16 - 3])));
            /* LoopSeq 2 */
            for (signed char i_19 = 1; i_19 < 20; i_19 += 3) 
            {
                var_41 = ((/* implicit */signed char) arr_46 [i_15]);
                arr_58 [i_15] [i_15] [i_19] [i_15 - 3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_16 [i_19 - 1] [i_16] [i_15 - 1] [i_15 + 1])) ? (arr_16 [i_15 - 1] [i_16 - 2] [i_16 - 1] [i_16 - 1]) : (var_14))), (((((/* implicit */_Bool) arr_51 [i_15 - 1] [i_15 - 3] [(unsigned short)8] [i_15 - 1])) ? (arr_51 [i_15] [i_15] [i_15] [i_15 - 1]) : (((/* implicit */int) arr_53 [i_15] [i_15 - 2] [i_15 + 1] [i_15 - 1] [i_15 - 2]))))));
                var_42 ^= arr_21 [i_19 + 1] [i_16] [i_15];
            }
            for (unsigned int i_20 = 1; i_20 < 20; i_20 += 4) 
            {
                arr_62 [i_15] [i_20 + 1] [(signed char)8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_15 - 3])) : (((/* implicit */int) arr_3 [i_15 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_20 + 1] [i_20 + 1]))) : (((unsigned int) var_0)));
                arr_63 [i_20 - 1] [i_15] [i_15] [i_15 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_2))) ? (arr_27 [i_15 - 1] [i_16 - 2] [i_16 - 2] [i_15] [16] [i_15 + 1]) : (var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_15 - 3] [i_15 - 2] [i_16 + 1] [i_20 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) arr_19 [i_15 - 2] [(signed char)15])) ? (((/* implicit */unsigned int) arr_27 [i_20] [i_20] [i_20] [23U] [i_15] [i_15])) : (arr_25 [(unsigned short)13] [i_20 + 1] [18] [i_16 + 1] [i_16] [i_15 - 1] [i_15 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_15] [(unsigned short)23]))))) : (((((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_13))))) ? (arr_35 [i_15 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_20 + 1] [i_20] [i_16] [(signed char)8])))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_21 = 2; i_21 < 20; i_21 += 2) 
            {
                arr_67 [i_15 + 1] [i_16 - 1] [i_15] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_8))) ? (var_14) : (((/* implicit */int) ((short) var_3)))))) ? (var_5) : (((((/* implicit */_Bool) arr_42 [i_15])) ? (var_2) : (((((/* implicit */_Bool) arr_27 [i_15] [(unsigned short)14] [i_16 + 1] [i_16 - 2] [i_21] [i_21 + 1])) ? (((/* implicit */int) (signed char)-78)) : (-1288179439)))))));
                /* LoopSeq 2 */
                for (int i_22 = 0; i_22 < 21; i_22 += 4) 
                {
                    var_43 = ((/* implicit */int) var_16);
                    arr_70 [i_15] = ((/* implicit */unsigned short) var_12);
                    var_44 = ((/* implicit */unsigned short) max((((short) (signed char)-78)), (((/* implicit */short) (signed char)57))));
                    arr_71 [i_15] [i_16 - 3] [i_15] [i_21 - 1] [i_21] [i_22] = ((int) ((int) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */int) arr_3 [i_16 - 3])))));
                }
                for (short i_23 = 2; i_23 < 20; i_23 += 4) 
                {
                    arr_75 [i_23 + 1] [i_15] [i_15] [(short)4] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_72 [i_15 - 1] [i_15] [i_15] [i_21 - 2] [i_23 - 2] [i_23])) : (min((822204041), (((/* implicit */int) (signed char)11)))))));
                    arr_76 [(signed char)14] [i_16 - 1] [i_15] [(short)3] = ((/* implicit */unsigned short) var_5);
                    /* LoopSeq 1 */
                    for (int i_24 = 1; i_24 < 18; i_24 += 1) 
                    {
                        var_45 = ((((/* implicit */_Bool) arr_61 [i_15])) ? (((/* implicit */int) ((signed char) arr_78 [i_15 + 1] [(signed char)14] [i_15 - 2] [i_15 - 3] [i_15 - 1] [i_15 - 1]))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_50 [19U] [i_15] [i_21 + 1] [1U])) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) arr_47 [i_15 - 2])))) : (var_15))));
                        arr_79 [(unsigned short)4] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_15] [i_16 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_15 - 3] [i_24 + 3])) ? (arr_39 [i_15 - 3] [i_24 + 3]) : (arr_39 [i_15 - 3] [i_24 + 3])))) ? (((unsigned int) arr_24 [i_15 + 1] [i_16 - 3] [i_21 - 2] [i_23 - 2] [i_24 + 2])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_24 + 3] [i_23] [i_16] [i_16] [i_15 - 2])) ? (((((/* implicit */_Bool) var_5)) ? (var_10) : (arr_22 [i_15 + 1] [6] [i_21 - 1] [i_23]))) : (((/* implicit */int) ((short) arr_53 [i_23] [i_23 - 2] [12] [i_23 - 1] [i_23 - 1]))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_25 = 1; i_25 < 19; i_25 += 2) 
                    {
                        arr_83 [i_15] [i_16] [i_21] [i_23 - 1] [(signed char)1] [i_23 - 1] [i_15] = ((/* implicit */int) arr_52 [i_15 - 1] [i_15] [i_15 - 1]);
                        var_46 = ((/* implicit */int) arr_6 [i_15 - 1] [i_15 + 1] [i_15 - 1]);
                    }
                    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned short)9477))))) ? (((/* implicit */int) arr_19 [i_15] [(unsigned short)14])) : (((((/* implicit */_Bool) -1625421504)) ? (((/* implicit */int) (signed char)-105)) : (-265634791)))))) : (var_12))))));
                }
                var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [(signed char)11] [5] [i_15 - 2] [i_15] [i_15 - 2] [i_15 - 1])) ? (((/* implicit */int) max(((unsigned short)22619), (((/* implicit */unsigned short) (short)120))))) : (((/* implicit */int) ((unsigned short) (signed char)3)))));
            }
        }
        for (signed char i_26 = 2; i_26 < 20; i_26 += 4) 
        {
            arr_87 [9] [i_15] = ((/* implicit */signed char) arr_8 [i_15 - 3] [i_26 - 2]);
            var_49 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (signed char)127)) ? (-822204061) : (16))));
        }
    }
    for (int i_27 = 2; i_27 < 23; i_27 += 4) 
    {
        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_27])) ? (((((/* implicit */_Bool) arr_41 [i_27])) ? (((/* implicit */int) arr_41 [i_27])) : (((/* implicit */int) arr_41 [i_27])))) : (((((/* implicit */_Bool) arr_7 [i_27 - 1] [i_27 + 1] [i_27])) ? (((/* implicit */int) var_9)) : (arr_7 [i_27 - 1] [i_27] [i_27 - 2])))));
        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_89 [i_27 + 1])), (var_3))))) : (arr_36 [i_27 - 1])));
    }
    var_52 = ((/* implicit */signed char) min((-33), (-1216947840)));
    var_53 = ((/* implicit */short) min((((signed char) ((unsigned short) var_2))), (((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (var_2))))));
}
