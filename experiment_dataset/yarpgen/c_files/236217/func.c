/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236217
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
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_9)), (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((int) arr_0 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)3)) : (-824354245)))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_11 [i_4 + 1]))));
                            var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_4 - 1] [(_Bool)1] [i_4 - 2] [i_4] [i_4 + 2])) ? (arr_9 [i_0] [i_4 + 3] [i_4 + 3] [i_4 + 2] [i_4 + 4] [i_4 + 2]) : (arr_9 [i_4] [i_4 - 1] [i_4 + 4] [i_4 + 1] [i_4] [i_4 - 1])));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_5]);
                arr_21 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0]);
                arr_22 [3ULL] [i_1] [i_0] = arr_7 [11ULL] [i_5];
            }
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
            {
                var_23 = (+(arr_1 [i_0]));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 += ((/* implicit */signed char) (+(arr_4 [i_0])));
                            arr_31 [10] [i_1] [10] [i_1] [i_0] [i_7] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_6] [i_6])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_7 [i_0] [i_8]))));
                        }
                    } 
                } 
                arr_32 [(short)3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_20 [i_1] [i_6]))));
                var_25 &= ((((arr_3 [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (arr_17 [i_0] [i_1] [i_6]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_6]))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [4ULL] [i_1] [i_6] [i_0])) ? (((/* implicit */int) arr_25 [i_1] [i_6])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_6] [i_0]))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (arr_9 [i_0] [i_1] [i_9] [i_9] [i_1] [i_0]) : (((/* implicit */int) arr_5 [5ULL] [i_1] [i_9]))));
                arr_36 [i_0] [i_9] = ((/* implicit */signed char) arr_1 [i_0]);
            }
            var_27 = ((/* implicit */signed char) (+(arr_3 [i_0] [i_0])));
            arr_37 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_5 [i_0] [i_0] [1ULL]))))));
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
        {
            arr_40 [i_0] [i_10] [i_10] = ((/* implicit */_Bool) (signed char)-4);
            var_28 = ((/* implicit */int) arr_1 [i_10]);
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            {
                var_29 = ((((/* implicit */_Bool) max(((+(2495574549420429752ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16)))))))) ? (13975185729062253006ULL) : ((-((-(13975185729062253006ULL))))));
                arr_47 [i_11] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15951169524289121863ULL)) ? (max((arr_42 [2]), (1073741822))) : (((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (signed char)127)))), (arr_42 [i_11]))) : (((((/* implicit */_Bool) arr_44 [i_12])) ? (arr_44 [i_11]) : (arr_44 [i_11])))));
                arr_48 [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_12] [i_11])) ? (4471558344647298610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_42 [i_11]))))));
                var_30 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+((-(1073741847)))))), (min((((/* implicit */unsigned long long int) (signed char)3)), (13975185729062253015ULL)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_14 = 3; i_14 < 14; i_14 += 1) 
        {
            arr_54 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (arr_45 [i_14 - 3])))) ? (((((/* implicit */_Bool) arr_50 [i_14 + 1])) ? (1073741832) : (((/* implicit */int) arr_50 [i_14 - 3])))) : (min((arr_43 [i_13] [i_14]), (((var_9) ? (((/* implicit */int) (signed char)-4)) : (var_11)))))));
            var_31 = ((/* implicit */_Bool) (signed char)(-127 - 1));
            arr_55 [i_13] = ((/* implicit */_Bool) var_16);
            arr_56 [i_13] [i_13] = arr_42 [i_13];
        }
        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_16 = 1; i_16 < 14; i_16 += 2) 
            {
                var_32 += ((/* implicit */_Bool) ((arr_52 [i_16 - 1] [i_16 + 1] [i_16 - 1]) / (arr_52 [i_16 - 1] [i_16 + 1] [i_16])));
                arr_62 [i_16] [i_13] [i_13] [i_13] = ((/* implicit */short) ((unsigned short) var_11));
                arr_63 [i_13] [i_15] [i_13] [i_16] = ((((/* implicit */_Bool) arr_46 [i_16 + 1])) ? (arr_46 [i_15]) : (((/* implicit */unsigned long long int) arr_44 [i_16 + 1])));
                /* LoopSeq 4 */
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    arr_68 [14] [i_15] [i_13] [i_16] [14LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_61 [i_16 - 1] [i_16 - 1] [i_16 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 2; i_18 < 13; i_18 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_16 - 1] [i_16 - 1] [i_18] [i_18 + 2]))) : (-1LL))))));
                        var_34 = ((/* implicit */int) arr_65 [i_18 - 1] [i_13] [i_13] [9LL]);
                        arr_71 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned long long int) 11242272775565167190ULL));
                        arr_72 [i_13] [i_13] [i_18] [i_17] [i_18] [(_Bool)1] [i_17] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_17])) ? (arr_60 [i_15]) : (arr_60 [i_18])));
                    }
                    for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) arr_76 [i_13]);
                        arr_77 [i_13] [i_17] [(unsigned short)6] [i_15] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_13] [i_15] [i_16] [i_17] [i_19])) ? (((long long int) 32256)) : (arr_61 [i_13] [i_13] [i_13])));
                        var_36 = (~(((((/* implicit */int) var_4)) & (7936))));
                        arr_78 [i_13] [i_13] [10ULL] [10ULL] [8ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_13] [(_Bool)0] [i_16 - 1])) ? (4471558344647298615ULL) : (((/* implicit */unsigned long long int) arr_61 [i_15] [i_17] [i_19]))));
                    }
                }
                for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_21 = 0; i_21 < 15; i_21 += 4) 
                    {
                        arr_83 [i_13] [i_15] [i_13] [i_20] [i_21] = ((/* implicit */signed char) (+(arr_74 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16] [i_16])));
                        arr_84 [i_13] [(unsigned short)8] [i_16] [i_20] [i_13] = ((/* implicit */unsigned short) var_5);
                    }
                    for (unsigned short i_22 = 0; i_22 < 15; i_22 += 1) /* same iter space */
                    {
                        var_37 -= ((/* implicit */int) (signed char)4);
                        arr_87 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_6) : (((/* implicit */int) var_5))))) : ((~(arr_41 [i_13])))));
                        arr_88 [i_13] = ((/* implicit */long long int) ((unsigned long long int) arr_85 [i_15] [i_15] [i_15] [i_16 - 1] [i_15] [i_22] [i_16 - 1]));
                        arr_89 [i_13] [i_13] [i_13] [i_20] [6] = arr_44 [i_13];
                    }
                    for (unsigned short i_23 = 0; i_23 < 15; i_23 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_20] [i_16 + 1] [i_16 - 1])) ? (arr_53 [4] [i_16 + 1] [i_16 + 1]) : (((/* implicit */int) (signed char)10))));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_67 [i_16] [i_16] [i_16 - 1] [i_16 + 1])) && (((/* implicit */_Bool) 11242272775565167172ULL)))))));
                        var_40 &= (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_81 [(unsigned short)5] [i_15] [i_16] [i_20] [i_20] [i_23])) : (((/* implicit */int) arr_75 [i_16])))));
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 2) 
                    {
                        arr_96 [6ULL] [i_13] [i_16 + 1] [i_24] = ((/* implicit */int) var_16);
                        var_41 = ((/* implicit */long long int) (-(var_0)));
                        var_42 = ((/* implicit */_Bool) var_3);
                        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_16])) ? (((/* implicit */unsigned long long int) arr_41 [(unsigned char)13])) : (((((/* implicit */_Bool) arr_45 [i_15])) ? (arr_92 [i_13] [i_20] [i_24] [i_24] [(short)3]) : (((/* implicit */unsigned long long int) arr_93 [i_13] [i_13]))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_25 = 2; i_25 < 11; i_25 += 3) 
                    {
                        arr_99 [i_16 + 1] [(unsigned char)4] [i_13] [i_20] [i_25] = ((/* implicit */unsigned long long int) ((arr_98 [i_16 + 1] [i_20] [i_20]) ? (((/* implicit */int) arr_65 [i_16 + 1] [i_13] [i_13] [i_25])) : (((/* implicit */int) arr_65 [i_16 + 1] [i_13] [i_16] [i_25]))));
                        arr_100 [i_16] [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) 1073741827)))));
                        var_44 = ((/* implicit */unsigned short) var_11);
                    }
                    arr_101 [i_13] [i_13] [i_16 + 1] [i_13] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) arr_92 [i_16 - 1] [i_16 + 1] [i_16 - 1] [0] [i_16 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)10))) : (((((/* implicit */_Bool) 1073741820)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_61 [i_13] [(unsigned short)6] [i_20])))));
                }
                for (unsigned long long int i_26 = 0; i_26 < 15; i_26 += 3) 
                {
                    arr_104 [i_13] [i_13] [i_13] [i_13] [i_26] = ((/* implicit */unsigned long long int) (unsigned short)64);
                    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_85 [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1] [i_16] [i_26] [i_16 + 1])) ? (16383LL) : (((/* implicit */long long int) arr_85 [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_16] [i_16] [12] [i_16]))));
                    var_46 ^= ((/* implicit */_Bool) ((unsigned long long int) arr_66 [i_15] [i_26] [i_16 - 1] [i_26] [i_15]));
                    arr_105 [i_26] [i_16 - 1] [i_13] [i_26] = ((/* implicit */int) ((arr_95 [i_13] [i_16 + 1] [i_16] [i_16 + 1] [i_16 + 1]) ^ (((/* implicit */unsigned long long int) arr_41 [i_16 - 1]))));
                }
                for (unsigned long long int i_27 = 0; i_27 < 15; i_27 += 1) 
                {
                    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_95 [i_13] [i_16 + 1] [5] [i_16] [i_16 + 1])) ? (var_1) : (arr_95 [i_13] [i_13] [i_13] [i_13] [i_16 - 1])));
                    arr_110 [i_13] = ((/* implicit */_Bool) var_11);
                }
                var_48 = ((/* implicit */int) (+(arr_92 [i_15] [i_15] [i_16 + 1] [i_15] [i_13])));
            }
            arr_111 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27)) ? ((-(((/* implicit */int) (unsigned short)65510)))) : (((((/* implicit */_Bool) (unsigned short)22302)) ? (((/* implicit */int) arr_109 [i_13] [i_15] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_97 [(unsigned char)13] [i_13] [i_13] [i_13] [i_13] [i_13]))))))) ? (13975185729062253015ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_85 [i_15] [i_15] [i_13] [i_15] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_109 [i_13] [i_13] [i_13] [i_15] [i_15])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_67 [i_13] [i_15] [2ULL] [2ULL])) : (((/* implicit */int) var_14)))))))));
            var_49 = ((/* implicit */unsigned short) arr_106 [i_13] [i_13] [i_13] [i_15] [i_15]);
        }
        /* vectorizable */
        for (int i_28 = 0; i_28 < 15; i_28 += 4) /* same iter space */
        {
            arr_115 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_106 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (arr_69 [i_13] [i_13] [(unsigned short)4] [i_28] [i_28]) : (((/* implicit */int) arr_106 [i_28] [i_28] [i_13] [1ULL] [i_13]))));
            var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_92 [i_13] [3] [i_28] [(_Bool)1] [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) arr_97 [i_13] [i_28] [i_28] [i_28] [i_28] [i_28]))) : (var_10))))))));
        }
        for (int i_29 = 0; i_29 < 15; i_29 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_30 = 1; i_30 < 14; i_30 += 2) 
            {
                var_51 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_79 [i_30] [i_30] [i_30] [i_30] [i_29])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_95 [i_29] [i_29] [i_29] [i_29] [i_29])) && (((/* implicit */_Bool) (unsigned short)65531)))))))) ? (min((((((/* implicit */_Bool) arr_79 [i_30] [i_30] [(_Bool)1] [i_30] [i_29])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned long long int) arr_120 [i_13] [i_29] [i_30 + 1])))) : (((((/* implicit */unsigned long long int) arr_53 [i_30] [i_29] [(short)4])) * (min((11327444558993990928ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                arr_121 [i_13] [i_29] [12] &= ((/* implicit */long long int) arr_58 [i_13] [i_29]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    arr_125 [11] [(unsigned short)7] [i_13] = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)65510))))));
                    arr_126 [i_13] = ((/* implicit */unsigned short) ((((arr_117 [i_13]) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) var_5)))) | (arr_44 [i_13])));
                }
            }
            arr_127 [i_13] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((-(((/* implicit */int) var_5)))) >= ((+(((/* implicit */int) var_3))))))), (min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) -1073741833)) ? (((/* implicit */long long int) -1073741820)) : (arr_103 [i_13] [i_29] [i_13] [(unsigned short)8] [0LL])))))));
            arr_128 [i_13] [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (signed char)7)))));
            var_52 -= (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_102 [(_Bool)1] [i_13] [i_29] [i_29])) ? (0) : (var_6))))));
        }
        var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) arr_52 [i_13] [i_13] [i_13]))));
    }
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        arr_132 [i_32] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(var_1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_129 [i_32] [i_32])) | (((/* implicit */int) arr_129 [i_32] [i_32]))))) : (arr_130 [i_32])));
        var_54 = ((unsigned short) (~(7119299514715560687ULL)));
    }
}
