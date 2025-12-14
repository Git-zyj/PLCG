/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224349
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [(unsigned char)10])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_3] [i_3] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]))))));
                            arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_2), (((/* implicit */short) arr_3 [i_0] [i_1] [i_3])))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_4] [i_4] = ((/* implicit */_Bool) (unsigned char)187);
                    var_10 = (!(((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0])))))));
                    arr_16 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) var_5);
                }
                /* vectorizable */
                for (short i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_2)))));
                        var_12 = (_Bool)1;
                        arr_22 [(unsigned char)7] [i_5] = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0] [i_0])) + (((/* implicit */int) (unsigned char)231)))) & ((~(((/* implicit */int) arr_0 [i_0] [i_6]))))));
                        var_13 = arr_5 [i_0];
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [(_Bool)1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_5 - 1] [i_5]))));
                        arr_25 [i_1] [i_1] [(_Bool)1] [i_5] [i_7] [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_5] [i_5 + 1] [i_5 + 1] [i_0] [i_5 - 1]))));
                        var_15 = ((/* implicit */short) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_1]))))));
                        var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_5 + 1] [i_5] [i_5]))));
                        var_17 = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_10 [i_0] [i_1] [i_5] [i_1] [i_1] [i_5])))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_18 = var_1;
                        arr_30 [i_5] [i_5] [i_5] [(_Bool)1] = ((/* implicit */_Bool) ((short) arr_29 [(_Bool)1] [i_1] [(_Bool)1] [i_5 - 1] [i_5] [i_8 - 1]));
                    }
                    var_19 = ((/* implicit */short) ((_Bool) arr_20 [i_1] [i_5 - 1] [i_1] [i_5 + 1] [i_5 + 1]));
                    arr_31 [i_0] [i_5] [i_5] [i_0] = ((unsigned char) ((arr_24 [i_0]) ? (((/* implicit */int) (short)27258)) : (((/* implicit */int) var_3))));
                }
                var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((arr_21 [i_0] [(_Bool)1] [i_1] [i_1]) ? (((/* implicit */int) arr_20 [(short)0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1]))))) ? (((/* implicit */int) (unsigned char)7)) : ((~(((/* implicit */int) (unsigned char)233))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned char) arr_32 [i_9]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) arr_35 [i_9] [i_9] [i_11]))));
                arr_42 [i_9] [i_10] [i_11] = arr_35 [i_9] [i_10] [i_10];
                arr_43 [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_9] [i_10])) ? (((/* implicit */int) arr_40 [i_9])) : (((/* implicit */int) arr_38 [i_9] [i_10]))));
            }
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    arr_49 [i_9] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_45 [i_9] [(short)10] [i_9] [i_13]))));
                    arr_50 [i_13] [i_10] [i_12] [i_9] = ((/* implicit */unsigned char) (short)25822);
                    var_22 = arr_33 [i_9] [i_10];
                }
                for (unsigned char i_14 = 1; i_14 < 13; i_14 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) ((unsigned char) arr_47 [i_9] [i_9] [i_10] [(short)13] [(unsigned char)9] [i_14 + 1]));
                    arr_53 [i_9] [i_10] [i_10] [i_9] [i_12] [i_14] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) var_8)))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_56 [i_9] [i_9] [(unsigned char)10] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_47 [i_9] [i_10] [i_12] [i_9] [i_10] [i_10])))));
                    arr_57 [i_9] [i_10] [i_10] [i_9] [i_15] [i_9] = arr_44 [i_9];
                    var_24 = (i_9 % 2 == 0) ? (((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_37 [i_9] [i_12])) + (18683)))))))) : (((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) << (((((((/* implicit */int) arr_37 [i_9] [i_12])) + (18683))) - (39373))))))));
                }
                var_25 = ((/* implicit */short) (~((+(((/* implicit */int) arr_45 [i_9] [i_9] [i_9] [i_12]))))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        arr_64 [i_9] [i_12] [i_16] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_12] [(short)7] [i_12] [i_9])) / (((/* implicit */int) arr_35 [i_9] [i_12] [i_9]))))) ? ((+(((/* implicit */int) arr_59 [i_9] [(_Bool)1] [i_9] [i_16])))) : (((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */short) ((((/* implicit */int) arr_47 [i_9] [i_9] [i_12] [i_16] [i_17] [i_9])) & (((((/* implicit */int) arr_41 [i_9] [i_9] [i_9])) / (((/* implicit */int) arr_48 [i_9] [i_10] [i_10] [i_16] [i_17] [i_17]))))));
                        var_27 = ((/* implicit */_Bool) arr_37 [i_9] [i_9]);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_9] [i_9] [i_18])) + (((/* implicit */int) (short)63))))) ? (((/* implicit */int) arr_39 [i_9] [i_9] [i_12] [i_9])) : (((((/* implicit */_Bool) arr_51 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_52 [i_9] [i_10] [i_12] [i_9])) : (((/* implicit */int) arr_40 [i_9]))))));
                        var_29 = arr_46 [i_9] [i_10] [i_16];
                    }
                    for (short i_19 = 2; i_19 < 15; i_19 += 3) 
                    {
                        arr_70 [i_9] [i_10] [i_9] [i_9] [i_19] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)63))));
                        arr_71 [i_9] [i_9] [i_12] [i_12] [i_12] [i_12] = arr_41 [i_10] [i_12] [i_9];
                        var_30 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_1)))));
                    }
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_39 [i_9] [i_10] [i_10] [i_16])) : (((/* implicit */int) arr_39 [i_9] [i_10] [i_12] [i_16]))));
                }
                var_32 = ((/* implicit */unsigned char) ((arr_40 [i_9]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_61 [i_9])) : (((/* implicit */int) arr_36 [i_10])))) : ((~(((/* implicit */int) var_7))))));
                arr_72 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_62 [i_9])) : (((/* implicit */int) (short)27258))));
            }
            var_33 = ((/* implicit */_Bool) (-(((var_9) ? (((/* implicit */int) arr_38 [i_10] [i_10])) : (((/* implicit */int) var_5))))));
        }
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_73 [i_20]))));
        /* LoopSeq 3 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
        {
            arr_78 [(_Bool)1] [i_20] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26105)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_77 [i_20] [(unsigned char)13] [i_21])) : (((((/* implicit */int) arr_77 [i_20] [(short)10] [(short)10])) % (((/* implicit */int) (unsigned char)7))))));
            var_35 = ((/* implicit */unsigned char) (!(arr_77 [i_20] [i_21] [i_21])));
            arr_79 [i_20] [i_20] [i_20] = var_1;
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)58)) + ((~(((/* implicit */int) arr_75 [i_20] [i_20] [i_22]))))));
            /* LoopSeq 3 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                var_37 = ((/* implicit */_Bool) (((+(((/* implicit */int) var_5)))) * (((/* implicit */int) ((((/* implicit */int) arr_82 [i_23] [i_20] [i_20])) > (((/* implicit */int) (unsigned char)233)))))));
                /* LoopSeq 2 */
                for (unsigned char i_24 = 0; i_24 < 20; i_24 += 2) 
                {
                    arr_89 [i_20] [i_22] = ((/* implicit */_Bool) arr_81 [i_20] [i_23]);
                    arr_90 [i_20] [i_22] [i_23] [i_20] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
                    var_38 = ((/* implicit */unsigned char) arr_85 [i_24] [i_20] [i_24] [i_24]);
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) arr_85 [i_20] [i_20] [i_23] [i_24])) : (((/* implicit */int) var_0))));
                }
                for (short i_25 = 0; i_25 < 20; i_25 += 2) 
                {
                    var_40 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) arr_82 [i_22] [i_20] [i_20])));
                    var_41 = ((/* implicit */short) (_Bool)1);
                    var_42 = ((/* implicit */_Bool) ((unsigned char) arr_83 [i_20] [i_22] [i_22] [i_25]));
                    arr_94 [i_20] [i_25] [i_25] = ((/* implicit */unsigned char) ((((var_5) || (var_0))) || (((/* implicit */_Bool) arr_76 [i_20] [i_22] [i_23]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 0; i_26 < 20; i_26 += 1) 
                    {
                        arr_97 [i_20] [i_22] [i_20] [i_23] [i_20] [i_26] = ((/* implicit */_Bool) (unsigned char)156);
                        var_43 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                        var_44 = ((/* implicit */_Bool) ((((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_93 [i_20] [i_22] [i_20] [i_25] [i_20])))) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_92 [i_20] [i_20] [i_23] [i_25] [i_20] [i_26]))))));
                    }
                    for (short i_27 = 0; i_27 < 20; i_27 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_82 [i_23] [i_20] [i_23]))));
                        var_46 = ((/* implicit */_Bool) arr_73 [i_20]);
                    }
                }
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                arr_102 [i_20] [i_20] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_76 [i_20] [i_22] [i_28]))));
                arr_103 [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) arr_100 [i_20] [i_20] [i_20] [i_20])) : ((+(((/* implicit */int) arr_91 [i_20] [i_22] [i_28] [i_28] [i_20] [i_28]))))));
            }
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                var_47 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_87 [i_20]))));
                arr_106 [i_20] [i_22] [i_29] [(unsigned char)10] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_100 [i_20] [i_29] [i_20] [i_20])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
                arr_107 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) (short)-25876);
                /* LoopSeq 2 */
                for (unsigned char i_30 = 0; i_30 < 20; i_30 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        arr_113 [i_20] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_81 [i_20] [i_31]))));
                        arr_114 [i_20] [i_22] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)9640)) * (((/* implicit */int) var_6)))) % ((-(((/* implicit */int) (_Bool)1))))));
                        arr_115 [(_Bool)1] [i_22] [i_20] [i_30] [i_31] = ((short) (_Bool)1);
                    }
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        arr_118 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) arr_99 [i_20] [i_22] [i_22] [i_22] [i_22])) : (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (short)65)) : (((/* implicit */int) var_0))))));
                        var_48 = (unsigned char)69;
                        var_49 = ((/* implicit */short) arr_87 [(unsigned char)12]);
                    }
                    var_50 = ((/* implicit */unsigned char) var_0);
                    arr_119 [i_29] [i_20] [i_29] [i_30] [(short)11] = ((/* implicit */short) ((unsigned char) arr_95 [i_20] [i_20] [i_20] [i_22] [i_29] [i_30]));
                }
                for (unsigned char i_33 = 0; i_33 < 20; i_33 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-6248)) ? (((/* implicit */int) (short)-24834)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                    var_52 = ((/* implicit */_Bool) var_4);
                    var_53 = ((/* implicit */short) (~(((/* implicit */int) (!(var_0))))));
                }
            }
            arr_123 [i_20] [i_20] = ((/* implicit */_Bool) ((var_6) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_1))));
            var_54 = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_9))))));
            /* LoopSeq 2 */
            for (_Bool i_34 = 0; i_34 < 0; i_34 += 1) 
            {
                arr_126 [i_20] = ((short) arr_96 [i_20] [i_20] [i_34] [i_34] [i_34] [i_34 + 1]);
                /* LoopSeq 2 */
                for (unsigned char i_35 = 0; i_35 < 20; i_35 += 2) 
                {
                    var_55 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) << (((/* implicit */int) arr_127 [i_34]))));
                    var_56 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(var_6)))) & (((/* implicit */int) arr_129 [i_20] [i_22] [i_34 + 1]))));
                }
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    arr_134 [i_20] [i_20] [i_20] [(unsigned char)11] [i_20] = arr_77 [i_20] [(_Bool)1] [i_34];
                    arr_135 [i_20] [i_20] [i_34 + 1] [i_36] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_133 [i_20] [i_22] [i_34 + 1] [i_20]))));
                }
                var_57 = ((/* implicit */_Bool) ((arr_88 [i_34 + 1] [i_34] [i_34 + 1] [i_34 + 1]) ? (((/* implicit */int) arr_73 [i_20])) : ((+(((/* implicit */int) (unsigned char)73))))));
                arr_136 [i_20] [i_22] [i_22] [i_20] = ((/* implicit */_Bool) arr_120 [i_22]);
            }
            for (short i_37 = 0; i_37 < 20; i_37 += 4) 
            {
                var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_80 [i_20] [i_20] [i_37])) ? (((/* implicit */int) arr_129 [i_20] [i_22] [i_37])) : (((((/* implicit */_Bool) arr_75 [i_37] [i_37] [i_37])) ? (((/* implicit */int) arr_88 [i_20] [i_22] [i_22] [i_20])) : (((/* implicit */int) arr_133 [i_20] [i_20] [i_37] [i_20]))))));
                arr_139 [i_22] [i_37] [i_37] [i_20] = ((/* implicit */unsigned char) arr_120 [i_20]);
            }
        }
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) /* same iter space */
        {
            var_59 = ((/* implicit */short) ((((/* implicit */int) (!(var_6)))) + (((/* implicit */int) (unsigned char)0))));
            arr_144 [i_20] [i_20] = ((/* implicit */unsigned char) (!(arr_127 [i_20])));
            arr_145 [i_20] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_98 [i_20] [(unsigned char)6] [i_38] [(unsigned char)6] [i_38])))));
            var_60 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_76 [i_20] [i_20] [i_38]))));
        }
        var_61 = arr_122 [i_20] [i_20] [i_20] [i_20] [i_20];
        /* LoopSeq 1 */
        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
        {
            var_62 = ((/* implicit */short) ((unsigned char) ((unsigned char) var_1)));
            arr_149 [i_20] = arr_92 [i_20] [i_39] [i_20] [i_20] [i_20] [i_20];
            var_63 = ((((/* implicit */int) arr_141 [i_20])) <= (((/* implicit */int) arr_101 [i_20] [i_20] [i_20])));
            var_64 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_83 [i_20] [i_39] [i_39] [i_20]))));
            arr_150 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */int) (unsigned char)192)) + (((/* implicit */int) (unsigned char)175)))) : (((/* implicit */int) arr_121 [i_20] [i_20] [(short)1] [i_20] [i_20]))));
        }
    }
}
