/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241730
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_13 = ((/* implicit */int) ((var_6) == (((/* implicit */int) arr_1 [i_0]))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_10 [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (1388377415)));
                        arr_11 [i_0] [i_1] [i_1] = ((((((/* implicit */int) (short)18026)) << (((((/* implicit */int) (short)-14)) + (25))))) & (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2])));
                        arr_12 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)1389)) ? (((/* implicit */int) (short)17444)) : (-108513894)));
                        var_14 = (short)16725;
                        var_15 = ((/* implicit */short) ((((/* implicit */int) (short)-25280)) - (((/* implicit */int) (short)31465))));
                    }
                } 
            } 
        }
        /* LoopSeq 4 */
        for (short i_4 = 3; i_4 < 6; i_4 += 2) 
        {
            var_16 = (short)-32742;
            arr_17 [i_0] = arr_13 [i_0];
        }
        for (int i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
            {
                var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5 - 1])) ? (1022) : (arr_19 [2] [i_5 - 1] [i_5])));
                var_18 = ((/* implicit */short) min((var_18), (arr_22 [i_0] [i_5] [i_5])));
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 8; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1390))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1389)) ? (((/* implicit */int) arr_8 [i_7 + 1] [i_7 - 4] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) var_10))));
                            var_21 ^= arr_23 [7] [i_5] [i_6] [i_7];
                        }
                    } 
                } 
            }
            for (int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
            {
                var_22 = ((int) arr_25 [i_0] [i_5] [i_5 + 1] [i_5 + 1] [7]);
                /* LoopNest 2 */
                for (short i_10 = 3; i_10 < 7; i_10 += 1) 
                {
                    for (short i_11 = 4; i_11 < 6; i_11 += 3) 
                    {
                        {
                            var_23 -= ((/* implicit */int) var_9);
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
            }
            var_25 += ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)-31233))));
        }
        for (short i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            var_26 = (+(((-1265243050) | (((/* implicit */int) (short)18038)))));
            arr_39 [i_0] = ((/* implicit */short) (~(arr_2 [i_0])));
            arr_40 [i_0] [i_0] = ((/* implicit */short) ((var_6) >= (((/* implicit */int) arr_18 [i_0] [i_0] [i_12]))));
        }
        for (int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            var_27 = (short)-31466;
            var_28 = ((/* implicit */short) ((int) arr_0 [i_0]));
            arr_43 [i_0] [i_0] [i_0] = var_9;
        }
        /* LoopNest 2 */
        for (short i_14 = 1; i_14 < 8; i_14 += 1) 
        {
            for (short i_15 = 1; i_15 < 9; i_15 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-1379)) : (((/* implicit */int) arr_29 [i_16] [i_15 - 1] [i_14 - 1]))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) arr_31 [i_15] [i_14] [i_0])))) : (((/* implicit */int) arr_41 [i_0] [i_14] [i_15 - 1]))));
                    }
                    arr_50 [i_0] [i_0] [i_0] = var_11;
                    arr_51 [i_0] [i_0] [i_15 + 1] [i_15] = ((/* implicit */int) (short)-32740);
                    /* LoopNest 2 */
                    for (short i_17 = 1; i_17 < 9; i_17 += 3) 
                    {
                        for (short i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                                var_32 = -2052308172;
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            for (short i_20 = 0; i_20 < 10; i_20 += 1) 
            {
                {
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_12) : (arr_56 [i_19] [i_20] [i_20] [i_0])));
                    var_34 = ((/* implicit */short) 33553920);
                }
            } 
        } 
        var_35 = ((/* implicit */int) var_0);
    }
    for (int i_21 = 2; i_21 < 11; i_21 += 2) /* same iter space */
    {
        var_36 *= ((/* implicit */short) arr_64 [i_21] [i_21]);
        var_37 = ((/* implicit */short) ((((((/* implicit */int) (short)-19337)) >= (((int) (short)-28385)))) ? (min((arr_64 [i_21] [i_21 - 1]), ((-(arr_64 [i_21 - 1] [i_21]))))) : (((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) arr_65 [i_21 - 1])) : (((/* implicit */int) arr_65 [i_21 + 3]))))));
    }
    for (int i_22 = 2; i_22 < 11; i_22 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_66 [i_22 + 2] [i_22])) ? (arr_67 [i_22]) : (((/* implicit */int) arr_65 [i_22])))) | (((/* implicit */int) (short)18026)))) >> (((((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_22 + 3]))))) % (min((((/* implicit */int) (short)-13940)), (-951322854)))))));
        var_39 = (short)-16544;
        var_40 &= var_3;
    }
    /* LoopNest 2 */
    for (short i_23 = 0; i_23 < 25; i_23 += 2) 
    {
        for (int i_24 = 2; i_24 < 22; i_24 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_25 = 0; i_25 < 25; i_25 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        for (int i_27 = 0; i_27 < 25; i_27 += 1) 
                        {
                            {
                                arr_80 [i_24 - 2] [i_25] [i_26] [(short)12] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_73 [i_24 + 1] [i_24 + 1])) ? (((/* implicit */int) var_4)) : (var_6))) > (((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))));
                                arr_81 [i_23] [i_24] [i_25] [i_26] [8] [i_27] = ((((/* implicit */_Bool) arr_69 [i_26])) ? (arr_69 [i_23]) : (((/* implicit */int) (short)-32)));
                                var_41 -= ((((/* implicit */int) (short)32742)) - ((+(((/* implicit */int) arr_76 [i_23] [i_24 + 1] [i_24 + 1] [i_24 + 3] [i_27] [i_25])))));
                            }
                        } 
                    } 
                    var_42 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_72 [i_24 + 2] [i_24 - 2] [i_24])))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_6)))))))))))));
                }
                for (int i_28 = 0; i_28 < 25; i_28 += 1) 
                {
                    var_44 = ((/* implicit */int) max(((short)32750), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_75 [1] [i_24] [i_24]))))) >= (min((arr_70 [i_23]), (var_6))))))));
                    arr_84 [i_24] = min((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (short)8916))))), (((((/* implicit */_Bool) arr_72 [i_23] [i_24 - 1] [i_28])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))));
                }
                /* vectorizable */
                for (short i_29 = 0; i_29 < 25; i_29 += 1) 
                {
                    var_45 = var_3;
                    arr_88 [i_29] [i_24 + 2] [i_29] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_87 [i_24 + 2] [i_24 + 2] [i_23]))));
                }
                var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) arr_85 [i_23] [i_24] [i_24] [i_23]))));
                var_47 = max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) ((short) ((var_8) % (arr_72 [i_23] [i_23] [i_24]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_30 = 1; i_30 < 21; i_30 += 2) 
    {
        arr_91 [i_30] = ((/* implicit */int) (short)31465);
        var_48 = ((/* implicit */int) arr_79 [i_30] [18] [i_30] [i_30 + 3] [i_30] [i_30] [i_30]);
    }
    for (int i_31 = 3; i_31 < 12; i_31 += 1) 
    {
        /* LoopNest 3 */
        for (int i_32 = 1; i_32 < 10; i_32 += 1) 
        {
            for (int i_33 = 0; i_33 < 13; i_33 += 1) 
            {
                for (int i_34 = 4; i_34 < 12; i_34 += 4) 
                {
                    {
                        arr_103 [i_31] [i_32 + 1] [i_32 + 1] [i_31] [i_32 + 1] = ((max((((/* implicit */int) var_7)), (1294749646))) >> (((((/* implicit */int) max(((short)-16544), (arr_74 [i_31 - 3] [i_34 - 3])))) + (16566))));
                        var_49 = min((min((((((/* implicit */_Bool) arr_96 [i_31] [i_32] [i_31 - 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) -33553894)) ? (-277480268) : (((/* implicit */int) (short)16544)))))), (((/* implicit */int) var_2)));
                        var_50 = ((/* implicit */int) var_1);
                        var_51 = arr_100 [i_31] [i_31] [i_33] [i_34 - 2];
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_35 = 0; i_35 < 13; i_35 += 2) 
        {
            var_52 = (short)-18046;
            /* LoopNest 2 */
            for (short i_36 = 0; i_36 < 13; i_36 += 3) 
            {
                for (int i_37 = 0; i_37 < 13; i_37 += 3) 
                {
                    {
                        var_53 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((33553907), (arr_66 [i_31 - 2] [i_31 - 2])))) ? (((/* implicit */int) max((var_3), (arr_78 [i_31 - 3] [i_31] [i_31] [i_31] [i_31 - 2])))) : (min((((/* implicit */int) var_1)), (1713837370)))))) ? (max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) arr_102 [i_31] [i_31] [i_35] [i_36] [i_36] [i_37])))) : (((/* implicit */int) var_3)));
                        var_54 &= -951890308;
                        var_55 = ((/* implicit */short) (~(985118374)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_38 = 1; i_38 < 12; i_38 += 2) 
            {
                for (int i_39 = 0; i_39 < 13; i_39 += 3) 
                {
                    {
                        var_56 = min((var_3), (((/* implicit */short) (!(((/* implicit */_Bool) min((var_3), (arr_106 [i_38 - 1] [i_31 + 1]))))))));
                        var_57 = ((/* implicit */short) arr_108 [i_31] [i_31 + 1] [i_31] [i_31]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_40 = 2; i_40 < 9; i_40 += 4) 
        {
            var_58 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_67 [i_31])))) ? (arr_90 [i_40]) : (((/* implicit */int) arr_65 [i_40]))));
            var_59 = ((/* implicit */short) ((var_11) + (((/* implicit */int) arr_115 [i_31 - 3] [i_31] [i_40 + 1] [i_40 + 2]))));
        }
        for (int i_41 = 4; i_41 < 12; i_41 += 1) 
        {
            arr_127 [i_31 - 2] [i_31] = arr_74 [i_31 - 2] [i_31 - 2];
            arr_128 [i_31] [i_31] = max((max((((/* implicit */int) arr_75 [i_31] [i_31] [i_31 + 1])), ((+(-951890304))))), ((+(((/* implicit */int) arr_71 [i_31])))));
        }
        var_60 *= (short)27480;
    }
    /* vectorizable */
    for (int i_42 = 2; i_42 < 22; i_42 += 1) 
    {
        var_61 = ((/* implicit */int) max((var_61), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))));
        var_62 ^= ((/* implicit */int) arr_78 [i_42 - 1] [i_42] [i_42 - 1] [i_42 - 1] [i_42 + 1]);
        var_63 = ((/* implicit */int) var_2);
    }
    var_64 = var_1;
}
