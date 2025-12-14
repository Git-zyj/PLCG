/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235962
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
    var_17 = ((/* implicit */unsigned int) max(((unsigned short)65535), (var_0)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) (unsigned short)53788);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                var_18 = ((((unsigned int) arr_3 [0U] [i_0] [i_0])) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_0] [4U] [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)11744))));
                            var_20 = ((/* implicit */unsigned short) 509509570U);
                            arr_14 [i_2] = ((/* implicit */unsigned int) var_4);
                            arr_15 [i_4] [i_1] [i_0] [i_4] [i_2] = (unsigned short)0;
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1 + 3]) : (4294967295U)));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)34714))) ? (((((/* implicit */int) (unsigned short)45943)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) var_13))));
            }
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                arr_18 [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (unsigned short)34725)))));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    var_23 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (1032192U))) & (((arr_17 [12U] [i_1 + 1] [i_0]) & (2107099971U))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 3; i_7 < 17; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_6] [i_0] = ((unsigned int) arr_5 [i_7 - 3] [i_5] [(unsigned short)17]);
                        var_24 ^= ((/* implicit */unsigned short) (~(3650462345U)));
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)23875))));
                        var_26 += ((/* implicit */unsigned short) (-(arr_21 [i_7] [i_7 - 1] [i_1] [i_6 + 2] [i_6 + 1])));
                    }
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)40041)))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned short)45931))))) == (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)25494)) : (((/* implicit */int) (unsigned short)45931))))));
                        var_29 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_5] [i_8]))))));
                    }
                }
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_30 = ((((/* implicit */_Bool) arr_22 [i_1] [i_0] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2])) ? (((var_1) >> (((((/* implicit */int) (unsigned short)56068)) - (56045))))) : (((((/* implicit */_Bool) (unsigned short)12229)) ? (arr_13 [i_0] [i_0] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25495))))));
                    arr_31 [i_0] [i_0] [i_5] [i_1 - 2] [i_1] = ((((634269382U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) & (((((/* implicit */_Bool) 2107099988U)) ? (arr_23 [i_0] [(unsigned short)16]) : (arr_2 [i_0] [i_0]))));
                }
                var_31 = ((/* implicit */unsigned short) max((var_31), ((unsigned short)25495)));
            }
            /* LoopSeq 4 */
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
            {
                arr_34 [i_1] [i_10] = var_5;
                arr_35 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25494)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50967))) : (arr_29 [(unsigned short)5] [(unsigned short)5] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) var_3))));
            }
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
            {
                var_32 = ((((/* implicit */_Bool) (-(2107099970U)))) ? (arr_32 [i_1 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9467))));
                var_33 = ((/* implicit */unsigned short) ((unsigned int) arr_36 [i_1] [(unsigned short)16] [i_1] [i_1 + 1]));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    for (unsigned short i_13 = 3; i_13 < 14; i_13 += 2) 
                    {
                        {
                            arr_45 [i_0] [i_0] [i_11] [i_12] [i_13] [i_13] [(unsigned short)1] = ((arr_23 [i_1 - 2] [i_1 + 2]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [(unsigned short)2] [(unsigned short)2] [i_12] [i_12])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)56068))))));
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)50978));
                        }
                    } 
                } 
            }
            for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
            {
                arr_51 [i_0] [i_0] [15U] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_26 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1] [i_1 - 2] [i_1 + 3])) - (55735)))));
                arr_52 [i_14] [i_0] = ((2107099988U) / (((var_9) >> (((((/* implicit */int) var_7)) - (18295))))));
                var_34 = ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % ((~(var_5))));
                var_35 ^= (-(var_16));
                var_36 = ((/* implicit */unsigned int) max((var_36), (((((/* implicit */_Bool) 4294967272U)) ? (arr_17 [i_0] [i_0] [i_14]) : ((~(1435620595U)))))));
            }
            for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
            {
                var_37 = var_0;
                var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967267U)) ? (7680U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)278))))))));
                arr_56 [13U] [i_1 - 2] [i_1 - 2] [i_1] = (~(arr_2 [i_1 + 1] [i_1 - 2]));
                arr_57 [(unsigned short)2] [i_1 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)9482))));
            }
        }
        for (unsigned int i_16 = 1; i_16 < 16; i_16 += 2) 
        {
            var_39 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) arr_0 [i_0] [i_16 - 1]))));
            arr_60 [i_0] [i_16] = (~((((-(arr_21 [(unsigned short)11] [i_16] [i_16] [(unsigned short)3] [i_16]))) << ((((~(0U))) - (4294967282U))))));
            var_40 = ((((/* implicit */_Bool) (-((-(3121729614U)))))) ? (((min((1173237682U), (((/* implicit */unsigned int) (unsigned short)128)))) - (((2107099961U) * (2187867307U))))) : (min((((((/* implicit */_Bool) arr_26 [(unsigned short)2] [i_0] [i_0] [i_0] [i_0] [i_16 + 2])) ? (1850898582U) : (var_5))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) * (2695332480U))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned short) max((var_41), ((unsigned short)14569)));
                arr_64 [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)62734))));
            }
            for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) max((arr_40 [i_16 - 1] [i_16 - 1]), (((3121729614U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [4U] [i_0]))))))))));
                arr_67 [i_16] = ((unsigned int) ((unsigned int) arr_23 [i_0] [i_0]));
            }
        }
        var_43 = ((/* implicit */unsigned int) max((var_43), (3121729613U)));
        /* LoopNest 3 */
        for (unsigned int i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    {
                        var_44 *= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62728))) | (1850898582U)))));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((var_2), (var_7)))) == (((/* implicit */int) (unsigned short)56068)))))) - (((arr_49 [i_20]) >> (((arr_40 [i_0] [i_0]) - (1721953504U)))))));
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)9468))));
        arr_76 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
    }
    var_47 = ((/* implicit */unsigned short) max((var_47), (var_3)));
}
