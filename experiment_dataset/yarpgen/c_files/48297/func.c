/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48297
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_8);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) ((((((/* implicit */unsigned int) max((133196822), (((/* implicit */int) arr_4 [i_0] [i_1]))))) * (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))) : (278009343U))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)-424)))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-68)) <= (((/* implicit */int) arr_4 [(unsigned char)7] [i_2])))))) : (-1797225705832090581LL)));
                        var_18 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((int) arr_1 [i_0 - 3] [i_2 - 2]))), (arr_5 [i_0 + 1] [i_1] [i_0 - 3] [i_2 - 2])));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) var_12);
                            arr_13 [i_0] [9] [i_0] [i_0 - 3] [(signed char)15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)65533)) : ((-(1815079660)))));
                            var_20 = ((/* implicit */long long int) ((var_12) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-7415674975539869762LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))) ? (((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [8]))))) : (var_4))))));
                            var_21 = ((/* implicit */unsigned long long int) (-(-2)));
                            var_22 = ((((((/* implicit */_Bool) (short)439)) ? (172306438836259208LL) : (((/* implicit */long long int) 2)))) <= (max((arr_7 [i_0 - 1] [i_0 - 2] [i_2 - 2] [i_2 - 2]), (((/* implicit */long long int) var_10)))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) arr_7 [i_5] [i_5] [i_5] [i_5]);
        var_24 += ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)7048)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [0ULL] [i_5] [0ULL] [i_5])))))));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_20 [i_5] [i_6] [i_5] = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_3 [i_6])));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                arr_23 [2ULL] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_7 [i_7] [i_6] [i_6] [2])) / ((-(var_8)))));
                var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_4 [i_5] [i_6]))));
            }
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                var_26 *= ((/* implicit */unsigned int) (-(var_5)));
                var_27 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_6]))));
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) ((short) arr_7 [i_5] [i_5] [i_5] [i_5]));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_29 [i_5] [i_6] [i_8] [i_9]))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-433)) ? (-172306438836259185LL) : (((/* implicit */long long int) -2147483636))));
                        arr_32 [i_9] [i_9] [i_9] = 2;
                        arr_33 [i_5] [i_6] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) (short)418);
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_31 += (~(var_5));
                        arr_37 [i_9] [i_6] [i_9] [i_9] [i_11] = ((/* implicit */_Bool) ((long long int) 8372823830457463683ULL));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 2; i_12 < 8; i_12 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((unsigned long long int) arr_31 [i_12 + 2]));
                        arr_41 [i_9] [i_12 + 2] [i_12 - 2] [i_12] [i_12] [i_12] [i_12 - 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                        arr_42 [i_9] [i_9] [i_6] [i_9] = ((((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))))) ? (((long long int) arr_21 [i_5] [i_5] [2])) : (((/* implicit */long long int) 278009348U)));
                    }
                    for (long long int i_13 = 2; i_13 < 10; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */int) var_9);
                        arr_46 [(unsigned short)2] [i_9] [i_9] [i_6] [i_5] = ((/* implicit */short) ((unsigned long long int) -172306438836259215LL));
                        var_34 *= ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) (unsigned char)255)));
                        arr_47 [i_9] [i_9] [i_8] [(unsigned char)4] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)172))))) / (((arr_27 [i_13] [i_9] [i_9] [i_5]) / (((/* implicit */long long int) -13))))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_5] [i_6] [i_9] [i_5] [i_13] [i_13 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_6]))))) : ((-(544138450U)))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3)) ? (((/* implicit */int) (unsigned char)255)) : (18)))) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned short)0))));
                        arr_52 [i_9] [i_9] [i_8] [i_6] [i_9] = ((((/* implicit */_Bool) arr_12 [i_5] [i_9] [i_9] [(unsigned short)5] [i_14])) ? (((/* implicit */int) arr_12 [i_5] [i_9] [i_8] [6ULL] [i_14])) : (((/* implicit */int) arr_12 [i_6] [i_9] [i_8] [i_9] [i_14])));
                        arr_53 [i_5] [(unsigned char)8] [i_5] [i_5] [(unsigned char)0] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_9])) ? (3208510474195900223ULL) : (((/* implicit */unsigned long long int) arr_10 [i_5] [i_5] [i_5] [i_9]))));
                    }
                    arr_54 [i_5] [i_6] [i_8] [(unsigned char)2] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_34 [i_5] [i_5] [i_6] [i_5] [i_8] [i_9] [i_9])) >= (((((/* implicit */_Bool) var_6)) ? (var_11) : (var_3)))));
                }
            }
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_60 [i_5] [i_16] [i_15] [i_16] = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) -3)) & (arr_50 [i_5] [i_6] [i_6] [i_15] [i_16] [i_16]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_17 = 1; i_17 < 10; i_17 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */long long int) arr_28 [i_17 - 1] [i_17] [i_16] [i_17] [i_17 - 1] [i_17 + 1]);
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_15 [i_17 + 2])))));
                            arr_65 [i_16] [(_Bool)1] [i_15] [i_16] [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) ((signed char) 5666499918614046570ULL))) : (((/* implicit */int) arr_6 [i_16]))));
                            var_39 = ((/* implicit */int) var_14);
                            var_40 = ((/* implicit */int) ((short) (+(18446744073709551595ULL))));
                        }
                        for (unsigned short i_18 = 1; i_18 < 10; i_18 += 2) /* same iter space */
                        {
                            arr_68 [2ULL] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_67 [i_5] [i_6] [i_15] [i_15] [i_16] [i_16] [i_16]))) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) arr_24 [i_18] [i_18] [i_18] [i_18 - 1]))));
                            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_13))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17940466094703078851ULL))))));
                            arr_69 [i_16] = ((unsigned int) arr_31 [i_18 + 2]);
                        }
                        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 4) 
                        {
                            var_42 = ((/* implicit */signed char) (+(((/* implicit */int) arr_26 [i_5] [i_5] [i_15] [i_16] [i_19] [i_16]))));
                            arr_73 [i_5] [i_5] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_25 [4U]))) | (((/* implicit */int) (short)438))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned int) arr_48 [i_5] [i_5] [i_5] [i_5] [i_20] [i_5] [i_20]);
            arr_76 [i_5] = ((/* implicit */unsigned int) ((long long int) var_10));
            var_44 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (30ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31)))))) ? (((/* implicit */unsigned long long int) -3574920871761762187LL)) : (2805446508975383680ULL));
            var_45 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) (unsigned short)38887))) : (2));
            /* LoopSeq 1 */
            for (unsigned int i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_22 = 0; i_22 < 12; i_22 += 1) 
                {
                    for (short i_23 = 1; i_23 < 11; i_23 += 1) 
                    {
                        {
                            arr_84 [i_5] [i_20] [i_5] [i_22] [i_23] [i_22] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
                            var_46 = ((/* implicit */long long int) arr_18 [i_22] [i_23]);
                            var_47 = ((((/* implicit */_Bool) var_13)) ? (((int) arr_59 [i_23 - 1] [i_23] [i_23] [i_20])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))));
                            var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) arr_21 [i_5] [i_20] [i_21])) * (((/* implicit */int) (short)11))))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */_Bool) ((3884638332751012521ULL) & (((/* implicit */unsigned long long int) -746017999))));
            }
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
        {
            arr_87 [i_5] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_24])) ? (((/* implicit */int) (short)-4893)) : (var_4)));
            var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-433)) + (((/* implicit */int) (signed char)72))))) ? (((unsigned long long int) (short)-408)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))) : (18446744073709551615ULL)))));
        }
    }
    /* LoopSeq 2 */
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        arr_90 [i_25] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_88 [i_25] [i_25])), (arr_89 [i_25])))), (min((((/* implicit */int) (short)457)), (964930953)))));
        var_51 = ((/* implicit */long long int) arr_88 [i_25] [i_25]);
    }
    for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_52 = ((/* implicit */long long int) ((max((arr_94 [i_27]), (arr_94 [i_27]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-115)))))));
            var_53 = ((/* implicit */long long int) var_10);
            /* LoopSeq 1 */
            for (unsigned short i_28 = 0; i_28 < 20; i_28 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_29 = 1; i_29 < 19; i_29 += 2) 
                {
                    arr_102 [i_29] [i_27] [i_27] [i_26] = ((/* implicit */unsigned short) var_13);
                    var_54 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (short)19)) > (((/* implicit */int) (unsigned char)110)))))));
                    /* LoopSeq 4 */
                    for (long long int i_30 = 0; i_30 < 20; i_30 += 2) 
                    {
                        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) arr_101 [i_26] [i_29 - 1] [i_29 + 1] [i_29 - 1]))) & (max((arr_101 [i_28] [i_29 - 1] [i_29 - 1] [i_29]), (arr_101 [i_28] [i_29 + 1] [i_29 - 1] [(signed char)19]))))))));
                        var_56 = ((/* implicit */unsigned long long int) ((unsigned int) arr_88 [i_30] [i_30]));
                        arr_105 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-442))));
                        var_57 &= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (signed char)-85)), (arr_94 [i_30]))), (5936127307493407987ULL)));
                    }
                    for (long long int i_31 = 3; i_31 < 18; i_31 += 3) 
                    {
                        var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_88 [i_28] [(signed char)10]))) >= (max((max((arr_104 [i_29] [i_27] [i_28] [i_29] [i_31 + 1] [i_28]), (((/* implicit */long long int) (signed char)111)))), (((/* implicit */long long int) ((_Bool) arr_101 [(short)12] [6ULL] [i_28] [1LL]))))))))));
                        arr_110 [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_104 [i_29 + 1] [i_29 - 1] [i_29 + 1] [i_31 - 1] [i_31 + 1] [i_31 - 1])) / (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_109 [i_26] [i_27] [i_27] [i_29 - 1] [i_31 - 1]))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-424))))) / (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) var_2))))))));
                    }
                    for (unsigned char i_32 = 1; i_32 < 19; i_32 += 1) 
                    {
                        arr_114 [i_26] [i_27] = ((/* implicit */unsigned int) (-(1023)));
                        arr_115 [i_26] [i_26] [(_Bool)1] [i_28] [5] [i_29] [i_27] = ((/* implicit */long long int) 5936127307493407976ULL);
                    }
                    for (unsigned long long int i_33 = 0; i_33 < 20; i_33 += 1) 
                    {
                        arr_120 [i_26] [i_27] [i_27] [i_28] [i_27] [(unsigned char)1] = ((/* implicit */signed char) var_8);
                        var_59 = ((/* implicit */int) (~(-5789267584553734170LL)));
                        arr_121 [i_29] [i_27] [i_28] [i_29] [i_33] [i_28] [i_33] = ((/* implicit */unsigned char) 4235897781U);
                    }
                }
                /* vectorizable */
                for (long long int i_34 = 0; i_34 < 20; i_34 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_35 = 0; i_35 < 0; i_35 += 1) 
                    {
                        var_60 = ((/* implicit */_Bool) var_11);
                        var_61 ^= ((/* implicit */unsigned long long int) var_1);
                    }
                    arr_128 [i_34] [i_27] [i_28] [i_27] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_103 [i_28] [i_28] [i_28])) ? (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)17148)) : (-2147483639))))));
                }
                /* LoopNest 2 */
                for (short i_36 = 0; i_36 < 20; i_36 += 3) 
                {
                    for (unsigned long long int i_37 = 2; i_37 < 19; i_37 += 3) 
                    {
                        {
                            arr_136 [i_26] [i_26] [14LL] [i_26] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 278009342U)))))) / (var_3)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) var_14))), ((~(((/* implicit */int) var_0))))))) : (((arr_130 [i_27] [i_37]) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)19)), (var_15))))))));
                            var_62 = ((/* implicit */_Bool) (-(((int) var_1))));
                        }
                    } 
                } 
            }
        }
        var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_123 [i_26] [i_26] [i_26] [i_26] [i_26]))) * (((((/* implicit */int) arr_134 [i_26] [i_26] [(unsigned short)4] [i_26] [i_26])) | (((/* implicit */int) (short)28010))))))))))));
    }
    var_64 = ((/* implicit */short) max((max((min((var_11), (((/* implicit */unsigned long long int) var_9)))), (max((16ULL), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) min((var_15), (((var_12) * (((/* implicit */unsigned int) var_4)))))))));
}
