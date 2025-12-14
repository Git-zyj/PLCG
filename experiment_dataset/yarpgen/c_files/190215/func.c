/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190215
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
    var_19 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_20 = 12769135303074382427ULL;
                            var_21 = ((/* implicit */unsigned char) var_12);
                            var_22 = ((/* implicit */signed char) ((arr_13 [23U] [i_1] [i_2]) | (((/* implicit */long long int) (~(arr_8 [i_2] [i_2]))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [22ULL])))));
        }
        /* LoopSeq 2 */
        for (int i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
        {
            arr_20 [i_0 + 2] = ((/* implicit */short) ((arr_12 [i_0] [i_0] [(short)23]) % (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_0]))));
            arr_21 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 5992840041155732184LL))) ? (arr_4 [i_5 + 1] [(signed char)23]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 1] [6ULL])))));
        }
        for (int i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_13)) : (var_16)))) ? ((~(1U))) : (((/* implicit */unsigned int) ((int) (short)6882)))));
                arr_27 [i_0] [(signed char)14] [i_7] [i_6] = ((/* implicit */unsigned int) arr_17 [i_7] [i_6] [(unsigned short)6]);
                arr_28 [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_6 + 1] [i_6 - 1])) ? (arr_5 [i_6 + 2] [i_6 - 1] [i_6 + 2]) : (arr_5 [i_6 - 1] [i_6 - 1] [i_6 + 1])));
                arr_29 [i_0 + 2] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((unsigned short) 2258918968U));
                arr_30 [i_0] [22LL] [i_6] [i_0 + 1] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned char)153)) && (((/* implicit */_Bool) 1152920405095219200ULL))))));
            }
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
            {
                arr_33 [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_26 [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                arr_34 [i_0] [i_6] [i_8] = ((/* implicit */unsigned int) arr_26 [i_0 - 1] [i_0 - 1]);
            }
            arr_35 [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((signed char) 5992840041155732184LL));
            var_24 = ((/* implicit */unsigned int) ((signed char) var_10));
        }
    }
    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
    {
        arr_38 [i_9] [i_9 - 1] = ((unsigned short) 956299204U);
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) arr_11 [i_9] [i_9 - 1] [i_9] [(unsigned short)2] [i_9 + 1]))), (max((((((/* implicit */_Bool) arr_18 [2ULL])) ? (arr_23 [10U] [10U]) : (((/* implicit */unsigned long long int) arr_13 [15U] [i_9] [i_9])))), (arr_23 [i_9] [(signed char)2]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 2) /* same iter space */
    {
        arr_43 [i_10] = ((/* implicit */unsigned char) ((arr_26 [i_10 - 1] [i_10 + 1]) / (arr_26 [i_10 + 2] [i_10])));
        arr_44 [21ULL] = ((/* implicit */signed char) 281474976708608LL);
        /* LoopSeq 2 */
        for (short i_11 = 1; i_11 < 22; i_11 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned char)185))));
            var_27 = ((/* implicit */unsigned long long int) (~(5992840041155732193LL)));
        }
        for (unsigned long long int i_12 = 4; i_12 < 20; i_12 += 4) 
        {
            arr_49 [i_10] = ((/* implicit */signed char) (unsigned char)107);
            /* LoopSeq 2 */
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                arr_54 [(signed char)18] [i_12] [i_13] = ((/* implicit */unsigned short) -5992840041155732185LL);
                /* LoopSeq 1 */
                for (signed char i_14 = 2; i_14 < 21; i_14 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 3; i_15 < 22; i_15 += 3) 
                    {
                        arr_60 [i_12 + 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_10 + 1])) ? (((/* implicit */int) arr_32 [i_10] [i_12])) : (((/* implicit */int) arr_25 [i_14]))))) > ((~(1265334816438014613ULL)))));
                        var_28 = ((/* implicit */signed char) arr_11 [i_15] [i_14] [i_13] [i_14] [i_10]);
                        var_29 = arr_4 [i_12] [(unsigned char)0];
                        arr_61 [i_10 + 1] = ((/* implicit */unsigned short) arr_7 [i_10 + 2]);
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_14 + 3])) ? (arr_48 [i_10 - 1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_13] [i_15 - 1]))))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        arr_65 [i_10 - 1] [i_12 - 1] [i_13] [i_14] [i_16] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [13U] [i_14 - 1])) || (((/* implicit */_Bool) var_1)))) ? (arr_7 [i_10 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_10 + 1] [i_14])))));
                        var_31 = arr_48 [i_10 + 1] [i_10 + 2];
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3357762063U)) ? (arr_4 [i_10 + 1] [(unsigned char)8]) : (arr_17 [(short)7] [0LL] [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_6)) > (3852862877604018658LL))))) : (((unsigned long long int) (signed char)35))));
                        var_33 = ((/* implicit */unsigned long long int) 3357762046U);
                        var_34 = ((/* implicit */unsigned short) var_2);
                    }
                    var_35 = ((/* implicit */unsigned short) arr_31 [i_10] [i_14] [i_10] [i_10]);
                }
                var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)116))));
                arr_66 [i_13] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)35))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (3955293305U)))) : (9223372036854775807LL)));
                var_37 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6666034937494516864LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_10 + 2]))) : (2236570573U))) >= (var_9)));
            }
            for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    arr_71 [i_10] [i_12] [i_17 - 2] [i_18] = ((/* implicit */unsigned int) 17119919688378086945ULL);
                    arr_72 [(short)19] [i_12] [(short)19] [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(2471099851U)))) ? (arr_7 [i_12 + 3]) : (((/* implicit */unsigned long long int) 5992840041155732184LL))));
                    arr_73 [16LL] [i_12] [10] [(signed char)12] = ((/* implicit */signed char) (~(((-5992840041155732185LL) + (((/* implicit */long long int) arr_57 [i_10] [i_12 - 2] [20ULL] [i_18] [21U] [9LL]))))));
                    var_38 -= ((/* implicit */unsigned int) arr_62 [i_17 + 1]);
                }
                /* LoopNest 2 */
                for (unsigned short i_19 = 1; i_19 < 22; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        {
                            arr_81 [i_10] [i_20] [i_17 + 1] [i_10] [0U] [i_19] = ((/* implicit */signed char) arr_52 [i_17] [i_17] [i_17] [i_17]);
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) arr_64 [i_10] [i_10] [3ULL]))));
                            var_40 = ((long long int) arr_41 [i_12 + 2]);
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned long long int) (signed char)35);
                /* LoopNest 2 */
                for (unsigned int i_21 = 2; i_21 < 23; i_21 += 3) 
                {
                    for (unsigned short i_22 = 1; i_22 < 23; i_22 += 4) 
                    {
                        {
                            arr_88 [22ULL] [i_22] [15U] [i_21 + 1] [(unsigned short)14] = ((/* implicit */long long int) ((unsigned long long int) arr_70 [i_10 + 1] [i_10 - 1]));
                            arr_89 [(unsigned short)17] [i_12] [i_17] [i_17] [i_21 - 2] [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) 12456276395273182709ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_17 - 2] [i_10 + 1] [i_10]))) : (((((/* implicit */_Bool) arr_48 [(short)20] [i_21 + 1])) ? (((/* implicit */unsigned long long int) 9223372036854775783LL)) : (arr_55 [i_22] [i_22])))));
                            arr_90 [17LL] [i_22 + 1] [i_22] [i_22] [12ULL] [i_10 - 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_12]))) : (var_3)))));
                        }
                    } 
                } 
            }
        }
    }
}
