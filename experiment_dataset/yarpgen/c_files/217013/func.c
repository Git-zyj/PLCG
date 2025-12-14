/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217013
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
    var_13 = ((/* implicit */signed char) (((((~(18446744073709551615ULL))) >> ((((-(3994372694U))) - (300594559U))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (var_0)))) : (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ ((((+(3932199793U))) >> (((var_6) - (220990418U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_0]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_8 [(unsigned char)0] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(var_0)))) != (arr_5 [i_0 + 1])));
                        arr_9 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (arr_3 [i_1] [i_1])))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_7)) | (((/* implicit */int) (_Bool)1))))));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0 + 1])))))));
                        arr_14 [i_2] = ((/* implicit */unsigned short) (+(717897998U)));
                        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [(signed char)1] [i_1]))));
                        arr_15 [i_0] [i_1] [i_2] [i_4] &= ((/* implicit */_Bool) (~(var_5)));
                    }
                    for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [(signed char)9] [i_1] [i_1 + 1] [i_5] [i_5 + 1]))));
                        var_19 = ((/* implicit */short) (+(arr_2 [i_5] [i_5 + 3] [i_1 - 3])));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) 
            {
                arr_23 [i_6] = ((/* implicit */unsigned int) var_8);
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_7))));
                    var_21 = ((/* implicit */unsigned int) ((8887124209737656819LL) | (((((/* implicit */_Bool) var_0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_20 [i_0] [i_7] [(short)10] [i_8]))));
                }
            }
            for (unsigned int i_9 = 3; i_9 < 11; i_9 += 1) /* same iter space */
            {
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_6])) > (((/* implicit */int) var_10))))) : (((/* implicit */int) arr_20 [i_0] [10LL] [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_32 [i_6] [i_6] [(_Bool)1] [i_6] [10U] &= ((/* implicit */unsigned int) ((arr_12 [i_6] [i_9 + 2] [i_0 - 1] [(unsigned char)10]) * (arr_21 [i_0] [i_9 + 2] [i_0 - 1])));
                    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0]))) : (arr_1 [i_9 + 2] [i_9 + 1])));
                }
                arr_33 [i_0] [i_6] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_6] [i_9 - 3] [i_9] [i_9]))));
                arr_34 [i_6] [i_6] [4LL] = ((long long int) arr_10 [i_0]);
                arr_35 [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [i_9 - 2]))));
            }
            for (unsigned int i_11 = 3; i_11 < 11; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 3; i_12 < 10; i_12 += 4) 
                {
                    var_25 |= ((/* implicit */short) (~(var_6)));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_12])) ? (((((/* implicit */int) (short)-1)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_24 [i_12 - 3] [i_12 + 3] [(short)12] [i_12] [i_12])))))));
                }
                var_27 = (-(var_6));
            }
            var_28 += ((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_19 [(unsigned char)10] [i_0 - 1] [i_0 + 1]));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_45 [i_13] [i_13] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 1]))));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_30 [i_0 - 1]))));
            arr_46 [(_Bool)1] [i_13] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
            arr_47 [(signed char)12] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) / (arr_19 [i_13] [i_13] [(_Bool)1])));
            arr_48 [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [10ULL] [i_0 - 1])) ? (arr_2 [i_0] [i_0] [i_0 - 1]) : (arr_2 [i_0] [i_0] [i_0 - 1])));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), ((-(var_3)))));
            arr_53 [i_0] = ((/* implicit */_Bool) var_12);
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 2) 
                {
                    for (unsigned short i_17 = 1; i_17 < 10; i_17 += 3) 
                    {
                        {
                            arr_63 [i_16] [7LL] [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1] [(signed char)9]))) + (arr_58 [i_16] [5LL] [7U] [i_16 + 2] [i_15] [i_16 + 2])));
                            arr_64 [i_16] [i_16] [i_15] [(signed char)4] [i_16] [i_17] [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                        }
                    } 
                } 
            } 
        }
        var_31 *= arr_36 [i_0] [i_0 - 1] [i_0];
    }
    /* LoopSeq 1 */
    for (unsigned int i_18 = 1; i_18 < 16; i_18 += 2) 
    {
        arr_68 [i_18] [i_18] &= ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_65 [i_18]))))), (((/* implicit */unsigned int) (unsigned char)31))));
        var_32 = arr_67 [i_18];
    }
    /* LoopNest 2 */
    for (unsigned long long int i_19 = 2; i_19 < 11; i_19 += 2) 
    {
        for (unsigned short i_20 = 0; i_20 < 13; i_20 += 3) 
        {
            {
                var_33 -= ((/* implicit */unsigned char) var_12);
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 2) 
                {
                    arr_76 [i_20] [i_20] = ((max((((/* implicit */unsigned long long int) min((arr_22 [i_20] [i_20] [i_19]), (((/* implicit */short) var_8))))), (((((/* implicit */_Bool) 300594591U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_40 [i_21] [i_21] [i_21] [i_21] [0U] [i_20]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_19 + 1] [i_19])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_19 - 1] [(signed char)2])))))));
                    arr_77 [i_20] [i_20] [i_20] [i_20] = ((((/* implicit */_Bool) ((unsigned int) arr_62 [i_19 + 2] [i_20] [i_19 - 2] [i_21]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_36 [i_19 - 1] [i_19 + 1] [i_19 - 2]))))) : (min((arr_65 [i_19 - 1]), (var_3))));
                    arr_78 [i_20] [i_20] [i_21] [i_19 + 2] |= ((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) var_2)), (var_4))) | (((/* implicit */unsigned long long int) arr_56 [i_19] [(_Bool)0] [i_19 + 1])))) & (((/* implicit */unsigned long long int) (~(min((arr_6 [i_21]), (((/* implicit */unsigned int) arr_61 [i_21] [(short)8] [i_20] [i_21])))))))));
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_17 [i_19 - 1] [i_19 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_19 + 2] [i_21]))) : (var_0))))))));
                }
                arr_79 [i_19] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_19] [i_19] [i_19 - 1])) ? (((arr_50 [i_19] [i_19] [i_19 + 1]) & (arr_50 [1U] [6U] [i_19 + 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (arr_50 [i_19] [i_19] [i_19 - 1])))));
                arr_80 [i_20] [(signed char)1] = min((((/* implicit */unsigned int) ((unsigned char) arr_28 [i_19 - 2] [i_20] [i_20] [i_19 - 1] [i_20]))), (max((var_6), (arr_28 [i_19] [i_20] [i_20] [i_19 - 2] [i_20]))));
            }
        } 
    } 
}
