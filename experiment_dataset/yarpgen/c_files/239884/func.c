/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239884
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
    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) var_5)), (var_3))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((((/* implicit */_Bool) 1332268839472946390ULL)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))))))));
        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) 17114475234236605222ULL)) && (((/* implicit */_Bool) (unsigned short)65517)))) || ((_Bool)1))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (1332268839472946378ULL)));
    }
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_2))))))) / (var_7))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                var_25 -= min((((/* implicit */unsigned long long int) (((~(var_3))) >= (((((/* implicit */_Bool) 17114475234236605248ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (17114475234236605239ULL)))))), (((((((/* implicit */_Bool) arr_2 [i_1] [3ULL])) ? (1332268839472946371ULL) : (((/* implicit */unsigned long long int) var_5)))) & ((-(var_19))))));
                var_26 = (((+(((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_1])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_16 [i_1] [i_3] [i_3] [i_1] [i_5] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((-(17114475234236605214ULL))) : ((~(1332268839472946399ULL))));
                                var_27 = ((/* implicit */unsigned char) (~((~(arr_1 [i_2])))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_6 = 3; i_6 < 10; i_6 += 2) 
                    {
                        var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned char)1] [i_2 - 1] [i_3])))));
                        arr_19 [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_12 [i_3] [i_2 - 1] [i_2] [i_3] [0ULL] [i_6])))) ? (((((/* implicit */int) var_13)) | (var_14))) : (((/* implicit */int) arr_18 [i_1 + 1] [i_3] [i_2 - 1] [i_6 - 2]))));
                        var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_6]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_7]))) % (((((/* implicit */_Bool) 1536261636044294525ULL)) ? (1332268839472946397ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [(short)4]))))));
                        arr_23 [i_3] = ((/* implicit */unsigned short) arr_18 [i_7] [i_3] [i_3] [(_Bool)1]);
                        arr_24 [i_1 - 2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (short)32763);
                    }
                    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_27 [i_1] [i_3] = 9428727903659084569ULL;
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)207)) != (((/* implicit */int) (unsigned char)21)))))) : (1332268839472946375ULL)));
                        var_32 = ((/* implicit */unsigned char) arr_3 [i_1]);
                    }
                    for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        arr_32 [i_3] [(_Bool)1] = ((((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3] [i_9] [i_9] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2 - 1] [i_1 + 1] [(short)2] [(short)2]))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            arr_36 [i_1] [i_2] [i_3] [i_1] = ((((/* implicit */_Bool) (-(18446744073709551605ULL)))) ? (var_7) : (17114475234236605211ULL));
                            var_33 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_1]))) / (17114475234236605248ULL))) : (((var_16) >> (((((/* implicit */int) (unsigned char)125)) - (122)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            arr_40 [i_3] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (short)32753))))));
                            arr_41 [i_1 - 2] [i_1 - 2] [i_3] [i_1 - 2] [i_11] = ((/* implicit */short) ((unsigned char) 18446744073709551598ULL));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((unsigned char) arr_5 [i_1 - 1] [i_1 - 1] [i_2 - 1])))));
                            arr_42 [i_3] [i_9] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (unsigned char)246);
                            var_35 = (((_Bool)1) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_3] [i_1] [i_11]))));
                        }
                        for (int i_12 = 1; i_12 < 8; i_12 += 1) 
                        {
                            arr_46 [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] [i_3] = ((/* implicit */short) (unsigned char)126);
                            var_36 = arr_45 [i_3] [i_2] [i_2] [i_2 - 1] [i_2];
                            var_37 = ((int) (short)-1620);
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) 10619701307328268343ULL)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) arr_28 [i_1 - 2] [i_2]))));
                            arr_47 [i_3] [i_9] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_1 + 1] [i_1 - 1] [i_2 - 1]));
                        }
                        arr_48 [i_1] [i_1] [i_1] [i_2] [i_2] [(short)8] |= arr_11 [i_1] [i_2 - 1] [i_1] [i_1 - 1] [i_1];
                    }
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) 1332268839472946353ULL))))))));
                    var_40 = ((((/* implicit */_Bool) arr_31 [i_1 - 2] [i_2] [i_3] [i_2] [i_2 - 1])) ? ((-(arr_29 [i_1] [i_1] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))));
                    arr_49 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_9 [i_3] [i_2 - 1])))) & (((((/* implicit */_Bool) arr_28 [i_1 - 1] [i_2])) ? (((/* implicit */int) arr_33 [i_1] [(unsigned short)6] [(unsigned short)6] [i_2] [i_3])) : (((/* implicit */int) (short)1607))))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 2) 
                {
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_12 [i_13] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2]), (arr_12 [i_13] [i_2 - 1] [i_2] [(_Bool)1] [i_2 - 1] [i_2])))) * ((+(((/* implicit */int) arr_12 [i_13] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]))))));
                    var_42 = var_0;
                    var_43 = (i_13 % 2 == 0) ? (((/* implicit */short) (-(((((/* implicit */_Bool) ((var_11) >> (((((/* implicit */int) (short)1648)) - (1595)))))) ? (((((/* implicit */int) arr_38 [i_1] [i_13])) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))) : (((/* implicit */short) (-(((((/* implicit */_Bool) ((var_11) >> (((((/* implicit */int) (short)1648)) - (1595)))))) ? (((((((/* implicit */int) arr_38 [i_1] [i_13])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                }
                for (short i_14 = 4; i_14 < 10; i_14 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (1332268839472946381ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)117)))))) : ((((_Bool)1) ? (1332268839472946376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_1] [i_1] [i_1] [6ULL] [i_14] [i_15])))))));
                        arr_60 [i_15] [i_2] [i_1] = (-((-(18446744073709551604ULL))));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_63 [i_16] [i_14] [i_2] [i_1] |= arr_53 [3ULL] [i_1];
                        var_45 = ((/* implicit */int) arr_7 [i_14 - 3] [i_2] [i_14] [i_16]);
                        var_46 |= ((/* implicit */unsigned long long int) (unsigned char)133);
                    }
                    for (unsigned long long int i_17 = 2; i_17 < 9; i_17 += 1) 
                    {
                        arr_68 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (short)10281)), ((+(17114475234236605245ULL)))))));
                        var_47 = ((/* implicit */_Bool) ((unsigned long long int) min(((((_Bool)1) ? (17114475234236605258ULL) : (17114475234236605233ULL))), (((/* implicit */unsigned long long int) ((arr_53 [i_1] [i_1]) >= (arr_1 [i_2])))))));
                        arr_69 [i_1 - 1] [i_2] [i_14] [i_17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_65 [i_1] [i_2] [i_14 + 1]))));
                    }
                    arr_70 [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) (-(var_10)));
                    var_48 += ((/* implicit */_Bool) var_10);
                }
            }
        } 
    } 
    var_49 = var_4;
}
