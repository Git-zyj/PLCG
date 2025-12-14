/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218347
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [5LL])) + (((/* implicit */int) (unsigned short)65519)))))))) ? (((arr_0 [i_0]) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_9))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            arr_13 [i_1] [i_3] = ((unsigned long long int) arr_0 [i_0]);
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((((/* implicit */_Bool) (+(arr_4 [i_1] [i_3])))) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)4)));
                        }
                        var_16 = ((/* implicit */signed char) ((arr_8 [i_0] [i_2] [i_3]) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3] [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) arr_0 [i_3])))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) ((unsigned char) var_5));
                            var_18 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) arr_3 [i_5 + 1])), (((short) arr_9 [i_0] [i_0] [(unsigned short)14] [i_3] [i_0])))))));
                        }
                        var_19 = ((/* implicit */signed char) max((var_19), (arr_1 [(unsigned short)2])));
                    }
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_15 [i_2] [i_1] [i_2] [i_6] [i_0] [i_2])), (((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_0]))))), (((/* implicit */unsigned int) ((signed char) ((short) arr_3 [i_0]))))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_16 [i_6] [i_6] [i_2] [i_0] [i_0] [2] [i_0]))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)1792)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) arr_10 [i_0] [i_1] [0LL] [i_2])))))));
                    }
                    arr_20 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned char) ((min((arr_8 [i_0] [i_0] [i_2]), (arr_8 [i_0] [i_1] [i_2]))) ? (arr_16 [i_0] [i_2] [i_2] [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((int) arr_6 [i_2])))));
                    var_22 = ((/* implicit */_Bool) var_8);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 4) 
        {
            {
                var_23 = ((/* implicit */_Bool) ((arr_3 [i_8 + 1]) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (unsigned int i_10 = 3; i_10 < 7; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) arr_22 [i_7]);
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_21 [i_10 + 3] [i_8 + 1])) <= (((/* implicit */int) ((unsigned short) var_14))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))) : (((/* implicit */int) arr_27 [i_7] [i_7] [i_7] [i_7])))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_7])), (var_6)))) ? (((/* implicit */int) arr_22 [i_7])) : (max(((+(((/* implicit */int) arr_23 [i_7] [i_7])))), (((/* implicit */int) min((arr_1 [i_7]), ((signed char)73))))))));
                            arr_31 [i_10] [i_9] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) var_3);
                            var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_28 [i_8]))))) ? (min((((/* implicit */unsigned int) var_6)), (arr_16 [(short)6] [i_9] [i_9] [i_9] [i_8 - 1] [8] [i_7]))) : (min((arr_26 [i_7] [i_8 + 2]), (arr_0 [i_7]))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8 + 2] [i_8 + 2])))));
                        }
                    } 
                } 
                var_28 = ((short) ((((((/* implicit */_Bool) var_11)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        for (short i_12 = 2; i_12 < 9; i_12 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_13 = 3; i_13 < 11; i_13 += 2) 
                {
                    for (int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_12 - 2] [i_12 - 2])))))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 1094305916U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) : (18446744073709551607ULL))))))));
                            var_31 *= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((_Bool) arr_39 [i_12] [i_12 + 3] [i_12]))), (min((arr_0 [i_12]), (((/* implicit */unsigned int) var_3)))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_37 [i_12] [i_13]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) arr_10 [0LL] [i_12] [(unsigned short)12] [i_12])) : (((/* implicit */int) arr_7 [i_14] [i_12])))))))))));
                            arr_44 [i_13] [i_13] [i_12] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) arr_5 [i_11] [i_11] [i_11]))) > (arr_4 [i_13] [i_13 - 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_14] [i_13]))) : (min((min((((/* implicit */unsigned int) (signed char)45)), (3291514572U))), (((/* implicit */unsigned int) arr_40 [i_13] [i_11] [i_11 + 1] [i_11] [i_12 - 2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        {
                            arr_50 [i_15] [i_12 - 1] [i_15] [i_12 - 1] [i_12 - 1] = ((/* implicit */short) ((unsigned char) ((_Bool) max((((/* implicit */unsigned short) var_14)), (arr_9 [i_12] [i_16] [i_12] [i_16] [i_15])))));
                            arr_51 [i_11 + 1] = ((/* implicit */long long int) (short)-32743);
                            var_32 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4745)) || (((/* implicit */_Bool) arr_0 [i_11]))))), (var_2)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_17 = 2; i_17 < 14; i_17 += 1) 
    {
        for (short i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            {
                var_33 |= ((/* implicit */unsigned char) ((unsigned short) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_56 [i_17] [i_17] [i_18])) : (arr_52 [i_18])))));
                arr_57 [i_17] = ((/* implicit */_Bool) (unsigned char)41);
                /* LoopSeq 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned short)60234)))))) ? ((((+(((/* implicit */int) arr_55 [i_19])))) * (max((arr_59 [i_17] [i_17 - 2] [i_18] [i_17 - 2]), (((/* implicit */int) arr_56 [i_17] [i_17] [i_19])))))) : (((/* implicit */int) arr_56 [i_17 - 1] [i_18] [i_17 - 1]))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 17; i_20 += 3) 
                    {
                        for (short i_21 = 0; i_21 < 17; i_21 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */short) (-(((/* implicit */int) (short)3))));
                                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((arr_58 [i_20]), (((/* implicit */short) arr_65 [i_17] [i_20] [i_20])))), (((/* implicit */short) ((arr_63 [i_17] [i_18]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65498))) > (((long long int) arr_65 [i_19] [i_21] [i_21]))))) : (((/* implicit */int) min((arr_65 [i_17 + 2] [i_17 + 2] [i_17]), (((/* implicit */signed char) arr_53 [i_17 + 1] [i_17 - 2])))))));
                                var_37 = ((/* implicit */signed char) ((max((((/* implicit */int) arr_62 [i_20] [i_18] [i_19])), (arr_59 [i_17 + 3] [i_17 + 2] [i_17 - 2] [i_17 + 2]))) - (((/* implicit */int) var_14))));
                                var_38 = ((((/* implicit */int) ((_Bool) arr_62 [i_20] [i_17] [i_17]))) != (((/* implicit */int) arr_61 [i_17] [i_17 - 1] [i_17] [i_17])));
                            }
                        } 
                    } 
                }
                for (unsigned short i_22 = 0; i_22 < 17; i_22 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_23 = 1; i_23 < 15; i_23 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */short) ((unsigned long long int) var_5));
                        var_40 += ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_65 [i_18] [i_18] [i_23])) ^ (((/* implicit */int) arr_65 [i_17] [i_17] [i_17]))))));
                    }
                    for (unsigned int i_24 = 1; i_24 < 15; i_24 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) ((max((arr_63 [i_17 + 3] [i_17]), (arr_63 [i_17 + 2] [i_18]))) + (((arr_63 [i_17 + 3] [i_18]) / (arr_63 [i_17 - 1] [i_17 - 1])))));
                        var_42 ^= ((_Bool) ((((/* implicit */int) ((short) var_2))) > (((/* implicit */int) arr_67 [i_18]))));
                        /* LoopSeq 1 */
                        for (short i_25 = 0; i_25 < 17; i_25 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_52 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65508))) : (var_0)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) (unsigned char)252))), ((unsigned short)22)))) : (((((/* implicit */int) arr_75 [i_24 - 1] [i_24 + 2] [i_24 + 1])) << (((/* implicit */int) (_Bool)0)))))))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) min((min((((/* implicit */unsigned short) (short)4032)), ((unsigned short)29573))), (((/* implicit */unsigned short) ((unsigned char) (short)(-32767 - 1))))))) % (((/* implicit */int) (short)32749))));
                            var_45 += ((/* implicit */_Bool) ((arr_53 [i_17 - 2] [i_17 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_55 [i_17])))) : (18446744073709551609ULL)));
                        }
                        arr_79 [i_17] [i_24] [i_22] [i_24] [i_24 + 1] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) arr_65 [i_17 - 2] [i_17 - 2] [i_17 - 2]))), (((((/* implicit */_Bool) arr_78 [i_17] [i_17] [i_17] [i_17] [i_24] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_18] [i_18]))) : (3291514568U)))))) ? (((/* implicit */unsigned long long int) min((arr_63 [i_22] [i_17 - 2]), (((/* implicit */unsigned int) arr_61 [i_24 + 2] [i_17 - 2] [i_17 - 2] [i_17 - 2]))))) : (arr_54 [i_22])));
                    }
                    for (short i_26 = 3; i_26 < 15; i_26 += 2) 
                    {
                        var_46 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_6)))))) ? (((((((/* implicit */_Bool) arr_75 [1ULL] [(unsigned short)10] [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2642257301U))) + (arr_68 [i_17 - 1] [(short)4] [i_22]))) : (((/* implicit */unsigned int) arr_80 [i_17] [i_17])));
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) arr_55 [i_26]))));
                        var_48 -= ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_2)))) && (((/* implicit */_Bool) max((arr_59 [i_26] [i_18] [i_18] [i_26 - 2]), (((/* implicit */int) arr_62 [(signed char)4] [i_18] [i_22])))))))) >= (((((/* implicit */_Bool) min((arr_56 [i_18] [i_18] [i_22]), (arr_60 [6U] [i_22] [i_18] [i_17] [6U])))) ? (var_4) : (((((/* implicit */_Bool) arr_55 [i_18])) ? (arr_59 [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */int) arr_61 [i_17] [(short)4] [i_18] [i_17])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 1; i_27 < 16; i_27 += 1) 
                    {
                        for (unsigned long long int i_28 = 0; i_28 < 17; i_28 += 2) 
                        {
                            {
                                var_49 = ((/* implicit */_Bool) var_11);
                                arr_88 [i_17] [i_17] [i_27] [i_22] [i_22] [i_28] [i_28] = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) 18042187168371429403ULL)) ? (((/* implicit */int) arr_85 [i_17 + 2] [i_17 + 2] [i_22] [i_27 - 1] [(short)0] [i_17 + 2])) : (((/* implicit */int) var_9)))), (((arr_53 [i_18] [i_28]) ? (((/* implicit */int) arr_66 [i_17] [i_17] [i_22])) : (((/* implicit */int) (signed char)28)))))), (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_58 [i_17])), (0ULL)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
