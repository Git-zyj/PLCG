/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45004
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
    var_19 = var_7;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
            arr_5 [i_1] = ((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_1 [i_0])))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_1]) < (arr_3 [i_0] [i_1] [i_1])));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((arr_3 [i_0] [i_3 - 3] [i_3]) - (arr_3 [i_1] [i_3 - 2] [i_3])));
                        var_22 ^= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_3 + 2])) & (((/* implicit */int) arr_2 [i_3 - 3]))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_4])) ? (arr_0 [i_0] [i_4 + 1]) : (arr_0 [i_0] [i_0])));
            arr_13 [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [i_4 - 1] [i_4 + 1] [i_4 + 1]));
        }
        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_16 [i_5] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_5] [i_5]);
            var_24 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_5] [i_5])) >> (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_5])) + (32))))));
        }
        arr_17 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0] [(short)8])) | (((/* implicit */int) arr_2 [i_0])))))));
        arr_18 [i_0] &= ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]);
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0]))));
        arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_11 [i_0])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_14 [i_0] [1ULL] [i_0])))))));
    }
    for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
    {
        arr_22 [i_6] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6 + 3] [i_6])) ? (((/* implicit */int) arr_15 [i_6] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_15 [15ULL] [i_6 - 1] [i_6])))));
        var_26 = ((/* implicit */unsigned int) (+(((unsigned long long int) (signed char)0))));
        arr_23 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 - 1] [i_6 + 1])) ? (arr_0 [i_6 + 2] [i_6 - 1]) : (arr_0 [i_6 - 1] [i_6 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)13]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18282))) + (7746133958510382627ULL)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        var_27 = ((/* implicit */unsigned char) min((var_27), (((unsigned char) arr_2 [i_7]))));
        arr_26 [i_7] = ((/* implicit */short) (~(((((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7])) / (arr_12 [i_7] [i_7] [(unsigned short)15])))));
        arr_27 [i_7] [6ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_7] [(signed char)8] [i_7])) ? (arr_12 [i_7] [(unsigned short)8] [i_7]) : (arr_12 [i_7] [(_Bool)1] [i_7])));
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (int i_9 = 3; i_9 < 12; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        arr_35 [i_7] [i_8] [i_9] [i_10] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_7] [i_9 - 1] [i_10])) ? (((/* implicit */int) arr_9 [i_9 - 2] [i_9 - 2] [i_9 - 2])) : (((/* implicit */int) arr_15 [i_7] [i_8] [i_9 - 1]))));
                        var_28 = ((/* implicit */_Bool) arr_10 [i_10] [i_9] [2U] [i_8] [i_7]);
                        var_29 = ((/* implicit */unsigned char) arr_8 [i_7] [i_8] [i_10]);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
        {
            var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_7])) != (((/* implicit */int) arr_28 [i_11] [i_7] [i_11]))))) == (((arr_32 [i_7] [i_7] [i_11] [i_11]) ^ (((/* implicit */int) arr_29 [i_11]))))));
            var_31 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))) : (7746133958510382637ULL)));
        }
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_13 = 1; i_13 < 12; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 4; i_14 < 10; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 4; i_15 < 12; i_15 += 3) 
                    {
                        {
                            var_32 = arr_45 [i_7] [i_12] [i_13];
                            arr_53 [i_12] [i_12] [i_13] [i_14] [i_15] |= (-(((/* implicit */int) arr_33 [i_12] [i_12] [i_12] [i_12])));
                            arr_54 [i_7] = ((/* implicit */unsigned long long int) arr_9 [i_13 + 1] [i_14 - 3] [i_15 - 3]);
                            arr_55 [i_7] [i_7] [i_7] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_7] [i_7] [i_7] [i_7] [(unsigned char)10] [i_7])) ? (((/* implicit */int) arr_31 [i_14 - 4] [i_7] [i_14 - 4] [i_15 - 2])) : (((/* implicit */int) ((arr_52 [i_7] [i_14 - 4] [i_7] [i_7] [i_7]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [(signed char)12] [i_15]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_16 = 1; i_16 < 12; i_16 += 2) 
                {
                    arr_58 [i_7] [i_7] [i_12] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_57 [i_13 - 1] [i_13 - 1] [i_13] [i_13 + 1])) ? (((/* implicit */int) arr_28 [i_12] [i_13 - 1] [i_13])) : (arr_12 [i_13 - 1] [i_12] [i_13 - 1])));
                    var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_13 - 1])) ? (((/* implicit */int) arr_56 [i_13 - 1] [i_16 - 1] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_56 [i_13 + 1] [i_16 + 1] [(unsigned char)11] [i_16] [i_16 + 1]))));
                }
                arr_59 [i_7] = (-(arr_3 [i_13 + 1] [9] [i_13]));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 12; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_66 [i_13] [i_12] [i_17] [i_17] [i_7] = ((((/* implicit */int) arr_33 [i_13 + 1] [i_13 + 1] [i_17 + 1] [i_7])) >= (((/* implicit */int) ((arr_39 [i_7]) < (((/* implicit */int) arr_63 [i_7] [i_12] [i_7] [i_17] [(unsigned short)12]))))));
                            var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */int) arr_38 [i_13 + 1] [i_17] [i_17 - 1])) | (((/* implicit */int) arr_9 [i_13 + 1] [i_17 + 1] [i_17 - 2]))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_19 = 0; i_19 < 13; i_19 += 2) /* same iter space */
            {
                arr_69 [i_7] = (((_Bool)0) && (((/* implicit */_Bool) (short)-16174)));
                var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (10064932619879600368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))) ? (((17031507426549556568ULL) >> (((4146403248381471133ULL) - (4146403248381471086ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_60 [12ULL]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [i_7] [i_12] [i_19]))))))));
                arr_70 [i_7] [i_7] [i_12] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) arr_3 [i_19] [i_12] [i_7]))) < (arr_25 [i_7] [i_7])));
            }
            for (unsigned short i_20 = 0; i_20 < 13; i_20 += 2) /* same iter space */
            {
                var_36 *= ((/* implicit */short) ((arr_72 [i_7] [i_12] [i_20]) | (((/* implicit */int) arr_2 [i_20]))));
                /* LoopSeq 1 */
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) ((((((arr_32 [i_20] [i_12] [(unsigned char)5] [i_21]) + (((/* implicit */int) arr_42 [i_7] [i_20])))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) arr_33 [i_20] [i_12] [i_20] [i_7])) != (((/* implicit */int) arr_68 [i_7] [i_7] [i_20] [i_21])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 2; i_22 < 12; i_22 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(signed char)1] [14U] [i_21 - 1])) && (((/* implicit */_Bool) arr_10 [i_7] [i_12] [i_20] [(unsigned short)9] [i_7]))))) >= (((/* implicit */int) arr_61 [i_7] [i_7] [i_21 - 1]))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */int) arr_62 [i_20] [i_21 - 1] [i_21] [i_22 - 2])) * (((/* implicit */int) arr_71 [i_20] [i_21 - 1] [i_22 - 2] [i_22])))))));
                        arr_78 [i_7] [i_7] [i_12] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((arr_34 [i_7] [i_22 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_7] [i_7] [i_7] [i_20] [(short)3] [i_22])) && (((/* implicit */_Bool) arr_52 [i_7] [i_12] [i_7] [i_21] [i_7])))))) : (((((/* implicit */_Bool) 0ULL)) ? (17031507426549556574ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32)))))));
                    }
                }
                var_40 = ((unsigned long long int) (_Bool)0);
            }
            for (unsigned short i_23 = 0; i_23 < 13; i_23 += 2) /* same iter space */
            {
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_41 [i_7] [i_12] [i_23]))));
                arr_83 [i_7] [(unsigned short)9] [i_12] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_7] [i_7] [i_7] [i_12] [i_12] [i_23])) ? (((/* implicit */int) arr_56 [i_7] [i_7] [i_12] [i_23] [i_23])) : (((/* implicit */int) arr_4 [0ULL]))));
                arr_84 [i_7] [i_23] [i_12] [i_23] &= ((/* implicit */int) arr_64 [i_7] [i_12] [(unsigned char)5] [i_23] [i_23]);
            }
            var_42 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_12])) ? (((/* implicit */int) arr_49 [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_14 [i_7] [i_7] [i_12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_7] [i_7] [i_12]))) : (arr_25 [i_12] [i_12])));
        }
    }
    var_43 = ((/* implicit */unsigned int) var_13);
    var_44 ^= ((/* implicit */short) var_5);
    var_45 = ((/* implicit */unsigned long long int) (((~(var_14))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))))));
}
