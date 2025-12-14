/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243004
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
    var_18 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)49727)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32749)))))))) : (arr_6 [i_2]));
                    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0] [i_1 + 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) : (4294967295U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) : (-392463516735152883LL)))) : (var_2))) : (((((/* implicit */_Bool) ((arr_5 [i_1] [i_1 + 3] [i_0] [i_2]) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)15] [i_1 - 1] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                    var_21 = ((/* implicit */unsigned short) arr_4 [i_1]);
                    arr_7 [i_2] [(short)20] [i_2] = ((/* implicit */unsigned short) arr_4 [i_0]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (+(arr_1 [10U])));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 2; i_6 < 18; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) arr_12 [(unsigned char)12] [i_3] [i_3]);
                            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_3)) : (var_16)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_6 [(_Bool)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) arr_16 [i_3] [i_4 - 1]);
                            var_27 = ((/* implicit */unsigned short) arr_16 [i_4 - 1] [(unsigned short)13]);
                        }
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_9)))) ? ((~(((/* implicit */int) (unsigned short)5479)))) : (((/* implicit */int) (signed char)-42)))))));
                    }
                    var_29 = ((/* implicit */short) (+(var_14)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            var_30 = ((/* implicit */short) (-(((/* implicit */int) arr_21 [i_3] [i_3]))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_9])) ? (arr_26 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_20 [i_3] [(_Bool)1] [i_9]))));
        }
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_12 = 1; i_12 < 22; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    var_32 |= ((/* implicit */unsigned int) arr_34 [i_10] [i_11]);
                    arr_39 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-19252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))) : (0U)));
                }
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_12)) ? (arr_32 [8U]) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765)))));
                var_34 = ((/* implicit */unsigned long long int) (unsigned short)36174);
            }
            for (unsigned short i_14 = 2; i_14 < 22; i_14 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) arr_27 [i_14 + 2]))));
                    var_36 = ((/* implicit */short) var_7);
                    arr_44 [i_15] [(unsigned char)18] [(short)17] [(unsigned char)18] [(unsigned short)22] = ((/* implicit */unsigned char) var_13);
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_10] [i_11] [i_14 + 1])))))));
                }
                for (unsigned short i_16 = 2; i_16 < 21; i_16 += 4) 
                {
                    arr_48 [i_10] [i_10] = ((/* implicit */signed char) var_15);
                    arr_49 [i_10] = arr_42 [i_16] [i_14] [i_10];
                    var_38 = ((/* implicit */unsigned char) var_16);
                    arr_50 [i_16] [i_10] [i_14 - 1] [i_11] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_32 [i_16])))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_40 [i_14] [i_11] [i_10])) ? (6332087613107201102LL) : (((/* implicit */long long int) var_3))))));
                }
                for (unsigned int i_17 = 1; i_17 < 23; i_17 += 2) 
                {
                    var_39 = ((/* implicit */short) (-(var_16)));
                    arr_55 [i_10] [i_10] [i_10] = ((/* implicit */signed char) arr_52 [i_17 - 1] [i_14 + 1] [i_11] [i_10]);
                    var_40 = ((/* implicit */signed char) (short)-19396);
                    arr_56 [i_10] [i_11] [i_11] [(short)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (arr_1 [i_10]) : (arr_4 [i_14])))) ? (((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_11] [i_14])))));
                }
                for (unsigned long long int i_18 = 2; i_18 < 22; i_18 += 1) 
                {
                    arr_59 [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) var_0);
                    /* LoopSeq 4 */
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) var_10);
                        arr_64 [i_10] [i_11] [i_14] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5469)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5682))) : (2449249964U)));
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) -3980377563827200160LL))));
                        var_43 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_1))))));
                    }
                    for (short i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        arr_68 [i_10] [i_10] [i_18] [i_10] [i_10] [i_10] = arr_31 [(short)18];
                        var_44 = ((/* implicit */long long int) var_1);
                        arr_69 [19U] [i_11] [i_18] [i_18] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_14 - 2] [i_18 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (var_6)));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) (signed char)43))))) ? (var_17) : (arr_45 [i_10] [i_10] [i_10] [i_10])));
                    }
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_17)));
                        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [1])) ? (-397488129) : (((/* implicit */int) var_7)))))));
                        var_48 = ((/* implicit */_Bool) (-(12294979914601797888ULL)));
                    }
                    for (unsigned short i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        arr_74 [i_18] [i_14] [i_22] = arr_57 [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14];
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) var_0))));
                        var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5682))) : (((((/* implicit */_Bool) (unsigned short)30727)) ? (var_9) : (arr_37 [i_10] [i_10] [i_10] [i_18])))));
                    }
                    arr_75 [i_18] [i_14] [0U] [i_18] = ((/* implicit */int) var_15);
                    var_51 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned long long int) arr_28 [i_10]))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)33)))))));
                }
                var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_53 [i_14 - 1] [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [(short)18] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 24; i_23 += 1) 
            {
                var_53 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_57 [i_11] [i_11] [i_10] [(signed char)1] [i_10])) : (((/* implicit */int) var_1))))) ? (15801059302653340347ULL) : (((((/* implicit */_Bool) var_2)) ? (8363231274492274118ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                var_54 = ((/* implicit */unsigned char) (_Bool)1);
                var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) (signed char)-74))));
            }
            /* LoopNest 3 */
            for (unsigned char i_24 = 0; i_24 < 24; i_24 += 4) 
            {
                for (long long int i_25 = 2; i_25 < 21; i_25 += 3) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            arr_87 [i_10] [i_26] [i_10] = ((/* implicit */unsigned long long int) var_11);
                            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2718765647U)) ? (((/* implicit */unsigned long long int) 3992713268U)) : (10585857109842535946ULL)));
                            var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 7900228252828060518ULL)) ? (var_8) : (var_0))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_27 = 0; i_27 < 24; i_27 += 3) 
        {
            var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1057887666588715238ULL)) ? (var_9) : (((/* implicit */unsigned int) arr_54 [i_10] [i_10] [i_10] [i_27] [(signed char)1] [i_27]))));
            var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) var_12))));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_28] [i_28] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [5LL]))) : (((((/* implicit */_Bool) arr_30 [20U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8248158138411437449ULL)))));
            arr_93 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7543497438304716785ULL)) ? (10903246635404834832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19402)))));
            var_61 = ((/* implicit */unsigned long long int) ((arr_63 [i_10] [i_28] [i_10] [i_10] [i_10] [i_10] [i_28]) ? (((/* implicit */int) arr_63 [i_28] [i_28] [i_28] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_63 [i_10] [i_10] [i_28] [(short)6] [i_10] [(unsigned char)12] [i_28]))));
        }
        var_62 = ((/* implicit */_Bool) var_4);
    }
}
