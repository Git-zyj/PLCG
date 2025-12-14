/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21306
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_12 += (~((+(((/* implicit */int) (_Bool)1)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1])))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_0 [i_1 + 1]))))));
                            arr_15 [i_0] [i_4] [10U] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(_Bool)1]))))))))));
                            arr_16 [i_4] [i_1] [i_2] [i_2] = arr_10 [i_0];
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (_Bool)0))))));
                            arr_21 [i_0] [8U] [5U] [i_3] [3U] [19U] [(unsigned char)12] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) arr_2 [i_6]))))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [17U] = arr_23 [5U] [(signed char)1] [i_2] [i_3] [i_6];
                        }
                        arr_25 [11U] [(unsigned char)12] [(_Bool)1] [i_1] [i_1] = ((/* implicit */signed char) (~((~(arr_7 [i_1 - 1])))));
                        arr_26 [(_Bool)1] [i_1] [(_Bool)1] [i_3] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_0] [12ULL] [i_2] [i_3] [i_1] [(_Bool)1] [i_0]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 1; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_17 *= (+(arr_20 [i_1 - 1] [i_1]));
                            arr_35 [i_0] [i_8] [i_7] [i_7] [i_8] [(_Bool)1] = ((/* implicit */unsigned char) (~((~(arr_18 [i_1 + 1] [i_9] [i_9] [i_9 - 1] [i_9])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            arr_38 [i_10] = (!(arr_11 [(_Bool)1] [i_10] [i_10] [i_10]));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+((-(792289464U))))))));
        }
        for (unsigned char i_11 = 3; i_11 < 17; i_11 += 3) 
        {
            arr_41 [i_0] [i_11] = ((/* implicit */unsigned char) (+((-(arr_10 [i_11 - 3])))));
            var_19 *= ((/* implicit */unsigned char) arr_20 [i_0] [i_11]);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_44 [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_50 [i_12] = ((/* implicit */unsigned int) (!((_Bool)1)));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_18 [i_0] [i_12] [i_13] [i_13] [i_13]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            arr_53 [i_12] [i_13] [17U] = ((/* implicit */unsigned int) arr_3 [(signed char)4] [18]);
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(arr_8 [i_0] [i_14] [(unsigned char)8])))))))));
                            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(arr_34 [i_0] [8U] [18ULL] [(signed char)14] [i_13]))))));
                        }
                        for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            arr_56 [6ULL] [i_12] [i_13] [17U] [i_16] [13ULL] [i_16] = ((/* implicit */unsigned char) (~(arr_43 [i_16] [i_13] [17])));
                            arr_57 [i_0] [i_12] [i_13] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_23 [i_0] [i_12] [i_13] [(unsigned char)1] [i_16]))))));
                        }
                        arr_58 [(unsigned char)8] [i_0] [i_12] [(_Bool)1] [i_13] [i_14] = (!(arr_13 [(signed char)0] [i_14] [4ULL] [(unsigned char)19] [i_0] [19U] [i_14]));
                    }
                } 
            } 
        }
        var_23 = arr_22 [i_0] [i_0] [(_Bool)0] [8ULL] [i_0] [(unsigned char)10] [i_0];
        arr_59 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [(unsigned short)16] [i_0] [i_0] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 18; i_17 += 3) 
        {
            for (int i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_54 [i_18] [i_17] [6U] [9] [i_0] [i_0]))))));
                    var_25 *= ((/* implicit */_Bool) (-(arr_7 [i_17 - 3])));
                    arr_67 [(unsigned char)12] [i_17] [i_18] [(unsigned char)7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_17 - 2] [i_17 - 3] [i_18]))));
                    arr_68 [i_0] [i_17] [(unsigned char)4] [i_17] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_22 [i_18] [13ULL] [i_17 - 1] [i_0] [(unsigned char)4] [i_0] [(_Bool)1]))))));
                }
            } 
        } 
        arr_69 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 1) 
    {
        arr_72 [i_19] = (!(((/* implicit */_Bool) arr_66 [i_19] [i_19])));
        arr_73 [i_19] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_19]))));
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            arr_77 [i_19] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [(unsigned short)0] [12ULL] [i_20] [i_20] [(unsigned short)0]))));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_8 [i_20] [i_19] [i_19]))));
            var_27 = ((/* implicit */unsigned long long int) arr_33 [i_19] [i_19] [i_19] [14ULL] [i_20] [i_20]);
            var_28 ^= ((/* implicit */unsigned char) (+(arr_43 [i_19] [i_20] [i_20])));
        }
    }
    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_22 = 1; i_22 < 19; i_22 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_48 [i_22] [i_22] [i_22 + 1] [i_22] [i_22 - 1]))))));
            /* LoopSeq 2 */
            for (int i_23 = 1; i_23 < 18; i_23 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_24 = 0; i_24 < 20; i_24 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 20; i_25 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_27 [i_22 - 1] [i_22] [i_23 - 1]))));
                        var_31 ^= (~(((/* implicit */int) arr_45 [i_21] [i_22 - 1] [i_23 - 1])));
                        arr_93 [i_21] [(unsigned short)11] = ((/* implicit */signed char) (-(((/* implicit */int) arr_22 [10] [(unsigned char)0] [i_22 + 1] [i_23 + 2] [(_Bool)1] [i_21] [i_22]))));
                        var_32 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_24] [0U] [i_23] [6ULL] [i_22 + 1]))));
                    }
                    for (signed char i_26 = 0; i_26 < 20; i_26 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) (~(arr_18 [i_23 - 1] [(unsigned short)16] [i_23 - 1] [(_Bool)1] [i_23 + 1])));
                        arr_97 [i_21] [i_22] [i_22] [3] [i_23] [i_24] [i_26] = arr_94 [7U] [0U] [i_23] [i_24] [i_26];
                        arr_98 [i_21] [i_22] [i_23] [i_24] [8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_3 [i_22 + 1] [i_22 + 1]))))));
                        arr_99 [(_Bool)1] [i_24] [i_23] [i_22] [13U] [i_21] = ((/* implicit */unsigned int) arr_22 [i_21] [i_22] [i_21] [i_24] [i_26] [8U] [(signed char)16]);
                    }
                    arr_100 [0ULL] = (!(((/* implicit */_Bool) arr_94 [(signed char)14] [i_22] [i_21] [i_24] [(unsigned char)14])));
                }
                for (unsigned int i_27 = 0; i_27 < 20; i_27 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */int) max((var_34), ((~(arr_65 [i_22] [12] [0U] [i_21])))));
                    arr_105 [(_Bool)1] [i_22] [i_22] [i_23] [i_27] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_86 [i_21] [i_21] [(_Bool)1] [(signed char)10]))))));
                }
                /* vectorizable */
                for (unsigned int i_28 = 0; i_28 < 20; i_28 += 4) /* same iter space */
                {
                    arr_109 [i_21] [(unsigned char)9] [17U] [i_28] = (+(arr_88 [i_22 - 1] [(_Bool)1] [(unsigned char)3]));
                    arr_110 [i_21] [i_21] [i_21] [(unsigned char)14] = ((/* implicit */signed char) (+(((/* implicit */int) arr_63 [i_23 + 2] [i_28] [i_28]))));
                    arr_111 [0ULL] [i_23] [(signed char)4] [9ULL] = ((/* implicit */unsigned int) (!(arr_86 [i_23] [(unsigned char)6] [i_23 + 1] [(signed char)13])));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_29 = 2; i_29 < 18; i_29 += 4) 
                {
                    var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_101 [i_22 + 1] [i_29 + 1]))));
                    var_36 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_22] [i_22] [i_22 + 1] [i_23 + 1]))));
                    var_37 ^= ((/* implicit */unsigned int) arr_86 [(signed char)12] [6U] [i_23] [i_29]);
                }
                /* LoopNest 2 */
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    for (unsigned char i_31 = 1; i_31 < 18; i_31 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned short) arr_13 [i_31 - 1] [i_30 + 1] [i_30 + 1] [i_30 + 1] [i_23 + 2] [i_22 + 1] [i_22 + 1]);
                            arr_121 [i_21] [4] [i_22] [i_23] [(_Bool)1] [i_31] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_11 [(unsigned char)2] [i_22] [i_22] [i_22 + 1]))))));
                            arr_122 [(_Bool)1] [i_22] [i_23] [(unsigned char)0] [(signed char)5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_21] [i_22] [7U] [(_Bool)1] [i_31 - 1]))));
                            var_39 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_62 [i_21] [i_23 + 2] [i_31 + 1]))))));
                        }
                    } 
                } 
            }
            for (int i_32 = 1; i_32 < 16; i_32 += 2) 
            {
                var_40 = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) arr_106 [i_32]))))))));
                arr_125 [2U] [i_32] [(unsigned char)4] [i_21] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_102 [i_21] [i_22] [i_32] [i_32]))));
            }
            arr_126 [i_21] [i_21] [i_21] = arr_28 [i_21] [(unsigned char)16] [i_22 + 1] [i_22 - 1];
            arr_127 [i_21] [0] = (+((+(arr_20 [i_21] [i_22 + 1]))));
        }
        for (unsigned int i_33 = 2; i_33 < 18; i_33 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_34 = 0; i_34 < 20; i_34 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_35 = 0; i_35 < 20; i_35 += 2) 
                {
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) arr_2 [i_21]))));
                    var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_137 [i_21] [(_Bool)1] [i_33] [i_33 + 2])))))));
                }
                for (signed char i_36 = 0; i_36 < 20; i_36 += 1) 
                {
                    arr_141 [i_21] [i_33] [i_34] [i_36] = ((/* implicit */unsigned int) arr_104 [5U] [i_36] [i_33 - 1] [(signed char)18]);
                    arr_142 [17] [i_33] [(unsigned char)15] [(unsigned char)5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_129 [i_21] [i_33] [i_34])))))))));
                }
                /* vectorizable */
                for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                {
                    arr_147 [11U] [i_33] [i_34] [7ULL] = ((/* implicit */unsigned int) (~(arr_7 [i_33])));
                    arr_148 [i_21] [i_21] [i_33] [i_34] [i_37] = ((/* implicit */unsigned int) arr_91 [i_33 + 2] [i_33]);
                    var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3502677829U))));
                }
                var_44 ^= ((/* implicit */unsigned int) arr_27 [(_Bool)1] [(unsigned char)1] [i_33]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_38 = 0; i_38 < 20; i_38 += 1) 
                {
                    arr_151 [i_21] [(unsigned char)15] [i_34] [i_38] = ((/* implicit */unsigned long long int) arr_80 [i_21]);
                    arr_152 [i_21] [i_33] [19U] [i_38] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_84 [i_21] [i_33 - 1] [i_33 - 1]))));
                    var_45 = ((/* implicit */unsigned int) max((var_45), (arr_118 [i_38] [i_38] [i_38] [i_38] [i_33 - 2] [i_33])));
                    var_46 *= ((/* implicit */unsigned char) (~(arr_82 [(unsigned short)2] [17ULL] [9U])));
                    arr_153 [(_Bool)1] = ((/* implicit */signed char) arr_119 [i_33] [i_33] [i_33] [(signed char)10] [i_33 + 2] [i_33 - 1]);
                }
            }
            var_47 -= ((/* implicit */unsigned char) arr_80 [i_21]);
            arr_154 [17U] = ((/* implicit */unsigned int) arr_133 [i_33 - 2] [i_33 + 2] [i_33]);
            var_48 = ((/* implicit */unsigned char) arr_103 [i_33 + 1] [10U] [i_33] [i_33 - 1]);
            var_49 |= ((/* implicit */unsigned long long int) arr_150 [i_33 - 2]);
        }
        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
        {
            arr_158 [i_39] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_136 [12U] [(unsigned char)1] [i_39] [i_39] [i_21])))))));
            var_50 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_52 [i_21] [i_39]))));
        }
        var_51 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_13 [(unsigned char)2] [i_21] [(signed char)11] [i_21] [i_21] [i_21] [i_21]))))));
        var_52 ^= ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_140 [i_21]))))));
        var_53 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_102 [i_21] [(_Bool)1] [17U] [i_21]))))));
    }
    for (unsigned char i_40 = 0; i_40 < 17; i_40 += 2) 
    {
        var_54 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_123 [i_40] [i_40] [i_40])))))))));
        var_55 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_84 [i_40] [i_40] [i_40]))));
        var_56 = ((/* implicit */unsigned char) arr_37 [i_40] [6] [i_40]);
        arr_162 [(unsigned char)10] = ((/* implicit */signed char) arr_46 [i_40] [i_40]);
    }
    /* LoopSeq 1 */
    for (signed char i_41 = 0; i_41 < 20; i_41 += 1) 
    {
        var_57 = ((/* implicit */unsigned char) arr_128 [i_41] [i_41]);
        arr_165 [(unsigned char)17] [(unsigned char)7] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_55 [i_41] [i_41] [i_41] [i_41] [i_41]))))));
    }
}
