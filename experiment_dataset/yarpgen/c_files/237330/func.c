/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237330
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */unsigned int) var_4);
                arr_6 [i_1] [i_1] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (short)-12012)), ((~(arr_1 [i_0 - 1] [(_Bool)1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12018)) ? (562949953421310LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-96)))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (arr_3 [i_1] [i_1]))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-118)), ((short)12011)))))))));
                var_15 -= ((unsigned int) arr_5 [i_0] [(_Bool)0] [2LL]);
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((long long int) (+(var_6))));
    var_17 *= ((/* implicit */unsigned char) (~(0U)));
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_12 [i_5 - 1] [(signed char)3] [9ULL]), (((/* implicit */unsigned long long int) arr_2 [i_2] [0U])))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)0)), (arr_16 [4LL] [i_5]))))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (unsigned short)6)))) : (((/* implicit */int) ((_Bool) arr_4 [i_6 + 1] [i_5])))));
                                var_19 += ((/* implicit */signed char) max((arr_13 [i_2] [i_3] [i_5] [i_3] [i_6 - 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned int) (~(min((((/* implicit */int) (unsigned short)59265)), (1048568))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((unsigned long long int) arr_3 [i_3] [i_4])) + (((/* implicit */unsigned long long int) ((arr_19 [i_4]) + (max((((/* implicit */long long int) var_7)), (var_10)))))))))));
                                arr_25 [i_2] [i_2] [i_3] [(signed char)0] [(signed char)0] [i_7] [i_3] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_2] [i_2] [(short)9] [i_2] [i_7] [i_7] [i_8])))))) : (((((/* implicit */_Bool) 4218881128U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_24 [i_2] [i_4] [i_8]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32753)) / (((/* implicit */int) (short)-22752)))))));
                            }
                        } 
                    } 
                    arr_26 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_3] [i_4] [i_4])) ? ((+(arr_21 [i_2] [i_2] [(signed char)6] [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_21 [i_2] [i_2] [i_3] [(signed char)6] [i_3] [i_2]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                {
                    var_21 += ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-12015)))), ((+(((/* implicit */int) (_Bool)1))))));
                    var_22 ^= ((/* implicit */signed char) arr_22 [6LL] [8LL] [i_9] [i_10]);
                    /* LoopSeq 2 */
                    for (signed char i_11 = 1; i_11 < 7; i_11 += 4) 
                    {
                        arr_36 [i_11] [i_10] [i_2] [i_2] [(signed char)6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_11]))))) + (((((/* implicit */_Bool) arr_33 [i_11 + 3] [i_2] [i_2] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13284378806636857598ULL)) ? (8257536U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))))) : (arr_20 [i_2] [i_2] [i_2] [i_11 + 1])))));
                        var_23 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) arr_23 [i_11 + 1] [6ULL] [6] [i_11 + 1] [(short)2] [i_11] [i_11]))), (((((/* implicit */_Bool) (signed char)64)) ? (8796093022207ULL) : (((/* implicit */unsigned long long int) 647922418U))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 96147973)) ? (15093222409524327967ULL) : ((-(arr_20 [6U] [(short)8] [6U] [i_11]))))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            var_25 = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) ((short) (signed char)107)))))), (((arr_39 [i_2] [i_2] [i_13]) ? ((-(var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_42 [9ULL] [i_12] [8LL] [i_12] [i_12])))))))));
                            var_26 *= ((unsigned int) min((262144U), (3552694562U)));
                            var_27 = ((/* implicit */int) 5162365267072694018ULL);
                        }
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            arr_47 [i_2] [i_10] [i_10] [i_12] [i_14] = ((/* implicit */_Bool) (+(arr_20 [(_Bool)1] [i_2] [i_12] [i_14])));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max((min((arr_12 [(short)2] [i_9] [i_10]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_31 [i_2] [9] [9])))))));
                            var_29 ^= ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 2; i_15 < 9; i_15 += 4) 
                        {
                            arr_50 [i_2] [i_9] [i_2] [i_10] [(unsigned short)8] [6U] [i_2] = ((/* implicit */signed char) arr_38 [2LL] [2LL] [i_12] [i_2]);
                            arr_51 [9ULL] [i_2] [i_2] [i_10] [i_12] [i_15] = ((((/* implicit */_Bool) min((arr_45 [i_12] [i_12] [(signed char)8] [i_2] [i_15 - 2]), (((/* implicit */int) arr_34 [i_12] [i_15] [i_12] [i_15 - 1] [i_15 - 2] [6]))))) ? (((/* implicit */unsigned long long int) arr_30 [i_2] [i_15])) : (((((/* implicit */_Bool) min((8257538U), (((/* implicit */unsigned int) -96147967))))) ? (arr_28 [i_15] [i_15 + 1] [i_2]) : (((/* implicit */unsigned long long int) max((1296655791), (((/* implicit */int) (short)26338))))))));
                            arr_52 [i_15 - 1] [i_15] [i_2] [i_10] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) arr_17 [i_2] [i_9] [i_9] [i_10] [i_12] [i_2] [i_15 - 1])), (((((/* implicit */_Bool) 32768U)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1))))));
                        }
                        for (long long int i_16 = 2; i_16 < 9; i_16 += 1) 
                        {
                            arr_56 [5U] [i_9] [i_10] [i_12] [i_2] [i_16] [i_16] = ((/* implicit */unsigned int) ((unsigned long long int) arr_31 [i_2] [2ULL] [i_12]));
                            arr_57 [i_2] [2U] [i_10] [i_9] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_10] [i_12] [i_16] [i_2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_35 [i_2] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [3ULL] [i_16] [i_16] [i_16] [i_16 + 1]))))), (max((arr_15 [i_9] [(_Bool)1] [i_2] [(_Bool)1] [i_16 - 1]), (((/* implicit */unsigned int) var_1))))));
                            var_30 &= ((/* implicit */signed char) max((7824436289927695875LL), (((/* implicit */long long int) (_Bool)1))));
                        }
                        arr_58 [i_2] [i_9] [i_2] [i_2] [0LL] &= ((/* implicit */unsigned long long int) ((unsigned int) 1048575LL));
                        arr_59 [i_2] [i_9] [i_9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_9] [i_2])) ? (max((((/* implicit */unsigned long long int) 2377681361U)), (arr_22 [5ULL] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_2]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (signed char)0)) ? (var_8) : (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_2))))));
                    }
                }
            } 
        } 
        arr_60 [4LL] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (5162365267072694023ULL) : (((/* implicit */unsigned long long int) var_12)))) == (((/* implicit */unsigned long long int) min((var_7), (arr_11 [i_2] [9U] [i_2] [i_2]))))));
    }
    for (int i_17 = 0; i_17 < 12; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 3) 
        {
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                {
                    arr_69 [i_18] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_19] [i_18])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_62 [i_17] [i_17])) + (((/* implicit */int) arr_62 [i_18] [i_19]))))) : (((unsigned long long int) arr_62 [i_18] [i_19]))));
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        for (unsigned int i_21 = 2; i_21 < 11; i_21 += 3) 
                        {
                            {
                                arr_74 [i_17] [i_17] [i_19] [i_19] [i_20] [8ULL] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_67 [i_17] [i_18] [i_18])), (((((/* implicit */_Bool) 8257536U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7824436289927695875LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) var_9)) == (-6228627026897719851LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [(_Bool)1]))) - (13284378806636857598ULL)))));
                                arr_75 [i_17] [i_18] [i_18] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_66 [i_18] [i_19] [i_18] [(signed char)6])) ? (((/* implicit */long long int) 0)) : ((~(arr_63 [i_18])))))));
                                arr_76 [6U] [6U] [i_19] [i_18] [4U] = ((/* implicit */long long int) arr_71 [i_17] [i_19] [i_18]);
                                arr_77 [i_21] [i_20] [i_18] [(unsigned short)11] [(signed char)5] = ((/* implicit */long long int) min(((-(4294967293U))), (((((/* implicit */_Bool) arr_72 [i_20] [i_20] [i_20] [i_21 - 2] [i_18])) ? (arr_72 [i_17] [i_19] [i_20] [i_21 - 2] [i_18]) : (993782854U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_78 [9LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_63 [i_17]))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_4)))) ? (var_7) : (var_9))) : (arr_72 [i_17] [i_17] [i_17] [i_17] [10U])));
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) arr_70 [(unsigned short)10] [i_17] [(unsigned char)4] [(unsigned short)10]))));
        arr_79 [i_17] = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) (_Bool)1)), (1073610752U))));
    }
    for (short i_22 = 0; i_22 < 10; i_22 += 4) 
    {
        arr_83 [i_22] = ((/* implicit */long long int) min((((((/* implicit */int) arr_64 [i_22] [i_22] [i_22])) - (((/* implicit */int) (unsigned char)128)))), (((arr_64 [i_22] [i_22] [11ULL]) ? (0) : (((/* implicit */int) arr_64 [i_22] [i_22] [i_22]))))));
        var_32 ^= ((/* implicit */short) (+(max((arr_23 [i_22] [i_22] [i_22] [6LL] [i_22] [i_22] [i_22]), (arr_23 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])))));
        var_33 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) var_12))))) ? (((((/* implicit */_Bool) 844424930131968LL)) ? (217614576U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19610))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_24 [i_22] [i_22] [0])))))));
        arr_84 [i_22] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_8)));
    }
}
