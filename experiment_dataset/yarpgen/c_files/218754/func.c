/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218754
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((int) arr_2 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-21469)))) : (max((18446744073709551615ULL), (1ULL))))));
                    var_15 &= ((/* implicit */short) (!(((/* implicit */_Bool) (((+(18446744073709551609ULL))) | (((unsigned long long int) -4837467977638207380LL)))))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned int) 6ULL);
    var_17 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned char)136)))));
        arr_12 [i_3] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (18446744073709551612ULL) : (8ULL))));
    }
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((1023), (var_0)))) ? (var_11) : (var_11)));
            }
            for (unsigned int i_7 = 3; i_7 < 21; i_7 += 4) 
            {
                var_21 &= ((/* implicit */int) var_8);
                var_22 ^= ((/* implicit */long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) -1276435997))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 3) 
            {
                var_23 += ((/* implicit */unsigned long long int) (+(1073740800U)));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned char) (~(((int) 1ULL))));
                            var_25 = ((((((int) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (3446441156U)))) + (2147483647))) >> (((1073631370) - (1073631359))));
                        }
                    } 
                } 
                arr_34 [i_4] = ((/* implicit */int) var_3);
            }
            arr_35 [i_4] = ((((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) (unsigned char)132)), (1ULL))))) - (((((unsigned long long int) arr_16 [(short)5])) ^ (((/* implicit */unsigned long long int) (~(1073631358)))))));
            arr_36 [i_4] [i_4] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (18446744073709551598ULL) : (7ULL))));
        }
        arr_37 [i_4] = ((/* implicit */int) (-(3950305224U)));
        var_26 = var_11;
        var_27 += var_1;
        var_28 ^= ((/* implicit */unsigned long long int) ((short) (((!(((/* implicit */_Bool) arr_17 [i_4])))) ? (2520528321U) : (var_12))));
    }
    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((((/* implicit */_Bool) arr_23 [i_11] [i_11] [i_11] [2LL])) ? (((18446744073709551590ULL) | (((/* implicit */unsigned long long int) -4984640963776879718LL)))) : (((/* implicit */unsigned long long int) var_12))))));
        arr_41 [i_11] = ((/* implicit */int) var_1);
        var_30 = ((/* implicit */short) 10ULL);
        var_31 += ((/* implicit */unsigned char) arr_27 [i_11] [6]);
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        var_32 = ((/* implicit */unsigned int) arr_16 [i_12]);
        /* LoopNest 2 */
        for (int i_13 = 4; i_13 < 13; i_13 += 4) 
        {
            for (int i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 3; i_16 < 11; i_16 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */short) ((unsigned long long int) 0ULL));
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (+(arr_28 [i_13 - 3] [i_16 - 2] [i_14]))))));
                                arr_55 [i_12] [8] = ((/* implicit */unsigned int) ((short) ((int) arr_51 [9ULL] [i_14] [i_13 - 4] [9ULL])));
                            }
                        } 
                    } 
                    arr_56 [i_12] [i_12] [i_14] = ((/* implicit */int) (unsigned char)99);
                    var_35 = ((/* implicit */unsigned char) 848526139U);
                    /* LoopSeq 1 */
                    for (short i_17 = 1; i_17 < 13; i_17 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_18 = 0; i_18 < 14; i_18 += 3) 
                        {
                            var_36 += ((/* implicit */unsigned int) arr_58 [i_12] [7] [i_14] [7] [i_18] [i_18]);
                            var_37 = ((/* implicit */int) var_3);
                        }
                        for (int i_19 = 0; i_19 < 14; i_19 += 2) 
                        {
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_66 [i_12] [i_13] [i_13] [i_17] [i_17 + 1])) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551615ULL)));
                            arr_67 [i_17] [i_14] [i_14] [i_17] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_3 [i_13 - 2] [i_19])))) | (((/* implicit */int) var_9))));
                        }
                        var_39 = ((/* implicit */int) arr_47 [i_13 + 1]);
                        arr_68 [i_17] = ((/* implicit */unsigned long long int) -1363521631);
                        arr_69 [i_12] [i_12] [i_14] [i_17] [i_12] [i_17] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_12] [i_13] [i_17 - 1] [i_17 - 1] [i_13 - 3])) && (((/* implicit */_Bool) var_0))));
                        var_40 = ((/* implicit */long long int) ((int) arr_26 [i_17 + 1] [i_17] [i_13 - 2]));
                    }
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((short) var_11)))));
    }
}
