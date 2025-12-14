/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4679
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_1))));
                    var_12 = ((/* implicit */short) ((_Bool) (short)28));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_13 |= ((/* implicit */short) (~(var_10)));
            arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)28553))))) != (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) (((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))) / (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_4] [i_5] [(_Bool)1])))));
                            arr_17 [i_5] [i_3] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-28575)) ? (arr_13 [i_3] [i_3] [i_5 + 1]) : (arr_15 [i_6] [i_5 - 2] [(_Bool)1] [(_Bool)1] [i_5] [i_5 - 2])));
                            arr_18 [i_0] [i_0] [i_4] [(short)9] [i_5] [i_0] |= ((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) && ((!(((/* implicit */_Bool) var_4))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) (short)-643)) : ((-(((/* implicit */int) var_7))))));
                arr_19 [i_4] [i_3] [i_3] [i_0] = (short)22657;
                var_16 = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (short)-3880)) : (((/* implicit */int) var_11))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
            {
                arr_22 [i_7] = ((((/* implicit */_Bool) arr_15 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_5)));
                var_17 -= ((/* implicit */short) var_6);
                /* LoopSeq 2 */
                for (short i_8 = 1; i_8 < 7; i_8 += 3) 
                {
                    var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)13910)) ? (((/* implicit */int) arr_24 [i_0] [(_Bool)1] [i_8 + 3] [i_8 + 3] [(short)1])) : (((/* implicit */int) arr_24 [i_7] [i_7] [i_8 + 2] [i_8 + 1] [i_8]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 1) 
                    {
                        var_19 |= ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_9 + 1] [i_8 + 2]))));
                        arr_27 [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */_Bool) ((unsigned long long int) arr_7 [(short)9] [i_8 - 1] [i_8]));
                        arr_29 [i_0] [i_0] [i_7] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) != (((((/* implicit */_Bool) (short)-9607)) ? (arr_15 [i_9] [i_0] [i_7] [i_3] [i_0] [i_0]) : (var_6)))));
                        arr_30 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1984)) ? ((+(((/* implicit */int) (short)29342)))) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
                    }
                }
                for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 3) 
                {
                    arr_35 [i_0] [i_3] [i_3] [i_10 + 1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_10]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) var_1)) & (((/* implicit */int) (short)-28592))))));
                    var_20 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (short)-30628)) ? (((/* implicit */int) (short)-11842)) : (((/* implicit */int) (short)15872)))));
                }
            }
            for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                var_21 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_21 [i_11] [i_11] [i_11] [i_0])) >= (((/* implicit */int) arr_32 [i_0])))))));
                /* LoopSeq 3 */
                for (short i_12 = 2; i_12 < 9; i_12 += 1) 
                {
                    var_22 &= ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                    arr_41 [i_0] [i_3] [i_11] [i_12] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_11] [i_3] [i_0])))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (short)-13911)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)28575)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) var_1))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-29342))))) / (((((/* implicit */_Bool) arr_13 [i_0] [1ULL] [i_11])) ? (arr_38 [i_0] [(short)3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        var_25 = (short)32767;
                        var_26 = ((short) arr_34 [(short)7] [(short)7] [i_13] [i_13 - 1]);
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [i_3] [i_3] [(short)4] [(short)3] [i_3] [8ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [(short)2])) ? (((/* implicit */int) arr_44 [i_0] [i_3] [i_11] [i_11] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0])))) ^ (((/* implicit */int) ((short) var_1)))));
                        var_27 += ((/* implicit */short) (!(((/* implicit */_Bool) (short)256))));
                    }
                }
                for (short i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                {
                    arr_50 [i_15] [i_11] [i_3] [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (short)-6195))))));
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        var_28 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) ((signed char) var_4))) : (((((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)2] [i_16])) ? (((/* implicit */int) arr_11 [i_0] [i_3] [i_0] [i_15])) : (((/* implicit */int) (_Bool)1))))));
                        arr_55 [i_16] [i_16] [i_0] = var_0;
                        var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (short)-2477))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((short) var_2)))));
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1267)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) (signed char)66)))) : (((/* implicit */int) var_9))));
                }
                for (short i_17 = 0; i_17 < 10; i_17 += 4) /* same iter space */
                {
                    arr_58 [i_17] [i_11] [i_3] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) ^ (var_6)))) ? (((((/* implicit */_Bool) arr_53 [i_11] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0] [4ULL] [i_11])))) : (((/* implicit */int) var_0))));
                    arr_59 [8ULL] [i_3] [i_11] [i_17] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_33 [i_0] [i_17] [i_0] [i_0])))))));
                }
                arr_60 [i_0] = ((/* implicit */unsigned long long int) (signed char)-62);
                var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_40 [(short)4] [i_3] [i_3] [i_11] [i_11]))));
            }
            arr_61 [i_0] [i_3] = ((/* implicit */unsigned long long int) var_4);
            arr_62 [i_0] [i_3] [i_0] = arr_26 [(signed char)2] [(short)3] [i_0] [i_3] [i_3];
        }
    }
    /* LoopSeq 4 */
    for (short i_18 = 0; i_18 < 17; i_18 += 4) 
    {
        var_32 &= ((/* implicit */short) (((~(((/* implicit */int) arr_63 [i_18])))) * ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
        arr_65 [(short)3] [(short)3] = ((/* implicit */short) (~(((var_1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28592)))))));
        arr_66 [i_18] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) max((((/* implicit */short) arr_63 [i_18])), (var_3)))))), (var_1)));
    }
    /* vectorizable */
    for (short i_19 = 0; i_19 < 18; i_19 += 1) 
    {
        arr_69 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) (short)-1))));
        var_33 ^= ((/* implicit */short) ((arr_68 [6ULL] [i_19]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : ((+(1183813730670971769ULL)))));
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (signed char i_21 = 0; i_21 < 18; i_21 += 2) 
            {
                for (short i_22 = 2; i_22 < 15; i_22 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_23 = 1; i_23 < 16; i_23 += 3) 
                        {
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */int) (signed char)25)) % (((/* implicit */int) var_3)))))));
                            arr_80 [i_23 + 1] [(short)12] [i_21] [(signed char)13] [i_19] = (short)29135;
                            var_35 ^= ((/* implicit */short) ((_Bool) (((_Bool)0) ? (((/* implicit */int) arr_79 [i_19] [i_20] [i_21] [i_22] [i_19])) : (((/* implicit */int) (short)-9607)))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_24 = 0; i_24 < 18; i_24 += 3) /* same iter space */
                        {
                            var_36 &= ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                            var_37 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-28255))))) || (((/* implicit */_Bool) var_10)));
                            arr_85 [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_83 [i_22 + 3] [i_20])) : (((/* implicit */int) var_3))));
                            arr_86 [i_22 + 1] [i_19] = ((/* implicit */short) ((((((/* implicit */int) var_7)) != (((/* implicit */int) (short)9582)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_22 + 1] [i_22] [i_22] [(_Bool)1] [i_22]))) : (18446744073709551608ULL)));
                            var_38 &= (short)26191;
                        }
                        for (signed char i_25 = 0; i_25 < 18; i_25 += 3) /* same iter space */
                        {
                            arr_90 [i_19] [i_20] [(short)0] [i_22] [i_25] [i_25] = (short)3867;
                            arr_91 [i_19] [i_20] [i_25] [(short)9] [i_25] = ((/* implicit */short) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_72 [i_25] [i_25] [(short)3] [i_22 + 3]))));
                            arr_92 [(short)11] [(short)11] [i_21] [i_22] [i_25] = ((/* implicit */short) ((((/* implicit */int) var_8)) | (((/* implicit */int) (short)32759))));
                            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (+((+(((/* implicit */int) var_3)))))))));
                        }
                        arr_93 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_79 [(short)1] [i_20] [i_20] [i_20] [i_19]))));
                    }
                } 
            } 
        } 
    }
    for (short i_26 = 0; i_26 < 25; i_26 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            var_40 = ((/* implicit */unsigned long long int) var_2);
            /* LoopNest 2 */
            for (short i_28 = 2; i_28 < 22; i_28 += 2) 
            {
                for (short i_29 = 0; i_29 < 25; i_29 += 3) 
                {
                    {
                        arr_104 [i_26] [(short)16] [(short)5] [i_27] [i_27] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32754)) != (((/* implicit */int) (_Bool)1))));
                        var_41 = ((/* implicit */short) ((((/* implicit */int) arr_102 [i_29] [i_27] [i_28 - 2] [i_27])) < (((/* implicit */int) (short)1140))));
                        arr_105 [i_27] [(signed char)12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-1120)) : (((/* implicit */int) var_11))))) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_101 [15ULL] [i_27]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            arr_110 [i_27] [i_29] [i_28 - 1] [(signed char)19] [i_27] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-31321))));
                            arr_111 [i_27] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_97 [i_27 - 1])) : (((/* implicit */int) arr_100 [i_27 - 1] [i_27 - 1] [i_27 - 1] [i_27]))));
                        }
                        for (unsigned long long int i_31 = 0; i_31 < 25; i_31 += 3) 
                        {
                            arr_114 [i_27] [i_27] [i_27] [(short)23] = ((/* implicit */short) ((((unsigned long long int) arr_112 [i_31] [i_29] [i_28] [22ULL] [22ULL])) << (((((/* implicit */int) arr_112 [i_26] [8ULL] [i_26] [i_26] [i_26])) - (19568)))));
                            var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_1)))))));
                            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((_Bool) (short)-7965)))));
                            arr_115 [(short)23] [i_27] [i_28 + 1] [i_27] [i_26] = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
                        }
                    }
                } 
            } 
            var_44 = ((/* implicit */short) 11480682725554895313ULL);
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((short) var_7)))));
        }
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            var_46 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_99 [i_32] [i_26] [i_26] [i_32])) ? (((/* implicit */int) ((short) arr_94 [i_32] [i_26]))) : ((+(((/* implicit */int) var_2))))))));
            arr_120 [i_26] [i_32] = var_9;
        }
        for (short i_33 = 0; i_33 < 25; i_33 += 3) 
        {
            arr_125 [i_33] [i_33] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) arr_103 [i_33] [i_33])) : (((/* implicit */int) var_2))));
            var_47 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
            arr_126 [i_33] = min((((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))), ((((+(((/* implicit */int) arr_121 [(_Bool)1])))) == (((/* implicit */int) var_5)))));
        }
        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32748))))))))));
    }
    for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
    {
        arr_130 [i_34] = ((/* implicit */_Bool) ((short) var_2));
        arr_131 [i_34] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
        /* LoopSeq 1 */
        for (short i_35 = 0; i_35 < 20; i_35 += 3) 
        {
            var_49 |= ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-68))))));
            /* LoopSeq 2 */
            for (short i_36 = 0; i_36 < 20; i_36 += 4) 
            {
                /* LoopNest 2 */
                for (short i_37 = 0; i_37 < 20; i_37 += 2) 
                {
                    for (short i_38 = 0; i_38 < 20; i_38 += 1) 
                    {
                        {
                            arr_143 [i_34] [(short)12] [i_37] [(short)12] [i_34] |= var_0;
                            arr_144 [(short)16] [i_35] [(short)16] [i_34] [(_Bool)1] [i_35] [i_35] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-30060)) >= (((/* implicit */int) (_Bool)1))));
                            arr_145 [i_34] [i_34 - 1] [i_34] [i_34] = ((/* implicit */short) (+(((/* implicit */int) var_4))));
                        }
                    } 
                } 
                arr_146 [(_Bool)1] [i_34] [i_34] [(_Bool)0] = var_0;
            }
            /* vectorizable */
            for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
            {
                var_50 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))));
                var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */int) arr_108 [i_34] [(short)7] [i_34] [i_34] [i_34])) ^ (((((/* implicit */int) var_7)) / (((/* implicit */int) var_0)))))))));
            }
            arr_149 [i_34] [i_35] [i_34] = var_11;
        }
    }
}
