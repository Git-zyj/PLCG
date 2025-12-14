/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208012
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
    var_13 &= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) (unsigned short)27797)) ? ((+((~(var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)117)), (arr_4 [i_0] [i_2] [i_0]))), (arr_4 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_15 -= ((/* implicit */unsigned int) (unsigned char)88);
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) 0)) : (var_6))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 2] [i_2 - 1] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_1 [i_0] [i_2]))) : (((/* implicit */int) (signed char)-14))));
                        arr_9 [i_3] = ((/* implicit */long long int) (unsigned short)37739);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) 0LL)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (var_6))))) >= (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (short)-10469))))), (((var_8) % (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2 - 2] [i_2] [i_4])))))))))));
                        var_19 &= ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_14 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned short)37738)), (9214364837600034816LL))), (((/* implicit */long long int) (signed char)-14))));
                        var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned char)167))))), ((~(((/* implicit */int) arr_4 [i_4] [i_2] [i_1]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88))))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_3))))));
        var_21 = ((/* implicit */unsigned char) max((((unsigned long long int) arr_15 [i_5] [i_5])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)40)), (arr_15 [i_5] [i_5])))) || (((/* implicit */_Bool) 4294967295U)))))));
        var_22 = ((/* implicit */unsigned long long int) (signed char)-14);
    }
    for (signed char i_6 = 4; i_6 < 11; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 4; i_7 < 11; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) 0U);
                    var_24 = ((/* implicit */_Bool) min(((~(arr_0 [i_6] [i_7 - 3]))), (arr_0 [i_7] [i_7])));
                    arr_26 [i_6 - 4] [i_7 - 2] [(_Bool)1] &= ((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned char)168)), (((5950554598452435745LL) ^ (((/* implicit */long long int) arr_18 [i_6] [i_6])))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_8] [i_7 - 3] [i_8] [(unsigned char)3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (9223372036854775807LL)))) <= (max((arr_22 [i_6] [i_8]), (((/* implicit */unsigned long long int) (signed char)-1)))))))));
                }
            } 
        } 
        arr_27 [i_6] [i_6] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_7)), (arr_25 [i_6 + 1] [i_6 + 1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0)))))));
        var_25 = (!(((/* implicit */_Bool) 3121749245U)));
    }
    /* LoopSeq 4 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_9))))));
        var_27 = ((/* implicit */long long int) arr_15 [16ULL] [16ULL]);
        /* LoopNest 2 */
        for (long long int i_10 = 2; i_10 < 17; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 1; i_13 < 17; i_13 += 2) 
                        {
                            {
                                var_28 &= ((((/* implicit */unsigned long long int) 2251799276814336LL)) <= (((var_8) >> (((arr_35 [i_10 + 1] [i_10 - 1] [i_10] [i_10 + 1]) - (4915137689811535515ULL))))));
                                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_28 [i_10 + 1] [i_13 + 1]))));
                                var_30 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (1175786857689488829ULL) : (18446744073709551615ULL))), (max((((/* implicit */unsigned long long int) arr_16 [i_12] [i_11])), (min((12764059694409695610ULL), (((/* implicit */unsigned long long int) arr_36 [i_11] [i_11] [i_10]))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_11)), (4294967295U))))))));
                    arr_40 [i_9] [i_9] [i_10] [i_9] |= ((/* implicit */signed char) min((var_12), (((/* implicit */unsigned short) ((unsigned char) arr_16 [i_10] [i_10 - 2])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_14 = 2; i_14 < 14; i_14 += 2) 
        {
            for (long long int i_15 = 2; i_15 < 17; i_15 += 2) 
            {
                {
                    arr_45 [i_9] [(_Bool)1] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (unsigned char)168)), (arr_38 [i_14] [i_14] [i_9] [i_9] [i_14 - 1]))), (max((((/* implicit */unsigned long long int) -9223372036854775807LL)), (var_6)))));
                    arr_46 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) (signed char)-14)), (arr_15 [i_9] [i_9]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)30720)))))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)3)))))));
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-2097))));
                }
            } 
        } 
    }
    for (short i_16 = 2; i_16 < 10; i_16 += 2) 
    {
        arr_49 [i_16] [i_16] &= max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) arr_7 [i_16 + 1] [i_16 - 2] [i_16] [i_16] [i_16])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))))));
        arr_50 [i_16] = ((/* implicit */unsigned short) min((arr_12 [i_16] [i_16] [i_16] [i_16 + 1] [i_16 + 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (signed char)-14)))))));
        var_34 = ((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */short) (unsigned char)12)), ((short)15139)))), (((((/* implicit */int) arr_24 [i_16 - 1] [i_16] [i_16])) & (((/* implicit */int) arr_24 [i_16 + 1] [i_16 + 2] [i_16]))))));
        var_35 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_35 [i_16 - 1] [i_16] [i_16 + 1] [i_16 - 2]))))), (max((arr_35 [i_16 - 1] [4U] [i_16 + 1] [i_16 - 2]), (((/* implicit */unsigned long long int) var_4))))));
    }
    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 1) 
    {
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) * (3951920347799127289ULL)))) ? (((arr_51 [i_17]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13)))));
        arr_53 [i_17] = ((/* implicit */signed char) (unsigned char)12);
    }
    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 3) 
    {
        var_37 -= ((/* implicit */long long int) ((max((max((var_8), (((/* implicit */unsigned long long int) (unsigned char)64)))), (((/* implicit */unsigned long long int) (+(arr_28 [i_18] [i_18])))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_18] [i_18] [i_18]), (arr_3 [i_18] [i_18] [i_18])))))));
        var_38 = (+((+(((((/* implicit */_Bool) 5036587374407833247LL)) ? (arr_7 [i_18] [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (short)2096))))))));
        arr_56 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (signed char)65))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)3584))) / (3334036262530937730LL)))) : (12373134485943607487ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) << ((((~(((/* implicit */int) var_3)))) + (44051)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (arr_43 [i_18] [i_18])))));
    }
}
