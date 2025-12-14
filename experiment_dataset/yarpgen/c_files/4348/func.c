/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4348
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
    for (short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 - 1] [(unsigned char)1])) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0])))) : (((/* implicit */int) min((arr_4 [i_0 + 2] [i_1]), (((/* implicit */short) var_5))))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */int) arr_3 [i_0 + 1] [i_1])) ^ (((/* implicit */int) max((((/* implicit */short) var_1)), ((short)11551))))))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) (short)11551);
                var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0] [i_1]))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */int) (short)-11551)), ((+(((/* implicit */int) ((unsigned char) (short)-30014))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)21459)) - (((/* implicit */int) (short)21459)))))));
                        var_19 = arr_19 [i_2] [i_5];
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)254)))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_17 [i_2] [i_3] [i_2])) % (((/* implicit */int) arr_17 [i_2] [i_3] [i_2])))), ((~(((/* implicit */int) arr_17 [i_3] [i_3] [i_2]))))));
        }
        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) min((((short) var_4)), (((/* implicit */short) arr_13 [i_2] [i_6]))))))))));
            /* LoopSeq 4 */
            for (short i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((/* implicit */int) (short)3568)), (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_13 [i_6] [i_2])))))))));
                arr_31 [i_7] = ((/* implicit */short) max((((/* implicit */int) ((short) max((var_4), ((short)6702))))), (max((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (short)-3830)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(short)12] [i_6] [i_7])))))))));
                var_24 = ((unsigned char) ((short) var_6));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    arr_34 [i_8] [i_7] [(short)3] [(short)2] [i_7] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [(short)12])) : (((/* implicit */int) ((((/* implicit */int) arr_30 [i_6])) == (((/* implicit */int) (short)7172)))))));
                    arr_35 [(unsigned char)7] [i_6] [i_7] [(unsigned char)7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_7] [i_7]))));
                    var_25 = ((/* implicit */short) (~((-(((/* implicit */int) (short)21937))))));
                    arr_36 [i_7] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) arr_15 [i_6] [i_7])))))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (~(((/* implicit */int) arr_24 [i_7] [i_7])))))));
                }
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    var_27 = (short)0;
                    var_28 = arr_25 [(short)9] [i_6];
                }
            }
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                arr_42 [i_10] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32755))))) / ((((~(((/* implicit */int) var_9)))) ^ ((~(((/* implicit */int) var_3))))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) min((var_29), (arr_15 [i_6] [i_2])));
                            arr_48 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_18 [i_11] [i_10] [i_6] [i_2])), (min(((short)-13), ((short)29100)))))) ? (((/* implicit */int) arr_23 [i_2])) : (((((/* implicit */_Bool) arr_28 [i_11 + 2] [i_11 - 1] [i_11 - 1] [(unsigned char)6])) ? (((/* implicit */int) ((((/* implicit */int) arr_28 [i_6] [i_10] [i_11 + 1] [i_12])) >= (((/* implicit */int) var_2))))) : (((/* implicit */int) arr_37 [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11 + 2]))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) max((var_30), (((unsigned char) min(((short)21794), ((short)-13))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_12 [i_2] [i_6] [(unsigned char)8]), ((short)21437))), (((/* implicit */short) arr_13 [i_2] [(unsigned char)6]))))) ? (((((/* implicit */_Bool) (short)19)) ? (((/* implicit */int) (short)-13)) : (((/* implicit */int) arr_32 [i_2] [i_6] [i_6] [i_6] [(unsigned char)7])))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) ^ (((/* implicit */int) min(((short)5), (((/* implicit */short) (unsigned char)98)))))))));
            }
            /* vectorizable */
            for (short i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-6702)) : (((/* implicit */int) (unsigned char)255))))))))));
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) (short)29456)) ? (((/* implicit */int) (short)22081)) : (((/* implicit */int) (short)29894)))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) var_12)))))));
                            arr_55 [i_2] [i_6] [i_6] [i_6] [(short)4] [i_14] [(short)9] = ((/* implicit */short) var_3);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_16 = 1; i_16 < 12; i_16 += 1) 
                {
                    for (short i_17 = 4; i_17 < 12; i_17 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                            arr_61 [i_6] [i_2] [i_16] [i_16 + 2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_16 - 1] [i_16 - 1])) + (((/* implicit */int) arr_16 [i_16 + 1] [i_6]))));
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) != (((/* implicit */int) (unsigned char)179)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    for (short i_19 = 0; i_19 < 14; i_19 += 1) 
                    {
                        {
                            arr_68 [(unsigned char)8] [(unsigned char)8] [i_19] [(short)8] [i_19] = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (short)-13579))));
                            var_37 -= arr_66 [i_2] [i_6];
                            arr_69 [i_2] [i_6] [i_13] [i_6] [i_19] [i_18] [i_18] = ((/* implicit */short) ((unsigned char) arr_60 [i_19]));
                        }
                    } 
                } 
                arr_70 [i_6] [i_6] [(unsigned char)5] = ((/* implicit */short) (((-(((/* implicit */int) (short)0)))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_13])) : (((/* implicit */int) arr_64 [i_2] [i_6] [i_6] [(short)0] [i_13] [(short)0]))))));
            }
            for (short i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 14; i_21 += 1) 
                {
                    for (unsigned char i_22 = 0; i_22 < 14; i_22 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (short)-13973)) : (((/* implicit */int) (unsigned char)255))));
                            var_39 = ((/* implicit */short) max((((((/* implicit */int) ((unsigned char) arr_26 [i_21] [(unsigned char)7]))) * (((/* implicit */int) arr_72 [i_2] [i_2] [i_2])))), ((-(((/* implicit */int) max((((/* implicit */short) (unsigned char)1)), (arr_60 [i_22]))))))));
                        }
                    } 
                } 
                var_40 = var_4;
                var_41 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-17686), (var_10))))))) ^ (((/* implicit */int) min((arr_29 [(short)6] [(short)6]), (arr_29 [i_2] [(short)6]))))));
            }
            var_42 = ((/* implicit */short) arr_59 [(short)8] [i_2] [i_2] [i_6] [i_6] [i_6]);
            /* LoopSeq 1 */
            for (short i_23 = 0; i_23 < 14; i_23 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_24 = 0; i_24 < 14; i_24 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_25 = 0; i_25 < 14; i_25 += 3) 
                    {
                        arr_86 [i_2] [(unsigned char)6] [i_2] [i_24] [i_2] = ((/* implicit */short) var_1);
                        var_43 = ((/* implicit */short) (+(((/* implicit */int) min(((short)-3568), (((/* implicit */short) (unsigned char)28)))))));
                        arr_87 [i_2] [i_2] [(short)9] [i_24] [i_24] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) max((arr_39 [i_23] [i_23] [i_23] [i_23] [i_23]), (arr_39 [(short)10] [(short)10] [i_23] [i_24] [i_25])))) & (((/* implicit */int) max((arr_39 [i_25] [i_24] [i_23] [i_6] [i_2]), ((unsigned char)243))))));
                        arr_88 [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_15 [i_2] [i_6])) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) min(((unsigned char)19), ((unsigned char)31)))))));
                    }
                    var_44 = ((/* implicit */short) min((var_44), (var_6)));
                    var_45 += arr_64 [i_2] [(short)12] [i_6] [(short)4] [i_23] [i_2];
                    arr_89 [i_24] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) min((min((var_0), (var_12))), (min((arr_53 [i_2] [i_2] [i_23] [(unsigned char)6] [i_6] [i_23] [i_23]), (((/* implicit */short) arr_24 [i_2] [i_6]))))))) - ((~(((/* implicit */int) min((var_8), (((/* implicit */short) var_5)))))))));
                }
                for (unsigned char i_26 = 0; i_26 < 14; i_26 += 1) 
                {
                    var_46 |= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_78 [i_2] [i_6] [i_2] [i_26])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)10848))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_2] [i_6] [i_23] [i_26]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_23] [i_26]))))))) : (((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((/* implicit */int) (short)32767)) - (32762)))))));
                    var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) (-((((+(((/* implicit */int) (short)1627)))) + ((-(((/* implicit */int) arr_72 [i_2] [i_6] [i_26])))))))))));
                }
                var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_2] [(short)10] [i_6] [(short)6])))))));
            }
        }
        var_49 = ((/* implicit */short) max((var_49), (arr_43 [i_2] [i_2] [i_2] [i_2] [i_2])));
    }
    for (short i_27 = 0; i_27 < 13; i_27 += 1) 
    {
        arr_95 [i_27] [(short)4] |= ((/* implicit */unsigned char) ((short) arr_14 [i_27] [i_27] [i_27]));
        var_50 -= ((/* implicit */short) ((((((((/* implicit */int) (short)3167)) * (((/* implicit */int) (unsigned char)204)))) <= (((/* implicit */int) min((var_6), (arr_40 [i_27] [i_27] [i_27])))))) || (((/* implicit */_Bool) arr_13 [i_27] [(short)3]))));
        /* LoopSeq 2 */
        for (short i_28 = 0; i_28 < 13; i_28 += 1) 
        {
            var_51 = ((/* implicit */short) min((((/* implicit */int) max((arr_84 [i_27] [i_28] [i_28]), (arr_84 [i_27] [i_28] [i_28])))), ((~(((/* implicit */int) arr_93 [i_27]))))));
            arr_100 [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_80 [i_27] [i_27] [i_27] [i_27])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [i_27] [i_27] [i_28] [i_28])))), (((/* implicit */int) arr_13 [i_28] [(unsigned char)4]))))) && ((!(((/* implicit */_Bool) (short)28450))))));
            /* LoopNest 3 */
            for (short i_29 = 0; i_29 < 13; i_29 += 3) 
            {
                for (short i_30 = 3; i_30 < 9; i_30 += 1) 
                {
                    for (unsigned char i_31 = 0; i_31 < 13; i_31 += 1) 
                    {
                        {
                            arr_109 [i_28] = ((/* implicit */short) arr_39 [i_31] [i_30] [i_29] [i_28] [i_27]);
                            arr_110 [i_29] [i_28] [i_28] [i_28] [(short)3] = min((min((((/* implicit */short) arr_21 [i_29] [i_30 + 3] [i_29] [i_28])), ((short)-1628))), (((/* implicit */short) max((arr_21 [i_28] [i_29] [i_30] [i_28]), (arr_21 [i_28] [i_28] [i_30 - 2] [(short)11])))));
                        }
                    } 
                } 
            } 
            var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) (short)-25415)) : (((/* implicit */int) max((var_12), (arr_11 [i_27]))))));
        }
        for (unsigned char i_32 = 0; i_32 < 13; i_32 += 3) 
        {
            var_53 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-8768))));
            var_54 = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */short) var_3)), (arr_45 [i_27] [i_27] [i_27] [i_27])))), (((((/* implicit */_Bool) arr_19 [i_27] [i_27])) ? (((/* implicit */int) arr_37 [i_27] [(short)7] [i_32] [i_32])) : (((/* implicit */int) var_5))))));
        }
        /* LoopNest 2 */
        for (short i_33 = 0; i_33 < 13; i_33 += 1) 
        {
            for (unsigned char i_34 = 0; i_34 < 13; i_34 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_35 = 0; i_35 < 13; i_35 += 3) 
                    {
                        for (short i_36 = 1; i_36 < 11; i_36 += 1) 
                        {
                            {
                                arr_125 [(unsigned char)10] [(unsigned char)10] |= (unsigned char)243;
                                arr_126 [i_36] [i_35] [(short)12] [i_34] [i_34] [i_33] [(short)12] = ((/* implicit */short) (unsigned char)1);
                                var_55 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_33 [(short)11] [i_36 + 1] [i_36] [i_36 + 1] [i_34]), (((/* implicit */short) arr_54 [i_35] [i_33] [i_33] [i_33] [i_36 + 1] [i_36]))))) == (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                    var_56 -= ((/* implicit */unsigned char) (short)-3568);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_37 = 0; i_37 < 13; i_37 += 1) 
        {
            for (unsigned char i_38 = 0; i_38 < 13; i_38 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_39 = 0; i_39 < 13; i_39 += 3) 
                    {
                        for (short i_40 = 3; i_40 < 12; i_40 += 3) 
                        {
                            {
                                var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) min(((unsigned char)255), ((unsigned char)88))))));
                                arr_138 [i_39] [i_37] [i_38] [i_38] = var_12;
                                arr_139 [i_27] [i_27] [i_38] [(short)6] [(unsigned char)5] [i_40] [(short)1] = ((/* implicit */short) (unsigned char)1);
                                arr_140 [i_38] [(short)4] = ((short) ((unsigned char) arr_137 [i_40 + 1] [i_40 + 1] [i_40 - 2] [i_40 + 1] [i_40 + 1] [i_40 - 3] [(short)12]));
                            }
                        } 
                    } 
                    var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) max((max((((/* implicit */short) arr_59 [(short)10] [i_37] [i_37] [i_38] [i_38] [i_38])), (min((((/* implicit */short) (unsigned char)1)), ((short)7083))))), (min(((short)-366), (((/* implicit */short) arr_136 [(short)0] [i_37] [i_37] [(short)6] [i_38] [(short)0])))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_41 = 0; i_41 < 15; i_41 += 1) 
    {
        arr_145 [i_41] = ((/* implicit */unsigned char) ((short) var_1));
        arr_146 [i_41] [i_41] = ((/* implicit */unsigned char) (short)3568);
        arr_147 [i_41] = arr_142 [i_41] [i_41];
    }
    var_59 = var_10;
}
