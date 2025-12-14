/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19941
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
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_19 = arr_1 [i_0 + 1];
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_9)))));
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)-20732)) : (((/* implicit */int) ((signed char) 4294967295U)))));
        var_20 = ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (short)22909))))) ? (((/* implicit */unsigned long long int) (-(5U)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) ? (max((var_9), (((/* implicit */unsigned long long int) arr_4 [i_1])))) : (((/* implicit */unsigned long long int) var_4)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    arr_13 [i_1 - 2] [i_3] = ((/* implicit */short) arr_0 [i_1]);
                    arr_14 [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1] [i_2] [i_1]))))), ((-(8191U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 - 2]))))))))) : (((long long int) arr_3 [i_1 - 2]))));
                    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) var_18))))) - ((-(arr_11 [4] [i_1 - 3] [i_1 + 1] [i_1 - 3])))));
                }
            } 
        } 
    }
    for (signed char i_4 = 3; i_4 < 16; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_20 [i_4 - 3] = ((/* implicit */unsigned short) (~(((unsigned long long int) max((((/* implicit */unsigned long long int) var_4)), (arr_18 [i_5] [i_4]))))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        {
                            arr_30 [i_4] [i_7] [i_6] [i_8] [i_8] [i_7] [i_6] = ((/* implicit */_Bool) (short)22938);
                            arr_31 [i_4] [i_6] [i_4 - 1] = ((/* implicit */short) max((arr_16 [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4 + 3])) && (((/* implicit */_Bool) var_0)))))));
                            arr_32 [i_4] [i_6] = ((/* implicit */_Bool) ((short) arr_26 [i_4] [i_6] [i_4 + 1] [i_4 + 1] [(_Bool)1]));
                            arr_33 [i_4] [i_4] [i_4] [i_4 - 2] [i_6] [i_4] = ((/* implicit */short) ((unsigned long long int) (short)24363));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            arr_37 [i_4 - 1] [i_4 - 1] [i_4] = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_24 [i_4 + 3] [i_9] [i_9] [(short)0] [i_9] [16])))) | (7U))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) (_Bool)1))))))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 4; i_10 < 17; i_10 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) (unsigned short)65234)) - (65233)))))));
                var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 7600769798659325408LL)), (2377645747207879812ULL)));
            }
        }
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            arr_43 [i_4 + 2] [i_11] [i_11] = ((/* implicit */long long int) 7U);
            arr_44 [i_11] = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((unsigned char) 8973846638885053528LL))) % (((/* implicit */int) min((arr_40 [i_11] [i_4]), (arr_19 [i_11] [i_4 + 1] [i_4 + 1]))))))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_39 [i_11] [i_4 - 3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)302)) < (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 7905467547170124207ULL)) ? (arr_18 [i_4 - 1] [i_11]) : (((/* implicit */unsigned long long int) arr_34 [i_4] [i_4])))))), (max((10541276526539427409ULL), (9084031542522098116ULL))))))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~((~(((/* implicit */int) min((arr_1 [i_4 + 2]), (((/* implicit */short) arr_25 [i_4] [i_11] [(unsigned char)12] [i_4] [i_4 - 3] [i_4]))))))))))));
        }
        var_26 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 9084031542522098103ULL)) ? (2529253414375658303ULL) : (((/* implicit */unsigned long long int) -243462523)))), (arr_18 [i_4] [(unsigned char)16])));
    }
    for (signed char i_12 = 3; i_12 < 16; i_12 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_16 [i_12 - 3]))));
        var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)45))));
        arr_48 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((arr_7 [i_12 + 2]), (((/* implicit */unsigned int) arr_47 [i_12])))), (((/* implicit */unsigned int) ((arr_16 [i_12]) != (9362712531187453492ULL))))))) ? (min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((int) (~(((/* implicit */int) arr_8 [i_12] [i_12] [i_12]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            arr_53 [i_13] [i_12 + 2] [i_13] = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned long long int) var_16))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_29 [i_12])) + (((9362712531187453520ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))));
            var_30 = ((/* implicit */unsigned long long int) var_6);
        }
    }
    var_31 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (_Bool)1)), (-7600769798659325408LL))) + (((/* implicit */long long int) (+(var_4))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
    {
        var_32 = ((/* implicit */unsigned char) arr_50 [i_14]);
        var_33 &= ((/* implicit */unsigned int) arr_34 [i_14] [i_14]);
        var_34 = ((/* implicit */unsigned int) ((arr_24 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) ^ ((~(((/* implicit */int) arr_27 [(short)12] [(_Bool)1] [i_14] [i_14] [(short)18] [i_14] [(unsigned char)18]))))));
    }
    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        var_35 = ((/* implicit */unsigned int) (-(((9362712531187453483ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9084031542522098116ULL)) ? (7600769798659325394LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
        var_36 -= max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_15])))))) < (arr_57 [i_15])))), ((+(arr_57 [i_15]))));
    }
    for (short i_16 = 3; i_16 < 9; i_16 += 2) 
    {
        var_37 -= ((/* implicit */int) ((unsigned long long int) (~(-8880394545917568406LL))));
        arr_62 [(signed char)2] [(signed char)2] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (short)7338)), ((unsigned short)65234)));
        var_38 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(-2310573303675718235LL))) + (((/* implicit */long long int) (+(arr_47 [i_16]))))))) || (((/* implicit */_Bool) max((-6906810048195793748LL), (((/* implicit */long long int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
    {
        arr_65 [i_17] [i_17] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_17]))) ^ (((unsigned int) arr_64 [(unsigned char)11])));
        var_39 = ((/* implicit */_Bool) ((unsigned char) (-(arr_64 [i_17]))));
        var_40 = ((/* implicit */int) arr_63 [i_17]);
        var_41 = ((/* implicit */int) 6861199742080147150ULL);
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 24; i_18 += 4) 
    {
        for (unsigned short i_19 = 1; i_19 < 22; i_19 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_20 = 4; i_20 < 21; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 24; i_22 += 3) 
                        {
                            {
                                arr_80 [i_18] [i_19 + 1] [i_18] [i_20 + 3] [i_21] [i_21] [i_22] |= ((/* implicit */unsigned short) (~(arr_66 [i_19 + 1] [i_20])));
                                arr_81 [i_22] [i_22] [i_22] [i_19 + 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_68 [i_19 + 2] [i_20 - 3])))));
                            }
                        } 
                    } 
                } 
                var_42 = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) arr_76 [(unsigned short)4] [i_19] [i_19 - 1] [i_19 - 1] [i_19])))) ? (((/* implicit */int) arr_67 [i_18] [i_19])) : (((int) (short)-12939)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) var_12)), (arr_72 [i_18] [i_18] [i_18])))))))));
                arr_82 [i_18] = ((unsigned long long int) 18141499833819793633ULL);
                arr_83 [i_18] = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_73 [i_19 + 1] [i_19 - 1] [i_19 - 1])))));
                arr_84 [i_18] = ((/* implicit */unsigned char) var_11);
            }
        } 
    } 
}
