/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189811
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 4; i_4 < 10; i_4 += 3) 
                    {
                        {
                            var_13 ^= ((((/* implicit */_Bool) (-(arr_14 [i_0] [i_1 - 1] [i_2] [i_3] [i_1 - 1] [i_4] [8ULL])))) ? (7424999766357455730ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))));
                            var_14 = (+((-(5265004904029005586LL))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [4ULL] [i_2] [i_2] [(unsigned char)4])) ? (((unsigned long long int) (short)16343)) : (arr_14 [i_2] [9] [i_2] [i_2] [i_2] [i_2] [i_2])));
            }
            for (unsigned char i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                arr_18 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? ((((((-(((/* implicit */int) (signed char)114)))) + (2147483647))) >> (((arr_6 [i_0] [i_0] [6LL]) + (1353771433))))) : ((((((-(((/* implicit */int) (signed char)114)))) + (2147483647))) >> (((((arr_6 [i_0] [i_0] [6LL]) - (1353771433))) - (75451396)))));
                /* LoopSeq 3 */
                for (signed char i_6 = 3; i_6 < 11; i_6 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */_Bool) -256076429974921626LL);
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) : (arr_22 [5ULL] [i_0] [4ULL] [(signed char)4] [(signed char)4] [8LL]))))));
                    var_17 = ((/* implicit */unsigned char) (-2147483647 - 1));
                }
                for (signed char i_7 = 3; i_7 < 11; i_7 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [(_Bool)1] [i_7 + 1] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) -1150685415)) : (14998018248550483755ULL))) / (((/* implicit */unsigned long long int) var_5))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [2ULL] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1 + 1] [(signed char)6] [i_7])) ? (((/* implicit */int) var_9)) : (var_1)))) : ((~(var_3)))));
                }
                for (short i_8 = 2; i_8 < 11; i_8 += 1) 
                {
                    var_20 = ((/* implicit */short) 2147483647);
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0] [(unsigned char)11] [i_8]))))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) arr_8 [i_8 + 1] [i_1 - 2] [i_0] [i_1 - 1] [i_0 + 1])));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) 3497932038523556101LL)) ? (3402515660U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))))))));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_21 [i_5] [4ULL] [i_5] [i_5])))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)1)) <= (((/* implicit */int) var_12))))))))));
                            arr_36 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = arr_19 [i_0 + 2] [i_1] [i_1] [10ULL] [(unsigned char)11] [i_10 - 2];
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))) ^ (-6370775549897993636LL))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                arr_37 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 3635724164777337749ULL))));
            }
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6610959528445600742ULL)) ? (6180363799995467250ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115)))));
            var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32482))));
            var_27 &= ((/* implicit */long long int) 10366372923073607898ULL);
        }
        for (signed char i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
        {
            arr_41 [i_0] [i_0] = ((/* implicit */unsigned char) 3402515669U);
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                arr_46 [i_0] [10] [i_0] [6] |= var_5;
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        {
                            arr_53 [i_0] [i_0] [(short)11] [i_0] [i_0] [(short)11] [i_0] = ((/* implicit */long long int) ((unsigned int) var_9));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_0 + 1] [i_11] [i_12] [9U] [i_14])))))) % (-7620493099341497836LL)));
                            arr_54 [i_0] [i_13] [i_0 + 1] [i_11] [i_0] = ((/* implicit */long long int) ((short) var_5));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) -6370775549897993636LL))));
        }
        for (signed char i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
        {
            arr_58 [7LL] [i_0] [7LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) ^ (var_11)));
            arr_59 [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)80)) : (-2147483637))));
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    {
                        var_30 ^= ((/* implicit */unsigned char) var_8);
                        var_31 = ((/* implicit */unsigned long long int) (-(-6733403527295642065LL)));
                        var_32 = (-(((((/* implicit */_Bool) 3402515669U)) ? (7629874469408587145LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                        arr_68 [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((unsigned char) 4867397425812596805LL));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) arr_22 [5] [i_0] [i_19] [i_19] [i_18] [i_19]);
                    /* LoopNest 2 */
                    for (signed char i_20 = 1; i_20 < 11; i_20 += 3) 
                    {
                        for (signed char i_21 = 1; i_21 < 10; i_21 += 3) 
                        {
                            {
                                arr_81 [i_0] [i_18] [i_19] [i_19] [i_0] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9364348001151972840ULL)) ? (((10632874156016006829ULL) % (((/* implicit */unsigned long long int) 6370775549897993635LL)))) : (15548564689670618019ULL)));
                                var_34 &= ((((/* implicit */_Bool) (-(9139173446524499948ULL)))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (((((/* implicit */_Bool) arr_25 [i_0] [(_Bool)1] [2LL] [i_20 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 15; i_22 += 3) 
    {
        for (signed char i_23 = 4; i_23 < 13; i_23 += 3) 
        {
            {
                var_35 = (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 1023U))))))));
                /* LoopNest 2 */
                for (signed char i_24 = 3; i_24 < 13; i_24 += 1) 
                {
                    for (unsigned char i_25 = 3; i_25 < 12; i_25 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */signed char) max((9139173446524499948ULL), (((/* implicit */unsigned long long int) 3402515669U))));
                            var_37 = ((/* implicit */long long int) min((var_37), (max((((/* implicit */long long int) (-(max((2147483647), (((/* implicit */int) (_Bool)1))))))), (-7221185870709004592LL)))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) 18183898852967361744ULL))));
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))));
}
