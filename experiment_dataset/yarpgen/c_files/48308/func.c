/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48308
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
    var_10 ^= ((/* implicit */short) (signed char)0);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (max((3949989459U), (1149575699U))))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        var_12 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) 4294967295U)) % (arr_0 [i_0]))), (((/* implicit */long long int) 3949989460U))));
    }
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
        arr_5 [i_1 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_1 - 2] [i_1 - 1]), (((/* implicit */unsigned int) var_2))))) && (((/* implicit */_Bool) var_4))));
        arr_6 [i_1 - 2] [i_1 + 2] = ((/* implicit */long long int) min((((short) arr_2 [i_1 + 2])), (((short) ((signed char) var_1)))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_15 [5LL] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((unsigned char) (unsigned char)84));
                        var_14 *= ((signed char) var_2);
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_15 *= ((var_5) >> (((arr_9 [14] [i_3]) - (2812411593167188037ULL))));
                            var_16 = ((/* implicit */signed char) var_0);
                            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_5] [i_4] [i_6] [i_2])) - (((/* implicit */int) var_3))));
                        }
                    }
                    for (signed char i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            arr_26 [i_2] [i_2] [i_4] [i_7] [(signed char)13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) arr_24 [i_2] [i_3] [(signed char)7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_3] [i_4] [i_7 - 2] [i_7 - 3] [i_8]))) : (((unsigned int) var_0)));
                            arr_27 [i_2] [i_2] [i_3] [i_2] [(signed char)0] [i_8 - 1] [i_8] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [i_2])))) | (((/* implicit */int) var_3))));
                        }
                        arr_28 [i_2] [6ULL] = ((/* implicit */unsigned int) ((short) arr_20 [i_7] [i_7 - 1] [i_7 - 3] [8LL]));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_3] [i_7 - 2] [i_7 - 2] [i_3] [i_7 - 1] [i_7 - 3])) ? (((((arr_0 [i_2]) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-11635)) + (11654))) - (18))))) : (((long long int) (unsigned char)68))));
                    }
                    var_19 = ((/* implicit */short) (+(var_5)));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        arr_32 [6ULL] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) (short)32767))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_35 [i_10] [i_4] [i_4] [(signed char)0] [i_3] [(short)13] = ((unsigned int) arr_24 [(signed char)2] [i_3] [i_3]);
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [i_2] [i_3] [i_4] [i_9] [i_3] [i_3]))));
                            arr_36 [0U] [i_4] = ((/* implicit */signed char) ((int) arr_31 [i_3] [i_2]));
                        }
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_17 [i_3] [i_4] [i_9]))));
                        var_22 = ((/* implicit */signed char) ((arr_14 [i_4] [i_9] [i_4] [i_3] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    }
                    for (short i_11 = 4; i_11 < 13; i_11 += 4) 
                    {
                        arr_40 [i_11] [i_4] [i_3] [i_3] [i_2] [10U] = ((/* implicit */signed char) ((unsigned int) arr_9 [i_2] [i_11]));
                        var_23 = ((/* implicit */unsigned char) arr_11 [i_2] [i_3] [i_11 - 1]);
                    }
                }
            } 
        } 
        arr_41 [i_2] |= ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 4) 
        {
            arr_45 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_12 + 1] [i_12] [i_12])) || (((/* implicit */_Bool) arr_16 [i_12 + 3] [i_12] [i_12]))));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 3; i_13 < 12; i_13 += 4) 
            {
                var_24 &= ((((/* implicit */_Bool) arr_34 [i_13 - 1] [i_13] [i_13] [i_12 - 2] [i_12 - 2])) ? (arr_34 [i_13 - 2] [3] [(short)1] [i_13] [i_12 + 3]) : (arr_34 [i_13 - 3] [i_13] [i_13 + 2] [i_13 - 2] [i_12 - 3]));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_13])) / (((/* implicit */int) arr_2 [i_13 + 1]))))) ? (((arr_11 [i_2] [i_12] [i_13 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))))) : (var_5)));
            }
        }
    }
    for (short i_14 = 0; i_14 < 13; i_14 += 4) 
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 3037361538U)) ^ (11092636432882264586ULL))))));
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 3; i_15 < 11; i_15 += 1) 
        {
            for (signed char i_16 = 4; i_16 < 9; i_16 += 2) 
            {
                for (signed char i_17 = 2; i_17 < 11; i_17 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_9 [i_17] [i_16])))) ? (11092636432882264606ULL) : (arr_55 [11U] [11U])));
                            arr_60 [i_15 + 1] [i_17 + 2] [i_18] [i_17] [(unsigned char)11] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_39 [i_15] [i_15 + 1] [i_15 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_14] [i_17])) ? (arr_13 [(signed char)8] [4] [i_16] [i_15] [i_14]) : (((/* implicit */int) var_4)))))));
                        }
                        for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            arr_65 [i_14] [i_14] [i_14] [i_16] [i_17] [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) 5444049480354587214ULL))));
                            var_28 = ((/* implicit */signed char) max((var_28), (arr_21 [i_14] [i_14] [i_16] [i_17])));
                        }
                        var_29 *= 9410051422636831158ULL;
                        var_30 = ((/* implicit */signed char) min((var_30), (var_1)));
                        arr_66 [i_17] = ((/* implicit */unsigned long long int) arr_42 [i_14] [i_14]);
                        var_31 = ((/* implicit */long long int) var_2);
                    }
                } 
            } 
        } 
        arr_67 [i_14] |= ((/* implicit */unsigned long long int) var_1);
    }
}
