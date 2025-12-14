/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199152
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)17))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [(unsigned short)15] [(unsigned short)15] [(unsigned short)15] [(signed char)11] [(unsigned char)15]))) : (max((arr_7 [i_2 - 3] [i_2 - 4] [i_2 - 4]), (((/* implicit */unsigned long long int) arr_10 [22ULL] [14ULL] [i_1]))))));
                                var_19 += arr_9 [i_0] [i_1] [i_1] [3ULL] [10] [3ULL];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [(signed char)17] [(unsigned char)9] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)31)), ((unsigned short)65535))))) : (((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (var_14)))))) ? (((/* implicit */int) arr_13 [i_2])) : ((-(((/* implicit */int) var_8)))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [(_Bool)1] [i_0]))) : ((-(arr_5 [i_0] [(short)19] [(short)20])))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_0])), (arr_7 [i_0] [i_0] [16LL])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16507))) : (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_2] [i_1] [i_0]))))) : ((~(min((arr_8 [i_0] [i_1] [19ULL] [22] [i_6]), (arr_5 [i_6] [1ULL] [1ULL])))))));
                                var_22 = ((/* implicit */signed char) ((max((18446744073709551615ULL), (18446744073709551610ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)42), (var_2)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) var_17);
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_4)) == (min((arr_7 [(signed char)14] [i_1] [i_1]), (((((/* implicit */unsigned long long int) arr_11 [i_2 + 1] [i_1])) * (var_11))))))))));
                                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_8 + 1] [(_Bool)1] [(_Bool)1] [i_1])) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) arr_1 [i_8] [i_0]))))), (var_3))))));
                                var_26 ^= ((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483647)), (var_12)))) && (((/* implicit */_Bool) arr_8 [i_1] [i_2 - 3] [(short)14] [23LL] [i_2 - 3]))))) + (((((/* implicit */int) var_8)) % (((((/* implicit */_Bool) arr_24 [i_0] [i_1] [(unsigned char)12])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_27 [14] [(unsigned char)18] [i_2] [i_9] [(short)19]))))))));
                                arr_29 [i_2 + 2] [(short)21] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_9] [(short)24] [13ULL] [3])) ? (((((/* implicit */_Bool) ((signed char) var_6))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_10]))) : (var_11))) : (max((arr_7 [(signed char)3] [i_9] [i_1]), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_2 - 1] [i_2 + 3]))))));
                                arr_30 [i_0] [i_1] [i_0] [i_2 - 1] [i_9] [i_9] [(short)19] = max((var_7), (((/* implicit */int) ((unsigned char) arr_21 [(short)23] [17ULL] [(short)23] [i_9] [(unsigned char)10]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        for (unsigned long long int i_12 = 2; i_12 < 13; i_12 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_13 = 3; i_13 < 12; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        {
                            arr_44 [i_12] [i_13 - 1] [i_12] [i_13 - 2] = ((/* implicit */signed char) (((-(max((((/* implicit */unsigned long long int) arr_11 [7LL] [(signed char)3])), (arr_37 [i_12] [(signed char)1] [i_13 - 1] [(signed char)0]))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_11] [i_13 - 2] [i_13 + 2] [i_14] [(short)18] [(_Bool)1])))))));
                            var_28 += ((/* implicit */_Bool) (~(((/* implicit */int) max(((short)32767), (((/* implicit */short) arr_9 [i_11] [5ULL] [i_11] [i_11] [i_11] [(_Bool)1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (+(var_10))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_12 [i_12 - 1])), (((((/* implicit */_Bool) arr_25 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_12 - 1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_11] [8ULL] [i_11] [i_11] [i_11] [i_11])), (arr_12 [i_11]))))) : ((+(18446744073709551615ULL))))))))));
                            arr_49 [i_11] [i_12 - 1] [i_11] |= ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_0 [i_11] [i_11])) ? (arr_25 [0ULL] [i_12 + 1] [i_15] [i_15] [i_12 + 1]) : (arr_25 [i_11] [i_11] [i_11] [i_11] [i_11]))) % (((((/* implicit */_Bool) -1554359068)) ? (((/* implicit */int) (short)18791)) : (((/* implicit */int) var_5)))))), (min((((/* implicit */int) (signed char)-104)), ((-(((/* implicit */int) arr_47 [i_16] [i_16] [(signed char)9] [(signed char)10] [i_11]))))))));
                            arr_50 [i_12] = ((/* implicit */unsigned long long int) arr_28 [i_11] [i_11] [i_11] [(unsigned char)18] [i_11]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 25; i_17 += 4) 
    {
        for (signed char i_18 = 4; i_18 < 24; i_18 += 1) 
        {
            for (signed char i_19 = 1; i_19 < 24; i_19 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        for (signed char i_21 = 0; i_21 < 25; i_21 += 4) 
                        {
                            {
                                var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_18 - 3] [i_17] [i_19 + 1]))))) ? (((((((/* implicit */_Bool) arr_2 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_17]))) : (0ULL))) - (((/* implicit */unsigned long long int) (+(var_7)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_18] [i_18 + 1])) + (((/* implicit */int) arr_52 [i_18 - 3] [i_19 + 1])))))));
                                arr_65 [i_18] [i_20] [i_19] [(_Bool)1] [i_18] = ((/* implicit */int) (-(max((arr_62 [i_19 + 1] [i_19 + 1] [i_19 - 1] [i_18] [i_19 + 1]), (((/* implicit */long long int) arr_20 [i_19 + 1] [i_19 - 1] [i_19 + 1] [i_19 + 1] [i_19 - 1] [i_19 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 1; i_22 < 24; i_22 += 1) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 22; i_23 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */short) (-((~(((/* implicit */int) max((var_5), (((/* implicit */short) (unsigned char)239)))))))));
                                var_33 = arr_68 [i_19] [i_17];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
