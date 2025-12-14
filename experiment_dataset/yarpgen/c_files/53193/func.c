/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53193
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) var_9);
                var_16 = ((/* implicit */int) (+(18446744073709551613ULL)));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) var_10);
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) ((((2036687204U) >> (((arr_5 [i_0 + 1]) - (1189582699))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (arr_5 [i_0 - 2]) : (arr_5 [i_2]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) var_3);
                                var_19 = (~(((((/* implicit */_Bool) ((3ULL) << (((((/* implicit */int) (short)-923)) + (960)))))) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 2])) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (short)32767))))))));
                                arr_18 [(unsigned short)12] [i_4] [i_4] [i_3] [i_4] = ((((/* implicit */unsigned long long int) min((arr_9 [11] [11]), (((/* implicit */int) arr_14 [(signed char)12] [i_4] [i_2] [i_3] [8ULL] [i_4] [i_3]))))) * (min((1ULL), (((/* implicit */unsigned long long int) (unsigned char)170)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_5))));
                        var_21 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                        arr_21 [(unsigned short)14] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_0 - 2] [i_0] [1] [i_0 + 3] [15ULL]) - (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_5] [i_0 - 2] [i_1 + 2])))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_5])) ? (var_0) : (((/* implicit */unsigned long long int) arr_13 [i_0] [(short)15] [i_1 - 1] [6U] [i_2] [i_5]))))));
                        arr_22 [i_2] [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1]))))) + (18446744073709551615ULL)));
                    }
                    for (int i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        arr_26 [i_1] [i_1 - 2] [(short)3] [i_1 - 2] [i_6] = ((/* implicit */long long int) ((unsigned int) ((signed char) arr_10 [i_1 + 2])));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */int) min(((short)-2207), ((short)-5365)))) + ((~(((/* implicit */int) var_8))))))));
                    }
                    for (int i_7 = 1; i_7 < 15; i_7 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) ((((max((arr_12 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))) / (((/* implicit */unsigned int) ((var_14) / (((/* implicit */int) (_Bool)1))))))) / (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)544)) / (((/* implicit */int) (_Bool)1)))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_14 [14U] [i_1 - 2] [i_1] [(unsigned char)6] [i_1] [i_2] [16]))));
                    }
                }
                for (unsigned short i_8 = 1; i_8 < 15; i_8 += 3) 
                {
                    arr_33 [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) arr_16 [i_8 - 1] [i_8 + 2] [i_8] [i_8 + 3] [i_8 - 1])))));
                    var_25 = ((/* implicit */unsigned int) ((18446744073709551612ULL) * (0ULL)));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) var_5);
                        var_27 = ((/* implicit */short) max((arr_11 [(unsigned char)6] [3ULL] [14] [i_9]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_8 + 3] [i_9])) && (((/* implicit */_Bool) (short)-32659)))))));
                    }
                    arr_36 [i_0 + 2] = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((unsigned short) 20ULL))))) / (((arr_9 [i_0] [i_1 - 1]) / (arr_9 [(unsigned short)2] [i_1 - 1])))));
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 2]))))) && (((/* implicit */_Bool) var_12))));
                }
                for (unsigned short i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) var_2);
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) min(((+(0ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    }
                    var_31 = ((/* implicit */short) var_0);
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        var_32 = ((/* implicit */_Bool) ((short) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))));
                        var_33 = ((/* implicit */short) min((((/* implicit */unsigned long long int) 1379195013U)), (18446744073709551611ULL)));
                        var_34 = ((/* implicit */unsigned char) var_9);
                    }
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 2; i_14 < 14; i_14 += 3) 
                        {
                            arr_52 [(signed char)0] [i_0] [i_13] [i_0] [i_0] = ((/* implicit */int) (+(min((var_9), (((/* implicit */unsigned int) arr_5 [i_0 + 1]))))));
                            arr_53 [i_14 + 2] [i_13] [i_13] [(_Bool)0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))))), (var_9)))) ? ((+(18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 2]))) : (var_3))))));
                            var_35 = ((/* implicit */short) ((((/* implicit */int) var_10)) % (((/* implicit */int) (short)12))));
                        }
                        for (unsigned short i_15 = 2; i_15 < 17; i_15 += 3) 
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((arr_38 [i_0]) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) arr_31 [3U] [(signed char)9]))))))) && ((!(((/* implicit */_Bool) ((unsigned long long int) var_7)))))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((short) var_14))))) < ((~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1]))))))));
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((short) 20ULL)))));
                        }
                        var_39 = ((/* implicit */long long int) (unsigned char)70);
                        var_40 = var_1;
                    }
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) (short)29063)), (((((/* implicit */int) (unsigned char)81)) << (((4294967281U) - (4294967259U))))))) < ((~(((/* implicit */int) (unsigned char)154))))));
                        arr_60 [(short)15] = ((/* implicit */short) var_11);
                        var_42 = ((/* implicit */long long int) (~(min((((unsigned int) arr_23 [i_0] [i_0] [10ULL] [(signed char)5] [i_0] [i_16])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) arr_44 [i_0] [i_10 + 2])) : (arr_55 [i_10] [i_10 - 1] [i_10]))))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_17 = 0; i_17 < 15; i_17 += 1) 
    {
        for (short i_18 = 0; i_18 < 15; i_18 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_19 = 0; i_19 < 15; i_19 += 3) 
                {
                    var_43 = ((/* implicit */unsigned short) var_1);
                    arr_68 [i_17] [i_17] [(short)0] = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) min((arr_61 [i_17]), (((/* implicit */short) arr_20 [i_17]))))))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        for (int i_21 = 0; i_21 < 15; i_21 += 3) 
                        {
                            {
                                arr_73 [(unsigned char)10] [2ULL] [i_17] [(unsigned char)10] [i_21] [(unsigned char)10] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) 1787863201U)), (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)185)) / (((/* implicit */int) (unsigned char)71)))))));
                                var_44 = ((/* implicit */unsigned char) min((((((/* implicit */int) (short)32658)) - (((/* implicit */int) arr_49 [(short)1] [i_18] [8U] [i_18] [i_18] [i_18])))), (((/* implicit */int) var_10))));
                                var_45 = ((/* implicit */short) min((var_14), (arr_5 [(unsigned char)6])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_22 = 0; i_22 < 15; i_22 += 2) 
                {
                    var_46 = ((/* implicit */unsigned long long int) arr_24 [i_17] [i_17] [17LL] [i_17]);
                    var_47 = ((/* implicit */unsigned int) (short)27263);
                    var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) (~(arr_2 [i_17]))))));
                    var_49 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_44 [i_18] [i_18])) % (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 2) 
                    {
                        for (short i_24 = 0; i_24 < 15; i_24 += 3) 
                        {
                            {
                                var_50 = ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)32658))))) % (4294967281U));
                                arr_82 [(short)0] [i_18] [i_18] [i_17] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_17] [i_17] [i_17] [i_17] [i_17] [(short)10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)-10913)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_17] [i_17] [(short)3] [i_23])))))));
                            }
                        } 
                    } 
                }
                arr_83 [10] [i_18] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((((((/* implicit */_Bool) (short)8616)) || (((/* implicit */_Bool) 1787863201U)))) && ((!(((/* implicit */_Bool) (short)32658))))))));
                var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) (short)-27263))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_7))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                var_52 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((arr_38 [(short)3]) ? (12516638257452058596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [(short)14] [i_18] [(short)15] [i_18])))))) ? (((var_11) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_17])), (arr_67 [13U] [i_18] [i_18] [i_18])))))), (min(((+(((/* implicit */int) var_1)))), (((((/* implicit */int) arr_30 [i_17])) / (var_11)))))));
            }
        } 
    } 
}
