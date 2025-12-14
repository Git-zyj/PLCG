/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201659
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_14)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_17 += ((unsigned char) var_14);
        var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)170)) * (((/* implicit */int) var_8))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_19 = ((unsigned char) arr_3 [i_5 + 2] [i_3 + 2]);
                                var_20 = var_3;
                                arr_19 [i_5] [i_5] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_6]))));
                                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)125)) == (((/* implicit */int) (unsigned char)17)))) ? (((/* implicit */int) arr_5 [i_3 - 1])) : ((-(((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) != ((~(((/* implicit */int) arr_17 [i_7] [i_7] [i_4] [i_7]))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (arr_11 [(unsigned char)2])));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_10))) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)125)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_27 [i_2] [i_3] [(unsigned char)14] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)246))));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_26 = arr_8 [i_4];
                            var_27 -= ((unsigned char) (+(((/* implicit */int) var_6))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (unsigned char)131))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_21 [i_9])) : (((/* implicit */int) var_5))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_30 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_4] [i_4 - 1] [(unsigned char)15] [i_3 + 3])) + (((/* implicit */int) var_15))));
                            var_31 = ((unsigned char) (+(((/* implicit */int) arr_8 [i_2]))));
                            arr_35 [i_2] [i_2] [i_3] [(unsigned char)3] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_3] [i_3 + 1] [i_3 - 1])) >= (((/* implicit */int) ((unsigned char) var_12)))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) arr_17 [i_4] [i_3] [i_4 + 1] [i_3])) ^ (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */int) var_6))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (arr_18 [i_4 - 1] [(unsigned char)10] [i_4] [(unsigned char)17])));
                        }
                        var_34 = var_15;
                    }
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_40 [i_2] [i_2] [(unsigned char)19] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_28 [i_2] [i_3] [i_4 + 1] [i_13] [i_13])) >= (((/* implicit */int) var_15)))))));
                        var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) var_11)))) * (((((/* implicit */int) var_2)) / (((/* implicit */int) var_7))))));
                        arr_41 [i_13] [(unsigned char)11] [i_4] [i_2] [i_2] &= var_8;
                    }
                }
            } 
        } 
        arr_42 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2] [(unsigned char)8])))))));
        var_36 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_5)))) | (((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            for (unsigned char i_15 = 4; i_15 < 18; i_15 += 1) 
            {
                {
                    arr_49 [i_14] [i_2] [i_14] [i_14] = arr_20 [i_2] [(unsigned char)2] [i_15 - 2] [i_2];
                    var_37 = var_3;
                    var_38 = ((unsigned char) ((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned char)130))));
                }
            } 
        } 
        var_39 = var_9;
    }
    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_17 = 1; i_17 < 14; i_17 += 3) 
        {
            var_40 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)80))))) : (((/* implicit */int) min(((unsigned char)151), ((unsigned char)120))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_18 = 0; i_18 < 15; i_18 += 2) 
            {
                arr_59 [i_18] [i_18] [i_18] [(unsigned char)8] |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) == (((/* implicit */int) arr_51 [i_17] [i_16])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) arr_38 [i_16] [i_16] [i_18] [(unsigned char)1] [i_18]))))));
                /* LoopSeq 1 */
                for (unsigned char i_19 = 0; i_19 < 15; i_19 += 3) 
                {
                    var_41 *= var_5;
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)114))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [(unsigned char)8] [i_17 + 1] [(unsigned char)7] [i_17]))));
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [(unsigned char)0] [i_17])) < ((-(((/* implicit */int) (unsigned char)242))))));
                }
            }
            /* vectorizable */
            for (unsigned char i_20 = 2; i_20 < 13; i_20 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 2; i_21 < 12; i_21 += 4) 
                {
                    for (unsigned char i_22 = 0; i_22 < 15; i_22 += 2) 
                    {
                        {
                            var_44 -= ((unsigned char) (unsigned char)120);
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_16 [i_20] [i_17] [i_17] [i_16]))))));
            }
            /* vectorizable */
            for (unsigned char i_23 = 2; i_23 < 13; i_23 += 2) /* same iter space */
            {
                arr_73 [i_16] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) arr_48 [i_16] [i_17] [i_16])))) : (((/* implicit */int) (unsigned char)242))));
                arr_74 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [(unsigned char)3] [i_17 - 1])) | (((((/* implicit */_Bool) arr_67 [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_72 [i_23 + 1] [i_17] [i_17 - 1] [i_16])) : (((/* implicit */int) var_7))))));
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_17 - 1] [i_23 + 1])) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_12 [(unsigned char)1] [i_23 - 2])))))));
                var_48 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_16] [i_17] [i_23] [(unsigned char)18] [i_16])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)39)))) > (((/* implicit */int) ((unsigned char) var_13)))));
            }
        }
        var_49 ^= max((var_3), (var_9));
    }
    var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3))));
}
