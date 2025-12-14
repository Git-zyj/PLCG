/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225360
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
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = arr_0 [i_0];
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_13 = (unsigned short)2023;
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_2] = ((/* implicit */unsigned char) var_3);
                            arr_13 [i_4] [i_1] = arr_5 [i_1 - 4] [i_1 - 2] [i_1 + 3];
                        }
                        for (unsigned short i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            var_14 = var_10;
                            var_15 = arr_14 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_2 - 2] [(unsigned char)10] [i_5 - 2];
                            var_16 += (unsigned short)9912;
                            arr_18 [i_0] [i_5] = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [(unsigned short)10] [i_3] [i_2] [i_1 + 2] [(unsigned char)3]))))) ? (((/* implicit */int) arr_15 [i_1 + 3] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_3]))));
                            var_18 = var_6;
                        }
                        arr_23 [i_0] [i_2] [i_2 - 2] [i_3] = (unsigned short)10930;
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_30 [i_0] [i_7] [i_1] [i_2 + 1] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1 - 1] [i_1 - 3])) ? (((/* implicit */int) arr_22 [i_1 + 1] [i_1] [i_1 - 3])) : (((/* implicit */int) arr_15 [i_1 + 1] [i_1 + 1] [i_1 - 3]))));
                            arr_31 [i_7] [i_7] [i_2] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_8] [i_2 - 1] [i_2 - 1] [i_0])) / (((/* implicit */int) arr_22 [i_1 + 2] [i_1 + 2] [i_2 - 2]))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (arr_20 [i_0] [i_1] [i_1 - 1] [i_2 - 2] [i_2])));
                            arr_32 [(unsigned short)9] [i_7] [(unsigned short)9] [(unsigned short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 1] [i_2 - 1] [i_8] [i_8] [i_8])) : (((/* implicit */int) ((unsigned char) arr_25 [i_0] [i_0] [i_0] [i_8])))));
                            arr_33 [i_0] [i_7] [i_2] = arr_5 [i_7] [i_7] [i_2];
                        }
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_20 = var_3;
                            arr_36 [(unsigned short)10] [(unsigned short)10] [(unsigned short)1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)28981)) : (((/* implicit */int) arr_16 [i_0] [i_7] [i_2] [i_7] [i_2] [i_9])))))));
                        }
                        arr_37 [(unsigned short)4] [(unsigned char)2] [i_2 + 2] [i_7] |= ((unsigned short) arr_3 [(unsigned short)0]);
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [(unsigned short)2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_7])))) < (((/* implicit */int) var_6))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1] [i_2 - 1] [i_2] [i_2])) < (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 2] [i_7]))));
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [(unsigned char)11] [(unsigned char)4])) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_7])) : (((/* implicit */int) var_4)))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 + 4] [i_1 - 3] [i_2 + 2])) ? (((/* implicit */int) arr_17 [i_1 + 4] [i_2 - 2] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_21 [i_1 + 3] [i_1 - 1]))));
                        var_25 = ((/* implicit */unsigned char) var_8);
                        var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_10]))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)31272)) ? (((/* implicit */int) (unsigned short)7350)) : (((/* implicit */int) arr_1 [(unsigned char)2] [i_1])))) : (((/* implicit */int) arr_8 [i_1 - 4] [i_2 - 2] [i_10]))));
                    }
                    arr_40 [i_0] [(unsigned char)13] [i_2] = arr_38 [i_1 + 2] [i_1] [i_1] [i_1] [i_1];
                    var_28 = ((/* implicit */unsigned short) arr_4 [i_2 + 1]);
                    var_29 = ((/* implicit */unsigned short) (unsigned char)36);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            arr_43 [i_0] = arr_5 [i_0] [i_11] [i_0];
            var_30 = var_1;
            arr_44 [i_0] [i_11] [i_11] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)13864));
        }
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_12] [i_12])))))));
            /* LoopSeq 3 */
            for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        {
                            arr_54 [(unsigned char)12] [i_13] [i_12] [i_13] [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)14927))));
                            arr_55 [i_0] [i_13] [i_0] [i_13] [(unsigned short)0] [i_0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned short)51672)) : (((/* implicit */int) arr_19 [i_0] [i_12] [i_0] [i_15]))))) ? (((/* implicit */int) arr_50 [i_12] [i_12] [i_14] [i_15])) : (((/* implicit */int) arr_3 [i_12]))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_12] [i_12] [(unsigned short)10] [i_14])) + (((/* implicit */int) ((unsigned short) var_1)))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)7))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_51 [i_0] [i_0] [i_12] [i_0] [i_13])) ^ (((/* implicit */int) arr_38 [i_0] [i_0] [i_12] [i_12] [i_13]))));
            }
            for (unsigned short i_16 = 2; i_16 < 12; i_16 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (unsigned short)54605)) : (((/* implicit */int) (unsigned short)54696)))))));
                /* LoopSeq 3 */
                for (unsigned short i_17 = 0; i_17 < 14; i_17 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 1; i_18 < 11; i_18 += 3) 
                    {
                        arr_63 [i_0] [i_12] [i_0] [i_0] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_16 - 1] [i_16 - 1] [i_16]))));
                        arr_64 [i_0] [i_0] [i_12] [i_17] [i_18] [i_0] [i_12] = ((unsigned short) ((unsigned char) (unsigned short)13845));
                        arr_65 [i_0] [i_0] [i_16 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_14 [i_17] [i_16 + 2] [(unsigned short)11] [i_0] [i_17] [i_16]))));
                        var_36 = ((/* implicit */unsigned char) var_8);
                    }
                    var_37 = ((/* implicit */unsigned char) var_6);
                    var_38 += var_7;
                    var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_3)))));
                }
                for (unsigned char i_19 = 0; i_19 < 14; i_19 += 3) 
                {
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_0] [i_12] [i_16] [i_16] [i_16] [(unsigned short)1] [i_19])) ? (((/* implicit */int) arr_53 [i_0] [i_12] [i_16] [i_16] [i_19] [i_19] [i_19])) : (((/* implicit */int) var_3))));
                    var_41 = ((/* implicit */unsigned char) var_0);
                    var_42 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_16 - 2])) - (((/* implicit */int) arr_47 [i_16 - 2]))));
                    var_43 = arr_66 [i_0] [i_0] [i_0] [i_0];
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_16 - 1])) ? (((/* implicit */int) arr_2 [(unsigned short)10] [i_16 + 2])) : (((/* implicit */int) arr_4 [i_16 + 2]))));
                }
                for (unsigned char i_20 = 3; i_20 < 13; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 14; i_21 += 4) 
                    {
                        arr_74 [i_0] [i_12] [i_16 - 1] [i_20] [i_20] = var_2;
                        var_45 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_16 - 1] [i_20 + 1])) ? (((/* implicit */int) arr_69 [i_16] [i_16 - 2] [i_20] [i_20 - 1])) : (((/* implicit */int) arr_69 [i_12] [i_16 + 2] [(unsigned short)5] [i_20 - 2]))));
                    }
                    var_46 = arr_34 [i_16 + 1] [i_16] [i_16] [i_16 + 2] [i_16 - 1];
                }
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_35 [(unsigned short)2]))));
                var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_12] [i_0])) != (((/* implicit */int) var_8))))))))));
            }
            for (unsigned char i_22 = 0; i_22 < 14; i_22 += 1) 
            {
                arr_77 [i_0] [i_0] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)64781)) & (((/* implicit */int) arr_61 [i_22] [i_0] [i_0] [i_0] [i_0]))));
                var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((unsigned short) (unsigned short)55888)))));
            }
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) arr_39 [i_0]))) : (((/* implicit */int) var_2))));
        }
        arr_78 [i_0] [i_0] = arr_67 [i_0] [i_0];
        /* LoopSeq 2 */
        for (unsigned char i_23 = 0; i_23 < 14; i_23 += 1) /* same iter space */
        {
            var_51 |= ((/* implicit */unsigned short) arr_66 [i_0] [i_23] [i_0] [i_23]);
            var_52 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)10)) >> (((((/* implicit */int) arr_61 [i_0] [i_0] [i_0] [i_0] [i_0])) - (13)))));
            var_53 = ((/* implicit */unsigned char) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_23] [i_23] [i_23] [i_23]));
        }
        for (unsigned char i_24 = 0; i_24 < 14; i_24 += 1) /* same iter space */
        {
            var_54 = ((/* implicit */unsigned short) var_5);
            arr_84 [i_24] [i_24] [i_24] = ((unsigned char) arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
    }
}
