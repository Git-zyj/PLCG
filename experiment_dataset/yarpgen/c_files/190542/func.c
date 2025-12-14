/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190542
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 3; i_3 < 19; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            arr_14 [12U] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) max((var_1), (arr_12 [i_4] [i_3] [i_2] [(unsigned char)17] [i_1] [i_0])))))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-16275)), (398069571U))))))));
                            var_16 = ((/* implicit */short) arr_10 [i_0]);
                            var_17 += ((arr_5 [i_2] [i_1] [i_0]) >> (((/* implicit */int) min((arr_8 [i_0] [(short)5] [i_2] [9U]), ((unsigned char)142)))));
                            arr_15 [i_4] [i_3] [i_2] [(unsigned char)2] [i_0] = (-(var_1));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) min((var_18), (((unsigned char) (~(((/* implicit */int) ((unsigned char) 4294967285U))))))));
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)248)), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)224))))) & (min((((/* implicit */unsigned int) (unsigned char)111)), (4294967285U)))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) (~(max(((+(90175334U))), (((/* implicit */unsigned int) ((short) 4294967295U)))))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18542)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_7))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-30753))) - (13U))))))));
                        var_22 = ((/* implicit */unsigned char) (+((~(arr_4 [i_0])))));
                        arr_24 [13U] [(short)12] [i_5] [i_6] [i_7] [(unsigned char)0] [i_1] = ((/* implicit */unsigned int) (unsigned char)255);
                        arr_25 [(unsigned char)4] [i_1] [(short)5] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [14U] [i_5] [(unsigned char)4]))) < (((((/* implicit */_Bool) max((2024084755U), (0U)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_21 [(unsigned char)16] [i_5] [i_1] [i_5] [i_6] [i_7]))) : (arr_7 [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [(unsigned char)8] [i_5] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) : (arr_18 [i_8] [i_8 - 3] [i_8 + 1]));
                        var_23 += ((/* implicit */short) (+(((/* implicit */int) (short)3169))));
                        var_24 -= ((/* implicit */short) (~(((/* implicit */int) var_11))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(31U)))) ? ((~(((/* implicit */int) (unsigned char)170)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (2270882523U))))));
                        arr_30 [i_0] [(unsigned char)1] [i_5] [i_6] [i_6] [(short)18] [i_5] = var_8;
                    }
                    var_26 = ((/* implicit */unsigned int) var_4);
                    var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)248)), (max((((/* implicit */unsigned int) ((unsigned char) arr_12 [(short)1] [6U] [i_1] [(short)3] [(unsigned char)15] [i_6]))), (((((/* implicit */_Bool) var_9)) ? (3488577070U) : (var_1)))))));
                    arr_31 [i_1] [(short)10] [i_5] = var_6;
                }
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147475456U)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((short) (short)16383)), (((/* implicit */short) ((unsigned char) var_8))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))) : ((+(1108718280U))))))))));
            }
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)35);
        }
        arr_33 [5U] [i_0] = ((((/* implicit */_Bool) (unsigned char)195)) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) max((var_3), (((/* implicit */short) (unsigned char)35)))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        arr_37 [(unsigned char)19] = ((/* implicit */unsigned char) 4294967295U);
        var_29 = ((/* implicit */unsigned char) (((-(min((var_13), (var_15))))) == (((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)0), (((/* implicit */short) var_9))))))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_10 = 2; i_10 < 15; i_10 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (unsigned char)255))));
            var_31 = ((/* implicit */short) max((max((((/* implicit */unsigned int) (unsigned char)43)), (((((/* implicit */_Bool) 0U)) ? (1937812590U) : (arr_5 [i_10] [8U] [i_11]))))), (((/* implicit */unsigned int) ((unsigned char) (+(var_0)))))));
        }
        for (unsigned char i_12 = 1; i_12 < 14; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    for (unsigned int i_15 = 1; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28138)) && (((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)8)))))))))));
                            var_33 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)3)))))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) max((var_7), (arr_22 [i_10] [18U] [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (arr_8 [(short)0] [(unsigned char)16] [i_10] [i_12]))))) : (((((/* implicit */_Bool) (unsigned char)43)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
            var_35 = ((/* implicit */short) max((var_35), (arr_1 [(unsigned char)2] [i_12])));
            var_36 = ((/* implicit */short) max((15U), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_10] [i_10])) : (((/* implicit */int) (short)-13)))))))));
        }
        var_37 *= ((/* implicit */unsigned int) var_10);
        var_38 = 3269749116U;
        var_39 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)155)), (3023616202U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-731))) : (var_13)))))));
    }
    for (short i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        var_40 = ((/* implicit */unsigned char) ((((max((2818038780U), (((/* implicit */unsigned int) arr_34 [i_16] [i_16])))) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_56 [(short)20] [i_16])) | (((/* implicit */int) (unsigned char)0))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_35 [i_16])) : (((/* implicit */int) (short)-14512))))) > (((unsigned int) (unsigned char)200))))))));
        var_41 += ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_35 [i_16])) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)15)))))) + (((/* implicit */int) ((short) 2356857276U)))));
    }
    /* vectorizable */
    for (short i_17 = 0; i_17 < 16; i_17 += 4) 
    {
        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) (short)0)))))))));
        arr_59 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_0 [i_17])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_14))))));
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13)) ? (((((/* implicit */_Bool) (short)-21574)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((3933798439U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
        /* LoopNest 3 */
        for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            for (short i_19 = 0; i_19 < 16; i_19 += 4) 
            {
                for (unsigned char i_20 = 3; i_20 < 15; i_20 += 3) 
                {
                    {
                        var_44 &= ((/* implicit */unsigned char) 2143136787U);
                        var_45 = var_5;
                        arr_67 [i_17] [i_18] [i_19] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_4 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? ((+(((/* implicit */int) arr_17 [(short)6] [i_17] [(unsigned char)8] [i_20])))) : ((~(((/* implicit */int) arr_66 [(short)14]))))));
                        var_46 *= ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_0));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_21 = 2; i_21 < 13; i_21 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_22 = 0; i_22 < 14; i_22 += 4) 
        {
            var_47 += ((/* implicit */unsigned char) var_1);
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 14; i_23 += 1) 
            {
                for (short i_24 = 1; i_24 < 11; i_24 += 2) 
                {
                    {
                        var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((unsigned char) var_4)))));
                        var_49 *= ((/* implicit */short) (~(((unsigned int) (unsigned char)246))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_25 = 0; i_25 < 14; i_25 += 4) 
            {
                for (unsigned char i_26 = 0; i_26 < 14; i_26 += 3) 
                {
                    for (unsigned char i_27 = 0; i_27 < 14; i_27 += 3) 
                    {
                        {
                            var_50 *= ((/* implicit */unsigned int) var_9);
                            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2176359563U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_68 [i_27]))));
                        }
                    } 
                } 
            } 
            var_52 -= ((/* implicit */unsigned int) (short)7285);
        }
        for (unsigned char i_28 = 0; i_28 < 14; i_28 += 3) 
        {
            var_53 = ((/* implicit */unsigned char) var_13);
            arr_88 [i_21] [i_21] [i_28] = ((/* implicit */short) arr_26 [i_28] [i_28] [i_28] [i_21] [(short)8] [i_21] [i_21]);
            arr_89 [(unsigned char)5] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_61 [12U] [(short)5] [i_28]))))), (((((/* implicit */_Bool) arr_43 [i_21] [i_21] [i_28])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_13))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) < (min((((/* implicit */unsigned int) var_7)), (1555513629U)))))))));
        }
        arr_90 [i_21] [(unsigned char)7] = var_0;
        arr_91 [i_21] = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_4)) << (((((/* implicit */_Bool) var_0)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    }
    var_54 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) (unsigned char)103)) ? (677574526U) : (98304U))))))));
}
