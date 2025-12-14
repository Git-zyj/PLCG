/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222978
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 *= arr_0 [(signed char)9];
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(signed char)10])) ? (((/* implicit */int) min((((signed char) arr_1 [i_0])), (var_14)))) : (min(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((arr_0 [i_0]), (var_13))))))));
        var_16 ^= ((/* implicit */signed char) min(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_1 [i_0]))));
    }
    var_17 = var_13;
    /* LoopSeq 4 */
    for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        var_18 = arr_3 [i_1];
        arr_6 [i_1] = arr_5 [i_1];
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_10 [i_2] = arr_4 [i_2];
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_19 = ((signed char) arr_4 [i_4]);
                        var_20 |= ((signed char) var_11);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_21 [i_2])) : (((/* implicit */int) var_5))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_2] [i_6] [i_7] [i_8] [i_8])) ? (((/* implicit */int) arr_16 [(signed char)12] [i_6] [i_7] [i_2] [i_7])) : (((/* implicit */int) arr_16 [(signed char)2] [i_6] [i_7] [i_8] [i_7]))));
                        var_23 += arr_27 [i_2] [i_6] [(signed char)13];
                    }
                } 
            } 
            var_24 += var_10;
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (signed char i_10 = 3; i_10 < 10; i_10 += 2) 
                {
                    {
                        arr_33 [i_2] [i_6] [i_2] [i_10] = arr_17 [i_2] [i_2] [i_2] [(signed char)12] [i_9] [i_10 - 1];
                        var_25 = arr_17 [i_9] [i_10] [i_2] [i_10] [i_10] [i_10];
                        var_26 = arr_27 [i_2] [i_9] [i_10 + 3];
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */int) arr_34 [i_11])) : (((/* implicit */int) arr_34 [i_11]))));
        /* LoopSeq 2 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_13 = 1; i_13 < 20; i_13 += 1) 
            {
                var_28 = arr_38 [i_11];
                arr_43 [i_11] [i_12] [i_11] = ((signed char) ((((/* implicit */_Bool) arr_41 [i_11] [i_12] [i_12] [i_13 + 4])) ? (((/* implicit */int) arr_42 [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_42 [i_12] [i_12] [i_13]))));
            }
            for (signed char i_14 = 1; i_14 < 23; i_14 += 4) 
            {
                var_29 -= arr_41 [i_14 - 1] [i_11] [i_11] [(signed char)8];
                arr_46 [i_12] = ((signed char) arr_44 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 1]);
            }
            arr_47 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_11])) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) arr_38 [i_11]))));
        }
        for (signed char i_15 = 3; i_15 < 23; i_15 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_16 = 1; i_16 < 23; i_16 += 2) 
            {
                arr_54 [i_11] [i_16] = arr_44 [i_15 - 3] [i_15 - 3] [i_16 - 1] [i_16 + 1];
                arr_55 [i_16] = arr_51 [i_11] [i_15 - 3] [i_16];
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        {
                            arr_62 [i_11] [i_15] [i_16] [i_17] = ((signed char) arr_50 [i_15 + 1]);
                            arr_63 [i_11] [i_11] [i_11] [i_17] [i_11] [i_11] |= arr_61 [i_15 - 3] [i_15 - 3] [i_16 + 1] [i_11] [i_16 + 1] [i_16 - 1] [i_17];
                            var_30 *= ((signed char) var_0);
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_59 [i_15 + 1] [i_16] [i_15] [i_17] [i_16] [(signed char)21])) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_51 [(signed char)14] [i_15 - 3] [i_16]))));
                        }
                    } 
                } 
            }
            for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                arr_67 [i_15] [i_15 - 1] [(signed char)7] [i_11] = arr_40 [i_15 - 1] [(signed char)17];
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    for (signed char i_21 = 2; i_21 < 21; i_21 += 4) 
                    {
                        {
                            var_32 += ((signed char) arr_69 [i_21 + 3] [i_15] [i_19] [i_20] [i_15 - 2] [i_21]);
                            var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) arr_64 [i_11]))) : (((/* implicit */int) arr_42 [i_19] [i_15 - 3] [i_19]))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                var_35 *= ((signed char) arr_65 [i_15] [i_15 + 1] [i_15 - 1]);
            }
            /* LoopSeq 1 */
            for (signed char i_22 = 1; i_22 < 23; i_22 += 3) 
            {
                var_36 -= var_4;
                arr_75 [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) arr_53 [i_11] [i_15 - 1] [i_11]))));
                var_37 = ((signed char) arr_38 [i_15 + 1]);
                /* LoopSeq 1 */
                for (signed char i_23 = 1; i_23 < 20; i_23 += 1) 
                {
                    arr_79 [i_23] [i_15] [(signed char)22] [i_15] = arr_34 [i_11];
                    arr_80 [i_11] [i_15] [i_22] [i_23] [i_23] = ((signed char) arr_35 [i_23 + 1]);
                }
            }
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_15 - 3] [i_15 - 2] [(signed char)7])) ? (((/* implicit */int) arr_51 [i_15 + 1] [(signed char)9] [(signed char)9])) : (((/* implicit */int) arr_51 [i_15 - 1] [i_15] [i_11]))));
        }
        /* LoopNest 3 */
        for (signed char i_24 = 1; i_24 < 22; i_24 += 2) 
        {
            for (signed char i_25 = 2; i_25 < 22; i_25 += 1) 
            {
                for (signed char i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_27 = 0; i_27 < 24; i_27 += 1) 
                        {
                            var_39 &= var_1;
                            var_40 = var_3;
                            var_41 = ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_44 [i_11] [i_24] [i_25] [i_26])) : (((/* implicit */int) arr_64 [i_27]))));
                        }
                        for (signed char i_28 = 0; i_28 < 24; i_28 += 2) /* same iter space */
                        {
                            var_42 -= arr_38 [i_11];
                            var_43 = arr_48 [i_24 + 1] [i_25 - 1] [i_25 - 1];
                            var_44 = arr_72 [i_24 + 2] [i_24 + 2] [i_24] [i_24 - 1];
                            var_45 -= arr_59 [i_11] [i_11] [i_25] [i_11] [i_24] [i_28];
                        }
                        for (signed char i_29 = 0; i_29 < 24; i_29 += 2) /* same iter space */
                        {
                            arr_95 [i_24] [i_24] [i_24 - 1] [i_26] [i_24 - 1] [i_24] [i_24] = arr_61 [i_11] [i_11] [i_24] [i_24] [i_25] [i_26] [i_29];
                            arr_96 [i_24] [i_24 - 1] [i_25] [i_26] [i_29] [i_26] [i_29] = ((signed char) arr_44 [i_29] [(signed char)16] [i_25 + 1] [(signed char)9]);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_30 = 2; i_30 < 23; i_30 += 4) 
                        {
                            var_46 *= arr_89 [i_30 + 1];
                            var_47 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_92 [i_11] [i_24 + 1] [i_25 + 1] [i_26] [i_11])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_85 [i_11] [i_24] [i_25] [i_26] [i_30 - 2]))));
                            arr_100 [i_26] = ((signed char) arr_60 [i_11] [(signed char)9] [i_25] [i_26] [i_30 - 1]);
                            var_48 = ((signed char) (~(((/* implicit */int) arr_86 [i_30]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_31 = 0; i_31 < 16; i_31 += 1) 
    {
        var_49 = min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_38 [i_31]))))), (((signed char) min((var_14), (arr_45 [i_31] [i_31] [i_31] [i_31])))));
        arr_103 [i_31] = ((signed char) arr_3 [i_31]);
        var_50 -= min((arr_84 [i_31] [i_31]), (min((arr_84 [i_31] [i_31]), (arr_84 [i_31] [i_31]))));
        arr_104 [i_31] = ((signed char) ((signed char) arr_83 [i_31] [i_31] [i_31] [i_31]));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_32 = 0; i_32 < 16; i_32 += 2) 
        {
            var_51 |= var_9;
            var_52 = arr_98 [i_31] [i_31] [i_31] [i_32] [i_32];
            var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_31] [i_32] [i_32])) ? (((/* implicit */int) arr_51 [i_31] [i_31] [i_32])) : (((/* implicit */int) arr_51 [i_31] [i_32] [i_32]))));
            var_54 = ((signed char) arr_81 [i_32]);
        }
        for (signed char i_33 = 0; i_33 < 16; i_33 += 4) 
        {
            arr_110 [i_31] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_86 [i_31]), (((signed char) var_10))))), (min((((((/* implicit */_Bool) arr_41 [i_31] [i_31] [i_31] [i_33])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_66 [i_31] [i_33] [i_31])))), (((/* implicit */int) arr_86 [i_31]))))));
            var_55 |= var_2;
        }
        /* vectorizable */
        for (signed char i_34 = 0; i_34 < 16; i_34 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_35 = 0; i_35 < 16; i_35 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_36 = 1; i_36 < 15; i_36 += 1) 
                {
                    var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_116 [i_36] [i_36 + 1] [i_36 - 1] [i_36 + 1])) ? (((/* implicit */int) arr_66 [i_36 - 1] [i_36 - 1] [i_36 - 1])) : (((/* implicit */int) ((signed char) arr_57 [i_31] [i_36 + 1] [i_35])))));
                    arr_119 [i_31] [i_34] [i_31] [i_36] = ((signed char) ((((/* implicit */_Bool) arr_81 [i_36])) ? (((/* implicit */int) arr_52 [i_34] [i_34] [i_35])) : (((/* implicit */int) var_13))));
                }
                for (signed char i_37 = 1; i_37 < 12; i_37 += 1) 
                {
                    var_57 = ((/* implicit */signed char) (+(((/* implicit */int) arr_120 [i_37] [i_37 + 1] [i_37 + 3] [i_37] [i_37 + 2]))));
                    /* LoopSeq 1 */
                    for (signed char i_38 = 0; i_38 < 16; i_38 += 1) 
                    {
                        arr_124 [i_31] [i_35] [(signed char)2] [i_31] [i_31] = arr_68 [i_31] [i_35] [i_37 + 3] [i_37];
                        var_58 = arr_51 [i_31] [i_34] [i_35];
                    }
                }
                for (signed char i_39 = 1; i_39 < 14; i_39 += 2) 
                {
                    var_59 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                    arr_128 [i_31] [i_34] [i_35] [(signed char)0] |= ((signed char) arr_52 [i_39] [i_39 + 2] [i_39]);
                    var_60 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [i_31] [i_34] [i_35])) ? (((/* implicit */int) arr_57 [i_31] [i_34] [i_35])) : (((/* implicit */int) var_1))));
                    var_61 -= arr_42 [i_34] [i_34] [i_34];
                }
                var_62 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_31]))));
                var_63 -= ((signed char) arr_36 [i_31]);
            }
            /* LoopNest 2 */
            for (signed char i_40 = 0; i_40 < 16; i_40 += 3) 
            {
                for (signed char i_41 = 0; i_41 < 16; i_41 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_42 = 0; i_42 < 16; i_42 += 4) 
                        {
                            arr_136 [i_34] [i_31] [i_31] = arr_40 [i_34] [i_34];
                            arr_137 [i_41] [i_31] [i_31] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_71 [(signed char)21] [(signed char)21] [i_40])) ? (((((/* implicit */_Bool) arr_131 [i_31] [i_31] [i_34] [i_40] [i_41] [i_41])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_31])))) : (((/* implicit */int) arr_39 [(signed char)5] [i_34] [i_41]))));
                            var_64 |= ((signed char) arr_115 [i_31]);
                        }
                        for (signed char i_43 = 0; i_43 < 16; i_43 += 1) /* same iter space */
                        {
                            var_65 -= arr_116 [i_31] [i_34] [i_40] [(signed char)0];
                            var_66 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_78 [i_43] [i_41] [i_34] [i_31])))));
                            var_67 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [(signed char)3] [i_40] [i_31])) ? (((/* implicit */int) arr_5 [i_40])) : (((/* implicit */int) arr_99 [i_31] [i_31] [i_31] [i_31]))));
                            var_68 *= arr_82 [i_31];
                        }
                        for (signed char i_44 = 0; i_44 < 16; i_44 += 1) /* same iter space */
                        {
                            arr_143 [i_31] [i_41] [i_40] [i_34] [i_31] = arr_38 [(signed char)15];
                            var_69 += arr_64 [i_31];
                        }
                        var_70 = ((signed char) ((signed char) arr_94 [i_31] [i_34] [i_40] [i_41] [i_34] [i_41]));
                        arr_144 [i_31] [i_31] [i_40] [(signed char)6] = arr_126 [i_34] [i_40];
                        var_71 = ((signed char) arr_114 [i_31] [i_40]);
                    }
                } 
            } 
        }
    }
    var_72 = ((signed char) min((var_9), (min((var_2), (var_2)))));
    var_73 *= ((signed char) var_14);
}
