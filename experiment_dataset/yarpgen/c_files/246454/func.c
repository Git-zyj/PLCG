/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246454
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0 - 1])) == (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0 - 1] [(_Bool)1] [i_2] [i_3])) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)436)))) > ((-2147483647 - 1))))));
                                var_21 = ((/* implicit */_Bool) arr_5 [i_1] [i_4]);
                                var_22 = ((/* implicit */_Bool) min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */int) (_Bool)1);
        arr_19 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_18 [i_5] [i_5])) == (((/* implicit */int) arr_18 [i_5] [i_5]))))) ^ (((((/* implicit */_Bool) arr_18 [i_5] [(unsigned short)22])) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) arr_18 [i_5] [i_5]))))));
        var_24 = ((/* implicit */unsigned short) var_1);
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) ((unsigned short) arr_17 [i_5])))))), (min((((arr_17 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)9401))))), (arr_17 [i_5]))))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 24; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    var_26 = ((/* implicit */short) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_6 + 1])))));
                    arr_26 [i_5] [18LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1]))));
                    var_27 -= ((/* implicit */int) (((~(arr_20 [i_6 - 1] [i_6 + 1] [i_7]))) != (min(((-9223372036854775807LL - 1LL)), (-2188428848283312546LL)))));
                }
            } 
        } 
    }
    for (short i_8 = 3; i_8 < 9; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_28 = (~(((long long int) arr_13 [20LL] [i_8 + 3])));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    var_29 -= ((/* implicit */unsigned long long int) (unsigned short)59960);
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_37 [i_8 - 2])), (((((/* implicit */unsigned long long int) arr_35 [i_8 + 3] [i_8 - 1] [i_8])) ^ (arr_36 [i_8 - 1] [i_9]))))))));
                    var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((_Bool) arr_17 [i_8 - 3]))), (min((((/* implicit */unsigned short) (_Bool)1)), (arr_28 [i_8 + 2])))));
                    var_32 = ((/* implicit */short) var_7);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */short) ((unsigned int) 18446744073709551615ULL));
                        arr_42 [i_8] [i_8] [i_10] [i_11] [i_12] [11ULL] [(unsigned char)2] = ((/* implicit */unsigned long long int) arr_20 [(unsigned short)3] [i_8 + 2] [i_12]);
                    }
                }
                for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_34 = ((/* implicit */_Bool) arr_25 [i_8] [i_9] [i_10]);
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        var_35 = ((((/* implicit */_Bool) arr_45 [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8 - 3] [i_8 + 2])) ? (min((((/* implicit */int) arr_38 [i_14] [i_13] [i_10] [i_9] [i_9] [i_8 + 3])), (((((/* implicit */int) arr_30 [i_8 + 3] [i_8 - 1])) * (((/* implicit */int) arr_4 [i_8] [i_9])))))) : (((/* implicit */int) (_Bool)1)));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_10] [(_Bool)1] [i_10] [(unsigned short)3] [i_10]), (((((/* implicit */_Bool) 18446744073709551598ULL)) && (((/* implicit */_Bool) arr_11 [i_8 - 1] [i_9])))))))) ^ (min((((/* implicit */long long int) arr_27 [i_13])), (arr_20 [i_9] [i_8 + 1] [i_10])))));
                        var_37 += arr_5 [i_10] [i_8 + 2];
                        var_38 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) arr_3 [i_8 - 3] [i_9] [11LL])) | (((/* implicit */int) var_11)))) | (((/* implicit */int) ((1U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_9])))))))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned short) min((min((min((-9223372036854775802LL), (arr_11 [i_9] [i_9]))), (((/* implicit */long long int) ((-4140959872875599735LL) != (((/* implicit */long long int) arr_35 [i_8] [i_9] [i_10]))))))), (min((((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_15])) | (((/* implicit */int) arr_28 [i_8 + 3]))))), (9007199254216704LL)))));
                        arr_50 [i_8 + 1] [i_8] [i_8] [i_13] [i_9] = ((/* implicit */unsigned int) (~(min((arr_17 [i_8 - 2]), (arr_17 [i_8 + 3])))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        arr_54 [i_9] [1ULL] [i_13] [i_8] = ((/* implicit */short) ((unsigned long long int) (-(arr_13 [i_8 - 3] [i_13]))));
                        var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((long long int) arr_34 [i_10] [i_13] [i_8 + 2])), (min((-2188428848283312546LL), (((/* implicit */long long int) 2147483647)))))))));
                    }
                    var_41 *= ((/* implicit */_Bool) min((((/* implicit */long long int) min((((arr_10 [i_8 + 3] [i_9] [i_9] [9U] [i_13]) ? (((/* implicit */int) arr_33 [i_8 - 2] [i_9] [i_10])) : (((/* implicit */int) arr_39 [i_8 - 3] [i_9] [i_10] [i_9] [9LL] [10LL])))), (((/* implicit */int) (_Bool)1))))), ((~(min((arr_29 [i_9] [i_8 + 1]), (arr_20 [i_9] [i_10] [i_13])))))));
                    var_42 = arr_37 [i_8 + 3];
                    arr_55 [i_13] [9LL] [i_13] [i_13] [i_8] = (!(((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) var_0)), (arr_44 [i_13]))))))));
                }
                var_43 ^= min((((/* implicit */long long int) arr_51 [i_8 + 2] [3ULL] [i_8 - 2] [i_8 + 1] [i_8 + 1] [0LL] [i_9])), (arr_29 [i_8 + 1] [i_8 - 3]));
            }
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) 
            {
                var_44 = ((/* implicit */unsigned short) ((((unsigned int) (_Bool)1)) >> (((((18125461184963524611ULL) & (((/* implicit */unsigned long long int) arr_20 [(short)0] [i_8 - 2] [i_17])))) - (15711531784090943479ULL)))));
                var_45 = ((/* implicit */unsigned short) arr_25 [i_17] [i_17] [i_17]);
                var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((-8171169000683872438LL) - (arr_11 [i_8 - 1] [i_9]))))));
            }
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_64 [i_8 - 1] [i_9] &= ((/* implicit */long long int) min((arr_8 [2U] [5ULL] [i_18 + 1]), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) 7))), (min((((/* implicit */int) arr_40 [8LL] [i_9] [i_9] [(short)6] [4LL] [i_19] [i_19])), ((-2147483647 - 1)))))))));
                        var_47 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 2147450880U)) : (var_18)));
                        var_48 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_15 [i_8 + 2] [i_8 - 1]))) / (((/* implicit */int) (short)-3915))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (long long int i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 4) 
                {
                    {
                        var_49 = min((min((((/* implicit */long long int) ((arr_16 [(_Bool)1] [i_20] [i_20] [i_20] [i_20]) > (((/* implicit */unsigned long long int) var_18))))), (-4140959872875599729LL))), (((/* implicit */long long int) arr_9 [i_8 - 1] [i_20] [i_21] [i_22] [i_22])));
                        arr_75 [i_8 + 2] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_8 - 3])) || ((_Bool)1)))), (((((int) (unsigned short)54588)) * ((-(((/* implicit */int) (unsigned short)0))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        var_50 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(min((-9007199254216713LL), (arr_17 [i_23])))))) > (min((arr_13 [(unsigned short)7] [i_23]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)16384)))))))));
        var_51 = ((/* implicit */unsigned char) (+(min((arr_77 [i_23]), (arr_77 [i_23])))));
    }
    var_52 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned short)14443))))), (var_7))), (((/* implicit */int) var_13))));
}
