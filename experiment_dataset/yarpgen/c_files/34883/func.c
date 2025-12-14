/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34883
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (max((var_1), (((/* implicit */unsigned short) var_7))))))) & (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0 - 1])))), ((-(0)))));
        arr_5 [(short)21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0 + 2] [i_0]) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) min((((int) var_7)), (arr_0 [i_0] [i_0 - 2])))) : (((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? (arr_3 [i_0 + 3] [i_0 + 4]) : (((/* implicit */unsigned long long int) min((1073741824U), (((/* implicit */unsigned int) (unsigned short)45192)))))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) var_19);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) var_6);
                                arr_20 [i_2] [i_2] [i_2] [7ULL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)65518))))), (max((((/* implicit */unsigned int) arr_1 [i_3])), (var_10)))));
                                arr_21 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((arr_3 [(_Bool)1] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                                arr_22 [i_1] [i_2] [i_3] [(_Bool)1] [i_4] [(unsigned short)2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [(unsigned short)13]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_27 [i_1] [i_2] [13] [(unsigned short)14] [i_7 + 1] = max((((unsigned short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3] [i_1])) && (((/* implicit */_Bool) arr_13 [14U] [14U] [i_3] [i_6]))))), (min((min((((/* implicit */unsigned short) (_Bool)1)), (var_3))), (((/* implicit */unsigned short) min((arr_25 [i_1] [i_6] [(unsigned short)14] [i_1] [i_7 + 2] [i_7] [i_7 + 2]), (((/* implicit */signed char) var_5))))))));
                                arr_28 [i_1] [i_2] [(_Bool)1] [(_Bool)1] [(unsigned short)9] [i_7] [i_7] = max((((/* implicit */int) arr_18 [i_7 - 1] [i_7 + 1])), (var_11));
                                arr_29 [i_1] [(short)11] [i_3] [i_6] [(short)11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62682)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))) : (var_18)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33795)) && (((/* implicit */_Bool) 1315715958))))) : ((((!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3])))) ? (arr_0 [i_7] [i_3]) : ((~(((/* implicit */int) var_14)))))));
                                arr_30 [i_7] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                    arr_31 [13U] [i_2] [i_3] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)44583)), (1315715958)));
                    arr_32 [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_14 [i_1] [i_1]) || (((/* implicit */_Bool) max(((unsigned char)21), (var_7)))))))));
                    arr_33 [i_1] [i_2] [i_2] [i_2] = max((((_Bool) ((((/* implicit */_Bool) 4752203396108573926ULL)) ? (32256) : (((/* implicit */int) var_7))))), ((_Bool)1));
                }
            } 
        } 
        arr_34 [i_1] = ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
        arr_35 [(signed char)3] = ((/* implicit */unsigned short) var_11);
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                {
                    arr_42 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                    arr_43 [i_1] [i_8] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min(((unsigned char)144), ((unsigned char)144))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_16))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_9] [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_10)))), (9ULL)))));
                    arr_44 [i_1] [i_8] [i_9] [5] = ((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]);
                    arr_45 [(unsigned short)6] [i_8] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_1] [i_8] [i_9]), (arr_11 [i_1] [(unsigned short)1] [i_9])))) ? (((/* implicit */int) min((((/* implicit */short) min((((/* implicit */unsigned char) var_9)), (arr_36 [i_1])))), (((short) (unsigned char)117))))) : (((/* implicit */int) (unsigned char)19))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        arr_48 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_3 [i_10] [i_10])))) ? (((/* implicit */int) ((_Bool) arr_46 [i_10]))) : (((/* implicit */int) var_6))));
        arr_49 [i_10] = ((/* implicit */unsigned char) arr_1 [i_10]);
    }
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    for (signed char i_14 = 4; i_14 < 17; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 4; i_15 < 17; i_15 += 4) 
                        {
                            {
                                arr_64 [(unsigned short)12] [i_12] [4] [i_14] [i_15 - 3] [1ULL] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) arr_51 [i_11]))) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [(short)15])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) arr_51 [i_14])))) : (((/* implicit */int) min((arr_51 [i_11]), (var_9)))))) : (((((/* implicit */_Bool) min((arr_53 [i_11]), (var_1)))) ? (((/* implicit */int) arr_61 [i_11] [i_11] [i_13] [i_11] [(unsigned short)5])) : (((int) (unsigned short)64512))))));
                                arr_65 [i_11] [i_12] [i_12] [i_14] [i_15] = ((/* implicit */_Bool) var_3);
                                arr_66 [i_15 - 4] [16ULL] [i_15] [16ULL] [i_15] = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) var_9)) && (var_5))))) || (((/* implicit */_Bool) max((((var_12) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [17U])) && (((/* implicit */_Bool) var_0))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_16 = 1; i_16 < 18; i_16 += 1) 
                {
                    arr_69 [i_11] [i_12] [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_68 [i_11] [i_11] [i_11] [i_11]);
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 3; i_17 < 17; i_17 += 4) 
                    {
                        arr_73 [i_11] [i_11] [i_11] [i_17 + 1] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) var_10)))), (((((/* implicit */_Bool) var_17)) && (arr_57 [i_11] [i_17 - 3] [(unsigned short)0])))));
                        arr_74 [17U] = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)16383)) & (((/* implicit */int) var_5)))))) ? (arr_62 [i_11] [i_11] [i_11]) : (min((max((((/* implicit */unsigned int) arr_68 [i_11] [i_12] [i_16] [16ULL])), (2138688979U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_61 [i_11] [i_11] [i_11] [(short)6] [i_17]))))))));
                        arr_75 [i_17] [i_17] [i_12] [i_12] [i_11] = ((/* implicit */_Bool) max((arr_59 [(short)4] [i_12] [(unsigned char)11] [(short)4] [i_16 - 1] [i_16]), (((/* implicit */unsigned int) arr_52 [i_16]))));
                        arr_76 [i_11] = ((/* implicit */short) var_8);
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        arr_79 [i_18] [i_16] [i_12] [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) ((short) ((unsigned short) var_10)));
                        arr_80 [i_11] [i_12] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_67 [i_11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_52 [i_11]))));
                        arr_81 [5] [(signed char)10] [i_16] [5] [i_18] = ((/* implicit */unsigned char) ((int) var_15));
                    }
                }
                /* vectorizable */
                for (unsigned char i_19 = 2; i_19 < 18; i_19 += 4) 
                {
                    arr_85 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)255)) : (arr_82 [i_19 - 2])));
                    arr_86 [i_11] = (-(((/* implicit */int) arr_70 [i_19 - 1] [i_11] [2] [(unsigned char)16])));
                    arr_87 [i_11] [i_12] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_57 [7] [i_12] [i_12])) : (((/* implicit */int) var_16))));
                }
                for (unsigned short i_20 = 0; i_20 < 19; i_20 += 1) 
                {
                    arr_90 [i_11] = ((/* implicit */unsigned short) ((signed char) 831850548U));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_21 = 2; i_21 < 18; i_21 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_22 = 3; i_22 < 15; i_22 += 1) 
                        {
                            arr_97 [(short)12] [i_22 + 3] = ((/* implicit */unsigned short) ((int) (short)-20259));
                            arr_98 [i_11] [i_12] [i_20] [i_12] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_61 [i_11] [i_12] [11U] [i_21] [i_22]))))) & (((/* implicit */int) var_13))));
                        }
                        arr_99 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_21 - 2] [i_21] [i_21 + 1] [i_21] [i_21 - 1])) ? (((/* implicit */unsigned int) arr_63 [i_21 - 1] [i_21] [i_21 - 1] [i_21 - 1] [i_21 - 1])) : (arr_59 [i_21 - 2] [i_21 - 1] [i_21] [i_21 - 2] [i_21] [i_21 + 1])));
                        arr_100 [i_11] [i_11] [12] [i_20] [i_20] [i_21] = ((/* implicit */unsigned short) arr_0 [i_20] [i_12]);
                        arr_101 [i_11] [i_12] [i_20] [i_21] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_0 [(unsigned short)8] [(unsigned short)8])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 3; i_23 < 17; i_23 += 2) 
                    {
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            {
                                arr_107 [(signed char)15] [i_12] [i_12] [i_20] [i_20] [i_23] [i_24] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_50 [i_23 - 3])))) && (((/* implicit */_Bool) min((var_14), (((/* implicit */short) ((_Bool) arr_67 [i_20]))))))));
                                arr_108 [i_23] [i_12] [i_11] [i_23] [i_24] [i_20] [i_20] = (((!(((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_12])))))))) ? (((/* implicit */int) ((unsigned short) ((_Bool) var_19)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (((unsigned short) (unsigned short)65535))))));
                            }
                        } 
                    } 
                }
                arr_109 [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)19626), (((/* implicit */unsigned short) (signed char)-103))))) ? (((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */int) arr_52 [i_11])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)42088)))))));
                arr_110 [i_11] [i_11] [i_11] = ((/* implicit */int) min((min((arr_78 [i_12] [i_11] [i_11] [i_11] [i_11]), (var_16))), (((/* implicit */unsigned short) var_7))));
                arr_111 [i_11] &= ((/* implicit */unsigned short) ((((_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) : (((/* implicit */int) var_3))));
            }
        } 
    } 
}
