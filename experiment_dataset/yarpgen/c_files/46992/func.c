/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46992
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
    var_10 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -1379439613))))), (((long long int) max((((/* implicit */long long int) var_7)), (var_4))))));
    var_11 ^= ((/* implicit */unsigned int) max((-1379439613), (((/* implicit */int) (_Bool)1))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (short)12298))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) -6320679710912128294LL)) ? (((((/* implicit */_Bool) -1681079451)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7640647201943782109LL))) : (((((/* implicit */_Bool) 2146435072)) ? (var_4) : (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_9))))))));
                    arr_8 [i_0 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((int) arr_7 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                for (int i_6 = 1; i_6 < 16; i_6 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_7] [i_3] [i_4] [i_3])) : (((/* implicit */int) arr_0 [i_4] [i_7]))))) ? ((+(var_1))) : (var_1))))));
                            arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((unsigned int) -3422474800447773213LL));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_4 + 3] [i_4 + 2] [i_5 + 1])))))));
                        }
                        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            arr_24 [i_3] = ((/* implicit */_Bool) ((int) arr_2 [i_4 + 1] [i_6 - 1]));
                            var_17 -= ((/* implicit */int) arr_22 [i_8] [i_4 + 3] [i_5] [i_6] [i_8]);
                            var_18 = ((/* implicit */int) arr_1 [i_5 + 1]);
                            arr_25 [i_3] [i_3] [i_5 + 1] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)));
                            arr_26 [i_3] [i_3] [i_5] [i_6] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                        }
                        for (int i_9 = 1; i_9 < 17; i_9 += 1) 
                        {
                            var_19 = (+(((/* implicit */int) arr_18 [i_3] [i_5 - 3] [i_4 + 1] [i_6 + 2] [i_9] [i_5])));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) < (((/* implicit */int) (short)-4096))))) * (((/* implicit */int) arr_11 [i_3] [i_6] [i_9]))));
                            var_21 = ((/* implicit */unsigned char) ((unsigned int) var_2));
                            arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) 1U);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3] [i_6] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_5 - 3] [i_6] [i_9 + 1]))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (8257536) : (arr_14 [i_4 + 1] [i_5] [i_3])))));
                        }
                        var_23 ^= (-(((((/* implicit */_Bool) -1681079452)) ? (((/* implicit */int) arr_9 [4])) : (((/* implicit */int) (short)127)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) ((int) var_0));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
            {
                arr_37 [i_3] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) var_5)))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        {
                            arr_44 [i_3] [i_3] [i_3] [i_3] [i_3] = ((_Bool) var_9);
                            var_25 = ((/* implicit */int) ((_Bool) 2147483647));
                        }
                    } 
                } 
            }
            for (int i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)36))));
                var_27 = ((/* implicit */unsigned char) arr_31 [i_3] [i_14]);
                arr_47 [i_3] [i_14] [i_14] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)32251)) : (-761684919)))) ? (1006527030U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) 44730868))))))));
                arr_48 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_14] [i_10] [i_3])) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned char)153))));
            }
            arr_49 [i_10] [i_10] &= ((/* implicit */int) (~(arr_33 [i_3] [i_10] [i_10])));
            var_28 = ((unsigned long long int) arr_5 [i_3] [i_3] [i_3] [i_3]);
            var_29 = ((/* implicit */unsigned int) arr_45 [i_3] [i_10] [i_3]);
        }
        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_30 = ((/* implicit */unsigned char) 2710064437034228958LL);
            arr_54 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) arr_13 [i_15] [i_3] [i_3] [i_3])) : (-761684919))));
            /* LoopSeq 4 */
            for (short i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) 8))));
                /* LoopSeq 2 */
                for (int i_17 = 1; i_17 < 17; i_17 += 3) 
                {
                    var_32 = ((/* implicit */int) ((long long int) arr_11 [i_3] [i_16] [i_17]));
                    var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) 6320679710912128293LL)))));
                }
                for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    arr_62 [i_3] [i_3] [i_15] [i_15] [i_16] [i_18] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)244))));
                    var_34 = ((/* implicit */short) arr_38 [i_18] [i_16] [i_15] [i_3] [i_3]);
                    arr_63 [i_3] [i_15] [i_16] [i_3] = ((/* implicit */unsigned char) (~(-1062010976)));
                    var_35 = ((/* implicit */unsigned int) 1659302431358253010ULL);
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))) : (14454405550574362466ULL))))));
                }
                arr_64 [i_3] [i_3] [i_16] = ((/* implicit */_Bool) ((int) (~(arr_34 [i_3]))));
            }
            for (int i_19 = 2; i_19 < 17; i_19 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_3] [i_3] [i_3]))) != (var_6))))));
                var_38 = ((/* implicit */unsigned long long int) (-(var_3)));
            }
            for (int i_20 = 2; i_20 < 17; i_20 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_21 = 0; i_21 < 18; i_21 += 4) /* same iter space */
                {
                    arr_73 [i_3] [i_15] [i_21] = arr_70 [i_21] [i_20] [i_15] [i_3];
                    var_39 = (-(var_6));
                    arr_74 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-10272)) : (((/* implicit */int) var_0)))));
                    var_40 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_15] [i_20 + 1] [i_20 + 1] [i_20 - 2] [i_20 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_15] [i_20 - 2] [i_20 + 1] [i_20 - 1] [i_20 - 2] [i_20]))) : (-8079260831616892118LL)));
                    var_41 -= (+(((/* implicit */int) var_8)));
                }
                for (int i_22 = 0; i_22 < 18; i_22 += 4) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned char) ((unsigned int) arr_17 [i_20 - 2]));
                    var_43 = ((/* implicit */int) var_4);
                }
                for (int i_23 = 0; i_23 < 18; i_23 += 4) /* same iter space */
                {
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)184))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_50 [i_3] [i_15] [i_15])) : (10223667830868761884ULL))))));
                    var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)30)))))));
                }
                var_46 -= ((/* implicit */long long int) (-(arr_16 [i_3] [i_15] [i_15] [i_20 - 2])));
                var_47 = ((/* implicit */_Bool) ((long long int) ((arr_11 [i_3] [i_3] [i_3]) ? (((/* implicit */int) arr_13 [i_3] [i_15] [i_15] [i_3])) : (((/* implicit */int) (short)32767)))));
            }
            for (int i_24 = 2; i_24 < 17; i_24 += 1) /* same iter space */
            {
                arr_83 [i_3] [i_3] [i_24] = ((/* implicit */int) 10954446745258397885ULL);
                var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_15])) ? (var_5) : (((/* implicit */int) var_8)))))));
                arr_84 [i_3] = ((/* implicit */unsigned int) (+(arr_80 [i_3] [i_24 - 1])));
                /* LoopSeq 3 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_71 [i_3] [i_15] [i_15] [i_15] [i_24 - 2] [i_25])) / (((/* implicit */int) arr_71 [i_25] [i_24] [i_24] [i_15] [i_3] [i_3]))));
                    /* LoopSeq 2 */
                    for (int i_26 = 1; i_26 < 14; i_26 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned int) arr_51 [i_3]);
                        arr_90 [i_3] [i_15] [i_3] [i_25] [i_26] = arr_58 [i_3] [i_3] [i_3] [i_25];
                        var_51 = ((/* implicit */int) max((var_51), (-739153963)));
                        var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (-5525271058393187256LL))))));
                    }
                    for (unsigned int i_27 = 0; i_27 < 18; i_27 += 4) 
                    {
                        arr_93 [i_3] [i_15] [i_3] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_3] [i_24 - 2] [i_24 - 2] [i_27])) ? (arr_77 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7039)))));
                        var_53 = (i_3 % 2 == 0) ? (((6) >> ((((~(((/* implicit */int) arr_66 [i_3])))) + (73))))) : (((6) >> ((((((~(((/* implicit */int) arr_66 [i_3])))) + (73))) + (102)))));
                        var_54 = (+((~(((/* implicit */int) arr_75 [i_3] [i_3] [i_24 - 1] [i_25] [i_3])))));
                    }
                    var_55 = (~(arr_14 [i_24 - 1] [i_24 - 1] [i_15]));
                }
                for (unsigned char i_28 = 2; i_28 < 17; i_28 += 3) 
                {
                    arr_96 [i_24] [i_3] [i_24] [i_3] [i_3] = ((unsigned int) arr_43 [i_15] [i_24 + 1] [i_28 - 1] [i_28 + 1] [i_3]);
                    arr_97 [i_3] [i_3] [i_15] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 847830721U)) && (((/* implicit */_Bool) (unsigned char)67))));
                    arr_98 [i_3] = ((/* implicit */unsigned char) ((int) var_9));
                    /* LoopSeq 1 */
                    for (int i_29 = 0; i_29 < 18; i_29 += 2) 
                    {
                        var_56 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16443))) : (6705344289638956128LL)))) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) arr_22 [i_3] [i_15] [i_24] [i_28 + 1] [i_29]))));
                        arr_102 [i_3] [i_28] = ((/* implicit */short) ((unsigned char) arr_4 [i_3] [i_24 - 2] [i_24 + 1] [i_24 - 1]));
                        var_57 |= ((/* implicit */int) (unsigned char)0);
                    }
                }
                for (int i_30 = 1; i_30 < 16; i_30 += 2) 
                {
                    var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? ((~(arr_69 [i_30]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_31 = 0; i_31 < 18; i_31 += 4) /* same iter space */
                    {
                        arr_110 [i_3] = (~(var_1));
                        arr_111 [i_3] [i_3] [i_24] [i_30 + 2] [i_3] = (~((~(((/* implicit */int) arr_17 [i_3])))));
                        var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_72 [i_15])) ? (8453643200605000459LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                    for (unsigned long long int i_32 = 0; i_32 < 18; i_32 += 4) /* same iter space */
                    {
                        arr_116 [i_3] [i_3] [i_24 - 1] [i_3] [i_32] [i_32] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_24 - 1] [i_24 - 1] [i_30] [i_30 + 2])) ? (17174827064388525568ULL) : (((/* implicit */unsigned long long int) (+(var_3))))));
                        var_60 = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_107 [i_24 - 2] [i_30 + 2] [i_30 + 2] [i_32] [i_3] [i_32]) : (arr_107 [i_24 - 2] [i_30 - 1] [i_30 + 2] [i_30 - 1] [i_3] [i_30])));
                        var_61 = ((/* implicit */unsigned int) var_2);
                        var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) arr_43 [i_3] [i_15] [i_24 - 1] [i_30 - 1] [i_15]))));
                    }
                    arr_117 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) 354491809))) / (((((/* implicit */_Bool) arr_77 [i_3] [i_3] [i_24] [i_30])) ? (((/* implicit */unsigned int) arr_38 [i_3] [i_15] [i_24 - 2] [i_30] [i_30])) : (533928474U)))));
                    var_63 = (-(-1720405225));
                }
            }
            var_64 -= ((((/* implicit */_Bool) arr_41 [i_15])) ? (((/* implicit */int) ((_Bool) arr_56 [i_3] [i_3] [i_3]))) : (((/* implicit */int) var_0)));
            var_65 = ((/* implicit */long long int) var_9);
        }
    }
}
