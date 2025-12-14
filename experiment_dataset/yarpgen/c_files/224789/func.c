/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224789
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
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_11 [(unsigned short)11] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) var_9)))), (((((/* implicit */int) (short)28571)) ^ (((/* implicit */int) var_9))))))), (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6838))) : (540431955284459520ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((((/* implicit */int) (short)28571)), ((-((-(((/* implicit */int) (signed char)0)))))))))));
                    arr_12 [(unsigned short)23] = ((/* implicit */unsigned char) (-(((int) var_13))));
                    var_16 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (short)-6846)) || (((/* implicit */_Bool) 1858258468202551298LL)))))), (((((/* implicit */_Bool) ((signed char) 23U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) (((+(18446744073709551615ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2390)) >> (((((/* implicit */int) (short)28032)) - (28031))))))));
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_18 [(short)1] = (+(max((max((((/* implicit */unsigned int) arr_7 [i_4] [i_4] [i_4] [i_3])), (var_6))), (((((/* implicit */unsigned int) 1974461948)) * (arr_5 [i_3] [i_3] [i_3]))))));
            arr_19 [8ULL] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((arr_17 [(short)8]) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_9 [i_3] [i_3] [i_3])))))))) ? (((/* implicit */int) var_2)) : (min(((-(((/* implicit */int) (short)-28576)))), ((-(-67108864)))))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)-21009)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_3] [i_3])))) : ((~(arr_5 [i_3] [i_3] [i_4])))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned long long int) min(((-(((/* implicit */int) (short)28571)))), (311086482)))))));
            arr_22 [i_5] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -67108863)) && (((/* implicit */_Bool) arr_3 [i_3])))) && (((/* implicit */_Bool) (unsigned char)118)))))) : ((-(19ULL)))));
        }
        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            var_20 = var_13;
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */short) ((_Bool) arr_14 [i_3] [i_6])))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)15516)) : (((/* implicit */int) var_9))))));
            arr_25 [i_6] = (-(((/* implicit */int) max((arr_24 [i_6] [i_6]), (((/* implicit */unsigned short) arr_4 [i_6 - 2] [i_6]))))));
            var_22 = ((/* implicit */short) (+(((max((((/* implicit */unsigned long long int) var_1)), (var_10))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))))));
        }
        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_23 = ((unsigned char) var_4);
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                arr_32 [i_7] [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_14 [i_3] [i_8]))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2959925382U)) ? (((/* implicit */int) arr_26 [i_3] [i_7])) : (((/* implicit */int) var_4)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    arr_35 [(unsigned char)6] [i_7] [i_7] [(unsigned char)6] = ((/* implicit */unsigned short) ((unsigned int) -14));
                    arr_36 [i_3] [i_3] [i_7] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 1; i_10 < 8; i_10 += 3) /* same iter space */
                {
                    arr_39 [i_3] [i_7] [i_8] [i_8] [i_10] = ((/* implicit */_Bool) ((unsigned char) ((var_0) ^ (4294967295U))));
                    arr_40 [i_3] [i_3] [i_3] [i_7] [(signed char)1] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_10 + 1]))));
                    var_24 = ((/* implicit */short) var_4);
                    var_25 = ((/* implicit */unsigned int) arr_16 [i_10] [i_7]);
                    arr_41 [i_3] [i_7] [i_3] = ((/* implicit */unsigned int) var_12);
                }
                for (unsigned int i_11 = 1; i_11 < 8; i_11 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) max(((-((~(arr_28 [i_3] [i_3]))))), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) 260046848)))))))))));
                    /* LoopSeq 4 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        arr_50 [i_7] [i_3] [i_7] [i_7] = ((/* implicit */short) ((((unsigned int) (_Bool)1)) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_7)))))))));
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_38 [i_3] [i_3] [i_7] [i_12])) + (2147483647))) >> (((((/* implicit */int) arr_38 [(unsigned char)2] [(unsigned char)2] [2U] [i_3])) + (112)))))) ? (((/* implicit */int) max((arr_38 [(signed char)4] [i_3] [(signed char)4] [i_3]), (arr_38 [(_Bool)0] [8U] [i_3] [i_12])))) : (((/* implicit */int) ((unsigned short) (short)21009)))));
                    }
                    for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        var_28 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (_Bool)0)) / (311086492))))), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_37 [i_11 + 3] [i_11 + 3] [i_11 - 1] [0ULL] [i_11] [i_11 + 1]))))));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_44 [i_11 - 1] [i_11 + 3] [i_11] [i_11]), (((/* implicit */unsigned short) arr_7 [i_7] [i_8] [(signed char)9] [i_13]))))))))));
                    }
                    for (short i_14 = 1; i_14 < 8; i_14 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) arr_20 [i_11] [i_14]);
                        arr_57 [i_7] [i_7] = ((/* implicit */int) arr_10 [i_3] [i_7] [i_11] [i_14]);
                        var_31 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_0 [i_8])) && (((/* implicit */_Bool) var_11)))));
                        var_32 = ((/* implicit */short) min((((signed char) max((((/* implicit */unsigned char) arr_45 [i_8])), ((unsigned char)240)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((-311086463) + (((/* implicit */int) (unsigned char)115))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 2; i_15 < 10; i_15 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((short) -311086479)))));
                        arr_60 [i_3] [(short)8] [i_8] [i_11 + 3] [i_11] [i_15] [i_15] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_3] [i_7] [i_3])) ? (((/* implicit */int) arr_47 [i_15] [i_8] [i_15])) : (((/* implicit */int) (short)-13302))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2))));
                    }
                    arr_61 [i_3] &= ((/* implicit */int) ((unsigned long long int) arr_55 [i_11 + 3] [i_3]));
                }
            }
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_3] [(short)5] [i_7] [i_16] [2ULL] [i_16])))))));
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) var_6))));
                arr_64 [i_3] [i_3] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_58 [i_16] [i_7] [i_3] [i_3] [i_3])))))));
                var_37 = ((/* implicit */signed char) min((((((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-21677)))) >> ((((((_Bool)1) ? (10681280502988086526ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18639))))) - (10681280502988086509ULL))))), (((/* implicit */int) ((signed char) arr_6 [i_3])))));
                var_38 *= ((/* implicit */signed char) (!((_Bool)0)));
            }
            arr_65 [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (min((((((/* implicit */_Bool) 19ULL)) ? (3323193481U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63043))))), (((/* implicit */unsigned int) (unsigned short)9785))))));
            arr_66 [i_7] [(unsigned short)3] = ((/* implicit */signed char) (~(1099511627774ULL)));
            /* LoopNest 3 */
            for (unsigned int i_17 = 1; i_17 < 10; i_17 += 3) 
            {
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        {
                            arr_74 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) (signed char)-95)))) > (((/* implicit */int) (signed char)-75)))) ? (((/* implicit */int) max((arr_52 [i_17 + 1] [i_17] [i_17 + 1] [i_17] [i_17 - 1] [i_17 - 1] [4ULL]), (((/* implicit */unsigned short) var_11))))) : (((/* implicit */int) (signed char)105))));
                            var_39 = ((/* implicit */signed char) arr_63 [i_19] [i_19] [i_19] [i_19]);
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 1) 
    {
        arr_79 [i_20] = ((/* implicit */unsigned long long int) arr_10 [i_20] [i_20] [i_20] [i_20]);
        /* LoopNest 2 */
        for (unsigned char i_21 = 3; i_21 < 21; i_21 += 3) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 3ULL))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -1058947010)) : (arr_6 [i_21 - 3]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */int) arr_81 [i_21 - 2])) / (((/* implicit */int) (short)-21009)))))));
                }
            } 
        } 
        arr_85 [i_20] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_83 [0ULL] [i_20] [i_20])) & (((/* implicit */int) (_Bool)1)))));
    }
}
