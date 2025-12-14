/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19920
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((int) arr_1 [i_0])))));
        arr_3 [i_0] = arr_1 [i_0];
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 = ((/* implicit */_Bool) 1130174776129017668ULL);
                var_17 += ((/* implicit */signed char) 17316569297580533947ULL);
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_18 ^= ((/* implicit */signed char) ((_Bool) 1130174776129017668ULL));
                    arr_12 [i_1] = ((/* implicit */signed char) ((unsigned short) arr_0 [i_0]));
                }
            }
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_17 [i_4] &= ((/* implicit */_Bool) ((unsigned short) max((arr_4 [i_1 - 1] [i_1]), (arr_4 [i_1 - 2] [i_1 - 3]))));
                arr_18 [i_1] = ((/* implicit */int) arr_1 [i_4]);
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_8 [i_1 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 1]))));
                arr_19 [i_1] [i_1] [i_4] = ((/* implicit */_Bool) (~(arr_13 [i_0] [i_1] [i_1] [i_4])));
            }
            var_20 = ((/* implicit */short) max((1953606710), (1953606708)));
        }
        /* vectorizable */
        for (unsigned short i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_5] [i_0] = (~(((/* implicit */int) arr_6 [i_5] [i_5 - 3] [i_5 - 2])));
            var_21 = ((((/* implicit */_Bool) 4191340911U)) ? (-1953606702) : (((/* implicit */int) (unsigned char)251)));
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                arr_25 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_6 [i_5 - 2] [i_5 + 2] [i_5 - 2]));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) arr_6 [i_5 + 1] [i_5 + 1] [i_5 - 2]));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        arr_30 [i_0] [i_5] [i_7] = ((/* implicit */_Bool) arr_7 [i_7]);
                        arr_31 [(unsigned char)13] [i_7] [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) (~(arr_13 [i_0] [i_7] [i_6] [i_7])));
                        var_23 = ((unsigned long long int) arr_26 [i_0] [i_5 + 2] [i_5 - 3] [i_5 + 2] [i_5] [i_5 - 3]);
                    }
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_6])) : (-1953606702)));
                }
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)65523));
                    var_26 = ((/* implicit */unsigned char) arr_9 [i_5] [i_5] [i_6] [i_9] [i_0] [i_6]);
                }
            }
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                var_27 ^= ((/* implicit */signed char) (~(arr_16 [i_5] [i_5 + 1] [i_5 + 1])));
                var_28 = ((/* implicit */unsigned short) arr_16 [i_5 - 3] [i_10] [i_5]);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) ((unsigned long long int) 5186842859993271425LL));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 2) 
                {
                    var_30 = ((/* implicit */unsigned int) arr_5 [i_5] [i_5] [i_5 - 3]);
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) ((arr_44 [i_5] [i_5] [i_5] [i_5 - 2] [i_5 + 2]) ? (arr_14 [i_0] [i_0] [17ULL] [(unsigned short)10]) : (arr_14 [i_5 - 3] [i_5] [6] [i_5])));
                        var_32 = ((/* implicit */int) ((unsigned long long int) arr_41 [i_5 + 2] [i_12 + 1] [i_13] [i_13] [i_13] [i_12 + 1]));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_5] [i_5 - 1] [i_5 - 2])) ? (((/* implicit */unsigned long long int) arr_33 [i_5] [i_5] [i_5 - 2] [i_5] [i_5 + 1])) : (arr_9 [i_5] [i_5] [i_5 - 2] [i_5 + 2] [i_5 + 1] [i_5])));
                        arr_45 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) 18446744073709551615ULL));
                    }
                    arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_38 [(_Bool)1] [i_11] [i_11]);
                    arr_47 [i_12] [i_12] [i_12] [i_12 + 3] [i_12 - 1] = (~(arr_41 [20] [i_5] [i_5 - 1] [(unsigned char)21] [i_12 + 2] [20]));
                }
                /* LoopSeq 3 */
                for (unsigned short i_14 = 1; i_14 < 22; i_14 += 1) 
                {
                    arr_50 [i_14] [1] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_41 [i_14 + 1] [i_5] [3ULL] [i_11] [i_11] [i_5 - 3]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        var_34 -= arr_42 [i_0] [(unsigned char)22] [i_11] [(unsigned char)22];
                        arr_55 [i_0] [i_0] [i_0] [17ULL] [i_11] [i_14] [i_15] = ((/* implicit */short) arr_13 [i_0] [i_14] [i_14] [i_0]);
                        var_35 = ((/* implicit */unsigned long long int) (_Bool)0);
                        arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_15] [i_15] [9LL])) ? (arr_33 [i_0] [i_5] [i_11] [i_14] [i_15]) : (arr_33 [i_0] [i_0] [i_11] [i_14] [i_15])));
                        arr_57 [i_14] [6] [i_11] [i_5 - 3] [11LL] [i_14] [i_14] = ((/* implicit */_Bool) arr_52 [i_14 + 1] [i_5] [i_5 - 2] [i_15]);
                    }
                    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        arr_60 [i_14] = ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_0] [i_0]));
                        arr_61 [i_0] [i_0] [i_14] [i_11] [i_11] [i_14] [i_16] = ((/* implicit */unsigned int) arr_48 [i_14] [i_11] [i_14]);
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_34 [i_0] [16U] [i_0] [i_0] [i_0] [i_0]))));
                        arr_62 [i_0] [(unsigned short)19] [i_0] [i_14] = ((/* implicit */signed char) arr_23 [i_11] [i_5] [i_5 - 2]);
                    }
                    arr_63 [i_0] [i_14] [(_Bool)0] [18LL] = ((/* implicit */short) ((_Bool) (~(arr_43 [i_0] [i_0] [i_0]))));
                }
                for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    var_37 = ((/* implicit */_Bool) arr_8 [i_0] [i_5 - 3] [i_11] [i_17]);
                    /* LoopSeq 3 */
                    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        arr_69 [i_0] [i_0] [(unsigned short)8] [i_0] = ((/* implicit */int) arr_40 [i_5] [i_5 + 1] [i_5 - 3] [i_5]);
                        var_38 = ((/* implicit */signed char) ((unsigned int) arr_5 [i_5 - 1] [i_5 - 2] [i_11]));
                    }
                    for (signed char i_19 = 0; i_19 < 23; i_19 += 4) 
                    {
                        var_39 = ((/* implicit */int) ((unsigned long long int) 10267971125989045688ULL));
                        arr_72 [i_0] [i_0] [7] &= ((/* implicit */unsigned char) ((_Bool) arr_7 [i_19]));
                    }
                    for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) 4724195560770944102ULL);
                        var_41 = ((/* implicit */unsigned short) arr_34 [i_20] [(signed char)6] [i_0] [i_5 + 1] [i_0] [i_0]);
                    }
                    arr_77 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_52 [i_0] [i_11] [i_11] [i_17]));
                    arr_78 [i_0] [i_5 - 3] [i_11] [i_17] = ((/* implicit */_Bool) ((unsigned int) arr_51 [i_5] [i_5 - 3] [i_5 - 2] [i_5] [i_5] [0ULL] [i_5 + 1]));
                }
                for (unsigned long long int i_21 = 3; i_21 < 22; i_21 += 3) 
                {
                    var_42 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    arr_81 [i_0] [i_5 - 2] [(_Bool)1] [i_21] = ((/* implicit */short) ((_Bool) (unsigned short)13));
                    arr_82 [i_0] [i_0] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_5 - 3]))));
                }
                var_43 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_53 [i_5] [i_0] [i_11] [i_5 + 2] [(unsigned short)12]))));
                var_44 &= ((((/* implicit */_Bool) arr_65 [i_0] [i_5 - 2] [i_5 - 2] [(_Bool)1])) ? (((/* implicit */int) arr_20 [i_5 + 1] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_53 [i_11] [i_11] [i_11] [i_5 + 2] [(unsigned short)22])));
            }
        }
        /* LoopSeq 2 */
        for (unsigned short i_22 = 3; i_22 < 21; i_22 += 4) /* same iter space */
        {
            var_45 = ((short) (~(274877906943LL)));
            arr_87 [i_0] = ((/* implicit */unsigned int) arr_15 [i_22 + 2] [i_22 - 1] [(signed char)19] [(unsigned short)11]);
        }
        for (unsigned short i_23 = 3; i_23 < 21; i_23 += 4) /* same iter space */
        {
            var_46 ^= ((/* implicit */short) ((long long int) ((_Bool) arr_42 [i_23 - 2] [i_23 - 3] [i_23] [i_23 - 3])));
            var_47 = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 2 */
            for (unsigned int i_24 = 0; i_24 < 23; i_24 += 3) 
            {
                var_48 |= ((/* implicit */int) arr_10 [i_0] [i_0] [i_24] [i_0]);
                var_49 = (-(((/* implicit */int) arr_4 [i_0] [i_0])));
                var_50 = ((/* implicit */_Bool) arr_48 [i_23] [i_23] [i_23]);
            }
            /* vectorizable */
            for (int i_25 = 0; i_25 < 23; i_25 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_26 = 1; i_26 < 20; i_26 += 4) 
                {
                    arr_98 [i_23] [i_23 + 1] [22U] [i_23 + 1] [(unsigned short)10] [i_0] = ((/* implicit */short) ((signed char) ((int) arr_14 [i_0] [i_0] [i_0] [i_0])));
                    arr_99 [i_0] [i_0] [i_23] [i_26] [i_26 + 1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) -1960009887)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))));
                }
                var_51 = ((/* implicit */signed char) arr_1 [i_23]);
                var_52 = ((/* implicit */unsigned short) arr_92 [i_23]);
                var_53 = ((/* implicit */int) arr_32 [i_0] [i_0] [i_0]);
            }
        }
        arr_100 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (+(arr_88 [i_0]))));
    }
    var_54 = ((/* implicit */int) var_12);
    var_55 = ((/* implicit */int) var_14);
}
