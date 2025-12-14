/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248108
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)34725)) ? (1048575) : (((/* implicit */int) arr_0 [i_1])))) ^ ((-(1048581)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)181)) >= (((/* implicit */int) (unsigned short)34746))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (15712212029340484306ULL)))) ? (((/* implicit */unsigned long long int) arr_2 [i_1 + 4] [i_1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (arr_3 [i_0] [i_0] [i_0]))))) + (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_8))))) ? ((+(arr_3 [i_0] [i_0] [(unsigned short)10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1 - 1] [i_1 + 1] [i_1]) : (arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 3])))) ? (((/* implicit */int) var_3)) : (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((/* implicit */int) (unsigned short)0))))));
                var_13 &= ((/* implicit */unsigned short) max((((arr_3 [i_1 - 2] [i_1] [i_1]) + (arr_3 [i_1 - 1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((int) arr_3 [i_1 - 2] [i_1] [(unsigned short)3])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) min((((unsigned long long int) ((((/* implicit */unsigned int) arr_9 [i_2])) + (4193792U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_11 [i_4] [i_1] [i_2] [(_Bool)1] [i_4]), ((short)2381)))) < (((/* implicit */int) var_3)))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_4 [i_1 + 4])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_1] [i_1 + 2] [i_1 + 2])), ((~(((/* implicit */int) (_Bool)1))))))) : (arr_7 [i_0] [(short)2] [i_0])))));
                                var_16 = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 7; i_5 += 4) 
    {
        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 839125676U)) ? (((/* implicit */int) arr_8 [i_5 + 1] [(short)11])) : (max((1048575), (((/* implicit */int) arr_10 [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_5 + 2]))))));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            var_18 = ((/* implicit */signed char) max((((arr_3 [i_5] [i_6] [i_6]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))))), (((/* implicit */unsigned long long int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]))));
            /* LoopSeq 4 */
            for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
            {
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_4 [i_7 + 2]), (((/* implicit */unsigned long long int) var_3)))))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((signed char) var_7)))));
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 6; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((unsigned char) (-(arr_20 [i_5 + 1]))));
                            arr_29 [(unsigned char)6] [i_6] [i_7] [i_8] [1U] = ((/* implicit */unsigned short) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_6]))) - (18446744073709551606ULL))))) % (((/* implicit */unsigned long long int) arr_21 [i_5 + 1] [i_6] [i_8 + 3]))));
                            var_22 = ((/* implicit */long long int) arr_28 [i_5] [i_7] [(signed char)3] [i_9]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5] [(signed char)1])) ^ (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)126))))))) ? ((+(((/* implicit */int) arr_25 [i_5 + 3] [i_5 - 1] [i_7 + 2] [i_7 + 2])))) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned char) var_5)), (var_4)))))));
                var_24 = ((/* implicit */unsigned short) arr_0 [i_5 + 3]);
            }
            for (unsigned short i_10 = 3; i_10 < 8; i_10 += 2) 
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_10 [i_10] [i_10 - 3] [i_10] [i_10 - 2] [i_10] [i_10 - 3]))))) ? (min((((/* implicit */unsigned long long int) arr_14 [i_10 + 1] [i_5 + 2])), (736091870691180987ULL))) : (((/* implicit */unsigned long long int) arr_14 [i_5] [i_10])))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (short i_12 = 1; i_12 < 6; i_12 += 2) 
                    {
                        {
                            var_26 += ((/* implicit */unsigned int) (+((+(arr_24 [i_12 + 3] [i_5 - 1] [2] [i_10])))));
                            var_27 ^= ((/* implicit */signed char) arr_6 [i_10 - 3] [i_12 + 2] [i_5 + 1]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 1) 
                {
                    var_28 *= ((/* implicit */signed char) (+((~(((/* implicit */int) var_2))))));
                    var_29 *= ((/* implicit */unsigned char) var_7);
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((long long int) arr_18 [i_5 + 1])))));
                        var_31 = (~(((/* implicit */int) var_4)));
                    }
                }
                for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    var_32 = ((/* implicit */short) arr_16 [i_5 + 2] [i_6]);
                    var_33 = ((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_10 + 2] [i_15]);
                }
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_5 + 2] [i_10 - 2])) ? (var_0) : (arr_36 [i_5 + 2] [i_5] [i_5 - 1] [i_5] [i_5]))))));
                    arr_46 [i_16] [i_10] [i_10] [i_5] [i_5] [i_5] &= ((/* implicit */long long int) var_3);
                    var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_41 [i_5] [i_5] [i_10 - 2] [i_16])))));
                }
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15712212029340484311ULL))))) : (((/* implicit */int) var_8))));
            }
            for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                var_37 *= ((unsigned char) arr_12 [i_5 + 1] [i_5 + 2] [i_17] [i_5 + 2]);
                arr_49 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) max((max((arr_43 [i_5 + 3] [(unsigned short)4] [i_17] [i_5 + 3]), (arr_43 [i_5 + 3] [i_6] [i_5] [i_17]))), (max((arr_43 [i_5 - 1] [i_6] [i_17] [i_6]), (arr_43 [i_5 + 3] [i_17] [(signed char)8] [4])))));
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_5] [i_5 + 2])) ? (arr_37 [i_5] [i_5] [i_5] [i_5 + 2]) : (arr_21 [(short)1] [i_5] [i_5])))) ? ((~(((/* implicit */int) (unsigned short)22)))) : (((int) arr_34 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 2]))));
            }
            /* vectorizable */
            for (int i_18 = 2; i_18 < 7; i_18 += 1) 
            {
                arr_54 [i_18] [i_6] = ((/* implicit */unsigned short) (~((~(10000023524245917098ULL)))));
                var_39 *= ((/* implicit */signed char) 2734532044369067316ULL);
            }
            arr_55 [i_5] [(unsigned char)3] = ((/* implicit */signed char) (unsigned char)25);
            var_40 = ((/* implicit */long long int) min((((/* implicit */unsigned short) max((arr_27 [i_6] [i_6] [i_6] [i_5] [i_5 - 1]), (arr_27 [i_5] [i_6] [i_6] [i_6] [i_5 - 1])))), (max((((/* implicit */unsigned short) arr_27 [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 2])), ((unsigned short)6)))));
            /* LoopSeq 2 */
            for (int i_19 = 0; i_19 < 10; i_19 += 4) 
            {
                var_41 *= (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_9 [i_5 + 1])) + (arr_2 [i_5 + 2] [i_5 + 3])))));
                arr_58 [i_5] [i_6] [i_19] = ((/* implicit */unsigned int) arr_2 [i_5] [i_19]);
            }
            /* vectorizable */
            for (unsigned short i_20 = 4; i_20 < 8; i_20 += 1) 
            {
                var_42 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-21748)) ? (((((/* implicit */int) (unsigned short)22362)) - (((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)9))));
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 10; i_21 += 2) 
                {
                    for (unsigned int i_22 = 0; i_22 < 10; i_22 += 4) 
                    {
                        {
                            arr_67 [(unsigned short)6] [i_20 - 2] [i_20] [i_21] = ((/* implicit */unsigned short) ((arr_9 [i_5 + 3]) | (arr_9 [i_5 + 3])));
                            var_43 = ((/* implicit */long long int) var_3);
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (+(((/* implicit */int) var_7)))))));
                            arr_68 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_28 [i_20 - 2] [i_20 + 1] [i_21] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5 - 1] [i_20 - 1] [i_20 - 3] [i_20] [i_20 - 2] [i_22] [(unsigned short)4])))));
                            var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_25 [i_5] [i_5 + 2] [i_20] [i_20 + 2]))));
                        }
                    } 
                } 
            }
        }
        for (short i_23 = 0; i_23 < 10; i_23 += 1) 
        {
            var_46 = ((/* implicit */unsigned short) min((var_46), ((unsigned short)65509)));
            var_47 = ((/* implicit */signed char) min(((!((!(((/* implicit */_Bool) var_0)))))), (max(((!(((/* implicit */_Bool) arr_19 [i_5])))), (((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) var_7))))))));
            var_48 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)9)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (736091870691180976ULL)))));
        }
        /* vectorizable */
        for (unsigned char i_24 = 0; i_24 < 10; i_24 += 1) 
        {
            var_49 = ((/* implicit */int) arr_0 [i_24]);
            var_50 ^= ((/* implicit */unsigned short) ((signed char) -4));
            var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (-(arr_45 [i_5 + 2] [i_5 + 1] [i_5] [i_24] [i_5]))))));
            arr_74 [i_24] [i_24] [i_24] = ((/* implicit */_Bool) arr_70 [i_5] [i_24]);
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_25 = 0; i_25 < 14; i_25 += 2) 
    {
        var_52 = ((/* implicit */short) min((4294967264U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))));
        arr_77 [i_25] [i_25] = ((/* implicit */_Bool) arr_12 [i_25] [i_25] [i_25] [i_25]);
    }
    var_53 = ((/* implicit */signed char) (~(min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))))));
}
