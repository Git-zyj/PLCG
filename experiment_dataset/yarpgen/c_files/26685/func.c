/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26685
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)113))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) ((max((min((arr_5 [i_2 - 1] [i_0]), (2586147577U))), (((/* implicit */unsigned int) max((2147483635), (((/* implicit */int) (signed char)-114))))))) < (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0]))));
                    arr_9 [i_0] = ((/* implicit */signed char) min(((((+(arr_4 [i_0] [i_1 - 2] [i_0]))) >> (((((/* implicit */int) ((signed char) var_9))) + (78))))), (min((((/* implicit */int) arr_6 [i_2 + 1] [i_1 - 2] [0LL])), ((~(((/* implicit */int) var_17))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) var_3);
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((_Bool) (unsigned short)57247));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4] [i_3])) - (((/* implicit */int) (unsigned short)8289))));
                    arr_23 [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_3)) ? (arr_15 [18U] [18U] [18U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)15] [i_3])))))));
                }
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8282)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_3]))) : (18446744073709551615ULL)));
                var_26 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)5062)))) | (((/* implicit */int) (unsigned short)8299))));
                /* LoopSeq 4 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */int) var_8);
                    /* LoopSeq 1 */
                    for (int i_8 = 3; i_8 < 21; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) arr_6 [i_8 - 2] [i_8 - 2] [i_8 - 1]);
                        var_29 = ((/* implicit */short) (((((_Bool)0) || (((/* implicit */_Bool) (signed char)-64)))) ? (((((/* implicit */_Bool) arr_22 [i_3] [i_4] [i_5] [i_3] [i_8 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_21 [i_3] [i_3] [i_3] [11ULL] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_3] [i_3] [i_5]) >= (arr_20 [i_4] [i_5] [i_7])))))));
                        arr_29 [i_3] [i_3] [i_3] [i_8] = arr_6 [i_3] [i_5] [i_7];
                    }
                    arr_30 [i_3] [i_4] [i_4] [i_7] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-39)) * ((~(((/* implicit */int) (signed char)63))))));
                }
                for (signed char i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                {
                    arr_33 [i_3] [i_5] [i_4] [(unsigned short)16] [i_3] = ((/* implicit */unsigned int) arr_10 [i_4] [i_9]);
                    arr_34 [i_4] [i_3] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57247))) : (var_13)))) ? (((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3])) ? (719704542) : (((/* implicit */int) arr_6 [(unsigned short)11] [i_5] [i_9])))) : (((/* implicit */int) arr_22 [i_9] [i_3] [(signed char)11] [i_3] [(unsigned char)9]))));
                    var_30 = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_17 [i_3] [20U] [i_3] [i_3]))));
                }
                for (signed char i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                {
                    arr_37 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_3]);
                    var_31 = ((/* implicit */unsigned short) (signed char)63);
                }
                for (signed char i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) ((((unsigned long long int) 0U)) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_3] [(signed char)15] [(signed char)15] [i_11])))));
                    var_33 = ((/* implicit */long long int) (~(var_5)));
                    var_34 = ((/* implicit */unsigned char) (signed char)-113);
                }
                arr_41 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_4]))));
            }
            for (unsigned short i_12 = 1; i_12 < 19; i_12 += 1) 
            {
                arr_44 [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) arr_10 [i_3] [i_12]);
                arr_45 [i_3] [i_3] [i_12 + 2] [i_4] = ((/* implicit */int) ((unsigned short) arr_42 [i_12 - 1]));
            }
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)8)) && (((/* implicit */_Bool) (short)-1))));
                arr_48 [i_13] [i_3] [(unsigned short)13] = (-(arr_21 [i_3] [i_3] [i_13] [i_13] [(_Bool)1]));
                var_36 = ((/* implicit */short) arr_12 [i_3]);
            }
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                arr_52 [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3])))))));
                var_37 = ((/* implicit */unsigned short) ((unsigned char) arr_25 [i_3] [i_3] [i_14 + 1] [(unsigned char)21]));
                /* LoopNest 2 */
                for (short i_15 = 1; i_15 < 20; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-119)) >= (arr_10 [i_15 + 2] [i_4])));
                            arr_60 [i_14 + 1] [i_3] [i_14 + 1] [i_14] [i_14] [i_14] = (signed char)119;
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned int) arr_35 [i_14 + 1]);
                arr_61 [i_3] = ((/* implicit */unsigned int) ((_Bool) var_10));
            }
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    for (unsigned short i_19 = 3; i_19 < 20; i_19 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_57 [i_17 + 1] [i_17] [i_19 + 2] [i_19] [i_19]))));
                            arr_71 [i_3] [i_3] [i_3] [i_18] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_4] [i_17] [i_17] [i_17 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_36 [i_3] [i_3] [i_3] [i_18])) < (((/* implicit */int) (short)20219)))))) : (arr_47 [(signed char)11] [i_4] [i_3])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_20 = 4; i_20 < 21; i_20 += 3) 
            {
                for (int i_21 = 4; i_21 < 20; i_21 += 3) 
                {
                    {
                        var_41 = arr_7 [i_3];
                        arr_77 [i_3] [i_3] [i_3] [i_20] [12U] [i_21] = ((/* implicit */int) arr_12 [i_20]);
                        arr_78 [i_3] [i_20] [i_20] = ((/* implicit */signed char) ((long long int) ((((((/* implicit */int) (signed char)-12)) + (2147483647))) >> (((3824341117U) - (3824341107U))))));
                        arr_79 [i_3] = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)31))) | (-8905493520734726596LL))));
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 4; i_22 < 21; i_22 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned int) (+(((int) var_0))));
                            arr_82 [i_3] [(signed char)3] [i_3] [i_20] [i_20] [i_21] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_3] [i_3] [i_20] [i_21] [i_21] [i_22 - 2])) ? (arr_66 [i_3] [i_3] [i_3] [i_21] [i_22 - 2] [i_3]) : (arr_66 [(unsigned short)8] [i_3] [20U] [9] [i_21] [i_3])));
                        }
                    }
                } 
            } 
            var_43 = ((/* implicit */signed char) arr_14 [i_3] [i_3] [(unsigned char)16]);
        }
        for (unsigned short i_23 = 0; i_23 < 22; i_23 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_24 = 2; i_24 < 21; i_24 += 1) 
            {
                arr_88 [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (unsigned short)65519))))));
                /* LoopSeq 3 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_26 = 0; i_26 < 22; i_26 += 2) 
                    {
                        arr_95 [i_26] [i_3] [i_24] [i_23] [i_3] [11U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_94 [i_23] [i_23] [i_24 - 1] [i_23] [i_26] [i_25])))));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)9915)) >> (((((/* implicit */int) arr_50 [6U] [6U])) - (39)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_24 - 2] [i_24 - 2] [i_24 - 2] [(unsigned char)0]))) : (629508388396956842LL)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_27 = 1; i_27 < 19; i_27 += 4) 
                    {
                        arr_100 [7ULL] [i_25] [i_24 + 1] [i_27] [i_25] [i_3] [i_24 + 1] = ((/* implicit */unsigned short) ((short) (signed char)-124));
                        var_45 = ((/* implicit */int) 2273186907554181906LL);
                    }
                    for (unsigned char i_28 = 1; i_28 < 21; i_28 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_92 [i_25] [i_23] [i_23])));
                        arr_103 [i_3] [(signed char)12] [i_3] [i_3] [i_28] = ((unsigned int) arr_50 [(signed char)0] [i_24]);
                        arr_104 [i_23] [i_3] [i_24] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                        var_47 = ((/* implicit */unsigned short) arr_92 [21LL] [i_23] [i_23]);
                    }
                    for (unsigned long long int i_29 = 0; i_29 < 22; i_29 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-32)) % (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) arr_14 [i_24 - 2] [i_3] [i_23]))));
                        var_49 = ((/* implicit */short) (-(((/* implicit */int) var_17))));
                        var_50 = ((/* implicit */_Bool) arr_69 [i_29] [i_3] [(signed char)11] [i_3] [i_3]);
                    }
                    arr_109 [i_25] [i_3] = ((/* implicit */unsigned char) arr_2 [(signed char)17] [i_3]);
                    arr_110 [i_3] [i_23] [5U] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_24 - 1] [i_24 - 1] [i_24 - 2] [i_24 + 1])) ? (((/* implicit */int) arr_31 [i_24 - 1] [i_24 - 1] [i_24 - 2] [i_24 + 1])) : (((/* implicit */int) arr_31 [i_24 - 1] [i_24 - 1] [i_24 - 2] [i_24 + 1]))));
                }
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */long long int) (~((~(4027212692557851212ULL)))));
                    /* LoopSeq 2 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        arr_117 [i_3] [i_23] [i_23] [7U] [i_3] [7U] [i_23] = ((/* implicit */short) ((long long int) arr_70 [i_3] [i_23] [i_23] [i_23] [18U]));
                        var_52 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 1073741824U)) ? (349792462U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))))));
                        arr_118 [i_3] [(unsigned short)18] [i_24] [i_24 + 1] [i_30] [i_3] [i_24] = ((/* implicit */unsigned int) ((long long int) (signed char)-32));
                        arr_119 [i_3] [i_23] = ((/* implicit */unsigned short) var_19);
                    }
                    for (short i_32 = 0; i_32 < 22; i_32 += 2) 
                    {
                        arr_123 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)55)) ? (576460752303423487LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
                        var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_105 [i_30]))) ? (((((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_3] [i_24] [i_3] [i_30] [i_3])) ? (((/* implicit */int) arr_54 [i_32] [i_30] [i_23] [i_3])) : (((/* implicit */int) arr_91 [i_3] [i_3] [i_3] [i_3])))) : ((+(((/* implicit */int) (signed char)-32))))));
                    }
                }
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
                {
                    var_54 = arr_49 [i_24 + 1] [i_24 + 1] [i_24 + 1];
                    arr_126 [i_3] [i_23] [(unsigned char)17] [i_23] [i_23] [i_33] = ((/* implicit */unsigned short) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_24 - 2] [i_24] [i_24 - 1] [i_24 - 2] [i_24 + 1])))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_34 = 3; i_34 < 21; i_34 += 3) 
                {
                    for (signed char i_35 = 1; i_35 < 20; i_35 += 1) 
                    {
                        {
                            arr_131 [i_3] [11LL] [i_24] [i_3] [(unsigned char)12] = ((/* implicit */unsigned long long int) arr_5 [i_3] [i_3]);
                            arr_132 [(_Bool)1] [i_23] [(_Bool)1] [i_23] [i_3] = ((/* implicit */unsigned char) ((short) 7059110768735274649LL));
                        }
                    } 
                } 
            }
            arr_133 [i_3] [i_3] = ((/* implicit */_Bool) var_19);
            var_55 = ((/* implicit */unsigned char) arr_114 [14LL] [i_23] [i_3] [14U] [14LL]);
            arr_134 [i_3] = ((/* implicit */unsigned int) ((_Bool) var_6));
        }
    }
    /* vectorizable */
    for (signed char i_36 = 0; i_36 < 22; i_36 += 3) /* same iter space */
    {
        arr_137 [i_36] [i_36] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8205328083031378490LL)) ? (arr_108 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36]) : (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_36] [i_36] [i_36])))));
        var_56 = ((/* implicit */short) ((((/* implicit */_Bool) ((-4794109334661079758LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_108 [i_36] [i_36] [(signed char)13] [(short)20] [i_36] [i_36]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        var_57 = ((/* implicit */unsigned int) ((arr_106 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36] [i_36]) >> (((arr_106 [i_36] [(unsigned short)17] [i_36] [i_36] [i_36] [i_36] [i_36]) - (8415735432136652792LL)))));
        /* LoopSeq 1 */
        for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
        {
            arr_140 [i_36] [i_36] [i_37] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) 1931759896))) - (((((/* implicit */_Bool) -2273186907554181914LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51635))) : (arr_128 [i_36] [i_36] [i_36] [i_36])))));
            var_58 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_36] [i_36] [i_37])))))));
            arr_141 [i_36] = ((/* implicit */unsigned char) (signed char)63);
            var_59 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))));
            arr_142 [i_36] = ((unsigned char) (short)5979);
        }
    }
    var_60 = min((((((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_11))))) % (((/* implicit */long long int) (+(1931759896)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))));
}
