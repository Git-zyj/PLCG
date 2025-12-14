/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233981
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
    var_12 = ((/* implicit */_Bool) min((max((min((((/* implicit */unsigned int) var_11)), (var_2))), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_11)))))))));
    var_13 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        var_15 = ((/* implicit */int) var_1);
        arr_4 [i_0] = ((/* implicit */signed char) arr_3 [i_0]);
    }
    for (long long int i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((short) arr_2 [(_Bool)1]));
        arr_7 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) var_7))), (max((((/* implicit */unsigned int) arr_3 [i_1])), (var_2)))))), (max((((/* implicit */unsigned long long int) (-(arr_5 [i_1] [i_1])))), (max((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 + 1]))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        arr_10 [6LL] [6LL] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_11 [i_2 - 1] = ((/* implicit */short) arr_9 [i_2]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            arr_16 [(short)3] [i_2] = ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                arr_20 [i_4] [i_3] = ((/* implicit */short) ((signed char) (-(arr_5 [i_3] [i_3]))));
                arr_21 [i_4] [i_4] [4] [4] = ((/* implicit */signed char) (~((+(var_2)))));
                var_17 = ((/* implicit */int) arr_15 [i_3]);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_24 [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_2]))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) (+(arr_18 [i_2])));
                            var_19 = ((/* implicit */unsigned long long int) var_11);
                            arr_31 [i_2 - 1] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_8 [(unsigned short)11] [i_6 + 2]);
                            arr_32 [i_2] [i_5] [i_5] [i_6] [i_7] = var_6;
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) arr_22 [i_5]);
                    arr_37 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_3] [i_5] [i_5] [i_3] [i_3] [i_3] [(signed char)5])) ? ((+(var_1))) : (((/* implicit */long long int) var_9))));
                    arr_38 [6LL] [i_5] [i_3] [i_5] [i_8] = ((/* implicit */unsigned long long int) var_11);
                    arr_39 [i_2 - 2] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_4);
                }
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        arr_46 [i_2 - 1] [i_3] [i_5] [i_5] [i_9] [i_9] [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_45 [i_2 - 1] [i_2 - 1] [i_5] [i_10]))));
                        arr_47 [i_9] [i_3] [i_5] [i_9] [i_10] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                        var_21 = ((/* implicit */unsigned char) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_10] [i_9]))) : (2928228422711755103LL)))));
                    }
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) -808350049);
                        arr_50 [i_2] [i_5] [i_5] [i_3] [(unsigned char)1] [0U] = (+((+(((/* implicit */int) arr_41 [i_11] [i_5] [i_5] [(signed char)4])))));
                    }
                    arr_51 [i_5] [i_3] [1LL] [i_9] = var_1;
                }
            }
            for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 1) 
            {
                arr_56 [i_2 + 1] [11LL] [i_3] [i_12 + 3] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_12 [i_2] [i_2]))))));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 2; i_13 < 11; i_13 += 4) 
                {
                    arr_59 [i_2] [i_3] = ((/* implicit */unsigned int) (+((+(var_7)))));
                    arr_60 [i_12] = ((/* implicit */unsigned char) var_7);
                    arr_61 [i_13 - 1] [i_12] [i_3] = ((/* implicit */short) arr_58 [i_2] [i_2] [i_12 - 2] [i_13 + 1]);
                    arr_62 [i_2] [i_2] [i_3] [i_2] [i_13 - 2] = ((/* implicit */unsigned char) (~((-(var_9)))));
                }
            }
            var_23 = (~(((/* implicit */int) var_10)));
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) var_8);
            var_25 = ((/* implicit */unsigned char) 977973652U);
            arr_66 [i_14] [(signed char)3] [(unsigned short)11] = ((/* implicit */long long int) var_10);
        }
        for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) (-(arr_9 [i_2 + 1])));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    {
                        arr_74 [i_2] [i_15 - 1] [(unsigned char)10] [i_17] [i_15] = max((((/* implicit */unsigned long long int) var_7)), (arr_42 [i_2 + 1] [i_15 - 1] [i_15 + 2] [i_16] [i_17]));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_7)));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (long long int i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                arr_77 [i_2] [i_15 + 3] [i_2] [i_18] = ((/* implicit */_Bool) (+(max(((+(arr_58 [i_2 - 2] [i_15] [i_18] [i_15]))), (max((((/* implicit */long long int) (unsigned short)6760)), (var_7)))))));
                var_28 = ((/* implicit */unsigned long long int) (-((+((~(((/* implicit */int) var_5))))))));
                arr_78 [i_2 - 1] [i_15 + 3] [i_15 + 3] = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) ((int) 6929094873262296429ULL))), (arr_5 [i_15 + 3] [i_15 + 3]))), (((/* implicit */unsigned int) var_9))));
            }
            for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                arr_81 [i_2 + 1] [i_2 + 1] = ((/* implicit */short) arr_67 [i_2] [i_15]);
                arr_82 [i_2] [1LL] [i_2] = ((/* implicit */short) (-(min((min((((/* implicit */long long int) var_11)), (var_7))), (((/* implicit */long long int) (-(arr_23 [i_15 + 1] [1U] [i_2 - 1] [i_15]))))))));
                var_29 = ((/* implicit */unsigned int) max((max((((/* implicit */int) (unsigned short)26486)), ((+(((/* implicit */int) var_11)))))), (((/* implicit */int) var_3))));
            }
            for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 4) 
            {
                var_30 = ((/* implicit */unsigned int) var_9);
                var_31 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) arr_25 [i_20] [i_15 - 1] [i_2] [i_2 - 1])), (max((arr_29 [i_15 + 1] [i_15 + 2] [i_15 + 3] [i_15 + 1] [i_2]), (((/* implicit */unsigned short) var_11)))))), (arr_84 [i_2] [i_15 + 1] [i_15] [i_20])));
            }
            for (unsigned char i_21 = 2; i_21 < 9; i_21 += 4) 
            {
                arr_87 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) arr_54 [i_2] [i_15 + 2] [i_15 + 2])), (((((/* implicit */_Bool) arr_29 [i_2] [i_15] [2LL] [i_2 - 2] [i_21])) ? (var_6) : (((/* implicit */unsigned long long int) -2147483644)))))) : (((/* implicit */unsigned long long int) var_7))));
                var_32 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_28 [i_21] [i_21] [i_15] [i_15 - 1] [i_2] [i_2 - 1] [i_2])), (max((var_2), (((/* implicit */unsigned int) arr_71 [i_21] [i_15 - 1]))))));
            }
            arr_88 [i_15] = ((/* implicit */unsigned char) arr_29 [i_2] [i_15] [i_15] [i_2] [i_2]);
        }
        /* vectorizable */
        for (unsigned long long int i_22 = 1; i_22 < 9; i_22 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 4) 
            {
                var_33 = ((/* implicit */long long int) -2147483645);
                arr_94 [i_2] = ((/* implicit */unsigned char) (-(arr_64 [i_2] [i_2])));
                var_34 = ((/* implicit */short) (~(var_8)));
            }
            for (unsigned int i_24 = 1; i_24 < 10; i_24 += 4) 
            {
                var_35 = ((/* implicit */int) arr_13 [i_2 - 2]);
                arr_99 [i_2] [i_22] [i_2] [i_24] = ((/* implicit */unsigned short) (-((~(arr_80 [i_24] [i_24] [i_24] [(unsigned short)11])))));
                arr_100 [i_2] [i_22] [i_24] = ((/* implicit */int) (_Bool)1);
            }
            arr_101 [i_2 + 1] = ((signed char) var_8);
            /* LoopSeq 1 */
            for (unsigned char i_25 = 1; i_25 < 10; i_25 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_26 = 2; i_26 < 10; i_26 += 4) 
                {
                    arr_107 [i_22] [i_25] [i_26 + 2] = ((/* implicit */unsigned long long int) (-(arr_18 [i_2 - 2])));
                    arr_108 [i_25 + 1] [i_2] = ((/* implicit */int) (+((-(arr_23 [i_22] [i_22 + 2] [i_22] [i_26 + 1])))));
                    var_36 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_33 [i_2] [i_22 + 3])) : (197243765)))));
                }
                for (unsigned short i_27 = 1; i_27 < 9; i_27 += 4) 
                {
                    var_37 = ((/* implicit */unsigned char) (+(arr_23 [(unsigned char)4] [i_25] [1LL] [i_2])));
                    arr_113 [i_27] [i_25] [i_22 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_27] [i_27] [i_25] [i_22 - 1] [1U]))))) ? (((/* implicit */unsigned long long int) arr_9 [(short)1])) : (15481671346706841097ULL)));
                }
                /* LoopSeq 3 */
                for (unsigned int i_28 = 0; i_28 < 12; i_28 += 4) 
                {
                    arr_118 [i_22] = ((/* implicit */long long int) (+(var_6)));
                    arr_119 [i_22 + 3] = ((/* implicit */short) arr_29 [i_2 - 2] [9ULL] [9ULL] [i_28] [i_2 - 1]);
                }
                for (unsigned int i_29 = 4; i_29 < 11; i_29 += 4) 
                {
                    var_38 = ((/* implicit */unsigned char) (-(var_6)));
                    arr_124 [i_2 + 1] [i_22] [i_25] [i_29 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_65 [i_2] [i_25 - 1] [i_29 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : ((-(var_1)))));
                }
                for (signed char i_30 = 1; i_30 < 11; i_30 += 4) 
                {
                    var_39 = (-((-(1969048301U))));
                    arr_129 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17040)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))) : (arr_114 [i_30 - 1] [i_25] [i_22] [i_22] [i_2 + 1])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))));
                }
            }
            var_40 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_49 [i_2] [i_2] [i_2] [i_22])) ? (var_1) : (var_7))));
            /* LoopSeq 2 */
            for (short i_31 = 0; i_31 < 12; i_31 += 1) 
            {
                arr_132 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */long long int) var_8)) : (arr_9 [i_2])));
                var_41 = ((/* implicit */signed char) arr_34 [i_2] [i_2] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_22]);
                arr_133 [i_31] [i_2 - 2] = ((/* implicit */unsigned char) (~((-(arr_0 [i_2 - 2])))));
            }
            for (unsigned char i_32 = 2; i_32 < 9; i_32 += 1) 
            {
                var_42 = ((/* implicit */short) (-(var_2)));
                /* LoopSeq 4 */
                for (long long int i_33 = 0; i_33 < 12; i_33 += 4) 
                {
                    var_43 = ((/* implicit */int) var_4);
                    arr_139 [i_2 + 1] [0LL] = ((/* implicit */int) (+(var_2)));
                    var_44 = ((/* implicit */unsigned char) ((unsigned long long int) var_3));
                }
                for (int i_34 = 0; i_34 < 12; i_34 += 4) 
                {
                    var_45 = ((/* implicit */unsigned char) ((unsigned long long int) 14249191426596980480ULL));
                    arr_142 [i_32] [i_22 + 1] [i_2] = ((/* implicit */unsigned int) (-(var_7)));
                    var_46 = ((/* implicit */unsigned char) (-(var_9)));
                    /* LoopSeq 1 */
                    for (unsigned char i_35 = 0; i_35 < 12; i_35 += 1) 
                    {
                        var_47 = ((/* implicit */long long int) arr_30 [i_2] [i_2] [i_2] [i_32 - 1] [i_34] [i_35] [i_34]);
                        var_48 = ((/* implicit */unsigned int) (~((~(var_7)))));
                    }
                }
                for (unsigned long long int i_36 = 0; i_36 < 12; i_36 += 1) 
                {
                    var_49 = ((/* implicit */int) arr_42 [i_2] [i_2] [i_22 + 1] [i_32 - 1] [i_32 - 1]);
                    var_50 = (~(((((/* implicit */_Bool) var_6)) ? (arr_146 [i_2] [i_36] [i_32] [i_36] [7ULL] [3ULL]) : (((/* implicit */long long int) arr_18 [i_2])))));
                }
                for (short i_37 = 0; i_37 < 12; i_37 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_38 = 0; i_38 < 12; i_38 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned short) (_Bool)1);
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_121 [i_38] [11ULL] [i_32 + 1] [i_22] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1U)) ? (arr_6 [i_38]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30377)))))) : (var_6)));
                        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_138 [i_2] [i_22] [i_32] [i_22])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18883)))));
                        arr_153 [0U] [i_2] [i_37] [(short)6] [11LL] [i_38] = ((/* implicit */unsigned short) 3586185850947009540LL);
                        var_54 = ((/* implicit */long long int) arr_73 [i_2] [i_22 - 1] [i_37]);
                    }
                    for (unsigned long long int i_39 = 4; i_39 < 10; i_39 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned short) -4260237815288973263LL);
                        var_56 = ((/* implicit */unsigned long long int) arr_131 [i_22 + 2] [i_22 + 2]);
                    }
                    var_57 = ((/* implicit */unsigned long long int) arr_96 [i_2 - 2] [i_32 + 2] [i_32 - 1]);
                }
                /* LoopSeq 3 */
                for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
                {
                    var_58 = ((/* implicit */unsigned short) arr_103 [i_32] [i_22] [i_32]);
                    var_59 = ((/* implicit */_Bool) var_5);
                }
                for (long long int i_41 = 2; i_41 < 11; i_41 += 4) 
                {
                    arr_162 [i_2 + 1] [i_2 + 1] [i_41 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                    var_60 = ((((/* implicit */_Bool) arr_91 [i_22 + 1])) ? (var_6) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_143 [i_2] [i_32 + 1] [i_22] [i_22 + 2] [5LL] [i_2]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_42 = 1; i_42 < 9; i_42 += 4) 
                    {
                        var_61 = ((/* implicit */unsigned char) arr_70 [i_42] [i_32] [i_22 - 1]);
                        arr_166 [i_2 + 1] [i_22] [i_32] [2] [i_42] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_164 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]))))));
                        var_62 = ((/* implicit */unsigned short) 1554307161);
                        var_63 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_76 [i_22 + 3] [i_32] [i_41]))));
                    }
                    for (unsigned short i_43 = 1; i_43 < 10; i_43 += 1) 
                    {
                        var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_147 [i_2] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_105 [i_41] [i_41 - 1] [i_41 - 2] [i_41 - 1])))) : (var_7)));
                        var_65 = ((/* implicit */unsigned short) ((unsigned long long int) arr_114 [i_2 - 1] [i_2] [i_2] [i_2 - 2] [i_2]));
                        var_66 = var_4;
                        var_67 = ((/* implicit */int) arr_52 [i_2 - 1]);
                    }
                    for (unsigned char i_44 = 0; i_44 < 12; i_44 += 1) 
                    {
                        var_68 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_33 [i_44] [i_41 - 1]))));
                        arr_172 [i_2] [i_44] [i_32 + 2] [i_44] [i_41] [i_44] = ((/* implicit */long long int) (~(2965072727002710519ULL)));
                        var_69 = ((/* implicit */unsigned long long int) (-((+(arr_135 [i_22] [i_22] [i_32] [i_32])))));
                    }
                    var_70 = ((/* implicit */long long int) arr_167 [i_22] [i_2 + 1]);
                }
                for (unsigned int i_45 = 3; i_45 < 8; i_45 += 4) 
                {
                    var_71 = var_6;
                    var_72 = ((/* implicit */_Bool) arr_53 [i_2] [i_22] [5LL] [i_45 - 2]);
                    arr_176 [i_2] [i_2] [i_32 - 1] [i_22] [i_2] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_45 [i_2] [i_22 + 2] [i_2] [i_45]))))));
                }
                arr_177 [i_2 - 1] [i_22] [i_32] = ((/* implicit */long long int) (-(var_9)));
                var_73 = ((/* implicit */unsigned long long int) arr_97 [i_2] [i_32]);
            }
        }
    }
    for (unsigned int i_46 = 0; i_46 < 14; i_46 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_47 = 0; i_47 < 14; i_47 += 1) 
        {
            var_74 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) max((arr_5 [(_Bool)1] [i_47]), (arr_6 [(_Bool)1])))), (var_1))), (((/* implicit */long long int) (unsigned short)46652))));
            var_75 = ((/* implicit */unsigned short) arr_181 [(unsigned char)13] [i_46] [(unsigned char)13]);
            arr_182 [i_46] [i_47] [i_47] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(arr_180 [i_46] [i_47])))) ? (arr_0 [i_46]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_178 [(unsigned short)10] [i_46])), (arr_5 [i_46] [i_46]))))))));
            arr_183 [i_46] [i_47] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_47]) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_5)))))))));
        }
        arr_184 [i_46] = ((/* implicit */signed char) var_10);
    }
    var_76 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(var_7)))), ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6)))))));
}
