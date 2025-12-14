/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199633
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
    var_11 ^= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 &= ((/* implicit */unsigned int) arr_0 [i_0]);
                    arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0])) : (var_1)))), (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_3)), (min((((/* implicit */short) arr_4 [i_1] [i_1] [i_1])), (var_0)))))))));
                }
            } 
        } 
        var_13 *= ((/* implicit */unsigned short) (-(arr_3 [i_0] [i_0 - 2])));
    }
    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_14 *= ((/* implicit */long long int) ((min((((/* implicit */long long int) arr_9 [i_3 - 1] [i_3 + 1])), (var_8))) == (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_3] [i_3 - 1]) != (arr_8 [i_3] [i_3 + 1])))))));
        arr_10 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_8 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (var_1)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3 + 1])) ? (((/* implicit */int) var_5)) : (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3]))))))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        arr_20 [i_5] [i_5] [i_6] |= ((/* implicit */long long int) var_2);
                        var_15 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) (+(var_7)))) % (arr_8 [i_3] [i_4]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) var_10)))))))));
        arr_22 [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) arr_12 [i_3] [i_3] [i_3])) <= (((/* implicit */int) arr_11 [i_3 + 1] [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [(short)4])) : (((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) : (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_5)))))))));
    }
    /* vectorizable */
    for (signed char i_7 = 1; i_7 < 17; i_7 += 2) /* same iter space */
    {
        var_16 = ((((/* implicit */int) arr_15 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1])) | (((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7 - 1])) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (((/* implicit */int) var_2)))));
        var_17 = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_3))))));
    }
    /* vectorizable */
    for (signed char i_8 = 1; i_8 < 17; i_8 += 2) /* same iter space */
    {
        arr_27 [i_8] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_25 [i_8])))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [6LL] [i_8] [i_8] [6LL])) : (var_10)))));
        /* LoopSeq 2 */
        for (int i_9 = 2; i_9 < 17; i_9 += 4) 
        {
            arr_30 [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) arr_14 [i_8] [i_8] [i_9 - 2] [i_8]))))) && (((/* implicit */_Bool) var_8))));
            arr_31 [i_8 + 1] [i_8 + 1] = ((/* implicit */_Bool) arr_19 [i_8 + 1] [i_8 + 1] [i_9] [i_8] [i_8]);
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            arr_41 [i_8] [i_9] [i_9] [i_8] [i_12] [i_12] [i_8 - 1] |= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_19 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_8] [i_8])) : (((/* implicit */int) var_3)));
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_33 [i_8] [i_8] [i_8])))) % ((~(((/* implicit */int) var_0))))));
                            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_9 - 2] [i_8 - 1] [i_9]))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_28 [i_8] [i_8 - 1]) > (((/* implicit */long long int) ((/* implicit */int) var_3))))))) <= (arr_18 [i_8] [i_8] [i_10] [i_8 + 1] [i_8 + 1])));
                        }
                    } 
                } 
                arr_42 [i_8] [i_9 - 1] [i_8] &= ((((/* implicit */_Bool) 9223372036854775796LL)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20474))) : (-2159449226662848926LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_3)) : (758627034)))));
                arr_43 [i_10] [i_9 + 1] [i_8] [i_8] = ((/* implicit */unsigned int) arr_11 [i_8] [i_9] [i_8]);
                var_21 |= ((/* implicit */unsigned int) arr_36 [i_8] [i_8] [i_8 - 1] [i_9] [i_9] [i_10]);
            }
            for (int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                arr_48 [i_8 - 1] [i_8 - 1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) arr_33 [i_8 - 1] [i_8] [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_8] [i_8] [i_9 + 1] [i_8])))))));
                var_22 += ((/* implicit */unsigned long long int) arr_32 [i_8] [i_8 + 1] [i_9 + 1]);
                var_23 |= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                var_24 *= ((/* implicit */int) ((arr_39 [i_8 - 1] [i_8 + 1] [i_9 - 1] [i_8 - 1]) || (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((9223372036854775807LL) << (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) arr_19 [i_8] [i_9] [i_14] [i_9 + 1] [i_8])) ? (var_1) : (arr_29 [i_9] [i_8]))) : ((+(((/* implicit */int) var_5))))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_8 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0)))))));
            }
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9 - 2] [i_8 + 1])) ? (arr_38 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9 - 2] [i_8 - 1]) : (arr_38 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9 - 2] [i_9 - 2])));
        }
        for (short i_15 = 2; i_15 < 16; i_15 += 3) 
        {
            arr_54 [i_8 - 1] [i_8 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_52 [i_15 - 2] [i_15 - 2]))));
            arr_55 [i_8] [i_8] [i_15] &= ((((/* implicit */_Bool) arr_46 [i_8] [i_15 + 1] [i_8] [i_8])) ? (((/* implicit */int) arr_39 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 - 1])) : (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) arr_17 [8LL])))));
            var_28 = ((/* implicit */unsigned short) (-(arr_8 [i_8 + 1] [i_15 + 1])));
            /* LoopSeq 2 */
            for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    for (int i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        {
                            arr_65 [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) ^ (((arr_18 [i_8] [i_15] [i_16] [i_15] [i_18]) ^ (((/* implicit */long long int) arr_34 [i_17] [i_17] [i_17]))))));
                            arr_66 [i_16] &= ((/* implicit */short) ((((/* implicit */int) arr_11 [i_8 - 1] [i_15 + 1] [i_16])) >= (((/* implicit */int) arr_13 [i_8] [i_8] [i_8 - 1] [i_8 + 1]))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) var_5);
            }
            for (int i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                var_30 |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_51 [i_8] [i_15 - 2] [i_15 - 2])) : (var_1)))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_44 [i_8] [i_8] [i_19])) : (((/* implicit */int) arr_17 [i_19])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))));
                arr_69 [i_8] [i_8] [i_8] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_33 [i_15] [i_15] [i_15 - 1]))));
                arr_70 [i_15] [i_15] [i_8] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_19] [i_15])) ? (((((/* implicit */long long int) arr_29 [i_8 - 1] [i_15])) ^ (arr_45 [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8])))));
            }
            var_32 ^= ((/* implicit */int) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        }
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_35 [i_8] [(unsigned char)12] [i_8] [i_8] [i_8 + 1])) + (2147483647))) << (((((/* implicit */int) var_6)) - (10787)))))) ? (arr_38 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8]) : (((/* implicit */long long int) var_10))));
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_64 [i_8] [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 1])) : (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_47 [i_8] [i_8] [i_8] [i_8 + 1]))))));
    }
    var_35 = ((/* implicit */long long int) (+(min((max((var_10), (((/* implicit */int) var_3)))), (((/* implicit */int) var_2))))));
}
