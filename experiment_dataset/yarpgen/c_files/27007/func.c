/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27007
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_0] [i_0] |= min((((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_1 [i_0] [(unsigned char)3]))))), (((/* implicit */unsigned short) arr_2 [i_2])));
                    arr_8 [i_0] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned short)25398)))), (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_9))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_1] [(unsigned char)9] [i_0] = ((/* implicit */unsigned short) min((min((((((/* implicit */int) arr_1 [(unsigned short)2] [(unsigned short)2])) >> (((((/* implicit */int) var_4)) - (38))))), (((/* implicit */int) arr_3 [i_3 - 1] [i_2 + 1])))), (((/* implicit */int) max((arr_9 [i_0] [i_0] [(unsigned char)12] [i_3 - 1]), (arr_9 [i_1 + 1] [i_1 + 2] [i_2] [i_3 - 2]))))));
                        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (unsigned short)25398))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            arr_14 [i_0] [(unsigned short)11] [i_2] [i_3] [i_4] = arr_12 [(unsigned short)7] [i_4] [(unsigned char)3] [i_2] [(unsigned char)1] [i_0] [(unsigned short)12];
                            arr_15 [i_4] [i_3] [i_2 - 2] [i_2 - 2] [(unsigned char)5] [i_0] = ((/* implicit */unsigned char) arr_3 [i_1 - 2] [i_1 - 2]);
                            var_11 = ((/* implicit */unsigned short) min((var_11), (min((max((((/* implicit */unsigned short) arr_10 [i_2 + 3] [(unsigned short)6] [i_1] [i_1])), (var_2))), (((/* implicit */unsigned short) arr_10 [i_2 - 1] [i_2] [i_2] [i_2]))))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [(unsigned short)6] [i_1 - 1] [i_2 - 1] [i_4])) || (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                        }
                    }
                    for (unsigned char i_5 = 4; i_5 < 9; i_5 += 2) 
                    {
                        var_13 = ((unsigned short) var_5);
                        arr_18 [i_0] [(unsigned char)1] [i_1] [i_1] [i_2] [(unsigned char)6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned short)3968), (((/* implicit */unsigned short) arr_2 [i_1 + 1])))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_10 [i_0] [i_1] [(unsigned char)5] [i_0]))));
                        arr_23 [i_6] [i_2] [i_6] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 1] [i_6])) ? (((/* implicit */int) arr_6 [i_6] [(unsigned short)1] [i_1] [(unsigned short)1])) : (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2] [(unsigned char)2]))))));
                        var_15 = arr_20 [i_6] [i_2] [i_6];
                    }
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_19 [(unsigned char)8] [(unsigned char)8] [i_1 - 1] [i_2 + 2])), ((unsigned short)40126)))) ? ((+(((((/* implicit */int) arr_19 [i_0] [i_7] [i_7] [i_7])) / (((/* implicit */int) var_4)))))) : (max(((+(((/* implicit */int) (unsigned short)16)))), (((/* implicit */int) (unsigned short)40155))))));
                        var_17 -= ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_7] [i_7] [(unsigned short)5])))), (((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_0] [(unsigned char)6] [i_2] [i_7] [(unsigned char)10])))));
                        arr_27 [i_0] [i_2] [(unsigned char)11] [i_0] = min((((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_0 [i_0]))))))), (max((arr_19 [i_0] [i_2 - 1] [(unsigned short)2] [i_2 - 1]), (arr_19 [(unsigned short)11] [i_2 + 3] [i_7] [i_7]))));
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_21 [i_0] [i_0] [(unsigned short)3] [i_0])), (max(((+(((/* implicit */int) arr_26 [(unsigned char)3] [(unsigned char)6] [(unsigned short)9] [(unsigned short)9] [i_1] [i_0])))), (((/* implicit */int) (unsigned char)1))))));
                        var_19 = arr_26 [i_0] [i_1 + 3] [(unsigned short)3] [(unsigned char)0] [i_2] [i_7];
                    }
                    arr_28 [(unsigned short)2] [(unsigned short)2] = var_0;
                }
                for (unsigned short i_8 = 2; i_8 < 10; i_8 += 2) /* same iter space */
                {
                    arr_31 [i_0] [i_0] [i_0] [(unsigned short)3] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_24 [(unsigned short)8] [(unsigned short)8] [i_8 + 3] [(unsigned short)6])), ((+(((/* implicit */int) arr_0 [i_8 + 3]))))));
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)25407), (((/* implicit */unsigned short) (unsigned char)251))))) <= ((-(((/* implicit */int) (unsigned char)248))))));
                    arr_32 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)248)), ((unsigned short)40138)))) ? ((-(((/* implicit */int) max((arr_3 [i_1] [i_1]), (arr_21 [i_8] [i_1] [i_0] [i_0])))))) : (((/* implicit */int) min((min((arr_21 [i_0] [(unsigned char)2] [(unsigned short)10] [i_8]), ((unsigned short)55035))), (arr_30 [i_1 - 2]))))));
                    var_21 = ((/* implicit */unsigned short) max((min((arr_13 [i_1 + 2] [i_8 - 2] [i_1]), (arr_13 [i_1 + 3] [i_8 - 1] [i_8]))), (arr_6 [i_1 + 1] [i_8 + 2] [i_8 + 2] [i_0])));
                }
                var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1] [(unsigned char)1] [i_1 + 3] [i_1 + 3] [(unsigned short)8] [i_1 + 3])) || (((/* implicit */_Bool) var_6)))))));
                /* LoopSeq 3 */
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)116)))))));
                    var_24 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)11)))) * (((((/* implicit */int) arr_26 [i_0] [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_9] [i_1 + 2])) / (((/* implicit */int) arr_16 [(unsigned char)6] [i_9] [i_1 - 1] [i_1] [i_0] [(unsigned char)5]))))));
                    arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) min(((unsigned short)40136), (((/* implicit */unsigned short) (unsigned char)14))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_20 [i_1 + 3] [i_1] [i_0]), (arr_20 [i_1 + 3] [(unsigned short)12] [i_11])))) || (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_9]))));
                            arr_41 [(unsigned short)2] [i_1] [i_9] [i_10] [i_9] [i_11] = max((((unsigned char) max((arr_34 [(unsigned char)10] [(unsigned char)11]), ((unsigned char)9)))), (min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1 - 2]))));
                            arr_42 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_26 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_10] [i_10] [i_1])) || (((/* implicit */_Bool) arr_20 [i_1 + 1] [(unsigned short)2] [i_0])))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_13 [i_1 + 2] [i_1 + 1] [i_1 - 1]), (arr_13 [i_1 + 3] [i_1 + 2] [i_1 - 2]))))));
                            var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)33055)) ? (((/* implicit */int) max((arr_38 [i_12] [i_10] [i_10] [(unsigned char)10] [i_1] [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((unsigned short) arr_3 [i_1 - 1] [i_1 - 2])))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
                        {
                            arr_48 [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65535))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_10] [i_1 + 3] [i_1] [i_1 + 3])) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_39 [(unsigned char)7] [i_1] [i_1 - 1] [i_1] [i_1 - 2])), (arr_37 [(unsigned char)3] [(unsigned char)3] [i_1 - 1] [i_1] [i_1 - 2]))))));
                            arr_49 [i_0] [i_0] [(unsigned char)7] [i_10] [i_13] = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_4 [i_9] [(unsigned short)2] [i_9]))))), (arr_6 [i_1 - 2] [i_1 - 1] [i_0] [i_0])))), (min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) var_8))))));
                        }
                        arr_50 [i_10] [i_10] [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_9] [i_1] [i_0])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_9] [i_9] [i_10])) : (((/* implicit */int) max((arr_39 [i_1 + 1] [i_10] [i_1 + 1] [i_1 + 1] [i_10]), (arr_39 [i_1 + 1] [i_10] [(unsigned char)1] [(unsigned short)6] [i_10]))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
                        {
                            arr_55 [i_0] [(unsigned short)4] [i_9] [i_10] = ((/* implicit */unsigned char) max((min((((/* implicit */int) arr_13 [i_0] [i_0] [i_0])), ((-(((/* implicit */int) arr_21 [(unsigned short)10] [(unsigned char)7] [(unsigned short)10] [i_0])))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15469)) || (((/* implicit */_Bool) (unsigned short)14708)))))));
                            var_29 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_36 [(unsigned char)1] [i_1 + 1] [i_10] [i_14] [i_1 + 1] [i_10])) || (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) min((arr_21 [i_0] [i_1] [(unsigned char)9] [(unsigned char)5]), ((unsigned short)3783)))))))));
                            arr_56 [i_0] [i_0] [i_0] [i_9] [i_10] [i_14] [i_14] = min((arr_19 [i_0] [i_0] [i_0] [i_14]), (arr_47 [(unsigned char)8] [(unsigned char)10] [(unsigned char)2] [i_1] [i_0] [(unsigned char)10]));
                            arr_57 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_12 [i_0] [(unsigned char)12] [i_1 + 1] [i_1] [i_1 + 2] [i_14] [i_1]), (arr_12 [i_0] [i_1] [i_1 + 3] [i_1] [i_1 - 1] [i_9] [i_14]))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_45 [i_0] [(unsigned short)10] [(unsigned short)4] [i_10] [i_15]), (((/* implicit */unsigned short) arr_13 [i_15] [i_9] [i_1]))))) | (((/* implicit */int) max((var_2), (var_2))))));
                            var_31 |= ((/* implicit */unsigned char) max((max(((-(((/* implicit */int) arr_34 [i_9] [i_9])))), (((/* implicit */int) arr_47 [(unsigned short)11] [i_1] [(unsigned short)0] [i_1] [i_10] [(unsigned char)8])))), ((-(((/* implicit */int) arr_22 [(unsigned short)0] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 3] [(unsigned char)4]))))));
                        }
                        for (unsigned short i_16 = 1; i_16 < 12; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)55149), (((/* implicit */unsigned short) arr_36 [i_0] [i_1] [(unsigned char)12] [i_0] [(unsigned short)8] [i_16])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1] [i_9] [(unsigned char)3]))))) : (((/* implicit */int) arr_5 [(unsigned short)12] [(unsigned char)1] [i_9] [(unsigned char)10]))));
                            var_33 += ((/* implicit */unsigned short) max((((((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned short)2] [i_10])) << (((((/* implicit */int) var_6)) - (5831))))), (((/* implicit */int) max((min((arr_43 [i_16 + 1] [i_16] [i_0] [i_9] [i_1] [i_0]), (arr_0 [i_10]))), (min((arr_33 [i_10] [i_1] [i_1] [i_0]), (((/* implicit */unsigned short) arr_51 [i_0] [(unsigned char)2] [i_1])))))))));
                            arr_62 [i_0] [i_1] [i_9] [(unsigned short)12] [i_9] [i_16] = ((/* implicit */unsigned short) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) arr_53 [i_16] [i_16 - 1] [(unsigned char)0] [i_16] [i_16 + 1] [i_1 + 1] [i_1]))))));
                            var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((unsigned short) (unsigned short)62814)), (var_2))))));
                        }
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_4)), (max(((unsigned short)56019), ((unsigned short)32067))))))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_40 [(unsigned char)4] [(unsigned char)4] [i_9] [(unsigned char)4]))))))))))));
                    }
                }
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)188)), (((((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_46 [i_0] [(unsigned char)12] [i_17] [(unsigned char)12] [i_0])))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_4))))))));
                    var_38 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)252)), (max(((unsigned short)7739), (((/* implicit */unsigned short) (unsigned char)86))))))), ((~(((/* implicit */int) (unsigned short)65516))))));
                }
                for (unsigned short i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_0)))));
                    var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_64 [i_18] [(unsigned short)1] [i_0])) || (((/* implicit */_Bool) arr_60 [i_0] [i_0] [i_18] [(unsigned char)3] [i_18] [i_18])))) || ((!(((/* implicit */_Bool) arr_68 [i_0] [i_1] [i_0])))))))));
                }
            }
        } 
    } 
    var_41 += ((/* implicit */unsigned char) var_6);
}
