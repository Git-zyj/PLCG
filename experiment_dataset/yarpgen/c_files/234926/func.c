/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234926
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_4) : (((arr_1 [i_0] [i_0]) / (((/* implicit */int) var_3))))));
        arr_3 [i_0] = ((/* implicit */signed char) 2148219265U);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_11 [i_0] [(short)10] [i_2] &= ((/* implicit */_Bool) ((((((/* implicit */long long int) 2148219265U)) == (var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2146748030U)))) : (arr_2 [i_2])));
                    var_17 = ((/* implicit */unsigned char) -2270010083104136921LL);
                    var_18 &= ((/* implicit */_Bool) 9981760671203842760ULL);
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(max((2146748030U), (((/* implicit */unsigned int) (short)32767)))))))));
        var_20 = ((/* implicit */int) max((((/* implicit */long long int) arr_9 [i_3] [i_3] [i_3] [i_3])), (max((((var_14) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2146748030U))))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            arr_22 [i_4] |= ((/* implicit */unsigned short) var_8);
            arr_23 [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_1) ? (arr_21 [i_4] [i_4]) : (((/* implicit */long long int) -754862176)))))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_4] [i_4]))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (_Bool)1))));
            arr_24 [i_5] = ((/* implicit */signed char) (+(15348624284038760364ULL)));
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            /* LoopSeq 4 */
            for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) (signed char)-1);
                arr_31 [i_4] [i_6] [i_6] [i_6] = 4294967295U;
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) -754862176))));
                arr_32 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((unsigned long long int) 3536492458U));
            }
            for (unsigned short i_8 = 2; i_8 < 6; i_8 += 1) 
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) < (arr_17 [i_6])));
                var_25 -= ((/* implicit */unsigned char) (-(((8464983402505708860ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((arr_19 [i_8 + 2] [i_8 + 1] [i_8 + 3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))));
            }
            for (unsigned short i_9 = 3; i_9 < 9; i_9 += 1) 
            {
                arr_40 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((int) arr_13 [i_9 - 3]));
                arr_41 [i_4] [i_4] = ((/* implicit */unsigned int) arr_19 [i_4] [i_6] [i_6]);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_46 [i_10] [i_10] [i_10] = ((/* implicit */short) 822513587072785163ULL);
                var_27 = ((/* implicit */int) (unsigned short)60559);
                arr_47 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) arr_16 [i_4]))));
            }
            /* LoopSeq 3 */
            for (short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_4] [i_6] [i_6] [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_11] [(short)6])) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_3))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(var_12))))));
                    var_30 = ((/* implicit */unsigned int) ((short) arr_12 [i_11]));
                    arr_55 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (+(arr_28 [i_4] [i_4] [i_11] [i_12]));
                }
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 950796091)) ? (((/* implicit */unsigned long long int) arr_51 [i_4] [i_6] [i_6] [i_13])) : (6409921442074154233ULL)));
                        arr_61 [i_13] [i_13] [i_11] [i_4] [i_6] [i_4] = ((/* implicit */short) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_4] [i_6] [i_6])))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        arr_64 [i_4] [i_15] [i_4] [i_15] [i_15] = ((/* implicit */unsigned long long int) (!(arr_50 [i_6] [i_13] [i_6])));
                        arr_65 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_4] [i_6] [i_11] [i_13] [i_4] [i_15])) ? (arr_56 [i_4] [i_6] [i_11] [i_13] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76)))));
                        var_32 = ((/* implicit */unsigned short) arr_14 [i_11]);
                    }
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_16 [i_11]))));
                }
                for (int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    arr_69 [i_4] [i_4] [i_11] [i_16] [i_11] [i_6] = ((/* implicit */signed char) ((unsigned int) arr_20 [i_4] [i_6]));
                    arr_70 [i_4] = ((/* implicit */short) arr_63 [i_6] [i_6] [i_11] [i_6] [i_11]);
                }
                arr_71 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_20 [i_4] [i_4]);
            }
            for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) arr_63 [i_4] [i_4] [i_6] [i_17] [i_17]);
                /* LoopSeq 1 */
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    arr_77 [i_4] [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_45 [i_4] [i_4] [(signed char)0]))));
                    arr_78 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_17] [i_17] [i_17])) * (((/* implicit */int) arr_76 [i_4] [i_4] [i_4] [i_4]))));
                    arr_79 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_1 [i_4] [0])) ? (((/* implicit */int) (signed char)-1)) : (-1))) + (2147483647))) >> (((1986261255U) - (1986261243U)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        arr_83 [i_4] [i_6] [i_6] [i_19] [i_6] [i_19] [i_19] = ((/* implicit */unsigned int) ((unsigned short) arr_25 [i_18]));
                        var_35 = ((/* implicit */unsigned short) 841327633U);
                        arr_84 [i_4] [i_19] [i_4] [i_19] = ((/* implicit */unsigned int) arr_1 [i_19] [i_19]);
                        var_36 = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)-12029))))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        var_37 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1410388058)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9981760671203842760ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_20]))) : (((var_13) & (1332680106U))));
                        arr_87 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1513287973U)) ? (((/* implicit */int) (unsigned short)49823)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) var_6))));
                        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -917163113))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) var_5))));
                        var_40 -= ((/* implicit */unsigned char) (-(1073741823ULL)));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_68 [i_21] [i_21] [i_6] [i_17])) >> (((((/* implicit */int) var_3)) + (44)))))) ? (((((/* implicit */_Bool) arr_38 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (arr_85 [i_21] [i_18] [i_4] [i_6] [i_4])));
                        var_42 = arr_18 [i_4] [i_4];
                    }
                    for (short i_22 = 0; i_22 < 10; i_22 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((arr_59 [i_6] [i_6] [i_6] [i_6]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_86 [i_4] [i_6] [i_6] [i_6] [i_22])) ? (arr_86 [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) 4217602443U))));
                        arr_96 [i_4] [i_6] [i_17] [i_22] [i_22] = ((/* implicit */unsigned short) ((signed char) arr_7 [i_4] [i_4] [i_4] [i_4]));
                    }
                }
            }
            for (int i_23 = 0; i_23 < 10; i_23 += 1) 
            {
                arr_101 [i_23] = ((/* implicit */signed char) var_0);
                var_45 = ((unsigned long long int) (_Bool)1);
                var_46 = ((/* implicit */unsigned short) arr_90 [i_4] [i_4] [i_4] [i_4] [i_4]);
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 1) 
                {
                    arr_105 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_5);
                    var_47 = ((/* implicit */unsigned int) (unsigned short)0);
                    var_48 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_4])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))));
                    var_49 *= ((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_24])) >= (((/* implicit */int) arr_42 [i_23]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_25 = 0; i_25 < 10; i_25 += 3) 
                    {
                        arr_108 [i_4] [i_6] [i_4] [i_4] [i_25] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_30 [i_4] [i_4] [i_4] [i_4]))));
                        arr_109 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */short) arr_51 [i_4] [i_4] [i_4] [i_4]);
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 3) 
                    {
                        var_50 = ((/* implicit */signed char) ((unsigned long long int) arr_43 [4ULL]));
                        var_51 = ((/* implicit */short) (+(var_5)));
                    }
                }
            }
            /* LoopSeq 3 */
            for (signed char i_27 = 0; i_27 < 10; i_27 += 3) 
            {
                arr_114 [i_4] = (+(((((/* implicit */_Bool) 8464983402505708856ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))) : (18446744072635809793ULL))));
                var_52 = ((/* implicit */signed char) ((_Bool) arr_76 [i_4] [i_4] [i_4] [i_27]));
            }
            for (unsigned int i_28 = 0; i_28 < 10; i_28 += 1) 
            {
                var_53 = ((/* implicit */unsigned int) var_1);
                /* LoopSeq 1 */
                for (short i_29 = 0; i_29 < 10; i_29 += 1) 
                {
                    arr_121 [i_4] [i_28] [i_4] [i_4] [i_28] [i_4] = ((/* implicit */unsigned short) ((arr_21 [i_4] [i_6]) > (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_4] [i_4] [i_4] [i_4])))));
                    var_54 -= ((((((/* implicit */_Bool) arr_35 [i_4])) && ((_Bool)1))) ? (935415224U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                }
                arr_122 [i_28] [i_28] = 8464983402505708849ULL;
                var_55 = (i_28 % 2 == 0) ? (((/* implicit */int) ((5723403164174759194ULL) << (((((/* implicit */int) arr_82 [i_4] [i_28])) - (16052)))))) : (((/* implicit */int) ((5723403164174759194ULL) << (((((((/* implicit */int) arr_82 [i_4] [i_28])) - (16052))) - (11349))))));
            }
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_31 = 0; i_31 < 10; i_31 += 3) 
                {
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12029)))))));
                            var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1337594364U)))))));
                            arr_130 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2009299239774863085ULL)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (unsigned short)14472))));
                        }
                    } 
                } 
                arr_131 [i_4] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62535))) | (var_11))));
                var_58 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 9981760671203842779ULL)) ? (((/* implicit */int) arr_50 [i_4] [i_6] [i_30])) : (((/* implicit */int) var_9))));
                var_59 = ((/* implicit */unsigned short) ((unsigned int) arr_116 [(_Bool)1]));
            }
            var_60 = ((/* implicit */signed char) 754862181);
        }
        arr_132 [i_4] = ((unsigned long long int) arr_68 [i_4] [i_4] [i_4] [i_4]);
        arr_133 [i_4] = ((/* implicit */unsigned short) arr_8 [i_4] [14LL] [14LL] [14LL]);
    }
    var_61 = ((/* implicit */int) var_14);
    var_62 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)50346), (((/* implicit */unsigned short) (unsigned char)183)))))) : (max((((/* implicit */long long int) (short)-11646)), (6704015089480234944LL)))))));
    var_63 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))))))));
}
