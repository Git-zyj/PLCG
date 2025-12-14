/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27678
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_16 |= ((/* implicit */unsigned short) ((long long int) ((unsigned int) arr_2 [i_1] [i_1] [i_0])));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [(unsigned short)0] [i_1] [i_0])) ? (9223372036854775807LL) : (9223372036854775807LL))) / (((/* implicit */long long int) arr_1 [i_0]))))) ? (((((/* implicit */long long int) var_2)) / (9223372036854775807LL))) : (((((/* implicit */long long int) ((/* implicit */int) ((arr_3 [(unsigned short)10] [i_1] [i_1]) != (arr_3 [2LL] [i_0] [i_1]))))) | (min((((/* implicit */long long int) var_15)), (-9223372036854775792LL))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_16 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_5] [i_3])) * (((/* implicit */int) arr_14 [i_3] [i_2] [i_3]))))) ? (max((max((arr_12 [i_3] [i_3] [i_4] [i_5]), (((/* implicit */unsigned long long int) (unsigned short)15244)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_4]))) < (arr_15 [i_3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_4 + 3]))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [10LL] [i_5])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43012))) : (arr_12 [(_Bool)0] [i_3] [i_4] [i_5]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_11))))))) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) var_15))));
                            var_19 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [(short)16] [(short)16])) ? (((/* implicit */int) arr_13 [(signed char)6] [i_5])) : ((+(((/* implicit */int) (signed char)-89)))))) / (((/* implicit */int) (unsigned short)50291))));
                        }
                    } 
                } 
                arr_17 [i_2] [(unsigned short)2] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_10 [(unsigned char)8] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_3])))))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) <= (((/* implicit */long long int) ((((/* implicit */int) ((9930898475581227096ULL) >= (((/* implicit */unsigned long long int) var_14))))) | (((/* implicit */int) (_Bool)1)))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 22ULL))))) / (((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3]))) < (var_14)))) : (((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_6 = 3; i_6 < 11; i_6 += 2) 
    {
        var_21 &= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_7))))) ? (arr_9 [i_6] [i_6]) : (((((/* implicit */_Bool) arr_19 [i_6])) ? (arr_2 [i_6] [i_6] [i_6]) : (arr_18 [i_6]))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50293))) : (9223372036854775807LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_15 [i_6])) : (-5105279272088644313LL)))) ? (arr_9 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))) : (((unsigned long long int) arr_19 [i_6 - 1]))));
        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_14)))) ? (((long long int) arr_5 [i_6] [i_6])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (var_4) : (((/* implicit */int) arr_14 [i_6] [i_6] [i_6]))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_6]))) / ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_11 [i_6] [i_6] [i_6])))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (arr_4 [i_6]))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (unsigned char i_10 = 1; i_10 < 10; i_10 += 3) 
                {
                    {
                        var_24 ^= ((/* implicit */unsigned short) (signed char)-124);
                        var_25 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 2; i_13 < 11; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((min((arr_36 [i_12] [i_12] [i_12] [i_7]), (((/* implicit */long long int) (unsigned short)50291)))) == (((long long int) arr_27 [i_12] [i_12] [i_13 + 1]))));
                                var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_12] [i_7]))));
                                var_28 = ((/* implicit */long long int) ((unsigned short) min((var_4), (((/* implicit */int) max((((/* implicit */unsigned char) arr_40 [i_7] [i_11])), (arr_33 [i_7] [i_7])))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_11] [i_12])) ? (-6196032273825450536LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_35 [i_12] [i_12] [i_11] [i_7])), (arr_4 [12LL])))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7]))))))));
                }
            } 
        } 
    }
}
