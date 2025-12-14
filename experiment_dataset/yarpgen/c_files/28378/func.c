/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28378
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
    var_18 = ((/* implicit */int) var_1);
    var_19 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] = ((((((/* implicit */_Bool) var_12)) ? (16383U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> ((((~(((/* implicit */int) (short)10252)))) + (10260))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(3U))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_20 -= ((/* implicit */_Bool) var_11);
                            arr_20 [i_0] [i_0] [i_0] [(unsigned char)18] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5]))))) : ((~(((/* implicit */int) var_15))))));
                            var_21 = ((/* implicit */short) var_5);
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] [i_0] [i_5] = ((/* implicit */short) ((var_6) << (((((/* implicit */int) var_2)) - (15974)))));
                        }
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)7)) % (((/* implicit */int) (short)-3785))))) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : ((-(((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_26 [i_6] [i_0] = ((/* implicit */unsigned char) (~(2659974276U)));
            var_23 = ((/* implicit */_Bool) 2781797953U);
        }
        for (unsigned int i_7 = 1; i_7 < 24; i_7 += 4) 
        {
            arr_29 [i_7] [i_0] [i_0] = ((/* implicit */short) var_0);
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                var_24 = ((/* implicit */short) arr_8 [i_0] [i_0] [i_7 + 1] [i_8]);
                arr_32 [i_8] [i_0] [i_7] [i_0] = ((/* implicit */long long int) ((arr_25 [i_0 - 1] [i_7] [i_7 + 1]) ? (((/* implicit */int) arr_25 [i_0 - 1] [i_0 - 1] [i_7 - 1])) : (((/* implicit */int) arr_25 [i_0 - 1] [i_0 - 1] [i_7 - 1]))));
            }
        }
        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) >= (2781797945U))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_35 [i_9] [i_9] = ((int) 2692509419U);
        arr_36 [i_9] = ((/* implicit */unsigned int) ((var_9) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2781797941U))))))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (unsigned int i_11 = 2; i_11 < 9; i_11 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1152947464)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-15443))));
                    arr_43 [i_10] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2659974292U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-4676)))))) ? (4294967276U) : (2659974291U)))) ? (((/* implicit */int) (short)-15436)) : (((/* implicit */int) arr_40 [i_9] [i_10] [i_11] [i_11])));
                }
            } 
        } 
    }
    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            arr_50 [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 1513169353U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))) : (1634993008U)));
            /* LoopNest 2 */
            for (long long int i_14 = 1; i_14 < 17; i_14 += 2) 
            {
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    {
                        var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_14] [i_14 - 1] [i_14 + 2])) * ((((_Bool)0) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-16550))))));
                        var_28 |= ((/* implicit */int) ((min((((3468776822U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_13] [i_13] [i_13]))))), (((/* implicit */unsigned int) ((int) var_10))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1))))));
                    }
                } 
            } 
        }
        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_17 = 2; i_17 < 19; i_17 += 4) 
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_4)) - (11908)))));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        {
                            arr_72 [i_18] [i_18] [i_17] [i_16] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_64 [i_17 - 2] [i_17 - 1] [i_17 + 1])), ((+(((/* implicit */int) (short)-22950))))));
                            arr_73 [i_12] = ((/* implicit */unsigned int) arr_69 [i_12] [i_16] [i_17] [i_18] [i_19]);
                        }
                    } 
                } 
            }
            for (unsigned int i_20 = 0; i_20 < 20; i_20 += 4) 
            {
                var_30 -= ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_13 [i_12] [i_16] [i_16] [i_16] [i_20])) % (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)25347)) : (((/* implicit */int) var_15)))))));
                arr_76 [i_12] [i_16] [i_20] [i_20] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_12] [i_12] [i_16] [i_20] [i_16])))))));
                /* LoopSeq 2 */
                for (int i_21 = 0; i_21 < 20; i_21 += 3) 
                {
                    arr_80 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) (((((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_20] [i_16]))) > (4294967274U)))))) + (2147483647))) >> (((1741258000) - (1741257990)))));
                    var_31 += ((/* implicit */short) arr_79 [i_12] [i_16] [i_16] [i_20] [i_20] [i_21]);
                    arr_81 [i_12] [i_16] [i_21] [i_21] = (-9223372036854775807LL - 1LL);
                    var_32 = ((/* implicit */unsigned char) var_5);
                }
                for (unsigned char i_22 = 3; i_22 < 18; i_22 += 4) 
                {
                    var_33 = arr_67 [i_22 - 1] [i_22 - 1] [i_22] [i_22 - 2];
                    arr_86 [i_12] [i_16] [i_12] [i_22] [i_22] = ((/* implicit */unsigned int) arr_49 [i_16] [(_Bool)1]);
                    arr_87 [i_12] [i_16] [5U] [i_22] [i_20] [i_20] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)15435))));
                    arr_88 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_4 [i_12] [i_16])))));
                    var_34 = ((/* implicit */unsigned char) ((arr_47 [i_12]) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1521962910U))))))));
                }
            }
            /* LoopSeq 3 */
            for (long long int i_23 = 0; i_23 < 20; i_23 += 1) 
            {
                arr_91 [i_12] [i_12] [i_23] [i_12] = ((/* implicit */unsigned char) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_89 [i_12] [(unsigned char)17])) ? (arr_54 [i_12] [(unsigned char)11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_12] [i_16]))))))));
                arr_92 [i_12] [i_16] [i_12] &= ((/* implicit */int) var_3);
                arr_93 [i_12] [i_12] [i_12] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_12])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_23])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_55 [i_23] [i_23] [i_23] [i_23]))))) : (min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13495))))))))));
                var_35 = ((/* implicit */short) ((max((((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_16]))) * (var_6))), (((/* implicit */long long int) (unsigned char)23)))) / (((/* implicit */long long int) (-(((/* implicit */int) (short)-4085)))))));
                var_36 = ((((/* implicit */_Bool) ((arr_4 [i_12] [i_12]) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)247))))) : (2329112933U)))) ? (((/* implicit */int) (unsigned char)1)) : (((arr_60 [i_12]) ? (((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12] [i_23])) ? (1737159657) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 921313812906141986LL))))))));
            }
            for (unsigned int i_24 = 2; i_24 < 19; i_24 += 3) 
            {
                arr_98 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                arr_99 [i_12] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_48 [i_24 - 2] [i_24 + 1] [i_24 + 1]))))) ? (((7U) / (((/* implicit */unsigned int) (-2147483647 - 1))))) : (min((718032937U), (((/* implicit */unsigned int) (unsigned char)0))))));
                var_37 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (arr_66 [i_16] [i_16] [i_16] [i_24 + 1] [i_24 - 2] [i_24 - 1])))) << (((((/* implicit */int) ((short) arr_66 [i_16] [i_16] [i_16] [i_24 - 1] [i_24 - 2] [i_24 - 2]))) - (29088)))));
                var_38 = ((/* implicit */long long int) min((((short) ((unsigned char) -657829924))), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-4081)))))));
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 650549015U)) ? (((-792682544831738222LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-5917), (((/* implicit */short) (_Bool)1))))))));
            }
            /* vectorizable */
            for (long long int i_25 = 0; i_25 < 20; i_25 += 2) 
            {
                var_40 = ((/* implicit */unsigned int) ((unsigned char) (short)32756));
                arr_103 [i_12] [i_12] = ((((/* implicit */_Bool) arr_18 [i_12] [i_12])) ? (((/* implicit */int) arr_18 [i_12] [i_12])) : (((/* implicit */int) (unsigned char)165)));
                /* LoopSeq 1 */
                for (long long int i_26 = 0; i_26 < 20; i_26 += 2) 
                {
                    arr_107 [i_25] [i_16] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)-3019))))));
                    /* LoopSeq 1 */
                    for (long long int i_27 = 0; i_27 < 20; i_27 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_94 [i_25] [i_12])))))));
                        arr_111 [i_12] [i_12] [i_16] [i_25] [i_26] [i_12] [i_12] = (!(((/* implicit */_Bool) (~(var_1)))));
                        var_42 = ((/* implicit */long long int) var_8);
                        arr_112 [i_12] [i_16] [i_25] [i_12] [i_16] = (~(((unsigned int) arr_100 [i_12] [i_12] [i_12] [i_12])));
                        arr_113 [i_27] [i_26] [(short)8] [i_26] [i_27] [i_26] = ((/* implicit */short) (-(((/* implicit */int) arr_89 [i_12] [i_16]))));
                    }
                }
            }
            arr_114 [i_16] = ((min((((arr_78 [i_12] [i_12] [i_16] [i_12] [i_16] [i_16]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (2183927868U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-3019))))))) >> (min((((((/* implicit */int) (short)3014)) >> (((4294967293U) - (4294967293U))))), (((arr_67 [i_12] [i_12] [i_12] [i_16]) ? (((/* implicit */int) arr_84 [i_12] [i_12] [i_12] [i_12])) : (657829924))))));
        }
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (short)-22934)))) : (((/* implicit */int) arr_62 [i_12] [i_12] [i_12] [i_12]))));
        var_44 = ((/* implicit */int) var_3);
        arr_115 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-696864600)))) ? (((var_10) >> (((arr_74 [i_12] [i_12] [i_12] [i_12]) - (223736707))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)22954))))) ? (((/* implicit */int) (short)-7153)) : (((/* implicit */int) (_Bool)1)))))));
    }
    var_45 -= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)3339)) : (((/* implicit */int) var_12)))))) == (((/* implicit */int) ((((/* implicit */int) var_13)) < (((((/* implicit */_Bool) 551702714)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)7166)))))))));
}
