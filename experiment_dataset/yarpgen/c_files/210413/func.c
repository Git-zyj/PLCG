/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210413
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (unsigned char)244);
        var_18 += ((signed char) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (arr_1 [i_0] [i_0]))) || ((!(((/* implicit */_Bool) var_8))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        var_19 &= (signed char)52;
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 3; i_3 < 8; i_3 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_3 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_1 - 2] [i_3 - 1]))));
                var_21 = (+(arr_9 [i_1 - 2]));
            }
            for (unsigned int i_4 = 3; i_4 < 8; i_4 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)31)))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 8; i_5 += 1) 
                {
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        {
                            arr_23 [i_1] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))) >= ((~(((/* implicit */int) arr_15 [i_1 - 2] [i_1 - 2] [i_1]))))));
                            arr_24 [i_1 - 2] [(_Bool)1] [i_1 - 2] [i_4] [i_4] [i_5 + 2] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_5 + 2]))) : (((((/* implicit */_Bool) var_14)) ? (7292402705744715869LL) : (9223372036854775807LL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (signed char i_8 = 1; i_8 < 7; i_8 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned int) (~(7292402705744715886LL)));
                            arr_31 [i_1] [i_4] = ((/* implicit */unsigned int) ((var_0) ? (arr_30 [i_1] [i_1] [i_1] [i_4] [i_4]) : (arr_30 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_4])));
                            var_24 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) var_17)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1 - 2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_2] [i_2] [i_2] [i_4] [i_2]))) : (var_2)))) || (((/* implicit */_Bool) ((arr_29 [i_1] [8U] [i_4] [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_4])))))));
            }
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) var_16)) >= ((-(((/* implicit */int) (_Bool)1)))))))));
            arr_32 [i_1 - 1] [i_1 + 2] [i_1] = ((/* implicit */signed char) var_5);
            var_27 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_19 [i_1] [4] [i_2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1]))))));
        }
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            var_28 = arr_28 [i_1 - 2] [i_9] [i_9] [i_9];
            var_29 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ ((-9223372036854775807LL - 1LL))))));
        }
        for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))));
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                var_31 = ((/* implicit */long long int) (~(((/* implicit */int) arr_37 [i_10] [i_10] [i_1 + 1]))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_45 [i_10] = ((/* implicit */signed char) (_Bool)1);
                            var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)52)) || (((/* implicit */_Bool) var_8)))))));
                            arr_46 [i_11] [i_10] = ((/* implicit */signed char) var_1);
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_44 [i_10] [i_1]))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */int) ((unsigned char) arr_11 [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 1]));
                var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) arr_35 [i_10] [i_10] [i_1 - 2])) : (((/* implicit */int) ((var_13) != (((/* implicit */long long int) var_6)))))));
            }
            for (signed char i_14 = 3; i_14 < 7; i_14 += 3) 
            {
                arr_49 [i_1] [i_10] [i_10] = ((/* implicit */int) ((((-7292402705744715868LL) != (var_8))) ? (arr_11 [i_14 - 3] [i_10] [i_10] [i_1 + 1]) : (((var_15) << (((var_13) - (3885527560405642712LL)))))));
                arr_50 [i_10] [i_1 + 2] [i_1 + 2] [i_10] = ((/* implicit */long long int) (((((+(-1227039054))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_17 [i_10])))))));
            }
        }
        arr_51 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        var_36 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) || (((/* implicit */_Bool) arr_7 [i_1 + 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_37 = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_16]))));
            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_15] [i_15] [i_16] [i_16] [2]))) : (((((/* implicit */_Bool) (signed char)122)) ? (18067120485921408811ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (long long int i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            arr_59 [i_15] [i_15] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) var_3)))) * ((+(((/* implicit */int) arr_53 [i_17]))))));
            arr_60 [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))))) << (((var_6) - (1276595140U)))));
            /* LoopSeq 3 */
            for (short i_18 = 1; i_18 < 8; i_18 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_54 [i_15] [i_18]))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
                /* LoopNest 2 */
                for (long long int i_19 = 1; i_19 < 9; i_19 += 2) 
                {
                    for (signed char i_20 = 1; i_20 < 9; i_20 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_17)) ? (arr_27 [i_15] [i_15] [i_15] [i_19] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26370)))))));
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) arr_19 [i_15] [i_20 + 1] [i_15] [i_19] [i_20 + 1] [i_18 + 2] [i_15]))));
                        }
                    } 
                } 
                arr_69 [i_15] [i_15] [i_18] [i_15] = ((/* implicit */unsigned char) 1227039052);
                var_42 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_15] [(unsigned char)2] [i_17] [i_18 - 1])) || (((/* implicit */_Bool) arr_48 [i_15] [i_17] [i_15] [i_18 - 1]))));
            }
            for (short i_21 = 1; i_21 < 8; i_21 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_22 = 3; i_22 < 6; i_22 += 2) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_78 [i_15] [i_15] [i_15] [i_15] [i_15] [i_23] = ((/* implicit */short) (-(((arr_13 [i_15]) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-9223372036854775807LL)))));
                            var_43 = ((/* implicit */unsigned char) 2505989220U);
                            arr_79 [i_23] [i_15] [(_Bool)1] [i_17] [i_23] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_48 [i_22] [i_22] [i_23] [i_23]))));
                        }
                    } 
                } 
                arr_80 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(3755781477463930637LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_44 [i_17] [i_15])))) : (var_11)));
                var_44 = (+(((/* implicit */int) arr_67 [i_21 - 1] [i_21 - 1] [i_21] [i_21 - 1] [i_21 - 1] [i_21 + 2] [i_21])));
            }
            for (short i_24 = 1; i_24 < 8; i_24 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */signed char) arr_62 [i_24 - 1]);
                var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
            }
            /* LoopSeq 2 */
            for (signed char i_25 = 1; i_25 < 9; i_25 += 2) 
            {
                arr_87 [i_25] [i_17] [i_17] [i_17] = ((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) >= ((((_Bool)1) ? (-7292402705744715869LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                /* LoopNest 2 */
                for (unsigned int i_26 = 4; i_26 < 7; i_26 += 3) 
                {
                    for (int i_27 = 1; i_27 < 9; i_27 += 4) 
                    {
                        {
                            arr_92 [i_25] [i_17] [i_26 - 1] [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_16)) : (arr_72 [i_15] [i_17] [i_27 + 1] [i_26 + 1] [i_27] [i_27])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_28 [i_25] [i_26 + 1] [i_25] [i_25 + 1])));
                            arr_93 [i_25] [i_17] [i_17] [i_25] [i_26] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_28 [i_15] [(signed char)3] [i_15] [(signed char)3])))) || (((/* implicit */_Bool) arr_44 [i_15] [i_25]))));
                            arr_94 [i_15] [i_17] [i_15] [i_25] [i_26] [i_27] [i_27 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_64 [i_25 + 1] [(unsigned char)4] [i_26 + 2] [i_26] [i_27 + 1]))));
                            arr_95 [i_25] [i_25] = arr_55 [i_25];
                        }
                    } 
                } 
            }
            for (short i_28 = 0; i_28 < 10; i_28 += 3) 
            {
                arr_98 [i_15] [i_17] [i_15] = ((/* implicit */signed char) 9223372036854775807LL);
                arr_99 [i_15] = 3755781477463930638LL;
                var_47 = ((/* implicit */short) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (!(var_7)))) : (((182003266) << (((((-3755781477463930637LL) + (3755781477463930654LL))) - (17LL)))))));
                arr_100 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_1)) + (7966)))));
                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_65 [(signed char)5] [(signed char)5] [i_17] [i_17] [i_15]))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_29 = 0; i_29 < 10; i_29 += 1) 
            {
                var_49 = ((/* implicit */int) (+(arr_25 [i_17] [i_15])));
                var_50 = ((/* implicit */short) ((int) arr_26 [i_15] [i_17] [i_29]));
                var_51 *= ((/* implicit */_Bool) arr_15 [i_15] [i_17] [i_15]);
                arr_104 [i_17] [i_29] [i_17] [i_17] = ((/* implicit */signed char) var_8);
                arr_105 [i_15] [i_15] [i_29] = ((/* implicit */long long int) (+(((/* implicit */int) arr_54 [i_17] [i_29]))));
            }
        }
        for (signed char i_30 = 0; i_30 < 10; i_30 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_31 = 0; i_31 < 10; i_31 += 4) 
            {
                arr_112 [i_15] [6] [i_15] = ((/* implicit */int) (short)26347);
                arr_113 [(signed char)3] [i_30] [i_31] &= ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) / (((((/* implicit */_Bool) var_17)) ? (1130839091) : (((/* implicit */int) (signed char)-51)))));
            }
            for (int i_32 = 3; i_32 < 9; i_32 += 4) 
            {
                var_52 = ((/* implicit */unsigned int) var_15);
                var_53 *= ((/* implicit */unsigned int) (-((+(arr_62 [i_30])))));
                var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_14 [i_32]) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_12))))))))));
            }
            arr_116 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_35 [i_15] [i_15] [i_15]))));
            /* LoopNest 3 */
            for (unsigned short i_33 = 2; i_33 < 9; i_33 += 3) 
            {
                for (int i_34 = 0; i_34 < 10; i_34 += 2) 
                {
                    for (unsigned int i_35 = 2; i_35 < 9; i_35 += 2) 
                    {
                        {
                            var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)87)) << (((8432568260099573790LL) - (8432568260099573780LL)))))) || (((/* implicit */_Bool) arr_21 [i_15] [i_15] [i_33] [i_33 - 2] [i_33]))));
                            arr_124 [i_33] [i_30] [i_33] = ((/* implicit */int) var_14);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_36 = 0; i_36 < 10; i_36 += 4) /* same iter space */
        {
            var_56 *= ((/* implicit */unsigned char) arr_61 [8LL] [8LL]);
            /* LoopNest 2 */
            for (long long int i_37 = 0; i_37 < 10; i_37 += 3) 
            {
                for (short i_38 = 0; i_38 < 10; i_38 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_39 = 1; i_39 < 7; i_39 += 4) 
                        {
                            arr_136 [i_15] [i_15] [i_15] [i_37] [i_38] [i_39] [i_15] = ((/* implicit */long long int) arr_17 [i_37]);
                            arr_137 [1] [i_39] [i_37] [(signed char)1] [9U] [1] [i_39] = ((/* implicit */_Bool) arr_53 [1]);
                            var_57 = ((/* implicit */int) min((var_57), (((/* implicit */int) var_16))));
                        }
                        for (unsigned int i_40 = 0; i_40 < 10; i_40 += 4) 
                        {
                            var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (636223746U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_15] [i_15] [i_36] [i_36] [i_37] [2] [i_40])))))) : (var_15)));
                            var_59 *= ((/* implicit */unsigned long long int) (~(arr_82 [i_15] [i_40] [i_40] [i_38])));
                            arr_140 [i_40] [i_40] [i_40] [i_40] [i_40] [i_40] [i_40] &= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)3)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26381)))))));
                        }
                        for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                        {
                            arr_145 [i_37] [i_36] [i_37] [i_37] [i_38] [i_41] = ((/* implicit */short) arr_97 [i_15] [i_36]);
                            var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-52)) || (((/* implicit */_Bool) (short)26381)))))));
                        }
                        for (int i_42 = 0; i_42 < 10; i_42 += 4) 
                        {
                            var_61 = ((/* implicit */_Bool) min((var_61), (((/* implicit */_Bool) ((long long int) var_1)))));
                            var_62 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) arr_86 [i_15] [i_15] [i_37] [i_38]))))));
                            var_63 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_147 [i_15] [i_15] [i_15] [i_15] [(signed char)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_119 [i_36] [i_36] [i_42]))))));
                        }
                        arr_149 [i_38] [i_38] [i_37] [i_38] = ((((/* implicit */int) arr_15 [i_15] [i_15] [i_37])) * (((/* implicit */int) arr_15 [i_15] [i_36] [i_37])));
                    }
                } 
            } 
            var_64 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) arr_74 [i_15] [i_15] [i_15])))));
        }
        /* LoopNest 3 */
        for (signed char i_43 = 0; i_43 < 10; i_43 += 3) 
        {
            for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) 
            {
                for (signed char i_45 = 1; i_45 < 7; i_45 += 4) 
                {
                    {
                        var_65 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((9223372036854775800LL) - (9223372036854775778LL)))))));
                        arr_159 [i_43] [i_45 + 2] [i_44] [i_15] [i_15] [i_43] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_54 [i_15] [i_43])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))) >= (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) (short)24227)) - (24227)))))));
                        /* LoopSeq 3 */
                        for (long long int i_46 = 4; i_46 < 9; i_46 += 3) 
                        {
                            var_66 = (-(((/* implicit */int) arr_73 [i_45 + 2] [i_46 - 2] [i_46 - 2] [i_46 - 4])));
                            var_67 = ((/* implicit */short) min((var_67), (((/* implicit */short) var_0))));
                        }
                        for (signed char i_47 = 0; i_47 < 10; i_47 += 3) 
                        {
                            arr_166 [i_15] [i_43] [i_44] [i_45] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10)))) ? ((-(var_15))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-56)))));
                            arr_167 [i_15] [i_43] [i_43] [i_43] [i_47] [i_45] [i_45] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_143 [i_45] [i_45 - 1] [i_45 + 1] [i_43] [i_45 + 3] [i_45])) ? (((/* implicit */int) arr_143 [i_45] [i_45 + 3] [i_45 + 2] [i_43] [i_45 + 1] [i_45 + 2])) : (((/* implicit */int) arr_143 [i_45] [i_45 + 2] [i_45 + 2] [i_43] [i_45 + 1] [i_45 + 3]))));
                        }
                        for (long long int i_48 = 0; i_48 < 10; i_48 += 3) 
                        {
                            arr_172 [i_15] [i_15] [i_15] [i_43] [7ULL] [0U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_15) : (arr_44 [i_15] [i_43])))) ? (arr_61 [i_44] [i_44]) : ((-(var_15))));
                            var_68 = var_15;
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_49 = 0; i_49 < 21; i_49 += 3) 
    {
        arr_175 [7LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        var_69 ^= ((/* implicit */long long int) (-((~(((/* implicit */int) min(((signed char)41), (((/* implicit */signed char) (_Bool)1)))))))));
        arr_176 [i_49] = ((/* implicit */short) arr_0 [(_Bool)1]);
    }
}
