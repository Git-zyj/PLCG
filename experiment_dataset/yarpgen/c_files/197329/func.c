/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197329
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_1]))) | (0)));
            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) 0))));
            var_21 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 0)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) 1808033449)))));
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_22 |= ((/* implicit */signed char) ((((unsigned long long int) 0)) ^ (((/* implicit */unsigned long long int) -8))));
                        var_23 = ((/* implicit */short) ((668601862) >> (((((/* implicit */int) max((arr_9 [i_4 - 2] [i_4 + 1] [i_4 + 2] [i_4 - 1]), (arr_9 [i_4 + 2] [i_4 + 1] [i_4 - 2] [i_4 + 2])))) - (109)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) arr_14 [(_Bool)1] [i_2] [i_2] [i_2] [(unsigned char)8]);
                        var_25 -= ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0]) ? (668601862) : (((/* implicit */int) var_4))))) != ((-(1934647229598014898ULL))))));
                        var_26 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_2] [i_6]);
                    }
                } 
            } 
            var_27 = ((unsigned long long int) ((short) arr_4 [i_2] [i_2]));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (-16)));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_3 [i_7] [i_8]))));
            }
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_9] [i_9] [i_9])) ? (arr_20 [(unsigned char)11] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_7] [i_0] [i_9])))));
                var_31 = arr_24 [(_Bool)1] [i_7] [i_9];
            }
            var_32 = (-(((/* implicit */int) var_6)));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 4) 
                {
                    {
                        var_33 = ((((/* implicit */_Bool) arr_4 [i_7] [i_11])) ? (arr_6 [i_11 - 2]) : (arr_6 [i_11 - 1]));
                        var_34 *= ((/* implicit */unsigned char) ((signed char) arr_13 [i_0] [i_0] [i_0] [i_0]));
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) (+(arr_15 [i_0] [i_7])));
            var_36 = ((/* implicit */unsigned char) (+(0)));
        }
        var_37 *= ((/* implicit */unsigned char) arr_15 [(short)17] [i_0]);
        var_38 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_0]), (((/* implicit */long long int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((arr_6 [i_0]), (((/* implicit */long long int) arr_22 [i_0] [i_0]))))) : (max((((/* implicit */unsigned long long int) -6)), (9447503994058708939ULL)))));
    }
    for (signed char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */long long int) (+(-6)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 4) 
        {
            var_40 = ((/* implicit */long long int) arr_25 [i_13] [i_13] [i_13 + 1] [i_13 - 1]);
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 19; i_16 += 4) 
                        {
                            var_41 &= ((/* implicit */long long int) (~(((/* implicit */int) arr_45 [i_13 - 1] [i_13] [i_13 - 1]))));
                            var_42 = ((/* implicit */_Bool) arr_6 [i_13 - 1]);
                            var_43 &= ((/* implicit */unsigned long long int) arr_22 [i_13 + 1] [(unsigned char)13]);
                        }
                        var_44 = ((((/* implicit */_Bool) 14634899738575164296ULL)) ? (12783148919801105419ULL) : (((/* implicit */unsigned long long int) -8826189104686209799LL)));
                    }
                } 
            } 
            var_45 &= ((/* implicit */unsigned long long int) var_16);
            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 16)) * ((+(0LL)))));
        }
        var_47 = ((/* implicit */unsigned long long int) -16);
        var_48 &= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6)) & (((((/* implicit */_Bool) 26)) ? (((/* implicit */unsigned long long int) 28)) : (arr_15 [(unsigned char)9] [5])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2715565682851901695LL)) ? (((/* implicit */int) (signed char)-59)) : (668601858)))) : ((-(((unsigned long long int) arr_16 [i_12] [i_12] [i_12])))));
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 25; i_17 += 1) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            {
                var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_17] [i_18])) ? (min((arr_46 [i_18] [i_18]), (((/* implicit */unsigned long long int) -8826189104686209813LL)))) : (max(((+(5663595153908446196ULL))), (max((12783148919801105419ULL), (((/* implicit */unsigned long long int) 8826189104686209799LL))))))));
                /* LoopNest 3 */
                for (unsigned char i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 2; i_20 < 21; i_20 += 1) 
                    {
                        for (int i_21 = 1; i_21 < 22; i_21 += 1) 
                        {
                            {
                                var_50 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_56 [i_17] [i_20] [(unsigned char)14] [i_20] [i_20] [i_21 + 2] [i_18])) ? (((/* implicit */int) arr_56 [(signed char)0] [i_21] [(signed char)0] [i_20] [1LL] [i_21 + 2] [i_18])) : (((/* implicit */int) arr_56 [(_Bool)1] [i_21] [(_Bool)1] [(_Bool)1] [i_21] [i_21 + 1] [i_21])))) * ((+((+(((/* implicit */int) arr_52 [i_17] [i_18] [i_17]))))))));
                                var_51 = (-(((/* implicit */int) arr_55 [(short)23] [i_20 - 1] [i_20 - 1] [i_21 + 3] [i_20 - 1] [i_20 - 1])));
                                var_52 = ((/* implicit */unsigned long long int) -341984461);
                                var_53 = ((/* implicit */signed char) (!(arr_55 [i_21] [i_21] [i_21 + 1] [i_21 + 3] [i_21 + 1] [i_21 + 2])));
                                var_54 = ((/* implicit */short) ((var_17) || (((/* implicit */_Bool) -8826189104686209819LL))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_22 = 1; i_22 < 22; i_22 += 4) 
                {
                    for (unsigned char i_23 = 0; i_23 < 25; i_23 += 4) 
                    {
                        for (int i_24 = 1; i_24 < 22; i_24 += 2) 
                        {
                            {
                                var_55 = ((/* implicit */signed char) (-(arr_50 [i_18] [i_23] [i_24])));
                                var_56 = ((/* implicit */unsigned long long int) max((var_56), (((((((/* implicit */_Bool) arr_56 [i_17] [i_18] [i_24 + 1] [i_23] [i_22 + 2] [i_24] [i_17])) && (((/* implicit */_Bool) max((arr_57 [i_17] [i_17] [i_17] [i_17]), (arr_52 [i_17] [i_17] [21])))))) ? (min((((/* implicit */unsigned long long int) 41426541)), (16977168658000525549ULL))) : (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))), (12783148919801105419ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
