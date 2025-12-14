/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231837
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) min((min((var_16), (arr_2 [i_0] [i_0]))), (arr_1 [i_0])))), ((((+(((/* implicit */int) (signed char)-1)))) * (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_17)) != (((/* implicit */int) var_18))));
                    arr_11 [i_0] [i_1] [i_1] [i_0] [i_3] |= ((unsigned short) (short)32767);
                }
                for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_4])) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_1]))));
                    /* LoopSeq 3 */
                    for (short i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        var_20 -= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((signed char) arr_1 [i_5 + 1]))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) 
                    {
                        var_22 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)31826)) ? (((/* implicit */int) (short)26251)) : (((/* implicit */int) (short)-676))))));
                        var_23 = ((/* implicit */short) ((unsigned short) ((unsigned short) (unsigned short)29752)));
                        arr_21 [i_1] [i_1] [i_1] [(short)11] [i_4] [i_6] = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) var_13)))) ? (((((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_6] [i_6] [i_0])) * (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_1]))));
                    }
                    for (signed char i_7 = 2; i_7 < 11; i_7 += 3) 
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_18 [i_7] [i_2] [i_2] [i_2] [i_1] [i_0]))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned short) (short)-32764)))));
                        arr_25 [i_7 - 2] [i_1] [i_2] [i_4] [i_7] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) var_16)) / (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                        arr_26 [i_0] [i_1] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (short)-32750)) + (2147483647))) >> (((((/* implicit */int) ((short) (short)32767))) - (32750)))));
                        arr_27 [i_0] &= ((/* implicit */unsigned short) var_3);
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        {
                            arr_32 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)44808))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20375)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))))));
                            var_24 -= ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned short)65532))))));
                        }
                    } 
                } 
                var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) (short)32767))));
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    arr_36 [i_0] [i_1] [i_2] [i_1] [(unsigned short)7] [i_1] = ((unsigned short) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2]))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (short)32759))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_7))));
                    arr_37 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                }
                for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    arr_40 [i_11] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_11] [i_11]))));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (unsigned short)32314)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
                        var_30 ^= arr_23 [i_0] [i_12] [i_12] [i_0] [i_0] [(unsigned short)4];
                    }
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                    {
                        arr_46 [i_0] [i_1] [i_1] [i_11] [i_13] = arr_38 [i_13] [i_11] [i_1] [i_1] [i_0] [i_0];
                        var_31 |= ((/* implicit */signed char) var_14);
                        var_32 = ((/* implicit */unsigned short) max((var_32), (var_13)));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (-((~(((/* implicit */int) var_7)))))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
                    {
                        var_34 -= ((/* implicit */short) (~(((/* implicit */int) arr_42 [i_0] [i_14]))));
                        var_35 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)6225))));
                        arr_49 [i_2] [i_1] = ((/* implicit */short) var_8);
                    }
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) min((var_36), (var_4)));
                        arr_53 [i_1] [i_11] [i_2] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(unsigned short)2] [i_2] [i_1] [i_15] [i_2] [i_1] [i_15]))))) < ((+(((/* implicit */int) arr_22 [i_15] [i_11] [i_2] [i_0] [i_0]))))));
                        arr_54 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_51 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) | (((/* implicit */int) ((unsigned short) var_6)))));
                    }
                    arr_55 [i_0] [i_1] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((signed char) arr_8 [i_1]));
                }
            }
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_10))));
            arr_56 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_1]))));
        }
        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) (short)-19098);
            /* LoopSeq 1 */
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                arr_63 [i_16] [i_16] [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_17 [i_17] [i_17] [i_0] [i_16] [i_0] [i_0] [i_0]), (arr_15 [i_17] [i_17] [i_16] [i_16] [i_0] [i_0]))))));
                arr_64 [i_0] [i_16] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) min(((unsigned short)0), (((/* implicit */unsigned short) (short)32766)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-4525)))))));
                arr_65 [i_0] [(short)11] [i_0] [i_16] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) var_8)))));
            }
            var_39 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((((/* implicit */_Bool) min(((short)32747), ((short)-32746)))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_16])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_20 [(unsigned short)3] [(unsigned short)3] [i_16] [i_16] [i_16]))))))) : ((+(((/* implicit */int) (unsigned short)42080))))));
        }
    }
    for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
    {
        var_40 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_67 [i_18] [i_18])) ? (((/* implicit */int) arr_67 [i_18] [i_18])) : (((/* implicit */int) (signed char)-123))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_19 = 3; i_19 < 13; i_19 += 3) 
        {
            arr_71 [i_18] = ((/* implicit */short) (~(((/* implicit */int) arr_67 [i_19 - 1] [i_19 + 1]))));
            arr_72 [i_18] [i_18] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_68 [i_19 + 2]))));
            arr_73 [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_69 [i_19 - 3] [i_19 - 1])) || (((/* implicit */_Bool) arr_69 [i_19 + 2] [i_19 + 2]))));
        }
        arr_74 [i_18] [(short)5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)32764))))))));
    }
    /* LoopSeq 3 */
    for (short i_20 = 0; i_20 < 14; i_20 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 14; i_21 += 3) 
        {
            for (signed char i_22 = 0; i_22 < 14; i_22 += 4) 
            {
                {
                    arr_82 [i_20] [i_21] [i_21] [i_20] = ((/* implicit */unsigned short) (((~(((/* implicit */int) max(((short)-32743), ((short)-26757)))))) ^ (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_70 [i_22])))), (((/* implicit */int) arr_77 [i_21] [i_21]))))));
                    var_41 |= ((/* implicit */signed char) var_16);
                }
            } 
        } 
        var_42 = var_4;
    }
    /* vectorizable */
    for (unsigned short i_23 = 0; i_23 < 22; i_23 += 2) 
    {
        arr_86 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_85 [i_23])) <= (((/* implicit */int) (unsigned short)2421))));
        /* LoopSeq 1 */
        for (unsigned short i_24 = 1; i_24 < 19; i_24 += 1) 
        {
            arr_89 [(signed char)19] [(signed char)19] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_88 [i_23])) * (((/* implicit */int) (short)32758)))));
            /* LoopSeq 3 */
            for (short i_25 = 0; i_25 < 22; i_25 += 1) 
            {
                var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */int) arr_90 [i_24 + 2] [i_23] [i_24 + 2])) - (((/* implicit */int) var_6)))))));
                var_44 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_3))));
                arr_92 [i_23] [i_23] [i_25] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-8688))));
            }
            for (unsigned short i_26 = 1; i_26 < 21; i_26 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_27 = 0; i_27 < 22; i_27 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_28 = 0; i_28 < 22; i_28 += 3) /* same iter space */
                    {
                        arr_101 [i_23] [i_24] [i_27] [i_26] = ((/* implicit */short) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_95 [i_24 + 3] [i_26] [i_26 + 1] [i_26 + 1]))));
                        arr_102 [i_23] [i_24] [i_26] [i_24] [i_26] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */int) ((unsigned short) arr_91 [i_26] [i_23] [i_26]))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (signed char)125))))));
                        var_45 -= arr_87 [i_27];
                    }
                    for (short i_29 = 0; i_29 < 22; i_29 += 3) /* same iter space */
                    {
                        arr_105 [i_23] [i_24] [i_26] [i_26] [(unsigned short)19] = ((/* implicit */signed char) ((((/* implicit */int) arr_103 [i_26 + 1] [i_26 - 1] [i_24 + 1] [i_24] [i_24] [i_23])) < (((((/* implicit */int) arr_104 [i_29] [i_27] [i_23] [i_24] [i_23])) | (((/* implicit */int) arr_99 [i_23] [i_24] [i_26] [i_27] [i_29]))))));
                        var_46 = ((/* implicit */signed char) min((var_46), (((signed char) ((((/* implicit */int) arr_83 [i_23])) > (((/* implicit */int) arr_87 [i_23])))))));
                        arr_106 [i_26] [i_26] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_95 [i_27] [i_26] [i_26] [i_23]))));
                        arr_107 [i_23] [i_23] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_88 [i_24 - 1])) ? (((/* implicit */int) arr_88 [i_24 + 1])) : (((/* implicit */int) var_4))));
                        arr_108 [i_23] [i_24 - 1] [i_26] [i_26] [i_27] [i_26] = arr_104 [i_23] [i_23] [i_23] [i_23] [i_23];
                    }
                    arr_109 [i_23] [i_23] [i_23] [i_26] [i_26 - 1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_96 [i_23] [i_23] [i_26] [i_23]))))));
                    var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((signed char) arr_96 [(unsigned short)21] [i_26 + 1] [i_24 + 1] [i_23])))));
                }
                var_48 *= ((/* implicit */unsigned short) ((signed char) (short)-32766));
            }
            for (short i_30 = 2; i_30 < 20; i_30 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_31 = 0; i_31 < 22; i_31 += 3) 
                {
                    var_49 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_113 [i_23] [i_24 + 3]))));
                    var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_85 [i_23])) ? (((/* implicit */int) arr_87 [i_24 - 1])) : (((/* implicit */int) arr_97 [i_24] [i_30] [i_30] [i_30] [i_24] [i_23]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_32 = 0; i_32 < 22; i_32 += 3) /* same iter space */
                    {
                        arr_118 [i_30] = ((/* implicit */signed char) arr_96 [i_32] [i_31] [i_30 - 2] [i_24 + 2]);
                        arr_119 [i_31] [i_31] [i_30] [i_23] [i_23] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_87 [i_24 - 1]))));
                        arr_120 [i_23] [i_30] [i_30] [i_31] [i_32] [i_23] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_111 [i_23] [i_24 + 3] [i_30] [i_31])) ^ (((/* implicit */int) var_8))));
                    }
                    for (unsigned short i_33 = 0; i_33 < 22; i_33 += 3) /* same iter space */
                    {
                        var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37302)) ? (((/* implicit */int) (unsigned short)63112)) : (((/* implicit */int) (unsigned short)9124))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_88 [i_23])) : (((/* implicit */int) arr_97 [i_23] [i_24] [i_24] [i_24] [i_33] [i_30])))))));
                        arr_123 [i_23] [i_23] = ((short) (unsigned short)56407);
                    }
                }
                var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_111 [i_23] [i_24 + 1] [i_24 - 1] [i_30 - 2])) && (((/* implicit */_Bool) arr_110 [i_24 + 3] [i_24 + 1] [i_24 - 1] [i_30 - 2]))));
            }
        }
        var_53 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_83 [i_23]))));
        var_54 ^= arr_83 [i_23];
        /* LoopSeq 1 */
        for (short i_34 = 3; i_34 < 19; i_34 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_35 = 0; i_35 < 22; i_35 += 2) /* same iter space */
            {
                arr_128 [i_23] [i_23] [i_35] = ((/* implicit */short) (unsigned short)15540);
                arr_129 [i_23] [i_34] = ((short) arr_84 [i_34 - 1]);
                arr_130 [i_23] [i_34] [i_35] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_17)))));
                var_55 = ((/* implicit */short) ((((((/* implicit */int) arr_110 [i_23] [i_34 - 3] [i_34 - 3] [i_23])) & (((/* implicit */int) var_13)))) / ((~(((/* implicit */int) (short)32757))))));
                arr_131 [i_23] = ((/* implicit */short) var_18);
            }
            for (short i_36 = 0; i_36 < 22; i_36 += 2) /* same iter space */
            {
                var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((((/* implicit */int) arr_96 [i_23] [i_34 - 1] [i_34 + 1] [i_34 - 2])) | (((/* implicit */int) arr_96 [i_34] [i_34 + 2] [i_34 - 3] [i_34 - 3])))))));
                var_57 = ((/* implicit */short) (unsigned short)21211);
                var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) var_9))));
                arr_136 [i_23] [i_23] = ((/* implicit */short) (-(((/* implicit */int) arr_98 [i_23] [i_36] [i_34] [i_36] [i_23]))));
            }
            for (unsigned short i_37 = 1; i_37 < 19; i_37 += 1) 
            {
                arr_139 [i_23] [i_23] [i_34] = ((/* implicit */short) (+(((/* implicit */int) var_14))));
                var_59 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_84 [i_37]))))) ? (((/* implicit */int) arr_100 [i_37] [i_34 - 1] [i_34 - 1] [i_23] [i_34])) : (((/* implicit */int) ((((/* implicit */int) (short)-11683)) > (((/* implicit */int) var_3)))))));
            }
            for (unsigned short i_38 = 4; i_38 < 18; i_38 += 1) 
            {
                arr_143 [i_38] [i_38 + 2] [i_38] [i_38] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_135 [i_34 + 3] [i_38] [i_38 - 1] [i_38 + 3]))));
                arr_144 [i_23] [i_34 - 2] [i_38] = arr_122 [i_23] [i_23] [i_38] [i_34 + 3] [i_38] [i_38] [i_34];
            }
            arr_145 [i_34 + 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_95 [i_34 + 1] [i_23] [i_34] [i_34 + 1])) * (((/* implicit */int) arr_95 [i_34 - 3] [i_23] [i_34] [i_34]))));
            var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */int) (short)32761)) & (((/* implicit */int) (unsigned short)56411)))) : (((/* implicit */int) arr_103 [i_34 - 3] [i_34 - 1] [i_34] [i_23] [i_34 - 1] [i_34 + 3]))));
        }
    }
    for (short i_39 = 0; i_39 < 11; i_39 += 3) 
    {
        var_61 *= ((/* implicit */short) (-(((/* implicit */int) (((~(((/* implicit */int) (short)(-32767 - 1))))) > (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_68 [i_39]))))))))));
        arr_148 [i_39] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-14670)), (arr_117 [i_39] [i_39] [i_39] [i_39] [i_39]))))));
    }
}
