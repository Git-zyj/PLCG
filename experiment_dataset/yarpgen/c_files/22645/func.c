/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22645
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
    var_17 &= 31ULL;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) 27021597764222976ULL);
        var_19 = ((/* implicit */long long int) 27021597764222976ULL);
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            arr_12 [i_1] [i_1] [i_2] [(signed char)0] [(_Bool)1] = ((/* implicit */long long int) 27021597764222976ULL);
                            var_20 = ((/* implicit */_Bool) 27021597764222976ULL);
                            var_21 = ((/* implicit */long long int) 18419722475945328639ULL);
                        }
                        /* vectorizable */
                        for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                        {
                            var_22 += ((/* implicit */signed char) 17314231647618290743ULL);
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)-45);
                            var_23 |= ((/* implicit */unsigned long long int) (signed char)-120);
                            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                            arr_17 [i_0] [i_1] [i_0] [i_3] = (_Bool)1;
                        }
                        var_24 = ((/* implicit */long long int) 27021597764222985ULL);
                    }
                } 
            } 
        } 
        var_25 ^= ((/* implicit */long long int) (signed char)-125);
        arr_18 [i_0] &= (_Bool)1;
    }
    for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
    {
        var_26 = ((/* implicit */signed char) (_Bool)0);
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_27 = 7093852996769622365LL;
                var_28 |= ((/* implicit */signed char) 27021597764222976ULL);
                var_29 = ((/* implicit */unsigned long long int) (_Bool)0);
            }
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                arr_31 [i_6] [i_7] = (_Bool)1;
                var_30 -= ((/* implicit */unsigned long long int) -1001277272769160599LL);
                /* LoopSeq 1 */
                for (long long int i_10 = 1; i_10 < 16; i_10 += 4) 
                {
                    var_31 = ((/* implicit */signed char) 18419722475945328608ULL);
                    arr_34 [i_10] = ((/* implicit */_Bool) 4926398561252280769LL);
                    var_32 = ((/* implicit */unsigned long long int) (_Bool)0);
                }
            }
            arr_35 [i_6] = ((/* implicit */long long int) (signed char)-1);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_33 = (_Bool)0;
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) -5900276052319270555LL))));
            var_35 = (_Bool)1;
            var_36 = ((/* implicit */signed char) 18446744073709551615ULL);
            var_37 = (signed char)-116;
        }
        var_38 *= (_Bool)1;
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 4) 
    {
        var_39 = ((/* implicit */signed char) 70368744177663ULL);
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            var_40 = 5546614787219721863LL;
            arr_45 [i_13] [i_12] [i_12] = ((/* implicit */long long int) 27021597764222985ULL);
            var_41 |= ((/* implicit */_Bool) 9271173568930518442ULL);
            /* LoopSeq 2 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_48 [i_13] = ((/* implicit */_Bool) 17562703557337398337ULL);
                arr_49 [i_12] [i_12] [i_12] = (signed char)47;
                /* LoopSeq 4 */
                for (signed char i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
                {
                    var_42 = ((/* implicit */_Bool) max((var_42), ((_Bool)1)));
                    var_43 = ((/* implicit */unsigned long long int) -452919176867327983LL);
                }
                for (signed char i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
                {
                    var_44 = ((/* implicit */long long int) (signed char)14);
                    var_45 = ((/* implicit */_Bool) 0ULL);
                    var_46 = 5546614787219721856LL;
                }
                for (signed char i_17 = 0; i_17 < 16; i_17 += 3) /* same iter space */
                {
                    var_47 = -5900276052319270555LL;
                    var_48 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_49 = ((/* implicit */unsigned long long int) (_Bool)0);
                }
                for (signed char i_18 = 0; i_18 < 16; i_18 += 3) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) 5900276052319270536LL))));
                    var_51 ^= ((/* implicit */_Bool) 237440902557326398ULL);
                    var_52 = ((/* implicit */unsigned long long int) max((var_52), (18419722475945328629ULL)));
                    var_53 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                }
                arr_61 [i_12] [i_13] [i_14] = ((/* implicit */long long int) 18419722475945328629ULL);
                var_54 = ((/* implicit */_Bool) 6LL);
            }
            for (long long int i_19 = 2; i_19 < 13; i_19 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_68 [(_Bool)1] [(_Bool)1] [i_13] [i_13] [i_21] [i_21] [i_20] = ((/* implicit */unsigned long long int) -2028458071674362985LL);
                        var_55 = ((/* implicit */long long int) (signed char)-12);
                        var_56 = ((/* implicit */unsigned long long int) (signed char)11);
                        arr_69 [i_12] [i_21] [i_12] [i_12] [i_12 - 2] = ((/* implicit */signed char) -1LL);
                    }
                    var_57 ^= ((/* implicit */signed char) (_Bool)1);
                    var_58 = ((/* implicit */_Bool) max((var_58), ((_Bool)0)));
                    arr_70 [i_12] [i_12 - 3] [i_12 - 3] [i_12 - 3] [i_20] = ((/* implicit */long long int) 8177258571154602806ULL);
                    arr_71 [i_12] [i_19 - 2] [i_20] = ((/* implicit */long long int) 2592954004686280962ULL);
                }
                var_59 = ((/* implicit */_Bool) 18446744073709551608ULL);
                arr_72 [0ULL] [i_13] [i_13] [i_12] = ((/* implicit */signed char) 10269485502554948790ULL);
                arr_73 [14ULL] = ((/* implicit */long long int) (_Bool)0);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 3) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_60 = ((/* implicit */long long int) 5984900203928979013ULL);
                        var_61 *= ((/* implicit */_Bool) 8336532244443294852ULL);
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (long long int i_24 = 0; i_24 < 16; i_24 += 3) 
        {
            arr_85 [i_24] [i_24] = ((/* implicit */signed char) 288230376151711743ULL);
            var_62 = ((/* implicit */unsigned long long int) 18LL);
            var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) (_Bool)0))));
            var_64 = ((/* implicit */unsigned long long int) -1LL);
            /* LoopSeq 3 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                arr_89 [i_24] [i_24] [i_24] [i_24] = (signed char)22;
                var_65 ^= ((/* implicit */signed char) 11507847083756759164ULL);
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_27 = 1; i_27 < 15; i_27 += 4) 
                {
                    var_66 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                    var_67 = -5546614787219721859LL;
                    arr_96 [i_24] [i_24] [i_26] [i_27] [i_27] = (_Bool)0;
                    var_68 = (-9223372036854775807LL - 1LL);
                }
                var_69 = ((/* implicit */long long int) max((var_69), (((/* implicit */long long int) 17223142155955490010ULL))));
                var_70 = ((/* implicit */_Bool) (signed char)102);
            }
            for (signed char i_28 = 0; i_28 < 16; i_28 += 3) 
            {
                var_71 &= ((/* implicit */signed char) (_Bool)1);
                var_72 = (signed char)90;
                arr_101 [i_24] [i_24] [2ULL] [i_24] |= ((/* implicit */unsigned long long int) (signed char)11);
                var_73 = (signed char)-86;
            }
        }
        for (signed char i_29 = 1; i_29 < 13; i_29 += 2) 
        {
            var_74 = ((/* implicit */unsigned long long int) -1819769064652429570LL);
            /* LoopSeq 2 */
            for (unsigned long long int i_30 = 0; i_30 < 16; i_30 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_31 = 4; i_31 < 13; i_31 += 3) 
                {
                    var_75 |= ((/* implicit */long long int) 35804894746069920ULL);
                    var_76 *= ((/* implicit */_Bool) 35804894746069920ULL);
                    var_77 = ((/* implicit */_Bool) (signed char)16);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_32 = 0; i_32 < 16; i_32 += 3) /* same iter space */
                    {
                        arr_113 [i_12 - 2] [11ULL] [11ULL] [11ULL] [i_29] = ((/* implicit */long long int) (signed char)90);
                        var_78 = ((/* implicit */signed char) min((var_78), (((/* implicit */signed char) 237440902557326398ULL))));
                        var_79 = ((/* implicit */unsigned long long int) -1LL);
                        var_80 = (_Bool)0;
                    }
                    for (unsigned long long int i_33 = 0; i_33 < 16; i_33 += 3) /* same iter space */
                    {
                        arr_116 [i_12] [i_29] [0ULL] [i_31 + 2] [i_29] [i_33] = 0LL;
                        arr_117 [i_29] [12ULL] [i_31 + 1] = ((/* implicit */long long int) 12575851542120636431ULL);
                    }
                    var_81 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                }
                /* LoopNest 2 */
                for (signed char i_34 = 0; i_34 < 16; i_34 += 4) 
                {
                    for (long long int i_35 = 0; i_35 < 16; i_35 += 3) 
                    {
                        {
                            var_82 = ((/* implicit */signed char) (_Bool)1);
                            var_83 ^= -8858703632352144419LL;
                            var_84 = ((/* implicit */signed char) 10LL);
                        }
                    } 
                } 
                arr_123 [i_29] [i_30] [(_Bool)1] [i_29] = -9223372036854775805LL;
                var_85 &= ((/* implicit */unsigned long long int) (signed char)-22);
            }
            for (unsigned long long int i_36 = 0; i_36 < 16; i_36 += 1) /* same iter space */
            {
                var_86 = ((/* implicit */_Bool) -1LL);
                var_87 = ((/* implicit */signed char) 18LL);
            }
        }
        for (long long int i_37 = 2; i_37 < 13; i_37 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                for (unsigned long long int i_39 = 0; i_39 < 16; i_39 += 3) 
                {
                    for (long long int i_40 = 0; i_40 < 16; i_40 += 3) 
                    {
                        {
                            var_88 = (signed char)-102;
                            var_89 = ((/* implicit */_Bool) 7ULL);
                            var_90 = ((/* implicit */long long int) 35184371040256ULL);
                            var_91 = ((/* implicit */unsigned long long int) (signed char)11);
                        }
                    } 
                } 
            } 
            arr_137 [i_12] [i_37] = (signed char)11;
        }
        /* LoopSeq 3 */
        for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_42 = 0; i_42 < 16; i_42 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                {
                    for (long long int i_44 = 3; i_44 < 14; i_44 += 2) 
                    {
                        {
                            arr_148 [i_12] [i_12 - 3] [i_12] [i_12] [i_44] = 5546614787219721863LL;
                            var_92 = ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                    } 
                } 
                var_93 = ((/* implicit */_Bool) 5LL);
                var_94 |= (_Bool)1;
                var_95 = ((/* implicit */_Bool) (signed char)-122);
                var_96 *= ((/* implicit */_Bool) 5LL);
            }
            arr_149 [10ULL] [i_41] = ((/* implicit */long long int) (_Bool)0);
            arr_150 [i_12 - 3] [i_12] = ((/* implicit */_Bool) (signed char)63);
        }
        for (signed char i_45 = 0; i_45 < 16; i_45 += 4) 
        {
            var_97 = 5201216769581192893ULL;
            var_98 = ((/* implicit */signed char) 18446708889338511359ULL);
        }
        for (long long int i_46 = 0; i_46 < 16; i_46 += 4) 
        {
            var_99 = ((/* implicit */long long int) (_Bool)1);
            arr_156 [(_Bool)1] [(signed char)3] = ((/* implicit */signed char) (_Bool)0);
            /* LoopNest 3 */
            for (unsigned long long int i_47 = 0; i_47 < 16; i_47 += 3) 
            {
                for (_Bool i_48 = 0; i_48 < 1; i_48 += 1) 
                {
                    for (unsigned long long int i_49 = 0; i_49 < 16; i_49 += 1) 
                    {
                        {
                            var_100 = ((/* implicit */unsigned long long int) min((var_100), (((/* implicit */unsigned long long int) (_Bool)0))));
                            arr_164 [i_46] [i_47] [i_47] [i_49] = ((/* implicit */signed char) 18446708889338511359ULL);
                            arr_165 [i_12] [i_46] [i_46] [i_48] [i_12 - 1] [i_47] = ((/* implicit */_Bool) (signed char)44);
                            var_101 = ((/* implicit */unsigned long long int) min((var_101), (18446708889338511359ULL)));
                        }
                    } 
                } 
            } 
        }
    }
    var_102 &= ((/* implicit */unsigned long long int) var_13);
}
