/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199531
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) 3018333611U))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_4 [i_1])))));
            var_18 = ((/* implicit */unsigned long long int) ((((arr_0 [i_0 - 4] [i_0 + 1]) + (9223372036854775807LL))) >> (((arr_1 [i_1]) - (363711574580805663ULL)))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_6 [i_0 - 4] [i_0 - 1] [i_0 + 2]) : (((/* implicit */unsigned long long int) 1508141906))));
                        var_20 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)2996)))) <= (((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [9U]))));
                        arr_14 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_2] [i_3] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4] [i_2 + 1] [i_0]))) : (((arr_8 [i_3] [5ULL]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                        arr_15 [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_0 - 4])) ? (arr_0 [i_2 + 1] [i_0 - 4]) : (arr_0 [i_2 + 1] [i_0 - 4])));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 2] [i_0 + 2]))) - (1130882031708426557ULL))))));
                    }
                } 
            } 
            arr_16 [i_0] = ((/* implicit */unsigned int) ((arr_4 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38753)))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            arr_19 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)25438)) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) var_13)) ? (var_2) : (arr_1 [i_0])))));
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                arr_24 [(_Bool)1] [(unsigned char)11] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_5 - 1] [i_0 + 2] [i_0])) ? (arr_11 [i_0 + 2] [i_0 - 4] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_5]))) : (var_13))))));
                arr_25 [i_0] [i_0] [i_6] [i_6] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */long long int) arr_7 [i_0 - 2] [5LL]))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_7))));
                            var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) arr_3 [i_0 - 4] [i_5 + 1])) ? (((/* implicit */int) arr_9 [i_8] [i_0])) : (((/* implicit */int) (short)25449))))));
                            arr_30 [i_0] [6LL] [(short)1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((var_8) >> ((+(((/* implicit */int) (_Bool)1))))));
                            var_24 = ((/* implicit */unsigned int) 165179223);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 2) /* same iter space */
            {
                arr_34 [9U] [9U] = ((/* implicit */unsigned char) ((arr_26 [i_0 - 3] [i_5 + 1]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 - 3])));
                var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) var_5)) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_5] [i_9 - 4] [i_0])))))));
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(arr_11 [i_5 - 1] [i_5 - 1] [i_9 - 2]))))));
            }
            for (unsigned long long int i_10 = 4; i_10 < 11; i_10 += 2) /* same iter space */
            {
                var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [7LL] [7LL]))) : (arr_7 [i_0 - 2] [5U])))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_5] [6ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14))) : ((-(var_8)))));
                var_28 ^= arr_12 [i_5 - 1] [7] [7] [i_10];
            }
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    {
                        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_0] [i_5 + 1]))));
                        arr_45 [(unsigned short)8] [i_0] [i_5] [(unsigned short)8] [(unsigned short)9] [11] = ((/* implicit */unsigned int) arr_13 [i_0 - 4] [11ULL] [i_0] [i_11 + 2]);
                    }
                } 
            } 
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (~(var_0))))));
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 4) 
            {
                for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    {
                        arr_56 [(unsigned short)0] = ((/* implicit */unsigned int) arr_50 [i_13] [(signed char)8]);
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3806)) ^ (((/* implicit */int) (short)25438))))) ? (((/* implicit */unsigned long long int) arr_51 [i_13] [i_13])) : (arr_54 [i_14 + 1])))) ? (((/* implicit */unsigned long long int) arr_51 [i_13] [i_13])) : (((max((arr_47 [i_15 - 1]), (((/* implicit */unsigned long long int) var_10)))) | (arr_50 [i_15 + 1] [i_14 + 3])))));
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_7) : (var_14)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_15)));
}
