/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50951
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 &= ((/* implicit */long long int) (signed char)-34);
        arr_2 [i_0 - 1] [i_0] = arr_1 [i_0];
        var_12 = ((/* implicit */signed char) (_Bool)1);
        arr_3 [i_0] &= ((/* implicit */signed char) (~(((/* implicit */int) (((-(((/* implicit */int) (unsigned short)128)))) >= ((~(((/* implicit */int) (unsigned short)65407)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_13 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5564))) : (var_6));
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */unsigned long long int) var_9)) * (17669279735429775462ULL)))));
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (short)5564);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                arr_14 [i_4] = ((/* implicit */short) ((arr_12 [i_3] [i_3] [12ULL] [i_3]) >= (var_5)));
                var_15 ^= ((/* implicit */short) (~(205267444U)));
            }
            for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
            {
                arr_18 [i_1] [i_1] [i_3] [i_5 + 2] = ((/* implicit */int) (~(arr_13 [i_5] [i_5] [i_5 + 1])));
                var_16 = ((/* implicit */unsigned short) var_5);
            }
            var_17 = ((/* implicit */short) (unsigned short)65407);
            arr_19 [i_1] [1] [i_1] = ((/* implicit */short) ((0U) * (arr_13 [i_1 + 3] [i_1 - 2] [i_1 - 2])));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (_Bool)1))));
            arr_22 [i_6] = 205267444U;
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_19 = ((/* implicit */signed char) (+(arr_24 [i_1 - 2] [i_1] [i_1 - 2])));
            var_20 = ((/* implicit */_Bool) -1065195474);
        }
        arr_27 [(unsigned char)17] = ((/* implicit */unsigned short) var_8);
        /* LoopSeq 3 */
        for (short i_8 = 1; i_8 < 22; i_8 += 3) 
        {
            var_21 = (+(((/* implicit */int) (signed char)-79)));
            arr_30 [22] [22] &= ((/* implicit */unsigned int) (_Bool)1);
        }
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            arr_33 [(short)17] [i_1] [i_1] = ((/* implicit */short) (-((~(((/* implicit */int) arr_7 [i_1] [i_1]))))));
            /* LoopSeq 4 */
            for (short i_10 = 2; i_10 < 23; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_11 = 4; i_11 < 23; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 1; i_12 < 23; i_12 += 1) 
                    {
                        arr_44 [i_12] [18LL] [18LL] [i_9] [i_1] = ((/* implicit */long long int) (~(var_5)));
                        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_9)));
                        var_23 ^= ((/* implicit */unsigned char) var_9);
                        arr_45 [i_1] [i_9] [(signed char)17] [i_11] [i_12] = ((/* implicit */unsigned long long int) arr_28 [i_1] [i_10]);
                    }
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) (-(arr_31 [i_1 - 1] [i_10 - 2] [i_11 + 1])));
                        var_25 = ((/* implicit */signed char) 69865166631728506LL);
                        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                    }
                    arr_49 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_1 + 1] [i_9] [i_10] [i_10 - 2] [i_9] [i_11 - 4]))));
                }
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) 3479216801U);
                        arr_57 [i_1 - 3] [i_14] [i_10 - 1] [i_14] [i_15] [i_14] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        arr_58 [i_14] [23U] [i_10] [i_10] [i_10 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)26957))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) arr_38 [i_1 + 2] [i_1 + 2])) * (((/* implicit */int) arr_38 [i_10 - 1] [i_14]))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                    {
                        arr_62 [i_1 + 3] [i_9] [i_1 + 3] [i_14] [i_16] = ((/* implicit */short) 1LL);
                        arr_63 [i_14] [i_1] [i_9] [i_10] [i_10] [i_14] [i_16] = ((/* implicit */unsigned long long int) (-(358924852885845784LL)));
                    }
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) > (var_8)));
                        arr_68 [i_14] [i_9] [i_9] [i_10 - 2] = ((/* implicit */unsigned char) var_2);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((4294967264LL) > (((/* implicit */long long int) arr_5 [i_10])))))));
                    }
                    arr_69 [(signed char)21] [i_14] [(signed char)21] [i_14] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65407))))) >= ((+(4089699852U)))));
                    arr_70 [i_1 - 2] [i_14] [i_1 - 2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))) * (956069541U)));
                }
                /* LoopSeq 3 */
                for (signed char i_18 = 1; i_18 < 20; i_18 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (-(0U))))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (short i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        var_33 += (-(((/* implicit */int) var_3)));
                        var_34 = ((/* implicit */_Bool) ((int) (signed char)27));
                    }
                    for (int i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        arr_83 [i_18] [i_9] [i_18] [i_18 + 4] [i_21] = ((/* implicit */unsigned short) ((short) var_10));
                        var_35 = ((/* implicit */unsigned int) var_6);
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (_Bool)1))));
                        var_37 -= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)33))));
                        arr_84 [i_1] [i_18] [i_10] [i_1] [i_21] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) * ((-(arr_37 [i_10] [i_10])))));
                    }
                    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (-(((int) (short)5563)))))));
                    /* LoopSeq 1 */
                    for (int i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) var_5))));
                        arr_87 [i_1] [i_10] [i_1] &= ((/* implicit */_Bool) (-(0LL)));
                    }
                }
                for (long long int i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    var_40 = ((/* implicit */unsigned int) ((unsigned char) arr_20 [i_1] [i_9]));
                    var_41 = ((/* implicit */unsigned long long int) (-(3261379365U)));
                    var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned short)65407)))))))));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_43 = ((/* implicit */signed char) var_6);
                    var_44 = ((/* implicit */short) (~((-(arr_26 [i_9] [i_10])))));
                    var_45 = ((/* implicit */int) (+(arr_26 [i_1] [i_24])));
                }
                arr_95 [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) 0U);
            }
            for (unsigned char i_25 = 0; i_25 < 24; i_25 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_26 = 2; i_26 < 21; i_26 += 1) 
                {
                    var_46 = ((/* implicit */unsigned int) ((long long int) (unsigned short)1307));
                    /* LoopSeq 2 */
                    for (unsigned char i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        arr_104 [i_25] = ((/* implicit */unsigned long long int) (signed char)-52);
                        arr_105 [i_1] [i_1] [i_9] [i_25] [i_26] [i_27] &= ((/* implicit */unsigned int) (((-(arr_59 [i_1] [i_9] [i_27] [(_Bool)1] [i_26] [i_9]))) * (18446744073709551615ULL)));
                        var_47 -= ((/* implicit */int) (unsigned char)251);
                    }
                    for (unsigned int i_28 = 0; i_28 < 24; i_28 += 3) 
                    {
                        var_48 = (short)-24858;
                        arr_108 [i_25] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (signed char)52)))));
                        arr_109 [i_9] [i_25] [i_25] = ((/* implicit */unsigned short) var_10);
                        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) 15260816967619985399ULL))));
                        var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) arr_21 [i_9]))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_29 = 0; i_29 < 24; i_29 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned short) var_4);
                        var_52 = ((/* implicit */signed char) (+(var_6)));
                        arr_112 [i_1] [i_29] [i_9] [i_25] [i_29] [i_1] [i_29] = ((/* implicit */long long int) arr_5 [i_29]);
                        arr_113 [i_1] [i_9] [i_25] [i_26] = ((/* implicit */unsigned int) var_2);
                        var_53 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                }
                for (long long int i_30 = 2; i_30 < 20; i_30 += 1) 
                {
                    arr_116 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (short)32469)))));
                    arr_117 [i_1] [i_1] [i_25] [i_25] [i_1] [i_1] = (~((~(((/* implicit */int) (short)1)))));
                    var_54 = ((/* implicit */int) ((unsigned long long int) var_10));
                    var_55 = (+(var_0));
                }
                arr_118 [i_1] [i_25] [10U] [i_9] = ((/* implicit */int) (unsigned short)129);
                /* LoopNest 2 */
                for (signed char i_31 = 0; i_31 < 24; i_31 += 4) 
                {
                    for (unsigned long long int i_32 = 0; i_32 < 24; i_32 += 3) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned short) 8367100622898551320LL);
                            arr_126 [i_25] [i_9] [i_25] [17U] [17U] [i_32] = ((/* implicit */unsigned long long int) ((short) 2728310721U));
                            var_57 = ((/* implicit */unsigned short) (+((+(var_0)))));
                            arr_127 [i_25] [i_25] [i_25] [i_1] = ((/* implicit */unsigned short) (+(arr_121 [i_25])));
                            var_58 -= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65410))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_33 = 0; i_33 < 24; i_33 += 1) 
                {
                    var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))))));
                    arr_132 [i_33] [i_25] [(short)4] = ((/* implicit */unsigned short) (-(var_6)));
                }
            }
            for (signed char i_34 = 0; i_34 < 24; i_34 += 3) 
            {
                arr_136 [i_34] [i_34] [i_1] [i_1] = 0U;
                arr_137 [11ULL] [i_9] [i_1] = (+(var_7));
                arr_138 [i_9] [(signed char)10] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (short)8887))))));
            }
            for (signed char i_35 = 0; i_35 < 24; i_35 += 1) 
            {
                arr_142 [i_35] = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                var_60 = ((/* implicit */long long int) min((var_60), (((/* implicit */long long int) (+(-1065195474))))));
                var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)11)))))));
                var_62 = ((/* implicit */int) (((+(4294967290U))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                var_63 = ((/* implicit */unsigned int) var_1);
            }
            var_64 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)11))));
        }
        for (unsigned short i_36 = 3; i_36 < 21; i_36 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
            {
                var_65 = ((/* implicit */unsigned int) (short)-28557);
                var_66 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)89)) & (((/* implicit */int) (short)-8887))));
            }
            for (unsigned int i_38 = 2; i_38 < 23; i_38 += 2) 
            {
                arr_150 [i_1] = ((/* implicit */short) var_2);
                var_67 = ((/* implicit */short) (~(515396075520ULL)));
                /* LoopSeq 2 */
                for (int i_39 = 4; i_39 < 21; i_39 += 3) 
                {
                    arr_153 [i_1 + 3] [i_36] [i_38] [i_36] = ((/* implicit */long long int) (-(var_5)));
                    arr_154 [i_1] [i_36] [i_38] [i_1] &= ((/* implicit */unsigned short) 2924658974U);
                    arr_155 [i_1] [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) var_6);
                }
                for (unsigned short i_40 = 4; i_40 < 23; i_40 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_41 = 0; i_41 < 24; i_41 += 4) 
                    {
                        arr_160 [i_36] = ((/* implicit */unsigned int) (short)-8888);
                        var_68 = ((/* implicit */unsigned int) (signed char)-90);
                        var_69 = ((/* implicit */int) max((var_69), ((+(((/* implicit */int) (short)32462))))));
                        var_70 = ((/* implicit */short) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39085)))));
                        arr_161 [i_38] [i_40] [i_38] [i_38 - 2] [i_36] [i_36] [(signed char)6] &= ((/* implicit */_Bool) (unsigned short)14487);
                    }
                    for (unsigned char i_42 = 0; i_42 < 24; i_42 += 4) 
                    {
                        var_71 = ((/* implicit */short) (-(0U)));
                        var_72 = ((/* implicit */long long int) (-(((/* implicit */int) (short)8886))));
                        arr_166 [i_1] [i_36] = ((/* implicit */unsigned long long int) var_7);
                        arr_167 [i_1] [i_1] = ((unsigned int) (~(214387022)));
                        arr_168 [i_36 + 2] [i_38] [i_40] [i_40] = ((/* implicit */unsigned char) (short)32767);
                    }
                    var_73 = ((/* implicit */unsigned long long int) min((var_73), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15529)) ? (0U) : (((/* implicit */unsigned int) arr_110 [i_38])))))));
                }
                arr_169 [i_38 - 1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned short i_43 = 0; i_43 < 24; i_43 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_44 = 0; i_44 < 24; i_44 += 1) 
                {
                    for (long long int i_45 = 0; i_45 < 24; i_45 += 4) 
                    {
                        {
                            var_74 = ((/* implicit */long long int) ((unsigned int) (short)8917));
                            arr_177 [i_1 + 3] [i_1 + 3] [i_45] [i_44] [i_1 + 3] [i_43] [i_44] = ((/* implicit */short) var_2);
                            var_75 = ((/* implicit */short) 14500359471527929035ULL);
                            arr_178 [i_36] = ((/* implicit */int) (-(var_8)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_46 = 1; i_46 < 23; i_46 += 1) 
                {
                    for (signed char i_47 = 3; i_47 < 22; i_47 += 1) 
                    {
                        {
                            var_76 = ((/* implicit */short) 2304345005U);
                            arr_183 [i_47] [i_47] [i_43] [i_43] [i_47] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (-1) : ((~(((/* implicit */int) (short)23379))))));
                            var_77 = ((/* implicit */short) (~(214387022)));
                            var_78 = ((/* implicit */unsigned short) -214387022);
                        }
                    } 
                } 
                arr_184 [i_1] [i_36] [i_1] [i_43] = ((/* implicit */unsigned int) (-(403333279)));
                var_79 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-28557))));
            }
            for (unsigned int i_48 = 0; i_48 < 24; i_48 += 3) 
            {
                var_80 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_93 [i_1] [i_1] [i_1] [i_1 + 1] [i_36 - 2] [i_36])) ? (1264954838U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65408)))));
                arr_187 [i_1] [i_1] [i_1] [i_48] = ((/* implicit */signed char) (-(var_0)));
                /* LoopNest 2 */
                for (unsigned short i_49 = 4; i_49 < 23; i_49 += 3) 
                {
                    for (long long int i_50 = 1; i_50 < 23; i_50 += 3) 
                    {
                        {
                            var_81 += ((/* implicit */_Bool) arr_43 [i_49] [i_36] [i_36 - 3] [i_49 - 2] [i_50]);
                            var_82 = ((/* implicit */signed char) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (short)26163)))));
                            var_83 = ((/* implicit */short) min((var_83), (((/* implicit */short) (-(((/* implicit */int) (short)8898)))))));
                        }
                    } 
                } 
                arr_194 [i_36] [i_36] [i_1] = ((/* implicit */short) arr_140 [i_1] [10LL] [10LL] [10LL]);
            }
            var_84 = ((((var_0) >= (((/* implicit */unsigned long long int) 2416808057U)))) ? (((/* implicit */int) (short)8889)) : (((/* implicit */int) (short)-20265)));
            arr_195 [i_36] [i_1 + 3] = ((/* implicit */signed char) arr_23 [i_36] [i_1 - 3]);
            var_85 = ((/* implicit */long long int) (short)20264);
            /* LoopSeq 1 */
            for (long long int i_51 = 0; i_51 < 24; i_51 += 4) 
            {
                arr_198 [i_1] [i_1] [20ULL] = ((/* implicit */int) 868957566U);
                var_86 = ((/* implicit */long long int) (-(var_7)));
            }
        }
    }
    var_87 &= var_9;
}
