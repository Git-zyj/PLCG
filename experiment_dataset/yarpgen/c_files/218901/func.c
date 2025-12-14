/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218901
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_13))));
    var_18 = ((/* implicit */long long int) ((unsigned long long int) 4294967295U));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65535))));
            var_20 = ((/* implicit */int) max((var_20), (min((((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))) * (((((/* implicit */_Bool) arr_2 [(unsigned char)11])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_2 [i_0])))))), (((((/* implicit */_Bool) min(((unsigned short)65518), (((/* implicit */unsigned short) (signed char)-1))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))))))))));
            var_21 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) (unsigned short)65526)), (((((/* implicit */_Bool) var_15)) ? (2147483633) : (2147483633)))))));
            var_22 = min((((/* implicit */unsigned long long int) (-(min((arr_1 [i_1]), (((/* implicit */long long int) (signed char)64))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (18446744073709551609ULL))) ? (18446744073709551609ULL) : (((((/* implicit */_Bool) -1LL)) ? (1143914305352105984ULL) : (((/* implicit */unsigned long long int) -11)))))));
            var_23 = ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18446744073709551596ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)65535)), ((-9223372036854775807LL - 1LL))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_24 += ((/* implicit */unsigned int) (unsigned short)6);
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_0]), (((/* implicit */long long int) var_9))))) <= ((~(0ULL)))))) >> (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)240), (var_1))))) / (max((((/* implicit */long long int) (unsigned short)65535)), (var_3)))))));
            var_26 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)-1)), (((arr_1 [i_2]) ^ (arr_1 [i_0])))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) ((arr_9 [i_0] [13ULL] [13ULL]) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))))));
            var_28 = ((/* implicit */unsigned long long int) (+(((var_16) - (arr_9 [i_0] [i_3] [i_3])))));
            var_29 *= ((/* implicit */unsigned char) ((((9223372036854775782LL) != (-9223372036854775805LL))) ? (((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3] [(short)7])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (arr_7 [i_0] [i_0])));
        }
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 3; i_5 < 24; i_5 += 2) 
            {
                for (long long int i_6 = 3; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) 9223372036854775805LL))));
                        var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32749))));
                        var_32 = ((unsigned long long int) (+(18446744073709551615ULL)));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 2; i_7 < 24; i_7 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_0] [i_4] [i_0] [i_4] [i_4])) || (((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((-(arr_18 [i_4] [i_7])))));
                            var_34 |= ((/* implicit */_Bool) var_16);
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5 - 3] [i_6 - 2] [i_7 - 2])) ? (var_11) : (((unsigned long long int) 18446744073709551614ULL))));
                        }
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            var_36 = ((/* implicit */_Bool) ((arr_24 [i_4 + 3] [i_6] [i_6 + 1] [i_6] [i_6]) / (arr_24 [i_4 + 3] [i_6] [i_6 + 1] [i_6] [i_6 + 1])));
                            var_37 = ((/* implicit */int) min((var_37), (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_20 [i_0] [i_6] [i_5] [(signed char)10] [i_0]))))));
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (arr_21 [i_0] [i_0] [(unsigned char)20] [i_6] [(unsigned char)20]) : (var_3))) == (((/* implicit */long long int) (~((-2147483647 - 1))))))))));
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) arr_6 [i_5 - 2] [i_4] [i_5])) : (((((/* implicit */int) (unsigned char)4)) >> (((arr_8 [i_0] [i_5]) - (4542325091903770445ULL))))))))));
                        }
                        for (signed char i_9 = 1; i_9 < 24; i_9 += 3) 
                        {
                            var_40 *= ((/* implicit */unsigned char) (~(arr_21 [i_4 - 1] [i_5 + 1] [(signed char)18] [i_6] [i_9 + 1])));
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_9 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_4 + 2] [i_5 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_9])))))));
                        }
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (arr_28 [i_4 + 3] [(unsigned char)8] [i_4 + 2]) : ((-(arr_28 [i_4] [(unsigned short)20] [i_4])))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 2; i_10 < 23; i_10 += 4) 
            {
                var_43 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) 0U)) : (18446744073709551600ULL)));
            }
        }
        var_45 = (~((~(max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0])), (var_6))))));
        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) var_13))))), (min((var_15), (arr_21 [i_0] [i_0] [(unsigned char)20] [i_0] [i_0])))))), (min((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))), (arr_17 [i_0] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) ((arr_23 [i_11] [i_11] [(unsigned char)20] [(unsigned char)20] [i_11 - 1] [i_11]) != (((/* implicit */unsigned long long int) 140703128616960LL)))))));
        var_48 = ((/* implicit */short) (-(arr_24 [i_11 - 1] [2ULL] [i_11 - 1] [i_11] [i_11 - 1])));
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) (-(((var_2) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)12)))))))));
            var_50 = (-(arr_9 [i_11 - 1] [i_11] [i_11 - 1]));
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            var_51 = ((/* implicit */short) (+(((2147483646) + (((/* implicit */int) (_Bool)1))))));
            /* LoopNest 3 */
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (int i_16 = 1; i_16 < 9; i_16 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_11] [i_13] [i_13])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            var_53 = ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_16])) == (((/* implicit */int) var_8))))) != (((/* implicit */int) ((unsigned char) (unsigned char)255))));
                        }
                    } 
                } 
            } 
            var_54 = ((/* implicit */signed char) (+(arr_38 [i_11] [i_11 - 1] [i_13 + 1])));
        }
    }
    /* vectorizable */
    for (short i_17 = 4; i_17 < 17; i_17 += 2) 
    {
        var_55 *= ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) (unsigned char)245)))));
        var_56 = ((/* implicit */unsigned short) ((((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((2147483646) - (((/* implicit */int) (unsigned char)0))))) : (arr_47 [i_17 - 2])));
    }
    var_57 = ((/* implicit */short) min((-2147483647), (((/* implicit */int) (unsigned char)255))));
}
