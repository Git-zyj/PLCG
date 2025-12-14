/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5453
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] |= ((/* implicit */int) (!(((((/* implicit */int) (!(((/* implicit */_Bool) -1016677279))))) == (arr_2 [i_1])))));
                    arr_9 [i_2] [(short)8] [i_2] [10] &= (~(((/* implicit */int) (unsigned char)5)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) 10739758730159491273ULL);
                    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_3])) | (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) 1558827976)) ? (arr_11 [i_0] [i_3]) : (((/* implicit */unsigned long long int) 2147483634))))));
                    var_17 = ((/* implicit */unsigned char) ((int) min((arr_15 [i_4] [i_3]), ((unsigned char)255))));
                    var_18 = min((((/* implicit */int) (short)26761)), (-2147483616));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
        {
            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [6])) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [8])) == (((/* implicit */int) (unsigned char)166))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) var_0)))) : ((+(-88768736)))))));
            var_19 = ((((((/* implicit */_Bool) min((arr_10 [i_0] [i_5] [1]), (((/* implicit */int) arr_19 [i_0] [i_5] [i_0]))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((/* implicit */int) (unsigned char)225)))) + (((((/* implicit */int) (short)-11100)) - (((/* implicit */int) (unsigned char)82)))));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_20 = (~(((/* implicit */int) max((arr_20 [i_6]), (arr_20 [i_0])))));
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_21 = var_13;
                arr_30 [i_6] [i_7] [i_6] [i_6] = min((((unsigned long long int) (unsigned char)24)), (min((((((/* implicit */_Bool) (unsigned char)251)) ? (var_6) : (((/* implicit */unsigned long long int) var_13)))), (arr_25 [i_0]))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 1; i_8 < 8; i_8 += 4) 
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((-88768754) == (-88768747))))));
                    var_23 |= (~(max((((((/* implicit */int) var_4)) / (((/* implicit */int) arr_33 [i_0] [i_0] [i_7] [i_8] [i_7] [i_7])))), (arr_6 [i_8] [i_8 + 2] [i_8 - 1] [i_8 + 1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_8])) ? (((/* implicit */unsigned long long int) -88768753)) : (var_14))))));
                        var_25 = ((/* implicit */int) arr_1 [i_0]);
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) >= (arr_25 [i_0])));
                /* LoopSeq 3 */
                for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    arr_43 [i_0] [i_6] [i_10] [(short)2] = ((((/* implicit */int) (short)10977)) >> (((((/* implicit */int) (short)30546)) - (30527))));
                    arr_44 [i_0] [i_6] [i_10] [i_10] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11271512449525730485ULL)) ? (9223372036854775808ULL) : (13475500449217119819ULL)))) ? ((~(arr_4 [i_6]))) : (1218824727)));
                    var_27 = (+(((((/* implicit */int) (short)-30546)) * (((/* implicit */int) arr_1 [i_11])))));
                    var_28 += ((/* implicit */int) ((816365006) == (((/* implicit */int) (short)-29346))));
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0])))))));
                }
                for (int i_12 = 1; i_12 < 10; i_12 += 3) /* same iter space */
                {
                    arr_48 [i_6] [i_6] = ((/* implicit */short) arr_38 [i_0] [i_6] [i_6] [i_10] [i_12]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [(short)10] [i_12] [i_13]))));
                        arr_51 [2ULL] [i_6] [i_10] [i_6] [i_13 + 1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0])))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_12 - 1] [i_13] [i_13 + 2] [i_13])))));
                        var_31 = ((/* implicit */unsigned char) var_2);
                        arr_52 [(short)5] [i_6] [(short)5] [i_6] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_12 - 1])) ? (arr_2 [i_12 - 1]) : (((/* implicit */int) arr_37 [i_13 - 1] [i_12 + 1] [i_12 - 1]))));
                    }
                    for (short i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        var_32 = (+(1710872726));
                        var_33 = ((/* implicit */unsigned char) arr_35 [i_6]);
                        arr_55 [i_0] [i_0] [2] [i_0] [i_6] = ((/* implicit */int) arr_29 [i_6] [i_6]);
                    }
                    for (short i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                    {
                        arr_58 [i_0] [i_6] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (arr_23 [i_0] [i_6]) : (arr_3 [i_0] [i_6])))));
                        arr_59 [i_6] [i_10] = ((/* implicit */short) (-(((((/* implicit */_Bool) -124834243)) ? (88768767) : (((/* implicit */int) (short)25410))))));
                    }
                }
                for (int i_16 = 1; i_16 < 10; i_16 += 3) /* same iter space */
                {
                    arr_62 [i_0] [i_6] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_6) : (var_6))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 1; i_17 < 10; i_17 += 4) 
                    {
                        var_34 += ((/* implicit */int) arr_24 [i_0] [i_0]);
                        arr_65 [(unsigned char)0] [i_6] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-27389)) != (-291259147)));
                        arr_66 [i_6] [i_16] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) 13908032892013075314ULL)))))));
                        arr_67 [i_0] [i_6] [i_10] [i_6] [(short)8] [i_17] [i_10] = ((/* implicit */int) var_9);
                        arr_68 [i_0] [i_6] [i_10] [i_16] [i_6] = (-(arr_36 [i_6] [i_6] [i_16] [i_16] [i_17]));
                    }
                    for (unsigned char i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) arr_50 [i_16 - 1] [i_16 + 1] [i_6] [i_16 - 1] [i_18]);
                        arr_73 [i_6] [i_6] [i_6] [i_10] [i_10] [i_18] = ((/* implicit */int) (+(arr_64 [i_16 - 1] [i_16] [i_16 + 1] [i_16 + 1] [i_6] [i_16 + 1] [i_16 + 1])));
                    }
                    var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) ((1027017339885154656ULL) >> (((112) - (70)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (637707717)));
                    arr_74 [i_6] = ((((/* implicit */_Bool) arr_27 [i_6] [i_16 + 1])) ? (arr_27 [i_6] [i_16 + 1]) : (arr_27 [i_6] [i_16 + 1]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 3; i_19 < 8; i_19 += 4) 
                    {
                        arr_78 [i_6] [(unsigned char)7] [i_10] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_16 + 1] [i_16] [i_19 - 1] [i_6] [i_19])) ? (((/* implicit */int) arr_49 [i_16 + 1] [i_16] [i_19 - 1] [i_6] [i_19 - 1])) : (1245121026)));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_61 [i_0] [i_0] [i_0] [(unsigned char)8])))))));
                        arr_79 [i_0] [i_0] [i_10] [i_16] [i_19] &= ((/* implicit */short) -689669070);
                        arr_80 [i_0] [i_6] [i_10] [i_16] [i_6] [i_6] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_28 [i_16 + 1] [i_6] [i_19 + 1] [i_16]))));
                    }
                }
                arr_81 [i_0] [i_6] [i_6] = ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0]);
            }
            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (!(((/* implicit */_Bool) min((max((((/* implicit */int) (short)-12987)), (-1925913489))), (((/* implicit */int) (unsigned char)196))))))))));
        }
        for (short i_20 = 3; i_20 < 7; i_20 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_21 = 2; i_21 < 8; i_21 += 4) 
            {
                var_39 *= ((/* implicit */short) ((((/* implicit */_Bool) ((7175231624183821131ULL) >> (((536870911) - (536870907)))))) && (((/* implicit */_Bool) -1016677275))));
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    for (int i_23 = 0; i_23 < 11; i_23 += 1) 
                    {
                        {
                            var_40 = (~(((((/* implicit */int) arr_89 [i_21 - 1] [i_21] [i_20 - 2] [i_20 + 2] [i_20 + 1] [i_0])) | (((/* implicit */int) arr_89 [i_21 + 1] [i_20 + 2] [i_20 - 3] [i_20] [i_20 + 2] [i_20 + 4])))));
                            arr_92 [i_0] [i_20] [i_20] [i_21 + 3] [i_22] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)31)) % (arr_38 [i_20 + 4] [i_20] [i_21] [i_21] [i_21 + 1])))), (max((((/* implicit */unsigned long long int) ((int) (unsigned char)198))), (((((/* implicit */_Bool) 17162466115060702267ULL)) ? (((/* implicit */unsigned long long int) arr_56 [(short)4])) : (var_3)))))));
                            arr_93 [i_20] = ((/* implicit */unsigned char) arr_40 [i_0] [i_0] [i_0]);
                            var_41 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_5)) ? (-1852405472) : (((/* implicit */int) (short)10198)))) : (2147483647))) / ((~(((/* implicit */int) arr_20 [i_22]))))));
                            arr_94 [i_0] [i_0] [i_20] [i_22] [i_23] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_6 [i_0] [i_20] [i_21] [10])) ? (arr_27 [i_20] [i_20]) : ((+(var_5))))), (((((/* implicit */_Bool) arr_49 [i_20] [i_20] [i_20] [i_20] [i_21 - 2])) ? (((/* implicit */int) arr_49 [i_20 + 4] [i_20] [(short)1] [i_20] [i_21 + 3])) : (((/* implicit */int) arr_49 [i_20] [i_20] [i_20] [i_20] [i_21 - 2]))))));
                        }
                    } 
                } 
                arr_95 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) -1016677279)) ? ((-(((/* implicit */int) (unsigned char)181)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)255)))))));
                /* LoopNest 2 */
                for (int i_24 = 2; i_24 < 7; i_24 += 4) 
                {
                    for (int i_25 = 0; i_25 < 11; i_25 += 1) 
                    {
                        {
                            arr_103 [i_0] [i_0] [i_25] [i_25] [i_20] = ((/* implicit */unsigned char) (-(((arr_53 [i_20 + 2] [i_20] [i_20] [i_20] [i_20]) % (arr_53 [i_20 + 3] [i_20] [i_24] [i_25] [i_25])))));
                            var_42 = ((/* implicit */int) (unsigned char)225);
                            arr_104 [i_25] [i_20] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_0] [i_0])) ? (((/* implicit */int) arr_50 [i_0] [i_0] [i_20] [i_0] [i_25])) : ((-2147483647 - 1))))) ? ((-(var_3))) : (arr_47 [i_20] [i_20] [i_20 + 1] [i_20]))) - (var_14)));
                            arr_105 [i_0] [i_20] [i_21] [i_24] [i_25] [i_20] = ((/* implicit */unsigned char) arr_45 [i_20]);
                            var_43 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_20])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)11298))))) ? (max((((/* implicit */int) (unsigned char)1)), (arr_56 [7ULL]))) : (-2147483646)))) ? (((((/* implicit */_Bool) arr_85 [i_21 + 3] [i_21 + 3] [i_21 + 1])) ? (((((/* implicit */_Bool) 946199793)) ? (933147163) : (((/* implicit */int) arr_26 [(short)8] [i_20] [i_21] [i_0])))) : (((/* implicit */int) arr_77 [i_20] [i_20] [i_20 + 4] [5ULL] [i_21 - 2])))) : (arr_27 [i_24] [i_20 + 1])));
                        }
                    } 
                } 
                arr_106 [i_0] [i_20] [i_20] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_50 [i_21] [i_21] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1786839056)) : (var_6))), (arr_47 [i_0] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) min((arr_37 [i_21] [i_21 - 2] [i_21 - 1]), (arr_37 [i_21 + 1] [i_21 + 2] [i_21 + 1]))))));
            }
            arr_107 [i_0] [i_20] = ((/* implicit */short) ((((/* implicit */int) arr_24 [i_20 + 3] [i_20])) | ((~(-1786839051)))));
        }
    }
    /* vectorizable */
    for (short i_26 = 2; i_26 < 20; i_26 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_27 = 0; i_27 < 22; i_27 += 4) 
        {
            for (short i_28 = 3; i_28 < 21; i_28 += 1) 
            {
                for (unsigned long long int i_29 = 1; i_29 < 20; i_29 += 3) 
                {
                    {
                        var_44 = ((/* implicit */unsigned char) arr_109 [i_28] [i_29]);
                        arr_124 [i_28 - 3] [2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_121 [i_26] [i_26] [i_27] [i_28] [i_29])) ? (((/* implicit */int) arr_108 [i_26])) : (((/* implicit */int) arr_122 [i_26] [i_27] [i_28] [i_29 + 2])))) > (arr_120 [i_26 + 1] [i_26 - 1] [i_26 + 2])));
                        /* LoopSeq 1 */
                        for (int i_30 = 1; i_30 < 18; i_30 += 3) 
                        {
                            arr_127 [i_26] [i_26] [i_29] = var_10;
                            arr_128 [9ULL] [i_27] [i_29] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_113 [i_30])))));
                            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) arr_112 [i_30]))));
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_118 [i_26 - 2] [i_27])) ? (arr_109 [i_26 + 2] [11ULL]) : (((/* implicit */int) var_0))));
                        }
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_126 [i_26] [i_26] [i_26] [i_26 + 2] [i_26]) : (((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) arr_118 [i_27] [(unsigned char)6])) - (19281)))))));
                        arr_129 [i_27] [i_27] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) (unsigned char)255)))) : (476215400)));
                    }
                } 
            } 
        } 
        var_48 += ((/* implicit */unsigned char) (+(((4313368435981764943ULL) % (((/* implicit */unsigned long long int) 2142312466))))));
        arr_130 [i_26] &= ((/* implicit */short) (~(arr_123 [i_26] [5] [i_26] [i_26 - 2])));
        var_49 = ((/* implicit */short) ((int) (+(var_13))));
        arr_131 [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) (unsigned char)181)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_125 [i_26 - 2] [i_26] [i_26] [i_26] [i_26])))))));
    }
    var_50 &= ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (int i_31 = 0; i_31 < 10; i_31 += 2) 
    {
        for (unsigned char i_32 = 0; i_32 < 10; i_32 += 1) 
        {
            for (int i_33 = 0; i_33 < 10; i_33 += 4) 
            {
                {
                    arr_142 [i_31] [i_32] [i_33] = ((/* implicit */int) (!((((+(((/* implicit */int) arr_31 [i_31] [i_33] [2ULL])))) != (((((/* implicit */_Bool) arr_114 [i_32] [i_33])) ? (((/* implicit */int) var_7)) : (arr_87 [i_31] [i_33] [i_33] [i_31] [i_32])))))));
                    arr_143 [i_31] [i_32] = ((/* implicit */int) 17162466115060702267ULL);
                }
            } 
        } 
    } 
}
