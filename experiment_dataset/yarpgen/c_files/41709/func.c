/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41709
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
    var_14 = ((short) ((short) var_9));
    var_15 = ((/* implicit */short) min(((-(((/* implicit */int) ((short) var_7))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-15154))))) ? ((~(((/* implicit */int) (short)649)))) : (((/* implicit */int) (short)16320))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-435)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-32766)))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    for (short i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_17 = var_1;
                            var_18 ^= ((short) (~(((/* implicit */int) arr_8 [i_2]))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_4] [i_4 + 2] [i_4] [i_4] [i_4 - 1] [i_4])) : ((-(((/* implicit */int) (short)(-32767 - 1)))))));
                            var_20 = arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4];
                        }
                    } 
                } 
            } 
            arr_15 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)32685)))) && (((/* implicit */_Bool) (short)-23131))));
        }
        for (short i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-23140)) ? (((/* implicit */int) arr_5 [i_6] [i_0])) : (((/* implicit */int) (short)19420)))) % (((/* implicit */int) arr_2 [i_0]))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4)) ? (((/* implicit */int) (short)-31191)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (short)-18052)) : (((((/* implicit */int) arr_1 [i_6])) * (((/* implicit */int) var_0)))))))));
                arr_23 [i_0] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_10 [i_0] [i_5] [i_0])) : (((/* implicit */int) var_12))));
            }
            var_22 = ((/* implicit */short) (((-(((/* implicit */int) (short)0)))) - (((/* implicit */int) var_9))));
            /* LoopSeq 1 */
            for (short i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                arr_26 [i_0] [i_0] [i_7] [i_7] = (short)6534;
                /* LoopSeq 2 */
                for (short i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_0])) * (((/* implicit */int) ((short) (short)-20258)))));
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 13; i_9 += 3) 
                    {
                        arr_31 [i_0] [i_0] [i_7] [i_8] [i_9] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)5845)))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16573)) ? (((/* implicit */int) (short)18060)) : (((/* implicit */int) arr_12 [i_0] [i_8] [i_7] [i_5] [i_0]))))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */_Bool) (short)32751)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (short)-23131))))));
                        arr_32 [i_8] [i_0] [i_8] [i_8] [i_8] = ((short) (short)-6535);
                        var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5] [i_7] [i_5] [i_7 + 3] [i_9])) && (((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_7 + 2] [i_7]))));
                    }
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_29 [i_8] [i_7] [i_0] [i_5] [i_0] [i_5] [i_0]))) ? (((/* implicit */int) ((short) (short)-23502))) : (((/* implicit */int) var_9))));
                }
                for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    var_27 = ((/* implicit */short) min((var_27), ((short)-17)));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (short)6519)) ? (((/* implicit */int) (short)-23143)) : (((/* implicit */int) arr_29 [i_7 - 1] [i_7] [i_10] [i_10] [i_10] [i_10] [i_10]))));
                }
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_13 [i_7] [i_0] [i_7] [i_0] [i_0])) ? (((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_5))))));
            }
        }
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                {
                    arr_41 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)9262)) >= (((/* implicit */int) (short)-23506))));
                    /* LoopSeq 4 */
                    for (short i_13 = 4; i_13 < 15; i_13 += 3) /* same iter space */
                    {
                        arr_45 [i_0] [i_11] [i_0] [i_0] = (short)-17716;
                        arr_46 [i_13] [i_13] [i_0] [i_13] = ((/* implicit */short) (-((-(((/* implicit */int) (short)-19710))))));
                    }
                    for (short i_14 = 4; i_14 < 15; i_14 += 3) /* same iter space */
                    {
                        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-8419)) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_5 [i_11] [i_12]))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)20017)) : (((/* implicit */int) (short)(-32767 - 1)))));
                    }
                    for (short i_15 = 1; i_15 < 16; i_15 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 17; i_16 += 2) 
                        {
                            var_32 = (short)9253;
                            arr_56 [i_0] [i_16] = ((/* implicit */short) (((-(((/* implicit */int) arr_16 [i_0] [i_0] [i_16])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_0] [i_0] [i_16])))))));
                        }
                        for (short i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_11])) : (((/* implicit */int) arr_29 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)26405))))))))));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6076)) ? (((/* implicit */int) (short)1197)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (short)-11136)) ? (((/* implicit */int) arr_58 [i_0] [i_11] [i_12] [i_15] [i_17])) : (((/* implicit */int) arr_24 [i_0] [i_0]))))));
                        }
                        for (short i_18 = 0; i_18 < 17; i_18 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (short)12868)) ? (((/* implicit */int) arr_63 [i_15 + 1] [i_15] [i_15 + 1] [i_0] [i_15])) : (((/* implicit */int) arr_47 [i_15 + 1] [i_15] [i_15 + 1] [i_15] [i_0] [i_15 + 1]))));
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_61 [i_0] [i_12] [i_12] [i_18]))))) ? (((((/* implicit */_Bool) (short)20550)) ? (((/* implicit */int) (short)-12345)) : (((/* implicit */int) arr_58 [i_18] [i_15] [i_11] [i_11] [i_0])))) : (((((/* implicit */int) (short)4311)) / (((/* implicit */int) (short)-28428))))));
                            var_37 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)-4671)) > (((/* implicit */int) (short)3445))))) % (((/* implicit */int) arr_21 [i_0]))));
                            arr_64 [i_0] [i_0] [i_0] [i_15] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_0] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_44 [i_15 - 1] [i_0] [i_15 + 1] [i_0] [i_15 - 1]))));
                        }
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */int) arr_58 [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_15] [i_15])) >= (((/* implicit */int) var_10)))))));
                        var_39 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_55 [i_15 - 1] [i_15] [i_15] [i_15 - 1] [i_15] [i_15 + 1] [i_15 + 1]))));
                    }
                    for (short i_19 = 4; i_19 < 15; i_19 += 2) 
                    {
                        var_40 = ((short) ((short) (short)-31087));
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */int) arr_53 [i_11] [i_19] [i_11] [i_19 + 2] [i_11])) <= (((/* implicit */int) arr_58 [i_0] [i_0] [i_19] [i_19 - 2] [i_19])))))));
                    }
                }
            } 
        } 
    }
    for (short i_20 = 0; i_20 < 17; i_20 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_21 = 0; i_21 < 17; i_21 += 3) 
        {
            for (short i_22 = 0; i_22 < 17; i_22 += 1) 
            {
                {
                    arr_74 [i_20] [i_20] [i_20] [i_20] = (short)13118;
                    var_42 = min((max((arr_27 [i_22] [i_21] [i_20] [i_20]), (arr_27 [i_22] [i_22] [i_21] [i_20]))), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_24 [i_20] [i_20])))))));
                    var_43 = arr_11 [i_20];
                }
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_23 = 0; i_23 < 17; i_23 += 3) 
        {
            /* LoopNest 3 */
            for (short i_24 = 0; i_24 < 17; i_24 += 3) 
            {
                for (short i_25 = 0; i_25 < 17; i_25 += 3) 
                {
                    for (short i_26 = 0; i_26 < 17; i_26 += 1) 
                    {
                        {
                            var_44 = ((short) (short)0);
                            arr_83 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)22803)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])))))));
                            arr_84 [i_20] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) (short)442)) ? (((/* implicit */int) arr_76 [i_20])) : (((((/* implicit */int) (short)-24403)) / (((/* implicit */int) var_4))))));
                            var_45 = (short)23120;
                        }
                    } 
                } 
            } 
            var_46 = (short)16164;
        }
        /* vectorizable */
        for (short i_27 = 0; i_27 < 17; i_27 += 1) /* same iter space */
        {
            var_47 = arr_39 [i_20] [i_20] [i_20];
            /* LoopSeq 1 */
            for (short i_28 = 0; i_28 < 17; i_28 += 4) 
            {
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 17; i_29 += 3) 
                {
                    for (short i_30 = 0; i_30 < 17; i_30 += 3) 
                    {
                        {
                            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (short)8921)) ? (((/* implicit */int) arr_28 [i_20] [i_27] [i_28] [i_28] [i_30] [i_30])) : (((/* implicit */int) arr_50 [i_27] [i_27] [i_27] [i_27]))));
                            arr_95 [i_20] [i_27] [i_28] [i_29] [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3443)) ? (((/* implicit */int) arr_62 [i_20] [i_20] [i_20] [i_29])) : (((/* implicit */int) (short)30968))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)11135)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)6534))))));
                        }
                    } 
                } 
                arr_96 [i_20] [i_27] [i_28] = ((/* implicit */short) (+(((/* implicit */int) arr_77 [i_20] [i_20] [i_27] [i_28]))));
                arr_97 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_20] [i_27] [i_27] [i_27] [i_27] [i_28] [i_28])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_30 [i_28] [i_28] [i_27] [i_27] [i_27] [i_27] [i_20]))));
            }
        }
        for (short i_31 = 0; i_31 < 17; i_31 += 1) /* same iter space */
        {
            var_49 -= ((/* implicit */short) (-(((/* implicit */int) arr_61 [(short)6] [i_20] [i_31] [i_31]))));
            arr_101 [i_20] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */int) (short)6725)) != (((/* implicit */int) (short)32756))));
            var_50 = ((short) (short)-30163);
        }
        for (short i_32 = 0; i_32 < 17; i_32 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_33 = 4; i_33 < 15; i_33 += 4) 
            {
                var_51 ^= ((/* implicit */short) (-(((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (short i_34 = 0; i_34 < 17; i_34 += 2) 
                {
                    for (short i_35 = 0; i_35 < 17; i_35 += 4) 
                    {
                        {
                            var_52 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-5864), (arr_39 [i_33] [i_33 - 1] [i_33])))) ? (((((/* implicit */_Bool) (short)-32159)) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) min(((short)6367), ((short)23120))))));
                            arr_112 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = (short)16979;
                            var_53 = ((short) (short)-20628);
                        }
                    } 
                } 
            }
            var_54 = ((/* implicit */short) ((((/* implicit */int) ((short) (short)1217))) / (((/* implicit */int) min((arr_38 [i_20] [i_20] [i_32]), (arr_38 [i_20] [i_32] [i_32]))))));
            var_55 = ((/* implicit */short) (~(min((((/* implicit */int) min((var_6), (arr_27 [i_20] [i_32] [i_32] [i_20])))), (((((/* implicit */_Bool) (short)-3446)) ? (((/* implicit */int) (short)-6726)) : (((/* implicit */int) var_13))))))));
        }
    }
}
