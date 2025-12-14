/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248036
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_14 [i_1] = ((/* implicit */unsigned int) ((signed char) (+(arr_10 [i_0] [i_1] [i_2] [i_3]))));
                        var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) | (4262535833U)));
                        var_12 = ((/* implicit */_Bool) 3596415745U);
                    }
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]);
                        arr_19 [i_0] [i_1] [i_1] [i_4] = ((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_1]) : (arr_11 [i_0] [i_1] [i_2] [i_4] [i_1]));
                    }
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_4 [i_0]))));
                }
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_15 = max((max((min((arr_3 [i_0] [i_0]), (((/* implicit */signed char) arr_18 [i_6] [i_5] [i_1] [i_0])))), (((/* implicit */signed char) (_Bool)0)))), (((/* implicit */signed char) arr_8 [i_0] [i_1] [i_5])));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [i_6])) ? (((arr_0 [i_0] [i_1]) + (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0]))))))));
                        var_17 = (!(((/* implicit */_Bool) max((-3648982689415272657LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)1)) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 3; i_7 < 9; i_7 += 2) 
                        {
                            var_18 ^= ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_5] [i_6]))) / (min((arr_12 [i_0] [i_1]), (arr_12 [i_0] [i_6]))))));
                            arr_27 [i_0] [i_5] [i_5] [i_5] [i_7 + 1] [i_7] &= ((/* implicit */_Bool) ((15699440682754429110ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_5] |= ((/* implicit */signed char) var_9);
                        var_19 = ((/* implicit */unsigned int) arr_3 [i_0] [i_5]);
                        arr_32 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-(arr_22 [i_8] [i_1] [i_1] [i_0])));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8] [i_8 - 1]))) % (arr_21 [i_8] [i_1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            arr_36 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_8 + 3] [i_1]))));
                            arr_37 [i_1] [i_8 + 3] [i_8] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) ((arr_30 [i_0] [i_1] [i_5] [i_9]) >> (((((/* implicit */int) (signed char)-110)) + (134))))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_21 = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((min((arr_28 [i_0] [i_1] [i_0] [i_0]), (arr_28 [i_10] [i_1] [i_1] [i_0]))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_10])))) : (((/* implicit */int) max((var_3), (var_3))))))))) : (((/* implicit */unsigned int) ((((((min((arr_28 [i_0] [i_1] [i_0] [i_0]), (arr_28 [i_10] [i_1] [i_1] [i_0]))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_10])))) : (((/* implicit */int) max((var_3), (var_3)))))))));
                        arr_41 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_1 [i_5] [i_1])), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-8652739745013576455LL)))));
                    }
                    arr_42 [i_1] = ((/* implicit */long long int) (-(18446744073709551615ULL)));
                    arr_43 [i_5] [i_5] [i_5] [i_0] |= ((/* implicit */unsigned long long int) arr_7 [i_5] [i_0]);
                }
                arr_44 [i_0] [i_1] [i_1] = ((((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_0])) * (((/* implicit */int) arr_25 [i_0]))))) / ((+(32431455U))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    arr_47 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) (signed char)17)))))));
                    var_22 -= ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1]))) ^ (((((/* implicit */_Bool) var_6)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_11]))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) & (arr_45 [i_0] [i_0] [i_0])));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_50 [i_1] [i_1] [i_12] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
                    arr_51 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((arr_0 [i_12] [i_1]) % (arr_34 [i_0] [i_1] [i_12] [i_1] [i_12] [i_1] [i_1])));
                    arr_52 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [i_1])) % (((/* implicit */int) ((1449666083U) != (4169290550U))))));
                }
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        arr_56 [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_54 [i_13])) % (((/* implicit */int) arr_54 [i_13]))));
        var_25 = ((/* implicit */_Bool) arr_55 [i_13] [i_13]);
    }
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) 
    {
        var_26 = (_Bool)1;
        arr_59 [i_14] = ((/* implicit */long long int) arr_58 [i_14] [i_14]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
        {
            var_27 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4169290550U)) ? (-1954700723546880316LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_62 [i_14] [i_15] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_57 [i_15] [i_14]))) + (2147483647))) >> (((var_9) - (674928121U)))));
        }
        for (unsigned int i_16 = 3; i_16 < 17; i_16 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) var_10);
                arr_70 [i_16] = (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_16] [i_16 - 3] [i_16]))) + (arr_67 [i_16 - 1] [i_16] [i_16] [i_16]))));
            }
            arr_71 [i_16] [i_16] = ((/* implicit */unsigned int) (+(arr_64 [i_16] [i_16 + 1] [i_16 - 1])));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                for (unsigned int i_20 = 2; i_20 < 17; i_20 += 2) 
                {
                    for (signed char i_21 = 2; i_21 < 16; i_21 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) ((arr_81 [i_14] [i_18] [i_18] [i_19] [i_20] [i_21]) == (((/* implicit */unsigned long long int) var_1))));
                            arr_84 [i_14] [i_18] [i_19] = min((var_5), (arr_54 [i_14]));
                            var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_69 [i_14] [i_18] [i_19]))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */signed char) (+(max((arr_67 [i_14] [i_14] [i_14] [i_14]), (((/* implicit */unsigned int) arr_76 [i_18]))))));
        }
    }
    var_32 = ((/* implicit */short) var_3);
}
