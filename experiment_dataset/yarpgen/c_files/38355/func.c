/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38355
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)203)) || (((/* implicit */_Bool) (unsigned short)65518)))) || (((((/* implicit */_Bool) -5007932180462356055LL)) && (((/* implicit */_Bool) (signed char)127)))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((arr_7 [i_0 - 1] [i_0 - 1] [i_1 + 1]) ^ (arr_7 [i_0 + 1] [i_0 - 2] [i_1 + 2]))) & (((/* implicit */int) ((signed char) (short)-19663)))));
                    var_20 = ((/* implicit */_Bool) (-2147483647 - 1));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 1; i_4 < 8; i_4 += 1) 
            {
                arr_14 [i_0] [i_3] = ((/* implicit */short) (!((((_Bool)0) || (((/* implicit */_Bool) (short)(-32767 - 1)))))));
                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)58)) & (((/* implicit */int) arr_6 [i_4 + 2] [i_3] [i_3]))));
                var_22 *= ((/* implicit */short) ((unsigned char) (unsigned short)1));
            }
            arr_15 [i_3] = ((/* implicit */long long int) arr_0 [i_0 - 1]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_20 [i_5] [i_6] [i_5] [i_0] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 721814081U)) ? (((/* implicit */unsigned long long int) 7011582470969402042LL)) : (0ULL))) << (((((arr_3 [i_5] [i_0] [i_5]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)21535)) - (21472)))))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 721814081U)) ? (((/* implicit */unsigned long long int) 7011582470969402042LL)) : (0ULL))) << (((((((arr_3 [i_5] [i_0] [i_5]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)21535)) - (21472))))))));
                        arr_21 [i_0] [i_5] [i_5] [(short)9] = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0)))))));
                    }
                } 
            } 
            arr_22 [(_Bool)1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)16)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048575LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (4294967287U)))) ? (((/* implicit */unsigned long long int) 5U)) : (0ULL)))));
            var_23 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_0] [i_3])))))) ? (((((/* implicit */int) arr_1 [i_0 - 2] [i_3])) * (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)0))))))) / (arr_3 [i_0 - 2] [i_0 - 2] [i_3])));
        }
        for (long long int i_7 = 2; i_7 < 9; i_7 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)17))))) ? ((+(((/* implicit */int) (unsigned char)57)))) : (((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_7] [(_Bool)1]))) ? (((/* implicit */int) (short)13217)) : (((/* implicit */int) arr_16 [i_0 - 2] [i_0] [i_0 - 1]))))));
            var_25 -= ((/* implicit */signed char) (~(max((((/* implicit */long long int) (unsigned char)12)), (5353916960660563954LL)))));
        }
    }
    for (long long int i_8 = 3; i_8 < 11; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21535)) > (((/* implicit */int) var_4))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 2; i_11 < 9; i_11 += 1) 
                    {
                        for (short i_12 = 1; i_12 < 11; i_12 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10)) ? (((/* implicit */int) arr_36 [i_8] [i_8] [i_9] [i_10] [(signed char)2] [i_11 - 1] [(signed char)2])) : (((/* implicit */int) arr_28 [i_8]))))) && (((/* implicit */_Bool) 511)))) || (((/* implicit */_Bool) arr_34 [i_8] [i_8] [(_Bool)1] [i_11] [(_Bool)1] [(_Bool)1]))));
                                var_28 = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 11; i_13 += 3) 
                    {
                        for (int i_14 = 0; i_14 < 12; i_14 += 4) 
                        {
                            {
                                arr_46 [i_8] [i_13] [(short)4] [i_10] [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_37 [i_13] [i_9] [i_13] [i_13 + 1] [i_8 + 1]))) ? (((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_30 [i_8 + 1])), (arr_33 [i_8] [i_14] [(_Bool)1] [i_13]))), (((/* implicit */unsigned int) (-(-1))))))) : (min((((/* implicit */long long int) (signed char)111)), (arr_40 [i_13 - 1] [i_8] [i_8] [i_8] [i_8])))));
                                var_29 -= ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) arr_33 [i_14] [i_13] [i_10] [i_9])) ? (arr_40 [i_14] [i_14] [(_Bool)1] [i_14] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_14]))))))) ^ (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)243)) / (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */int) arr_42 [i_8] [i_8] [i_10] [i_8] [i_8])) * (((/* implicit */int) arr_32 [i_9] [i_14] [i_10] [i_13 - 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) max(((~(arr_34 [i_8] [i_8 - 3] [i_8 - 1] [(unsigned short)11] [i_8 + 1] [i_8]))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0)))))));
        var_31 = ((/* implicit */long long int) (signed char)-59);
        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21546)) ? (arr_31 [i_8] [i_8 + 1] [i_8] [i_8]) : (arr_31 [i_8] [i_8] [i_8 - 2] [i_8 - 2])))) ? (511) : (((/* implicit */int) ((unsigned char) 18014398509481983ULL))))))));
    }
    for (signed char i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        var_33 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_47 [i_15] [i_15])) ? (((/* implicit */int) arr_47 [i_15] [i_15])) : (((/* implicit */int) arr_47 [i_15] [i_15])))), (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_48 [i_15])))))));
        /* LoopNest 2 */
        for (short i_16 = 1; i_16 < 21; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                {
                    var_34 -= ((/* implicit */short) var_15);
                    var_35 = ((/* implicit */long long int) (short)0);
                    var_36 = ((/* implicit */_Bool) ((signed char) (unsigned char)3));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                for (short i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    for (short i_21 = 2; i_21 < 19; i_21 += 3) 
                    {
                        {
                            var_37 -= ((/* implicit */unsigned int) (unsigned short)65535);
                            var_38 = ((((((/* implicit */_Bool) -9223372036854775791LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)43836)))) / ((+((+(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            arr_65 [i_15] = ((/* implicit */unsigned int) var_11);
        }
        for (unsigned char i_22 = 0; i_22 < 22; i_22 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (short i_23 = 0; i_23 < 22; i_23 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 1) 
                    {
                        {
                            arr_76 [i_23] [(unsigned char)13] [(unsigned char)0] [(unsigned char)0] [i_25] = ((/* implicit */signed char) arr_66 [i_24 + 1]);
                            arr_77 [i_15] [i_15] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_61 [i_15] [i_22] [i_23] [i_25])) ? (((((/* implicit */_Bool) arr_72 [i_23] [i_24] [i_23] [i_23])) ? (((/* implicit */int) (short)28741)) : (((/* implicit */int) arr_69 [i_23])))) : (((/* implicit */int) (!(arr_59 [i_23] [(signed char)17] [i_24] [(signed char)17] [(signed char)17] [i_23])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_48 [i_23])) : (((/* implicit */int) arr_66 [i_22]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 5U)) && (((/* implicit */_Bool) (short)-1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 21ULL)))))))));
                            var_39 = ((/* implicit */signed char) arr_64 [i_24 + 1] [i_24 + 1] [i_23] [i_24 + 1] [i_24 + 1]);
                        }
                    } 
                } 
                var_40 ^= ((/* implicit */signed char) max((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) * (0U))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                arr_78 [i_15] [i_23] [i_23] [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-118))));
                /* LoopNest 2 */
                for (unsigned short i_26 = 2; i_26 < 20; i_26 += 4) 
                {
                    for (long long int i_27 = 0; i_27 < 22; i_27 += 1) 
                    {
                        {
                            arr_84 [i_22] [i_23] [i_23] [i_23] = ((/* implicit */signed char) arr_75 [i_15] [i_23] [i_23] [i_26 + 2] [i_27]);
                            var_41 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 12U))));
                            var_42 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_55 [i_27]))))) ? (((1LL) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)17)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_83 [i_23] [i_23] [i_23] [i_26] [i_27] [i_22])) ? (((/* implicit */int) (unsigned char)240)) : (((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)3)))))))));
                        }
                    } 
                } 
            }
            for (short i_28 = 0; i_28 < 22; i_28 += 4) 
            {
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 22; i_29 += 2) 
                {
                    for (signed char i_30 = 1; i_30 < 20; i_30 += 2) 
                    {
                        {
                            arr_94 [i_30] [i_28] = ((/* implicit */short) min((((/* implicit */long long int) (-2147483647 - 1))), ((-(((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_22] [i_28] [i_28] [15U]))) * (3LL)))))));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)49139)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_90 [i_15] [i_15] [i_28] [i_28] [i_30 + 2] [i_15])) ? ((-(-9223372036854775794LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_48 [i_28])))))))) : (var_17)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_31 = 1; i_31 < 19; i_31 += 2) 
                {
                    for (short i_32 = 0; i_32 < 22; i_32 += 3) 
                    {
                        {
                            arr_99 [i_15] [i_15] [i_15] [i_31] [i_31] [i_32] = ((/* implicit */_Bool) 2653922443402474683ULL);
                            var_44 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_53 [i_15])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_31 - 1]))) : (max((((/* implicit */long long int) 289238871U)), (-9223372036854775773LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_31 + 3] [i_31 + 2]))))))));
                        }
                    } 
                } 
            }
            for (long long int i_33 = 0; i_33 < 22; i_33 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_34 = 1; i_34 < 21; i_34 += 2) 
                {
                    var_45 = ((/* implicit */short) (!(arr_69 [i_33])));
                    var_46 = ((/* implicit */unsigned int) ((short) var_0));
                    var_47 *= ((/* implicit */unsigned short) ((signed char) arr_82 [i_22]));
                    arr_106 [i_15] [i_33] [i_15] [(signed char)17] [i_15] [i_15] = ((/* implicit */signed char) arr_105 [i_15] [i_33] [(_Bool)1] [i_34]);
                    arr_107 [i_15] [i_33] [(signed char)17] = (-(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))) / (-9223372036854775780LL)))))));
                }
                arr_108 [i_33] = ((/* implicit */short) ((unsigned int) ((arr_70 [i_15] [i_15] [i_33] [i_33]) ? (((/* implicit */int) (short)-22865)) : (((/* implicit */int) (_Bool)0)))));
                arr_109 [i_15] [i_15] [i_33] [i_33] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_73 [i_15]))))) ? (((/* implicit */int) min((arr_73 [i_22]), (arr_73 [i_15])))) : (((((/* implicit */int) (short)0)) / (((/* implicit */int) arr_73 [i_22]))))));
            }
            for (long long int i_35 = 0; i_35 < 22; i_35 += 3) /* same iter space */
            {
                var_48 = ((/* implicit */_Bool) arr_85 [i_22] [i_22]);
                var_49 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_110 [i_15] [i_22] [i_22]))))) * ((+(6LL)))));
            }
            var_50 += ((/* implicit */short) (~(((((/* implicit */_Bool) arr_91 [i_15] [i_22] [i_15] [i_22] [i_15] [i_15])) ? (arr_91 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        }
        for (short i_36 = 1; i_36 < 21; i_36 += 1) /* same iter space */
        {
            arr_115 [i_15] [i_36] = ((/* implicit */_Bool) max((((((((/* implicit */long long int) ((/* implicit */int) arr_68 [i_15]))) / (-9223372036854775789LL))) * (((arr_59 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) : (9223372036854775792LL))))), (((/* implicit */long long int) arr_87 [i_15]))));
            var_51 += ((/* implicit */_Bool) max((((/* implicit */int) var_14)), ((+((+(((/* implicit */int) (unsigned short)26))))))));
        }
        for (short i_37 = 1; i_37 < 21; i_37 += 1) /* same iter space */
        {
            var_52 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 9223372036854775799LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_37 + 1] [i_37 + 1] [i_37] [i_37 + 1])) && (((/* implicit */_Bool) -1913925091))))) : (((/* implicit */int) min((arr_61 [i_37 - 1] [i_37 - 1] [i_37] [i_37 - 1]), (((/* implicit */unsigned short) var_13)))))));
            var_53 = ((/* implicit */signed char) arr_66 [i_37 + 1]);
            var_54 -= ((/* implicit */_Bool) arr_57 [0LL] [0LL] [i_37] [i_37]);
            /* LoopNest 2 */
            for (signed char i_38 = 2; i_38 < 18; i_38 += 2) 
            {
                for (signed char i_39 = 0; i_39 < 22; i_39 += 3) 
                {
                    {
                        arr_124 [i_37] = ((/* implicit */_Bool) min((9223372036854775754LL), (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */signed char) arr_58 [i_38] [i_39])), ((signed char)-75)))), ((~(arr_120 [i_15] [i_37] [i_37] [i_15] [i_37] [i_37]))))))));
                        var_55 -= ((((((/* implicit */long long int) 4294967285U)) / (((((/* implicit */_Bool) 9223372036854775791LL)) ? (9223372036854775773LL) : (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_38]))))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_114 [i_37] [i_37])) : (((/* implicit */int) arr_54 [i_15] [i_37] [i_38] [i_39])))) * (((/* implicit */int) arr_70 [i_15] [i_37 + 1] [i_38] [i_39]))))));
                    }
                } 
            } 
            var_56 += ((/* implicit */unsigned short) 4U);
        }
        var_57 -= ((/* implicit */unsigned short) arr_85 [(signed char)8] [(signed char)8]);
    }
    /* LoopSeq 1 */
    for (signed char i_40 = 3; i_40 < 10; i_40 += 1) 
    {
        arr_127 [i_40] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_81 [i_40] [i_40] [i_40] [i_40] [i_40])) ? (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1)))) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_40]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_15)))))))));
        var_58 = ((/* implicit */long long int) 19ULL);
    }
    var_59 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_0))))));
}
