/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46831
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
    var_18 = (unsigned short)48;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    var_19 = ((/* implicit */short) max((((/* implicit */long long int) arr_2 [i_0])), (var_16)));
                    var_20 = ((/* implicit */_Bool) (short)26505);
                    arr_7 [i_0] = ((/* implicit */unsigned short) 82270023U);
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
                }
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-10)) + (((/* implicit */int) arr_4 [i_0 + 2] [i_1 - 1] [i_1 - 1]))))));
                    arr_13 [i_0] [i_0 + 1] [i_0] = ((/* implicit */short) var_0);
                    var_22 = ((/* implicit */unsigned char) var_3);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_23 = var_12;
                            var_24 = ((/* implicit */signed char) (-(arr_1 [i_0])));
                            arr_19 [i_0] [i_1] [i_1] [i_0 + 3] [i_5] [i_0 + 3] = ((/* implicit */long long int) ((arr_3 [i_3] [i_1]) + (arr_6 [i_1] [i_1 - 1] [i_1] [i_1 - 1])));
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_22 [2ULL] [2ULL] [i_0] [i_4] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-32747))));
                            var_25 = ((/* implicit */long long int) 2710752986U);
                        }
                        arr_23 [i_4] [i_0] [i_0] [i_0] = (-(arr_20 [22] [22] [22] [i_4] [(short)20] [i_4]));
                        var_26 = ((/* implicit */int) ((arr_9 [i_0] [i_0 + 3] [i_3]) + (((/* implicit */unsigned long long int) 4096U))));
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_27 = (-((~(((/* implicit */int) (short)-6604)))));
                        arr_27 [i_0] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (unsigned short)65524);
                    }
                }
                var_28 = ((/* implicit */int) ((((/* implicit */long long int) 1572864U)) + (arr_14 [i_0] [i_1] [i_1])));
                arr_28 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((2141231467U), (((/* implicit */unsigned int) min((arr_21 [i_1] [i_1 + 1] [i_0] [i_1] [i_1 + 1]), (((/* implicit */int) arr_17 [i_0 - 2])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_8 = 1; i_8 < 16; i_8 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            var_29 -= ((/* implicit */short) arr_31 [i_8 + 1]);
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            arr_42 [i_9] [16LL] = ((/* implicit */short) min((((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_8] [i_9] [i_11] [i_12]))))) + (((var_2) + (((/* implicit */long long int) ((/* implicit */int) arr_34 [(short)9] [(short)9] [(short)9] [i_9]))))))), (((/* implicit */long long int) arr_35 [i_9] [i_10]))));
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_9]))));
                            arr_43 [i_8 - 1] [i_9] [i_10] [i_11] [i_10] [i_8 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) + (((/* implicit */int) var_5))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_9))));
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_14 = 2; i_14 < 16; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (int i_16 = 1; i_16 < 15; i_16 += 2) 
                    {
                        {
                            arr_54 [i_8] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_39 [i_13] [i_16] [i_16 - 1] [i_16] [i_16] [i_16 + 1]))));
                            var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)217))));
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_8] [i_8] [i_14] [i_13])) + (((/* implicit */int) arr_34 [i_14] [i_14] [i_14] [i_13]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (signed char i_18 = 1; i_18 < 16; i_18 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) var_13);
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_31 [i_8]))));
                            arr_60 [i_8] [i_13] [i_14] [i_8] [i_13] = ((/* implicit */_Bool) -2143220998);
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) ((arr_44 [i_8 + 1]) + (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_17 [i_8]))))));
                /* LoopNest 2 */
                for (short i_19 = 4; i_19 < 16; i_19 += 1) 
                {
                    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_13] [i_13]))));
                            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_24 [i_13] [i_13]))));
                            arr_67 [i_8] [i_13] [i_13] [i_14] [i_19] [i_20] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_62 [i_19 + 1] [i_14 - 2] [i_8 + 2]))));
                            arr_68 [i_8 + 2] [i_13] [i_13] [i_19] [i_20] = ((/* implicit */signed char) ((arr_25 [i_8 + 1] [i_13]) + (arr_56 [i_19 - 4] [i_19 - 4] [i_13] [i_13])));
                        }
                    } 
                } 
                arr_69 [i_13] [i_13] = ((/* implicit */unsigned char) (~(arr_30 [i_14 - 1])));
            }
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_22 = 1; i_22 < 17; i_22 += 2) 
                {
                    for (signed char i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        {
                            arr_78 [i_8] [i_13] [i_21] [i_22 - 1] [i_13] = ((/* implicit */unsigned char) -1LL);
                            var_39 = ((/* implicit */unsigned char) (+(((var_4) + (((/* implicit */long long int) var_15))))));
                            arr_79 [i_8] [i_13] [i_13] [i_22] [i_23] = ((/* implicit */short) 183792291171251364ULL);
                            arr_80 [i_23] [i_13] [i_21] [i_13] [i_8] = ((/* implicit */unsigned short) -79219360);
                            var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32746))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_24 = 0; i_24 < 18; i_24 += 2) 
                {
                    var_41 = ((/* implicit */unsigned int) arr_73 [i_13]);
                    var_42 = ((/* implicit */unsigned char) (+(8850598933444753221LL)));
                }
                for (int i_25 = 3; i_25 < 17; i_25 += 4) 
                {
                    var_43 = ((/* implicit */signed char) ((((/* implicit */int) arr_50 [i_8] [i_13] [i_8])) + (((/* implicit */int) (!(((/* implicit */_Bool) 4048134995U)))))));
                    arr_88 [i_8] [i_13] [i_25 - 3] = ((/* implicit */unsigned long long int) ((arr_72 [i_13] [i_13] [i_13] [i_25]) + (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (var_1))))));
                    var_44 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_8 + 1] [i_13])) + ((+(var_14)))));
                }
                arr_89 [i_13] [i_8] [i_13] [i_13] = ((/* implicit */short) var_10);
                arr_90 [i_8] [i_13] [i_21] = ((/* implicit */short) arr_40 [i_13] [i_21]);
            }
            for (signed char i_26 = 3; i_26 < 16; i_26 += 4) 
            {
                arr_93 [i_8] [i_8 + 2] [i_13] [i_8] = ((/* implicit */unsigned short) (signed char)57);
                var_45 = ((/* implicit */_Bool) var_6);
                arr_94 [i_13] [i_13] [i_13] = ((/* implicit */short) arr_20 [i_13] [i_13] [i_13] [i_13] [(unsigned char)22] [i_13]);
            }
            var_46 = ((/* implicit */long long int) (short)10157);
        }
        for (unsigned char i_27 = 2; i_27 < 17; i_27 += 4) 
        {
            arr_97 [i_8] [i_27] = var_17;
            var_47 = ((/* implicit */int) arr_50 [i_8] [i_8] [i_8]);
            arr_98 [i_8 + 2] [i_27 + 1] = arr_33 [i_8] [i_27 - 1] [i_27];
            var_48 = ((/* implicit */int) arr_10 [i_27] [i_27] [i_8 - 1]);
            var_49 = ((/* implicit */signed char) -2064085488);
        }
        var_50 = ((/* implicit */int) max((arr_64 [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8] [i_8]), (((/* implicit */long long int) (-(((((/* implicit */unsigned int) (-2147483647 - 1))) + (arr_36 [i_8]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_28 = 0; i_28 < 18; i_28 += 1) 
        {
            for (long long int i_29 = 0; i_29 < 18; i_29 += 1) 
            {
                for (unsigned char i_30 = 0; i_30 < 18; i_30 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_31 = 1; i_31 < 15; i_31 += 2) 
                        {
                            arr_110 [i_28] [i_31] = (~(((max((-8850598933444753217LL), (((/* implicit */long long int) (_Bool)1)))) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))));
                            arr_111 [i_8] [12LL] [i_28] [12LL] [i_8] [7U] = ((/* implicit */unsigned int) var_2);
                            arr_112 [i_31] [i_28] [i_28] [i_28] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)188)) + (((/* implicit */int) (short)-10133))));
                            var_51 = ((/* implicit */int) arr_87 [i_8] [(short)8] [i_29] [i_28] [0ULL] [i_31]);
                            arr_113 [i_28] [i_29] [i_28] [i_28] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_65 [i_8 - 1] [i_31 + 1] [i_8 + 1] [(_Bool)1] [(short)3] [i_8])) + (((/* implicit */int) arr_65 [i_8 - 1] [i_31 + 1] [i_8 + 1] [i_30] [i_28] [i_29]))))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_32 = 1; i_32 < 16; i_32 += 2) /* same iter space */
                        {
                            arr_116 [i_28] [i_29] [i_29] [i_30] [i_30] = ((/* implicit */short) arr_106 [i_28] [i_30]);
                            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) var_17))));
                        }
                        for (long long int i_33 = 1; i_33 < 16; i_33 += 2) /* same iter space */
                        {
                            arr_121 [i_8] [i_28] [i_29] [i_28] [i_28] = ((/* implicit */unsigned char) max((arr_12 [i_8] [i_30]), (((/* implicit */long long int) arr_77 [i_28] [i_28] [i_29]))));
                            var_53 -= ((/* implicit */unsigned short) ((var_1) + (((((/* implicit */int) arr_34 [i_8] [i_8] [i_30] [i_30])) + (((/* implicit */int) max(((short)1565), ((short)14802))))))));
                            var_54 = ((/* implicit */unsigned char) (-(arr_26 [i_8] [15U] [i_30] [i_8])));
                        }
                        for (long long int i_34 = 0; i_34 < 18; i_34 += 3) /* same iter space */
                        {
                            var_55 = (i_28 % 2 == 0) ? (((/* implicit */long long int) ((arr_18 [i_8] [i_28] [21LL] [i_30] [i_34]) + (((/* implicit */unsigned long long int) ((((var_1) + (var_6))) + (arr_114 [i_8] [i_28] [i_29] [i_8] [i_34]))))))) : (((/* implicit */long long int) ((arr_18 [i_8] [i_28] [21LL] [i_30] [i_34]) + (((/* implicit */unsigned long long int) ((((var_1) + (var_6))) - (arr_114 [i_8] [i_28] [i_29] [i_8] [i_34])))))));
                            var_56 = ((/* implicit */signed char) arr_9 [i_8] [i_8 - 1] [i_8]);
                        }
                        /* vectorizable */
                        for (long long int i_35 = 0; i_35 < 18; i_35 += 3) /* same iter space */
                        {
                            var_57 ^= arr_49 [i_35] [(short)11] [i_8] [i_8];
                            var_58 += ((/* implicit */short) var_3);
                            arr_126 [i_35] [i_28] [8LL] [i_35] [i_28] = ((/* implicit */_Bool) var_2);
                            var_59 = ((/* implicit */int) arr_32 [i_8 - 1]);
                        }
                    }
                } 
            } 
        } 
        arr_127 [i_8 - 1] = ((/* implicit */long long int) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_128 [i_8] [i_8 + 2] = ((/* implicit */unsigned short) arr_20 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 2]);
    }
    for (unsigned long long int i_36 = 1; i_36 < 19; i_36 += 3) 
    {
        var_60 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) (short)-22434)) + (var_1))))));
        var_61 = ((/* implicit */unsigned short) (-(arr_16 [i_36 + 1] [i_36] [i_36])));
    }
    for (short i_37 = 1; i_37 < 12; i_37 += 4) 
    {
        var_62 = ((/* implicit */long long int) var_9);
        /* LoopNest 2 */
        for (short i_38 = 2; i_38 < 12; i_38 += 1) 
        {
            for (unsigned long long int i_39 = 0; i_39 < 14; i_39 += 2) 
            {
                {
                    var_63 = ((/* implicit */unsigned int) min((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-9223372036854775797LL))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_99 [i_38]))))))), (((/* implicit */long long int) max((2707361202U), (1587606087U))))));
                    arr_140 [i_37] [i_38] [i_37] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-70)) + (((/* implicit */int) (short)4648)))) + (((/* implicit */int) arr_91 [i_37] [i_37] [i_37]))));
                }
            } 
        } 
    }
}
