/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204019
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) var_14);
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) var_2)));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (1478397904434281451ULL)))) ? (arr_1 [i_1]) : (arr_2 [i_1] [i_1]))))))));
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) 
                        {
                            arr_15 [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1])) & (arr_10 [i_4])))) : ((+(16968346169275270166ULL)))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_7))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1])) > (((/* implicit */int) (_Bool)1))));
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((short) ((unsigned short) min((arr_2 [i_3] [i_6]), (((/* implicit */unsigned int) arr_8 [i_3] [i_4 - 1] [i_3] [(unsigned short)6]))))));
                        }
                        var_21 = ((/* implicit */_Bool) min((((unsigned int) var_15)), (((/* implicit */unsigned int) arr_7 [i_4 + 4]))));
                    }
                } 
            } 
            arr_19 [i_2] [(unsigned short)0] [i_2] = ((/* implicit */unsigned short) arr_16 [i_1] [i_1] [i_2]);
        }
        for (short i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        {
                            arr_32 [i_1] [i_7] [i_1] [i_1] [i_9] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((1327524969), (((/* implicit */int) (_Bool)1)))))));
                            arr_33 [i_1] [i_7] [i_1] [i_9] [i_1] = ((/* implicit */short) arr_11 [i_1] [i_1]);
                            var_22 = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
                            arr_34 [i_1] [i_1] [i_1] [i_9] [i_10] = arr_27 [(signed char)6] [14ULL] [(signed char)6] [i_9];
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    arr_37 [i_1] [i_7] [(unsigned char)6] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                    var_23 = (+(max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) ^ (1478397904434281466ULL))))));
                }
                for (short i_12 = 2; i_12 < 17; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((int) arr_22 [i_12]));
                        arr_45 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_12] [i_12] [i_12] [i_12 + 2])) >= (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_12 + 3]))))) & (((((/* implicit */_Bool) arr_8 [i_7] [i_8] [i_8] [i_12 + 2])) ? (((/* implicit */int) arr_8 [i_8] [(short)10] [i_12] [i_12 + 3])) : (((/* implicit */int) (unsigned char)233)))));
                        arr_46 [i_13] [i_12] [i_8] [i_7] [i_1] = ((/* implicit */unsigned short) (((~(1478397904434281461ULL))) > (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)26983)), (arr_24 [i_1] [i_1] [i_12 + 1] [i_8]))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_0 [i_12]))))))));
                    }
                    arr_47 [i_1] [i_8] [i_1] [i_1] = ((/* implicit */_Bool) (((+(arr_21 [i_12 + 1] [i_12 + 2]))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_12 - 2] [i_12 - 2]))))))));
                }
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 2; i_15 < 19; i_15 += 3) 
                    {
                        arr_54 [i_1] [i_1] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) (_Bool)1))), (max(((((_Bool)0) ? (((/* implicit */long long int) 810751769U)) : (-5847151204560367913LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1] [(unsigned short)13] [0U])) > (((/* implicit */int) (_Bool)1)))))))));
                        arr_55 [i_15] [i_7] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))) * (((var_16) * (((/* implicit */unsigned long long int) arr_53 [i_15 - 2] [i_15] [i_15] [i_15 + 1] [i_15] [i_15 + 1]))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_52 [9U] [i_15] [i_15] [i_14] [i_15 + 1])) : (arr_50 [i_1] [i_7] [9] [i_14] [i_15 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [i_1] [i_15] [i_15] [i_7] [i_15 + 1])) - (arr_50 [i_1] [16U] [i_8] [i_1] [i_15 - 2])))) : (var_2)));
                        arr_56 [i_1] [i_1] [i_1] [14U] [i_8] [i_15] [i_15] = ((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_7] [i_1] [i_8] [i_14] [i_15]);
                        var_27 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) arr_42 [i_1] [i_1] [i_8] [i_15 - 2] [i_15 - 2] [i_7])), (3832323278U)))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) arr_43 [i_14]);
                        arr_59 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_23 [i_1] [i_1] [(short)12])), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_23 [i_1] [i_7] [i_7]))))));
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((2881202696U) >> (((var_16) - (8015539055153751434ULL)))))) ? ((((_Bool)1) ? (10ULL) : (18446744073709551605ULL))) : (((unsigned long long int) 0ULL)))) | (((/* implicit */unsigned long long int) ((67108862U) ^ (min((arr_1 [i_1]), (((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                    }
                    var_30 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_48 [i_1] [(_Bool)1] [i_8] [i_1]), (((/* implicit */long long int) arr_8 [i_1] [i_7] [i_7] [i_1]))))) || (((/* implicit */_Bool) ((17913433010213722143ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))))))), (((unsigned int) (_Bool)1)));
                    var_31 = ((/* implicit */unsigned short) (_Bool)1);
                    var_32 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_43 [i_8])) != (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned short)44046)))))), (((_Bool) max((arr_21 [i_8] [i_8]), (((/* implicit */long long int) -1747646956)))))));
                }
                var_33 = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_8])) != (((/* implicit */int) arr_6 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) == (((/* implicit */int) arr_6 [i_1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7]))) * (3751329883U)))));
            }
            arr_60 [i_7] = ((/* implicit */unsigned int) -274107770);
            arr_61 [i_1] [i_1] = ((/* implicit */unsigned short) ((6030945994654128623LL) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26652))) & (arr_48 [i_1] [i_7] [i_7] [i_7])))));
            var_34 = ((/* implicit */int) var_6);
            var_35 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_7 [i_7])), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_7]))) & (arr_38 [i_7]))))) > (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && ((_Bool)1)))), (((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned char)193)))))))));
        }
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            var_36 = ((/* implicit */_Bool) var_16);
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                for (unsigned char i_19 = 1; i_19 < 18; i_19 += 2) 
                {
                    {
                        var_37 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_63 [(_Bool)1]))));
                        var_38 = ((/* implicit */unsigned short) max((arr_65 [i_17 + 1] [i_17] [i_17 + 1] [i_17 + 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 123145302310912ULL)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_20 = 0; i_20 < 20; i_20 += 1) 
        {
            var_39 = var_3;
            /* LoopSeq 3 */
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_22 = 0; i_22 < 20; i_22 += 1) 
                {
                    arr_79 [i_20] [5] [i_21] [i_22] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [i_20] [i_20])) ? (arr_48 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) 3629773946U))))) ? (((/* implicit */int) arr_44 [i_1] [i_1] [i_21 - 1] [i_21 - 1] [i_21] [i_21])) : ((+(((/* implicit */int) arr_5 [i_21] [i_21]))))));
                    arr_80 [i_20] = ((/* implicit */_Bool) arr_2 [i_1] [i_1]);
                }
                arr_81 [i_1] [i_1] [i_1] [i_20] = ((/* implicit */long long int) arr_0 [i_1]);
            }
            for (short i_23 = 0; i_23 < 20; i_23 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_24 = 2; i_24 < 17; i_24 += 2) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_91 [i_1] [i_1] [i_20] [i_24] [i_25] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10)))));
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_3))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [i_1] [i_24] [i_25])))))));
                            var_41 += ((/* implicit */unsigned long long int) ((unsigned int) arr_24 [i_24 - 2] [i_24 - 2] [i_24 - 2] [i_24 + 2]));
                            arr_92 [i_1] [i_20] [6] [i_20] [i_25] = ((/* implicit */short) ((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_24 + 3] [i_24] [i_24 + 1] [i_24] [i_24] [i_24 + 3])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_26 = 0; i_26 < 20; i_26 += 4) 
                {
                    arr_95 [i_1] [i_1] [i_20] [i_20] [i_1] [i_1] = arr_78 [i_20] [i_23] [i_20] [i_20];
                    var_42 = ((/* implicit */unsigned char) var_13);
                    var_43 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1747646973)) / (2157444577U)));
                }
                var_44 = ((/* implicit */short) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1]);
                arr_96 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_84 [i_1])) : (((/* implicit */int) var_3))));
            }
            for (int i_27 = 3; i_27 < 18; i_27 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_28 = 1; i_28 < 18; i_28 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_29 = 1; i_29 < 18; i_29 += 2) 
                    {
                        arr_104 [i_20] = ((/* implicit */unsigned int) -1862763846);
                        var_45 = ((/* implicit */short) (+(arr_24 [i_29] [i_29 - 1] [i_29] [i_29 - 1])));
                    }
                    for (short i_30 = 3; i_30 < 17; i_30 += 2) 
                    {
                        arr_107 [i_1] [i_1] [i_1] [i_20] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_84 [i_27])) / (((/* implicit */int) arr_30 [i_28 - 1]))));
                        var_46 = ((/* implicit */_Bool) var_10);
                    }
                    var_47 = ((/* implicit */unsigned short) arr_7 [i_28 - 1]);
                }
                for (int i_31 = 0; i_31 < 20; i_31 += 4) 
                {
                    var_48 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_20] [i_20] [i_1]))) ^ (arr_106 [i_27 - 2] [i_27 + 1] [i_31] [i_27 - 1] [i_27 - 1])));
                    arr_110 [i_20] [18LL] [i_20] [i_27] [i_27] [i_20] = ((/* implicit */short) arr_41 [i_1] [i_1] [i_27] [i_20]);
                    var_49 = ((/* implicit */short) (+(var_0)));
                    var_50 ^= ((/* implicit */signed char) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
                /* LoopSeq 2 */
                for (short i_32 = 0; i_32 < 20; i_32 += 3) /* same iter space */
                {
                    var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) (!(arr_68 [i_1] [i_27 - 2] [i_27 + 1]))))));
                    var_52 = ((/* implicit */unsigned long long int) ((arr_20 [i_27] [i_27 - 3] [i_27 - 1]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_27] [i_27 - 3] [i_27 - 3])))));
                    arr_113 [i_20] [i_20] [i_27] [i_32] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -8197065247671519583LL)) ? (18286618932399589748ULL) : (((/* implicit */unsigned long long int) -444119121984838714LL))))));
                    var_53 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_87 [i_20] [i_20] [i_27 - 3] [i_32]))));
                }
                for (short i_33 = 0; i_33 < 20; i_33 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_34 = 0; i_34 < 20; i_34 += 2) 
                    {
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 665193349U)) ? (arr_111 [i_27] [i_27] [i_27 + 1] [i_27 + 2]) : (((/* implicit */long long int) var_11))));
                        var_55 += ((/* implicit */unsigned short) var_10);
                    }
                    for (unsigned short i_35 = 0; i_35 < 20; i_35 += 3) 
                    {
                        var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_115 [i_27 - 3])) && (((/* implicit */_Bool) arr_7 [i_27 + 2]))));
                        arr_123 [i_1] [i_20] [i_20] [4ULL] [12] [i_35] [i_35] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_86 [i_33] [i_33] [i_33] [i_33] [i_33])) ? (((/* implicit */int) (short)1390)) : (((/* implicit */int) arr_86 [i_35] [i_33] [i_1] [i_20] [i_1]))));
                    }
                    for (unsigned long long int i_36 = 0; i_36 < 20; i_36 += 4) 
                    {
                        var_57 = arr_117 [i_36] [i_1] [i_27] [i_20] [i_1] [i_1] [i_1];
                        arr_127 [i_36] [i_36] [i_20] = ((/* implicit */unsigned short) arr_126 [i_33] [i_33] [i_33]);
                        arr_128 [i_1] [i_1] [i_1] [i_20] [i_36] = ((/* implicit */_Bool) arr_94 [9ULL] [4LL] [i_27 + 1] [(_Bool)0]);
                        var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_27 + 1] [i_27 + 1] [i_27 + 1])) ? (arr_62 [i_27 - 2] [i_36] [i_27]) : (((/* implicit */unsigned long long int) var_0)))))));
                    }
                    arr_129 [i_1] [i_20] [i_20] [i_33] = ((/* implicit */short) ((((18446744073709551605ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) << (((arr_17 [i_27] [i_27] [i_27] [i_27 + 1] [i_27 - 3] [i_27] [i_27]) + (1210811345)))));
                    var_59 = ((((/* implicit */_Bool) 134217728)) ? (((/* implicit */int) (short)-3291)) : (((/* implicit */int) (short)-17370)));
                }
                var_60 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_53 [i_1] [i_1] [i_1] [i_1] [i_20] [(short)15]))) || (((/* implicit */_Bool) arr_71 [i_1] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_37 = 0; i_37 < 20; i_37 += 4) 
                {
                    for (signed char i_38 = 0; i_38 < 20; i_38 += 2) 
                    {
                        {
                            var_61 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53646)) << (((2397863538255640591LL) - (2397863538255640583LL)))));
                            arr_134 [i_20] [i_20] [i_20] [i_27] [i_27] [i_38] = ((/* implicit */_Bool) var_5);
                            var_62 = ((/* implicit */unsigned long long int) arr_115 [i_1]);
                            var_63 = ((/* implicit */unsigned char) 17688390492245004036ULL);
                        }
                    } 
                } 
            }
            arr_135 [i_20] [i_20] = ((/* implicit */short) (unsigned char)33);
        }
        arr_136 [i_1] = ((/* implicit */_Bool) arr_121 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        var_64 &= ((/* implicit */unsigned long long int) arr_38 [i_1]);
    }
    var_65 = ((/* implicit */unsigned int) min((var_65), (var_0)));
}
