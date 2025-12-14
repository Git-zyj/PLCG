/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33785
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_4)))))) && (((/* implicit */_Bool) (+((-(((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_6 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_8)))) - ((+(((/* implicit */int) var_1))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-13070)) + (((/* implicit */int) (short)-13070))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(((/* implicit */int) (short)-13316)))))));
                    }
                }
                for (short i_4 = 3; i_4 < 16; i_4 += 1) 
                {
                    var_15 = ((/* implicit */short) max((var_15), (min((var_7), (((short) (short)-22123))))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        for (short i_6 = 3; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_16 *= var_0;
                                var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((short) arr_10 [i_5 - 1] [i_1 - 3] [i_1] [i_5]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_10 [i_0] [i_1] [i_4 - 2] [i_5])))) > (((/* implicit */int) var_12)))))));
                                var_18 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (short)-13309))))) : (((/* implicit */int) (short)-13316)))) / (((/* implicit */int) (short)-12419))));
                            }
                        } 
                    } 
                    var_19 &= min((var_5), (((short) ((((/* implicit */int) arr_8 [(short)0] [(short)11] [(short)12])) | (((/* implicit */int) var_12))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (short i_8 = 3; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_24 [i_7] [i_7] [(short)6] [i_7] [i_7] &= ((/* implicit */short) (+((~(((/* implicit */int) ((short) (short)-20426)))))));
                                var_20 &= ((short) ((short) arr_10 [i_8 + 2] [i_8 - 3] [i_8 - 1] [i_8 - 1]));
                            }
                        } 
                    } 
                }
                var_21 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_0)))))) * (((((/* implicit */int) ((((/* implicit */_Bool) (short)13050)) || (((/* implicit */_Bool) (short)-31614))))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) (short)17856))))))));
            }
        } 
    } 
    var_22 = var_12;
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
    {
        var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((short) var_4)))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((/* implicit */int) var_10)))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) (short)2064)) ^ (((/* implicit */int) (short)-16214)))))));
    }
    for (short i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
        {
            var_26 += ((/* implicit */short) ((((/* implicit */int) ((short) arr_26 [i_10]))) - (((((/* implicit */int) arr_25 [i_10] [i_10])) ^ (((/* implicit */int) (short)-32756))))));
            /* LoopNest 2 */
            for (short i_12 = 3; i_12 < 22; i_12 += 1) 
            {
                for (short i_13 = 2; i_13 < 21; i_13 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) max((var_27), (arr_29 [i_11] [i_11])));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_12])) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) (short)-3306)))));
                        var_29 = ((/* implicit */short) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_27 [i_10] [i_10]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_14 = 2; i_14 < 22; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    {
                        var_30 -= ((short) arr_38 [i_14 - 2] [i_14 + 1] [i_14 + 1]);
                        arr_44 [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_12)) + (17888))))) : (((/* implicit */int) var_4))));
                        var_31 *= var_11;
                        var_32 -= arr_33 [i_15];
                    }
                } 
            } 
            var_33 |= ((/* implicit */short) ((((/* implicit */int) arr_25 [i_11] [i_11])) > (((/* implicit */int) var_6))));
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (((~(((/* implicit */int) arr_37 [i_10] [i_10] [(short)4])))) == (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2)))))))));
        }
        /* vectorizable */
        for (short i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_17 = 1; i_17 < 22; i_17 += 4) 
            {
                for (short i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) arr_48 [i_10] [(short)19] [i_10])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))));
                        var_36 = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_16] [i_16])) ^ (((/* implicit */int) ((short) var_3)))));
                        /* LoopSeq 2 */
                        for (short i_19 = 2; i_19 < 21; i_19 += 4) 
                        {
                            var_37 += ((/* implicit */short) (-((~(((/* implicit */int) arr_25 [(short)10] [i_16]))))));
                            arr_55 [i_10] [i_10] [i_10] [i_17] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_39 [i_18] [(short)21] [i_18] [i_18]))))) | (((/* implicit */int) ((short) (short)32761)))));
                        }
                        for (short i_20 = 0; i_20 < 23; i_20 += 4) 
                        {
                            arr_59 [i_10] [i_17] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_32 [i_10] [i_10] [i_17] [i_18])) : (((/* implicit */int) arr_32 [i_16] [i_16] [i_17] [i_16]))));
                            var_38 = ((/* implicit */short) ((((/* implicit */int) ((short) var_7))) ^ (((/* implicit */int) ((short) var_0)))));
                        }
                    }
                } 
            } 
            arr_60 [i_10] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) arr_52 [i_10] [i_16] [i_10] [i_10])) : (((/* implicit */int) ((((/* implicit */int) (short)96)) != (((/* implicit */int) var_7)))))));
        }
        var_39 = ((/* implicit */short) (-(((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_52 [i_10] [i_10] [i_10] [i_10]))))) ^ ((+(((/* implicit */int) var_8))))))));
        var_40 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_34 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_34 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [(short)18]))))))))));
    }
    for (short i_21 = 0; i_21 < 23; i_21 += 4) /* same iter space */
    {
        var_41 &= ((short) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_47 [i_21] [i_21] [i_21]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_22 = 2; i_22 < 22; i_22 += 1) 
        {
            /* LoopNest 2 */
            for (short i_23 = 2; i_23 < 22; i_23 += 1) 
            {
                for (short i_24 = 0; i_24 < 23; i_24 += 3) 
                {
                    {
                        var_42 = ((/* implicit */short) ((((/* implicit */int) arr_66 [i_22 + 1] [i_22 + 1])) >= (((/* implicit */int) arr_50 [i_22 + 1] [i_21] [i_22 + 1] [i_22 - 2] [i_22 - 1]))));
                        var_43 = ((/* implicit */short) (-(((/* implicit */int) (short)15187))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_25 = 4; i_25 < 21; i_25 += 4) 
            {
                var_44 *= ((/* implicit */short) (~(((/* implicit */int) arr_67 [i_25 + 1] [i_22 + 1]))));
                arr_72 [i_21] = ((/* implicit */short) ((((/* implicit */int) arr_66 [i_22] [i_22 - 1])) >= (((/* implicit */int) var_3))));
                arr_73 [i_21] [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8))));
            }
            for (short i_26 = 0; i_26 < 23; i_26 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_27 = 0; i_27 < 23; i_27 += 4) 
                {
                    for (short i_28 = 1; i_28 < 22; i_28 += 2) 
                    {
                        {
                            arr_82 [(short)14] [i_22 - 1] [i_21] [i_21] [i_28] &= arr_67 [i_22 - 2] [i_22 - 2];
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_28 + 1] [i_27] [i_26] [i_22 - 1])) ? (((((/* implicit */_Bool) (short)13070)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (short)3977)))) : (((((/* implicit */_Bool) (short)22497)) ? (((/* implicit */int) (short)13311)) : (((/* implicit */int) (short)30197))))));
                            var_46 = var_7;
                            arr_83 [i_28] [i_26] [i_26] [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_21])) + (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))));
                            var_47 = ((short) (~(((/* implicit */int) (short)96))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_29 = 2; i_29 < 19; i_29 += 3) 
                {
                    for (short i_30 = 0; i_30 < 23; i_30 += 4) 
                    {
                        {
                            var_48 = arr_36 [i_29];
                            var_49 |= ((/* implicit */short) (!(((((/* implicit */_Bool) arr_47 [i_21] [i_21] [i_21])) || (((/* implicit */_Bool) var_7))))));
                            var_50 = ((/* implicit */short) max((var_50), (arr_75 [i_21])));
                        }
                    } 
                } 
                var_51 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_26] [(short)20])) / (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) arr_58 [i_22 + 1]))));
                /* LoopNest 2 */
                for (short i_31 = 0; i_31 < 23; i_31 += 1) 
                {
                    for (short i_32 = 1; i_32 < 21; i_32 += 4) 
                    {
                        {
                            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) ((((/* implicit */int) arr_84 [i_21] [i_21] [i_22] [i_22 - 2])) != (((/* implicit */int) arr_84 [i_21] [i_22 + 1] [i_22] [i_22 + 1])))))));
                            var_53 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_86 [i_22 - 2] [i_22] [i_22 - 2] [i_22 + 1])) : (((/* implicit */int) var_12))));
                            var_54 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_79 [i_22] [i_22 - 2] [i_22 - 1] [i_22] [(short)21] [i_22]))));
                            var_55 -= ((/* implicit */short) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_92 [i_32] [i_32 - 1] [i_32 + 1] [(short)4] [i_32 - 1]))));
                        }
                    } 
                } 
            }
            for (short i_33 = 0; i_33 < 23; i_33 += 4) /* same iter space */
            {
                arr_96 [i_33] [i_22 - 1] [i_33] = ((/* implicit */short) (-(((/* implicit */int) arr_66 [i_33] [i_33]))));
                var_56 = ((/* implicit */short) ((((((((/* implicit */int) (short)-30198)) + (2147483647))) >> (((((/* implicit */int) (short)13069)) - (13066))))) > (((/* implicit */int) (short)3306))));
                /* LoopSeq 1 */
                for (short i_34 = 0; i_34 < 23; i_34 += 1) 
                {
                    var_57 = arr_51 [i_21] [i_21] [i_21];
                    var_58 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_3))))) != ((+(((/* implicit */int) (short)103))))));
                }
            }
        }
        for (short i_35 = 4; i_35 < 19; i_35 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_36 = 0; i_36 < 23; i_36 += 1) 
            {
                var_59 = ((/* implicit */short) (+((~(((/* implicit */int) (short)13065))))));
                var_60 = ((/* implicit */short) max((var_60), (((/* implicit */short) ((((/* implicit */int) arr_40 [i_35 - 1] [i_35] [i_35 - 4] [i_35 + 1] [i_35 + 1] [i_35 + 1])) > (((/* implicit */int) arr_50 [i_35] [i_21] [i_35 + 2] [i_21] [i_35 - 2])))))));
                var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_26 [i_21])) != (((/* implicit */int) var_11))))))))));
                arr_103 [i_21] [i_21] [i_36] = ((/* implicit */short) ((((/* implicit */int) arr_45 [i_36])) == (((/* implicit */int) arr_45 [i_21]))));
            }
            arr_104 [i_21] [i_21] = ((short) (short)-1251);
            arr_105 [i_21] [i_21] [i_21] |= ((short) ((((/* implicit */_Bool) arr_98 [i_35] [i_35 - 1] [i_35 - 4] [i_35 + 4])) ? (((/* implicit */int) arr_56 [i_35] [i_21] [i_21] [i_35] [i_35 - 4] [i_35 - 4] [i_35])) : (((/* implicit */int) arr_98 [i_35] [i_35 - 1] [i_35] [i_35 + 2]))));
            var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((short) ((((/* implicit */int) (short)-21609)) + (((/* implicit */int) (short)-2064)))))))))));
        }
    }
}
