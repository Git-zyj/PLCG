/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28337
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)13085)) ? (((/* implicit */unsigned long long int) ((int) arr_3 [i_1 + 3] [i_1 - 1]))) : (((((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) var_12)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1])))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)11] [i_2 + 1] [i_2 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_1 + 1] [i_3 - 1] [i_2 - 3])) ? (arr_8 [i_2 - 2] [i_1 + 1] [i_3 - 1] [(short)4]) : (arr_8 [i_2 - 1] [(unsigned char)12] [i_3 - 1] [(unsigned char)12])))) : (arr_2 [i_0])));
                                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0]);
                                var_18 = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 3])) : (arr_10 [i_0] [i_1] [i_1 - 1] [i_0] [(_Bool)1] [i_1] [i_0])))))))));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 9; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned short) max(((-(arr_1 [i_5 + 1] [i_1 + 4]))), (((((/* implicit */_Bool) max(((short)13085), ((short)24277)))) ? (arr_12 [(signed char)0] [i_1] [i_1]) : (((/* implicit */unsigned int) (-(-1056243850))))))));
                                arr_21 [i_0] [(signed char)9] [i_5] [i_5] [11] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)46695)) ? (((/* implicit */int) (unsigned short)10486)) : (((/* implicit */int) (short)-24297))));
                                var_21 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-104)) == (((/* implicit */int) arr_20 [8U] [8U] [i_1 + 3] [i_1 + 2] [8U] [i_6] [i_7]))))) - ((~(((((/* implicit */_Bool) (short)24277)) ? (((/* implicit */int) (unsigned short)46696)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_22 [(short)9] [i_5] = ((((/* implicit */int) ((((((arr_3 [i_0] [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (70))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_7]))))))) / (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-10423)) : (((/* implicit */int) (short)24277)))));
                            }
                            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                            {
                                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_6 [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 3]), (((/* implicit */int) arr_24 [i_0] [i_1 + 4] [i_8 + 1] [i_1] [i_8]))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)12294))))), (max((var_12), (((/* implicit */unsigned int) (short)10422))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-2147483647 - 1))) * (arr_18 [i_5] [(short)4])))) ? (((((/* implicit */_Bool) (short)-13085)) ? (1901988490673154358LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)10424)))))))));
                                arr_25 [(unsigned short)2] [i_1 - 1] [i_5] [i_1 - 1] [i_6] [i_8] = ((/* implicit */signed char) max((((arr_2 [i_8 + 1]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [(_Bool)1] [i_8])) >> (((arr_3 [i_0] [3LL]) + (80264930860373929LL)))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((short)24277), (((/* implicit */short) var_6))))), (max((((/* implicit */unsigned int) arr_4 [i_6] [i_5 - 3] [i_1])), (arr_14 [i_0] [i_0] [i_0]))))))));
                                arr_26 [i_1 + 3] [i_6] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_15 [i_1 - 2] [i_8 + 1] [i_1 - 2] [i_5]))) << (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)24434)) : (((/* implicit */int) (signed char)(-127 - 1))))) + (129)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_15 [i_1 - 2] [i_8 + 1] [i_1 - 2] [i_5]))) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)24434)) : (((/* implicit */int) (signed char)(-127 - 1))))) + (129))) - (1))))));
                            }
                            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */short) 55218797);
                                arr_29 [5] [5] [i_5] [5] [i_1] = ((/* implicit */int) var_6);
                                arr_30 [i_9 + 1] [i_1] [i_5] [i_6] [i_9 + 1] [(unsigned short)2] [i_1 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1 + 3] [i_5 - 3] [i_9 + 1] [i_6] [i_5 - 3] [i_9]))) : (((((/* implicit */_Bool) arr_5 [i_5 - 1] [i_1 + 2])) ? (var_3) : (arr_2 [i_0])))));
                            }
                            arr_31 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */short) arr_0 [i_5 - 4] [i_5 - 4]);
                        }
                    } 
                } 
                arr_32 [(unsigned short)9] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_23 [i_1] [i_1]), (((/* implicit */int) (short)-22246))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] [9LL] [i_1 - 2])) * (arr_2 [i_0])))) ? (min((arr_14 [(_Bool)1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [(_Bool)1] [(signed char)10]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-13084)) || ((_Bool)1)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_6))));
    var_25 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            {
                var_26 -= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_38 [i_10] [i_11])), (var_12))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10] [i_11])))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 4; i_12 < 17; i_12 += 3) 
                {
                    for (int i_13 = 4; i_13 < 18; i_13 += 4) 
                    {
                        {
                            arr_47 [i_13 - 4] [i_12 + 1] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-123)) ? (1901988490673154358LL) : (((/* implicit */long long int) 2235149964U))));
                            var_27 = max((arr_39 [i_12] [i_11] [i_11]), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_46 [i_12] [i_12 - 2] [i_13 + 1] [i_13]))))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((((/* implicit */long long int) arr_33 [i_13 + 1] [i_12 - 2])), (((((/* implicit */_Bool) arr_38 [i_12 - 1] [i_13 - 1])) ? (((((/* implicit */_Bool) arr_38 [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46695))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-10429), ((short)10418))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_14 = 2; i_14 < 16; i_14 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                        {
                            {
                                var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-13086)) / (((/* implicit */int) (short)-12305))));
                                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) max((((int) max((((/* implicit */unsigned short) var_9)), (arr_38 [i_10] [i_10])))), (((/* implicit */int) ((unsigned short) ((int) arr_46 [i_10] [i_10] [i_10] [i_10])))))))));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_10] [i_11] [i_10] [i_10])) ? (max((arr_41 [i_10] [i_11] [i_16]), (((/* implicit */int) max((((/* implicit */short) var_7)), (arr_49 [i_16] [i_14] [i_10])))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)11)) == (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) arr_48 [i_11] [i_11] [i_14 + 3] [i_11]);
                                var_33 *= ((/* implicit */short) arr_33 [i_17] [i_18]);
                                var_34 = ((/* implicit */int) arr_39 [i_10] [i_11] [i_11]);
                            }
                        } 
                    } 
                }
                for (long long int i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    var_35 |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1242648862)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1868))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_10] [i_10] [i_19] [i_19] [i_11]))) < (var_8)))) : (((/* implicit */int) arr_34 [i_19] [i_11])))) != (((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_6)))) ? (((/* implicit */int) min((arr_64 [i_10] [i_10] [i_11]), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) arr_52 [i_19] [i_11] [i_19]))))));
                    arr_65 [i_10] [i_11] [i_19] [i_19] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_38 [(unsigned short)7] [i_10]))))) - (min((((/* implicit */unsigned long long int) var_0)), (arr_35 [i_10])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_63 [14] [i_10] [i_19]) : (((/* implicit */int) arr_50 [i_10] [i_10] [i_10] [i_10]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_43 [i_10] [i_10] [i_10] [i_19]))))) : (var_3));
                    /* LoopSeq 3 */
                    for (int i_20 = 4; i_20 < 17; i_20 += 2) /* same iter space */
                    {
                        arr_69 [i_10] [i_11] [i_11] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10] [i_10])) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22246)) ? (1994924120) : (((/* implicit */int) (short)-27992))))), (max((-2361429427436180725LL), (((/* implicit */long long int) (short)-22270)))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_10] [i_10])) ? (((/* implicit */int) arr_51 [i_20] [i_20] [i_19] [i_20])) : (((/* implicit */int) arr_40 [i_10] [18]))))), (var_14))))));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (max((((((/* implicit */_Bool) arr_63 [i_10] [i_10] [(short)0])) ? (arr_59 [i_10] [i_11] [(_Bool)1] [i_11]) : (var_15))), (((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-97))))))));
                        arr_70 [i_20] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-10423)) * (((/* implicit */int) (short)24238))));
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_10] [i_10])) % (arr_61 [i_10] [i_11] [i_19] [i_20] [i_19] [i_20 - 3] [i_10])))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_20 - 1] [i_11])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10425))) : (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (8330817607735998929ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (var_15))))))));
                    }
                    /* vectorizable */
                    for (int i_21 = 4; i_21 < 17; i_21 += 2) /* same iter space */
                    {
                        arr_73 [9U] [(_Bool)1] [18ULL] [i_19] [i_10] [i_11] = ((/* implicit */unsigned int) arr_38 [i_10] [i_10]);
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_10] [i_10] [i_19] [i_21])) ? (arr_44 [i_10] [(_Bool)1] [i_19] [i_19]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_50 [i_10] [(_Bool)1] [i_19] [i_10])))))));
                    }
                    /* vectorizable */
                    for (int i_22 = 4; i_22 < 17; i_22 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */int) (_Bool)1);
                        arr_76 [i_10] [(signed char)3] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_22 - 2] [i_10] [i_22 - 4] [i_22 - 2])) ? (((/* implicit */int) arr_54 [i_22 - 2] [i_22 - 4] [(_Bool)1] [i_22 - 4] [i_22 - 4])) : (((/* implicit */int) var_7))));
                        /* LoopSeq 1 */
                        for (short i_23 = 0; i_23 < 19; i_23 += 2) 
                        {
                            var_40 = ((/* implicit */int) var_8);
                            var_41 = ((/* implicit */long long int) arr_39 [i_22 + 2] [i_22 - 3] [i_22 - 4]);
                        }
                        var_42 = ((/* implicit */int) arr_54 [i_10] [(signed char)8] [i_22 - 2] [i_22 - 2] [i_22 - 2]);
                    }
                    arr_80 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) arr_77 [i_10] [i_11] [i_10] [18] [i_19]);
                    arr_81 [i_10] = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */short) ((signed char) (signed char)120))), (arr_48 [i_10] [i_10] [i_19] [i_10]))));
                }
                arr_82 [i_10] [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_60 [i_10])) ? (arr_35 [i_11]) : (((/* implicit */unsigned long long int) max((arr_37 [i_10]), (arr_37 [i_10])))))), (((/* implicit */unsigned long long int) arr_53 [i_10] [i_10] [i_10] [i_10] [i_10]))));
            }
        } 
    } 
}
