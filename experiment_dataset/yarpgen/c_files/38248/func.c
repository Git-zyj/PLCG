/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38248
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
    var_18 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) * (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) var_15))))) == (min((3756353889U), (((/* implicit */unsigned int) var_5)))))))));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_1]);
                            var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)6] [i_2] [i_3]))) : (-4605648483546796771LL))) != (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) ^ (3756353889U)))))))));
                        }
                    } 
                } 
                arr_10 [i_1] [(short)22] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_8 [i_0] [17LL] [i_1] [2LL] [i_1])))), (min((((((/* implicit */int) arr_3 [(signed char)21])) % (((/* implicit */int) arr_8 [11ULL] [(_Bool)1] [i_0] [(short)2] [i_1])))), (((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_16 [i_4 + 3] [i_4] [i_4 + 2] [i_0]));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned char) ((3756353889U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4 - 1] [i_5 + 1] [i_5 - 3])))));
                                var_22 = ((/* implicit */unsigned char) (~(-2678062734856906239LL)));
                                arr_21 [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 + 3] [i_6] [i_6])) ? (((/* implicit */int) arr_2 [i_4 + 1] [2LL] [i_4])) : (((/* implicit */int) arr_2 [i_4 - 1] [i_4] [i_6 + 1]))));
                                arr_22 [i_1] [i_5] &= ((/* implicit */_Bool) arr_20 [i_5] [i_5 + 1] [(unsigned char)10] [i_5] [i_6]);
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_7 = 1; i_7 < 19; i_7 += 3) 
                            {
                                arr_25 [i_0] [i_1] [i_0] [i_5] [(_Bool)1] [i_7 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16409241261416514965ULL))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) >= (((/* implicit */int) arr_3 [i_7 + 4]))))) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_5] [(_Bool)1] [i_5 - 2] [i_7 + 1] [16U])) ? ((-(arr_13 [i_5] [i_1] [i_5 - 1] [i_7]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (short)19994)))))));
                            }
                            for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                            {
                                var_25 &= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_11 [i_4 - 1] [i_5 + 1] [i_5 + 2])), (2037502812293036668ULL))), (((/* implicit */unsigned long long int) arr_20 [i_8] [i_5] [i_4] [i_1] [7LL]))));
                                arr_28 [i_0] [i_5 + 3] [i_4 - 1] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)19976)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_4]))))))));
                            }
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((unsigned char) ((((/* implicit */_Bool) arr_19 [i_4 + 1] [(signed char)18] [i_4] [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_27 [i_4 + 3] [i_4 + 3] [(short)14] [(signed char)10] [i_4 + 3] [i_5 - 2])) : (((/* implicit */int) arr_27 [i_4 - 1] [6LL] [i_4] [i_4] [i_4] [i_5 + 2])))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(var_15)))) / (((var_15) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_26 [i_1] [i_0] [i_0] [i_1] [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) == (((/* implicit */int) arr_8 [i_0] [(unsigned char)13] [(unsigned char)13] [i_0] [i_1]))))) : (((/* implicit */int) max((((/* implicit */short) arr_6 [14ULL] [i_0] [i_0] [i_1])), (arr_23 [i_0])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 21; i_10 += 2) 
                    {
                        for (signed char i_11 = 2; i_11 < 22; i_11 += 2) 
                        {
                            {
                                arr_38 [i_9] &= ((/* implicit */unsigned char) arr_32 [i_0]);
                                arr_39 [i_0] [i_0] [(_Bool)1] [i_0] [16U] [i_10] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10 - 1] [i_11 - 2] [i_11] [i_11 - 2] [i_11] [i_11 - 2]))) >= (arr_13 [i_0] [i_1] [21LL] [i_11 - 2])));
                            }
                        } 
                    } 
                    var_28 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_30 [i_9] [i_1])) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_9] [i_9])) : (((/* implicit */int) (!((_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 2; i_12 < 21; i_12 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (6681436925637113691LL))))));
                        arr_43 [i_0] [i_1] [i_12] = var_14;
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_46 [14LL] [i_9] [i_9] [i_13] &= ((/* implicit */unsigned char) ((((arr_32 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_9] [18LL]))) : (var_0))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_0] [i_9] [i_13])) + (2147483647))) >> (((((/* implicit */int) arr_12 [12LL] [i_1])) - (145))))))));
                        arr_47 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */short) arr_45 [i_0]);
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
                        {
                            arr_51 [i_0] [i_1] [i_0] [i_9] [i_13] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31980))) ^ (2982502714U)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_9]))) ^ (arr_36 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_14] [(_Bool)1] [i_14]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))))));
                        }
                        for (short i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
                        {
                            arr_54 [(_Bool)1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_9] [11U]);
                            arr_55 [i_0] [i_1] [i_0] [i_0] [i_13] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) 8245073708394572945LL)) : (3235287881235235736ULL)));
                        }
                    }
                }
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 23; i_16 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        var_32 = ((/* implicit */signed char) arr_14 [19LL] [i_1] [8ULL]);
                        var_33 = ((/* implicit */unsigned char) ((short) arr_45 [i_0]));
                        var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_49 [i_0] [i_1] [i_16] [i_17]))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) (+(((/* implicit */int) arr_26 [i_0] [i_0] [(unsigned char)20] [i_16] [i_18]))));
                        arr_63 [i_0] [5] [i_0] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_0] [i_1] [i_16] [i_18] [i_18])) ? (((((/* implicit */int) (signed char)118)) + (((/* implicit */int) arr_6 [i_0] [(short)16] [i_0] [i_0])))) : (((/* implicit */int) (unsigned char)173))));
                    }
                    var_36 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_16])) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_16]))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_19 = 0; i_19 < 22; i_19 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 2) 
        {
            for (signed char i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                {
                    arr_72 [i_20] [i_19] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_19] [i_20] [i_19] [i_20] [i_21]))))) % (((/* implicit */int) var_3))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_19] [i_19] [i_19] [i_21])) ? (((/* implicit */int) arr_34 [i_19] [6ULL] [i_20] [i_20] [i_21])) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */int) (signed char)118)) | (((/* implicit */int) arr_70 [i_19] [i_20] [i_19] [i_21])))) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_19] [i_19] [i_20] [i_20] [i_21] [i_21])) >= (((/* implicit */int) arr_48 [i_19] [i_19] [i_19] [i_19] [i_21])))))));
                }
            } 
        } 
        var_38 = ((/* implicit */signed char) 1312464584U);
        arr_73 [8ULL] [i_19] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_19] [i_19] [i_19] [i_19]))) + (((arr_60 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_19] [i_19] [i_19] [i_19])))))));
    }
    for (signed char i_22 = 2; i_22 < 20; i_22 += 3) 
    {
        var_39 = ((/* implicit */long long int) min((1970324836974592ULL), ((+(741381688155608178ULL)))));
        arr_78 [i_22 - 1] [i_22] |= ((/* implicit */unsigned long long int) arr_13 [i_22] [i_22] [i_22 - 2] [(signed char)20]);
        var_40 |= arr_37 [i_22] [i_22 - 2] [i_22 - 2] [i_22] [i_22] [i_22];
        arr_79 [i_22] = ((/* implicit */long long int) 1312464582U);
    }
}
