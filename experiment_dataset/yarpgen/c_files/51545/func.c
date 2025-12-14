/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51545
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
    var_13 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-126)) & (((/* implicit */int) (unsigned char)3))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_6 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117)))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) * ((+(((/* implicit */int) var_10))))));
                /* LoopSeq 1 */
                for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    var_15 = arr_5 [i_3 - 1] [i_3 - 1];
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((6871915682126873612ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))))));
                }
            }
            arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)65107));
            arr_15 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-2165))));
            arr_16 [i_0] [(signed char)7] = (signed char)-122;
        }
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_10 [i_0] [i_0] [i_0] [5U])));
        arr_18 [i_0] [i_0] = (-(((/* implicit */int) (signed char)-123)));
    }
    for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 3; i_6 < 8; i_6 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_34 [i_4] [i_4] [i_4] [(short)7] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (signed char)-123)) >= (((/* implicit */int) arr_21 [0ULL] [i_5] [i_4])))));
                        arr_35 [i_4] [i_7] [i_7] [i_4] [i_6 + 3] = ((/* implicit */unsigned int) 6871915682126873590ULL);
                        arr_36 [i_8] [i_4] [8] [i_4] [(signed char)5] = ((/* implicit */unsigned char) (signed char)-18);
                    }
                    var_17 = ((/* implicit */signed char) min((var_17), ((signed char)-126)));
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)64621)) : (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) arr_29 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1]))))));
                        arr_40 [(unsigned short)6] [i_5] [i_5] [i_7] [i_4] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) arr_37 [i_7 - 1] [i_4] [i_4] [i_7 - 1]));
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 2; i_10 < 8; i_10 += 3) 
                    {
                        arr_45 [i_4 + 1] [i_4 + 1] [(unsigned char)3] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_37 [i_10] [i_4] [i_4] [i_4]))));
                        arr_46 [i_4 - 1] [i_4] [i_4 - 1] = var_6;
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_44 [i_10 + 1] [i_10] [i_5] [i_10 + 1] [i_10] [i_10]) : (arr_44 [i_10 - 1] [6LL] [i_5] [i_10 + 2] [i_10] [6LL]))))));
                        arr_47 [i_5] [i_5] [i_6] [i_6] [6U] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_20 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_7] [i_5] [i_7 - 1] [i_7])))));
                    }
                    arr_48 [i_4] = ((/* implicit */long long int) ((unsigned int) (signed char)111));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (10346651699123493222ULL)));
                    arr_53 [i_4] [i_4] [i_4] = ((/* implicit */int) var_1);
                    arr_54 [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_4 - 1])) & (((/* implicit */int) min((((/* implicit */short) arr_32 [i_4] [i_4] [i_4] [i_6 + 1])), (var_6))))));
                }
            }
            for (signed char i_12 = 3; i_12 < 10; i_12 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) (-(((var_2) + (((/* implicit */unsigned long long int) 1006632960))))));
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_14 = 2; i_14 < 9; i_14 += 1) 
                    {
                        arr_62 [i_4] [i_4 + 1] [(unsigned char)9] [i_4] [i_4 + 1] = ((/* implicit */unsigned int) (signed char)-100);
                        arr_63 [i_4] [2] [i_4] [i_13] [1U] = ((/* implicit */unsigned int) ((long long int) arr_7 [i_4] [i_4 + 1] [i_12] [i_12 + 1]));
                        arr_64 [i_4] [i_5] [i_12] [i_13] [i_4 + 1] = ((/* implicit */long long int) arr_50 [i_4] [i_12] [i_4] [i_13] [i_4]);
                        arr_65 [i_4] [i_4] = ((/* implicit */int) arr_9 [i_12 - 3]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (signed char)71))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-107)) >= (((/* implicit */int) ((signed char) var_7)))));
                        arr_68 [i_4] [i_4] [i_4] [i_4] [5U] [(short)4] [i_4] = ((/* implicit */unsigned short) ((short) arr_1 [(signed char)2]));
                        var_24 = ((/* implicit */short) ((unsigned long long int) 29U));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                    {
                        arr_72 [(unsigned short)5] [(unsigned short)5] [(unsigned short)0] [i_4] [i_16] = ((/* implicit */unsigned long long int) (short)-23984);
                        arr_73 [i_13] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned int) (unsigned char)217));
                    }
                    arr_74 [5ULL] [i_5] [i_5] [i_4] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) 1007623815288305593LL)) ? (4294967278U) : (((/* implicit */unsigned int) 1001754)))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    arr_77 [i_4] [i_4] [4LL] [i_4] [i_4] = ((/* implicit */short) max((max((arr_26 [i_4] [i_4]), (((unsigned long long int) (unsigned short)65320)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) var_11)), ((short)2147)))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_18 = 2; i_18 < 9; i_18 += 4) 
                    {
                        arr_80 [i_4] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (arr_56 [i_5] [8U] [i_5] [i_18]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (min((((/* implicit */unsigned long long int) (signed char)103)), (5ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned short) arr_43 [i_18 + 1])))));
                        arr_81 [i_4] [(unsigned short)6] [(unsigned short)8] [i_17] [i_18] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */short) var_5)), (max((((/* implicit */short) arr_29 [i_18 + 1] [4ULL] [4ULL] [i_5])), (var_10))))))));
                        arr_82 [i_18] [i_5] [(_Bool)1] [i_4] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((-4611686018427387904LL) > (((/* implicit */long long int) -27)))))))) ? (max((((/* implicit */unsigned long long int) var_12)), (arr_59 [i_12] [i_18 - 1]))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)12582)) * (((/* implicit */int) (short)2165)))))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        arr_85 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [(signed char)8] [(signed char)8] [8LL] [i_17] [i_17] [i_4])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_3)))) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) ((unsigned short) (short)-2142)))))));
                        var_26 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) ((short) var_5))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) & (var_3)))))));
                    }
                    for (unsigned char i_20 = 2; i_20 < 10; i_20 += 2) 
                    {
                        var_27 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) 1308433743U)), (var_2))), (max((((/* implicit */unsigned long long int) (short)2165)), (16753972786506319911ULL)))));
                        arr_90 [i_20] [i_5] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */signed char) arr_88 [i_20] [i_4] [i_12] [i_12 - 1] [(unsigned char)1] [i_4]);
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), ((~(arr_5 [i_4 - 1] [(short)2])))));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) arr_10 [i_4] [i_5] [i_12 - 2] [i_17]))));
                        arr_91 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (signed char)-108))))), (((long long int) arr_58 [i_20] [i_17] [i_4 + 1] [i_4 + 1])))));
                    }
                    arr_92 [i_4] [i_4] [(short)5] [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (2138692542009952205ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6334)))));
                    var_30 ^= ((/* implicit */unsigned char) arr_12 [i_4] [i_4 + 1] [(short)1]);
                }
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(597996724624925727ULL))), (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) arr_75 [i_4])) ? (((/* implicit */unsigned long long int) arr_75 [i_4])) : (11574828391582677998ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */short) var_0)))))))))));
            }
            for (unsigned int i_21 = 2; i_21 < 9; i_21 += 4) 
            {
                arr_97 [i_21] [i_5] [i_5] [i_4] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6335))) ^ (2620245478U)));
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_78 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] [i_5] [i_21])) << (((3908461371U) - (3908461364U)))))), (((((/* implicit */_Bool) (unsigned char)73)) ? (((unsigned int) (short)12540)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15848703264884841994ULL)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (unsigned char)171))))))))))));
            }
            arr_98 [i_4] = ((/* implicit */unsigned int) (unsigned char)104);
        }
        for (unsigned int i_22 = 0; i_22 < 11; i_22 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned long long int) (~(-867404449)));
            arr_103 [i_4] = ((/* implicit */unsigned short) ((unsigned char) max((((unsigned int) var_6)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_4] [i_22] [(unsigned short)2] [i_22])) + (((/* implicit */int) (unsigned char)128))))))));
        }
        for (unsigned int i_23 = 0; i_23 < 11; i_23 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_24 = 0; i_24 < 11; i_24 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_25 = 2; i_25 < 7; i_25 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (unsigned short)55161)), (arr_108 [i_24] [i_4 + 1] [i_25 - 2] [i_23]))) << (((/* implicit */int) arr_87 [i_23] [5ULL] [i_23] [i_23] [5U] [(short)4] [i_23]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_26 = 0; i_26 < 11; i_26 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((short) 8100092374586058393ULL));
                        arr_114 [i_26] [i_26] [i_4] [i_25] [i_4] [i_23] [i_4 + 1] = (~(min(((-(((/* implicit */int) var_8)))), ((-(-995081841))))));
                        arr_115 [i_4] [i_25] [i_4] [i_24] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) -3070436874117100206LL);
                    }
                    for (signed char i_27 = 1; i_27 < 9; i_27 += 2) 
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (((int) 3487780365U))))) > (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [4U])) : (((/* implicit */int) arr_13 [i_4] [i_23] [i_24] [i_27]))))), (2412487484U)))));
                        arr_119 [i_27] [(short)5] [i_4] [i_4] [i_27] = ((/* implicit */int) arr_117 [i_4] [(signed char)7] [10ULL] [i_4 + 1] [i_4 + 1] [i_25 + 2]);
                        arr_120 [i_4] [i_25] [i_25] [i_24] [i_4] [i_4] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (unsigned short)60594)), (113781013U))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (short)12288)))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) 13630494098196744283ULL)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) <= ((-(((/* implicit */int) var_11))))))) : (((/* implicit */int) ((arr_100 [i_4] [i_4]) != (3319033705U))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_28 = 0; i_28 < 11; i_28 += 1) 
                    {
                        arr_123 [i_4] [i_23] [i_23] [i_24] [i_23] [i_28] &= ((/* implicit */unsigned int) -225580228);
                        var_38 = ((/* implicit */short) var_3);
                    }
                    arr_124 [i_4] [i_23] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_52 [i_4] [i_4 - 1] [(unsigned char)2] [i_4 - 1]), (var_11)))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) -596976855806519963LL)) && (((/* implicit */_Bool) var_7)))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)229)), ((unsigned short)55188)))), (max((var_3), (((/* implicit */unsigned long long int) var_12)))))));
                    arr_125 [i_4] [i_4] [i_25] [i_25] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (signed char)-32)) ? (8100092374586058394ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11173))))));
                    arr_126 [i_4] [i_23] [i_24] [i_25] [(signed char)8] &= ((/* implicit */short) max((18446744073709551608ULL), (((/* implicit */unsigned long long int) (unsigned short)14012))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_29 = 0; i_29 < 11; i_29 += 4) 
                {
                    arr_131 [i_24] [i_23] [i_24] [i_4] = ((/* implicit */unsigned short) ((unsigned int) arr_129 [i_4] [(short)8] [i_4 + 1] [i_4 + 1]));
                    /* LoopSeq 1 */
                    for (unsigned short i_30 = 0; i_30 < 11; i_30 += 1) 
                    {
                        arr_135 [i_4] [i_23] [(signed char)8] [10ULL] [(signed char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 558626237))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) : (arr_100 [i_4] [(unsigned char)10])));
                        var_39 = ((/* implicit */unsigned long long int) 15U);
                    }
                    arr_136 [(signed char)0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12288))) - (arr_50 [i_4] [i_23] [i_24] [i_23] [i_4])));
                }
                for (long long int i_31 = 0; i_31 < 11; i_31 += 4) 
                {
                    arr_139 [i_4] [i_4] [i_4] = ((/* implicit */short) var_0);
                    arr_140 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) arr_8 [i_4 - 1] [i_4 + 1])))))));
                }
            }
            for (unsigned int i_32 = 2; i_32 < 10; i_32 += 2) 
            {
                var_40 = ((/* implicit */unsigned int) max((((short) var_2)), (max((((/* implicit */short) ((signed char) var_6))), (min((var_1), ((short)12288)))))));
                arr_143 [i_4] [i_23] [i_23] [i_4] = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) arr_116 [3ULL] [i_4])))) ? (((((/* implicit */_Bool) 10346651699123493238ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29869))) : (386505939U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))))), (((/* implicit */unsigned int) (unsigned short)40076))));
                arr_144 [i_4] [6U] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (arr_106 [i_4] [i_4] [4ULL] [i_4]))))));
                arr_145 [i_4] [5] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 7952342103722320542ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))) ^ (max((((/* implicit */unsigned int) var_4)), (arr_2 [i_4] [i_4])))));
                var_41 = ((/* implicit */signed char) var_10);
            }
            for (short i_33 = 0; i_33 < 11; i_33 += 3) 
            {
                arr_148 [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 984073099U)), (max((max((((/* implicit */unsigned long long int) 4294967295U)), (10346651699123493223ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10346651699123493240ULL)) && (((/* implicit */_Bool) (unsigned short)64307)))))))));
                var_42 = ((/* implicit */long long int) ((min((arr_56 [i_4] [i_4 - 1] [i_4] [i_4 - 1]), (arr_56 [7ULL] [i_4 + 1] [i_4 - 1] [i_4 - 1]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_56 [(unsigned char)4] [i_4 + 1] [i_4] [i_4 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39298)))))))));
            }
            arr_149 [i_4] [i_4] = ((/* implicit */signed char) ((unsigned short) arr_57 [i_4] [i_4] [3ULL] [i_4] [i_4] [i_4]));
        }
        /* LoopSeq 2 */
        for (unsigned short i_34 = 0; i_34 < 11; i_34 += 4) /* same iter space */
        {
            arr_153 [i_4] [6U] [3ULL] = ((/* implicit */unsigned int) (short)-8878);
            arr_154 [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) max((min((var_3), (((/* implicit */unsigned long long int) var_10)))), ((-(arr_151 [i_4] [(unsigned char)9] [i_34]))))));
            var_43 = ((/* implicit */unsigned char) arr_61 [i_4] [5LL] [i_34] [i_4 - 1] [i_4] [i_4] [i_34]);
        }
        for (unsigned short i_35 = 0; i_35 < 11; i_35 += 4) /* same iter space */
        {
            arr_159 [7ULL] [i_4] [i_4] = ((/* implicit */signed char) ((min((min((arr_102 [i_35] [8ULL] [8ULL]), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) 9141735602186946245LL)))) / (((/* implicit */unsigned long long int) (+(((long long int) arr_108 [i_35] [9U] [(_Bool)1] [i_4])))))));
            arr_160 [i_4] [i_35] = ((/* implicit */unsigned short) 0U);
        }
    }
    for (int i_36 = 2; i_36 < 15; i_36 += 3) 
    {
        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) max(((short)7602), (max(((short)7602), (((/* implicit */short) (unsigned char)255)))))))));
        arr_165 [i_36] = ((/* implicit */long long int) 4204798557U);
    }
}
