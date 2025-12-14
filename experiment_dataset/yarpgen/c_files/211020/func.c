/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211020
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
    var_17 = var_4;
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (short)-1))));
        arr_2 [i_0] = arr_0 [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 *= ((/* implicit */short) (-(((/* implicit */int) (short)-5525))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_1])), ((short)12288)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) * ((+(arr_6 [i_1]))))) : (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_5 [i_1]))))) * ((+(arr_6 [i_1])))))));
    }
    for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_1))));
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 3; i_4 < 22; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        var_21 = ((/* implicit */long long int) (_Bool)1);
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */long long int) (~((~(((/* implicit */int) arr_11 [(_Bool)1]))))))) ^ (762398987234333801LL))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) max((((/* implicit */int) min(((_Bool)0), (arr_15 [10LL])))), (((arr_15 [8LL]) ? (((/* implicit */int) (short)-30752)) : (((/* implicit */int) arr_15 [(_Bool)1]))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) 9223372036854775807LL))));
    }
    /* LoopSeq 2 */
    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_6] [i_6] [i_6]) - (arr_12 [i_6] [i_6] [i_6])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_11 [i_6]))));
        var_26 = ((/* implicit */short) 8850043326529992447LL);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            for (long long int i_8 = 2; i_8 < 12; i_8 += 1) 
            {
                {
                    var_27 = ((/* implicit */short) arr_6 [i_6]);
                    arr_26 [(_Bool)1] [i_7] [(short)2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_10 [i_8])))) && (((/* implicit */_Bool) arr_20 [i_6] [i_7] [i_7])))), (arr_18 [i_7])));
                    arr_27 [i_6] [i_6] [i_7] [(_Bool)1] = ((var_9) - (((/* implicit */long long int) ((/* implicit */int) min((arr_18 [i_8 - 1]), (arr_18 [i_8 + 1]))))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        arr_32 [i_6] [i_6] [i_6] = ((arr_29 [i_6] [i_6] [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((arr_16 [i_8] [i_6] [i_8] [i_8 - 1]), (arr_16 [i_8 - 2] [i_6] [i_8 + 2] [i_8 + 2]))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min((max((arr_24 [i_8 + 1] [i_8 - 1] [3LL]), (arr_14 [i_9]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) arr_18 [i_6]))) : (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) arr_19 [i_6]))))))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) (-(143552238122434560LL)));
                            var_30 &= ((/* implicit */short) (((!(arr_4 [i_9]))) ? (min((min((((/* implicit */long long int) arr_30 [i_6])), (arr_14 [i_9]))), (((var_5) ? (arr_17 [i_7] [i_8] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10]))))))) : (min((max((arr_25 [i_6] [i_6] [(short)1]), (-1LL))), ((((_Bool)1) ? (5964581977474791386LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19161)))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            arr_37 [i_9] [i_7] [i_8] [i_9] [i_8] = ((long long int) arr_19 [i_11 + 1]);
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) 155579719030414083LL))));
                            arr_38 [i_6] [i_7] [i_8] [i_9] [i_11] = ((/* implicit */short) arr_10 [i_7]);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_8 - 2] [i_8 - 2] [i_9])))))));
                            var_33 = ((/* implicit */short) (_Bool)1);
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_43 [i_7] [i_13] = ((/* implicit */_Bool) arr_41 [i_6] [i_6] [(short)0] [i_6] [i_6] [i_6]);
                            var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_18 [i_8 + 2]) ? (((/* implicit */int) arr_18 [i_8 - 2])) : (((/* implicit */int) arr_18 [i_8 + 2]))))) ? ((+(((/* implicit */int) arr_18 [i_8 - 1])))) : (((/* implicit */int) (!(arr_18 [i_8 + 2]))))));
                            var_35 = ((/* implicit */short) max(((-(max((arr_6 [i_6]), (5964581977474791395LL))))), (((((/* implicit */_Bool) (short)63)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_33 [i_8 + 2] [i_7] [i_8] [10LL] [i_13] [i_7] [i_13 - 1])))));
                            var_36 &= var_9;
                        }
                    }
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        var_37 = ((/* implicit */_Bool) max((arr_25 [i_8 + 2] [i_8 + 1] [i_8 + 2]), (max((arr_25 [i_8] [i_8 - 1] [i_8 - 1]), (((/* implicit */long long int) (short)32762))))));
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            var_38 &= ((/* implicit */_Bool) (short)6);
                            arr_50 [i_15] = ((/* implicit */_Bool) (short)31);
                        }
                    }
                    var_39 = ((/* implicit */_Bool) max((var_39), ((_Bool)1)));
                }
            } 
        } 
    }
    for (short i_16 = 0; i_16 < 15; i_16 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_17]))));
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) arr_15 [16LL]))));
                            arr_65 [i_16] [(short)0] [(_Bool)1] [i_16] [i_16] |= ((/* implicit */short) -762398987234333801LL);
                            var_42 |= ((/* implicit */short) var_13);
                            var_43 += (!(((/* implicit */_Bool) arr_11 [i_19])));
                        }
                    } 
                } 
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (short i_23 = 2; i_23 < 14; i_23 += 1) 
                    {
                        {
                            arr_76 [i_16] [i_16] [i_16] [14LL] [i_21] = ((/* implicit */long long int) (~(((arr_9 [i_22]) ? (((/* implicit */int) arr_9 [i_21])) : (((/* implicit */int) arr_9 [(short)2]))))));
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_23 - 1] [i_23 + 1])) ? (max((max((arr_62 [i_21]), (((/* implicit */long long int) var_7)))), (arr_10 [i_22]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)22))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) arr_4 [i_22])))))) : (max((arr_10 [i_16]), (arr_14 [i_21])))))));
                            var_45 = ((/* implicit */long long int) arr_13 [i_21] [i_17]);
                        }
                    } 
                } 
                var_46 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_21]))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_13 [i_21] [i_16])) : (((/* implicit */int) arr_63 [8LL] [i_17] [i_16]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_3)))))) : (arr_60 [i_16] [i_17]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (long long int i_24 = 0; i_24 < 15; i_24 += 1) 
            {
                var_47 ^= ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_16])) ? (arr_1 [i_16]) : (arr_17 [i_16] [i_17] [i_24]))), (arr_6 [i_17])));
                arr_80 [i_17] [(_Bool)1] = ((/* implicit */long long int) ((short) arr_13 [i_17] [i_16]));
            }
            /* LoopNest 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (short i_26 = 0; i_26 < 15; i_26 += 1) 
                {
                    {
                        var_48 |= ((/* implicit */long long int) ((((/* implicit */int) arr_82 [i_16] [i_17] [i_25] [i_17])) % (((/* implicit */int) (_Bool)1))));
                        var_49 = ((/* implicit */long long int) ((((arr_9 [i_17]) ? (((/* implicit */int) arr_9 [i_16])) : (((/* implicit */int) arr_9 [i_16])))) / (((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)0))) <= (((/* implicit */int) arr_13 [8LL] [8LL])))))));
                        arr_86 [i_16] [i_17] [i_26] [i_26] [i_26] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) max((4323455642275676160LL), (((/* implicit */long long int) arr_68 [i_26])))))) >= ((-(((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))));
                        var_50 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_26] [i_25] [(short)8] [i_16])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_58 [i_16] [i_16] [(short)1])) : (((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) (short)-3027)))) : ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_1))));
                        var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) (+(((/* implicit */int) ((4323455642275676160LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_16] [i_16])))))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_27 = 3; i_27 < 14; i_27 += 1) 
            {
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    for (short i_29 = 2; i_29 < 13; i_29 += 1) 
                    {
                        {
                            arr_95 [i_29 + 1] [i_28 + 1] [(_Bool)1] [(_Bool)1] [i_16] [i_16] &= ((/* implicit */_Bool) (short)7);
                            var_52 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_16)))));
                            arr_96 [i_16] [i_27] [i_27] [i_28 + 1] [(short)7] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_78 [i_16] [i_17] [i_27])) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) << (((/* implicit */int) arr_81 [i_16] [i_17] [i_27] [i_28 + 1]))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_31 = 0; i_31 < 15; i_31 += 1) 
            {
                var_53 = ((/* implicit */_Bool) arr_61 [i_16]);
                arr_104 [i_30] = ((/* implicit */long long int) (_Bool)0);
                /* LoopNest 2 */
                for (long long int i_32 = 0; i_32 < 15; i_32 += 1) 
                {
                    for (long long int i_33 = 0; i_33 < 15; i_33 += 2) 
                    {
                        {
                            var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) -7985265350258726530LL))));
                            var_55 |= -511375221539003341LL;
                            var_56 = ((/* implicit */long long int) arr_90 [i_31] [i_30]);
                            var_57 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_87 [i_33]))));
                            var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) ((arr_72 [i_16] [i_33] [i_31] [14LL] [i_33]) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) arr_72 [i_16] [i_33] [i_16] [i_33] [i_16])))))));
                        }
                    } 
                } 
            }
            for (short i_34 = 0; i_34 < 15; i_34 += 3) 
            {
                arr_113 [i_16] [i_30] = ((/* implicit */long long int) ((short) arr_107 [7LL] [i_30] [i_30] [i_34] [i_34]));
                arr_114 [i_30] [i_30] [i_34] [i_34] = ((/* implicit */_Bool) ((arr_107 [i_16] [i_16] [i_30] [i_16] [i_16]) / (8350991642690080357LL)));
                /* LoopSeq 2 */
                for (short i_35 = 0; i_35 < 15; i_35 += 2) 
                {
                    var_59 = ((/* implicit */_Bool) max((var_59), (((/* implicit */_Bool) -2982636724269722702LL))));
                    arr_118 [i_35] [i_30] [7LL] [i_30] [i_16] = ((_Bool) arr_63 [i_35] [i_16] [i_16]);
                    var_60 = arr_59 [i_16] [i_16];
                }
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_37 = 1; i_37 < 12; i_37 += 1) /* same iter space */
                    {
                        var_61 = (!(((_Bool) 6941099696350821337LL)));
                        var_62 |= ((/* implicit */long long int) (short)13562);
                        var_63 = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (long long int i_38 = 1; i_38 < 12; i_38 += 1) /* same iter space */
                    {
                        arr_127 [i_30] [i_30] [i_34] [i_36] [i_36] = ((/* implicit */_Bool) (short)-32747);
                        arr_128 [i_16] [i_30] [14LL] [14LL] [i_38 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_38 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_38 + 2]))));
                    }
                    arr_129 [i_16] [i_16] [i_30] [i_16] [i_16] [i_16] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_16]))));
                    /* LoopSeq 2 */
                    for (_Bool i_39 = 1; i_39 < 1; i_39 += 1) 
                    {
                        var_64 = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_30])) >= (((/* implicit */int) arr_15 [i_30]))));
                        arr_132 [12LL] [i_30] [i_30] [4LL] [i_30] [i_30] [i_30] &= arr_83 [i_16] [i_30] [i_30] [i_36] [i_30];
                        var_65 &= ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                        var_66 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [(_Bool)1] [i_39 - 1] [i_39 - 1] [i_39 - 1] [i_39 - 1])) ? (((((/* implicit */_Bool) -2317732674598883257LL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_16]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_39 - 1])))));
                        var_67 = -9223372036854775801LL;
                    }
                    for (_Bool i_40 = 0; i_40 < 0; i_40 += 1) 
                    {
                        var_68 = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) arr_126 [i_16] [i_30] [i_30] [i_34] [(_Bool)1] [i_40] [13LL])) : (((/* implicit */int) arr_99 [i_30] [i_40 + 1]))))));
                        var_69 = ((/* implicit */short) (_Bool)0);
                    }
                }
                var_70 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_83 [i_16] [(_Bool)1] [i_16] [i_16] [i_16]))));
            }
            var_71 &= ((/* implicit */long long int) (!((_Bool)1)));
            var_72 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_16] [i_30]))) : (arr_102 [i_16] [i_30] [9LL] [i_30]));
        }
        arr_136 [i_16] = 4515574448285417473LL;
    }
    /* LoopNest 3 */
    for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
    {
        for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
        {
            for (short i_43 = 2; i_43 < 18; i_43 += 3) 
            {
                {
                    arr_145 [i_41] [(_Bool)1] [i_41] = ((/* implicit */long long int) ((short) ((_Bool) (short)18644)));
                    var_73 |= ((/* implicit */short) arr_142 [i_43]);
                }
            } 
        } 
    } 
}
