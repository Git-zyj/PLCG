/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28317
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_2 - 3] = ((/* implicit */unsigned int) ((unsigned char) arr_7 [i_0] [i_0]));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1])))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 3] [i_2 + 1] [i_3])) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (0ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)8] [i_0])) : (((/* implicit */int) arr_7 [i_0] [15ULL]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (18446744073709551613ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((var_2) >> (((((/* implicit */int) var_11)) + (143)))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29472))) : (0ULL)))));
                    arr_23 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((arr_18 [i_4 - 2] [i_4 - 2] [i_6]) ^ (((/* implicit */long long int) arr_11 [i_4 + 2] [i_4 - 2] [i_4 - 2] [i_4 + 1]))));
                    arr_24 [i_4] [i_4] = arr_5 [i_5] [i_5];
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            {
                                arr_29 [16LL] [16LL] [i_6] [16LL] [i_6] [i_7] = ((/* implicit */_Bool) arr_11 [i_8] [(signed char)17] [i_5] [i_4]);
                                arr_30 [i_7] [i_7] [i_5] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_4 + 2] [i_5] [i_8 - 1] [i_7]))));
                                arr_31 [16LL] [i_4] [i_7] [(signed char)11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_4] [i_5])) ? (((/* implicit */unsigned long long int) arr_27 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8 + 1])) : (arr_19 [i_8 + 1] [i_4 + 2] [i_4 - 2])));
                            }
                        } 
                    } 
                    arr_32 [i_5] = ((/* implicit */unsigned short) arr_11 [i_6] [i_5] [i_4] [i_4]);
                }
                var_22 = ((/* implicit */unsigned int) ((unsigned long long int) max((var_7), (((/* implicit */signed char) ((arr_4 [i_5] [3U]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
                /* LoopSeq 4 */
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_14 [i_4 - 1]))))) ? ((~(arr_27 [i_4] [i_4] [i_5] [(unsigned char)12] [i_9]))) : (((8330795471882277728LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9])))))))));
                    var_24 += ((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (max((((/* implicit */int) arr_17 [i_4])), (var_12))) : ((~(((/* implicit */int) arr_7 [i_4 + 1] [i_4])))))))));
                }
                for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4 + 2])) ? (arr_27 [i_10 + 1] [i_4 - 3] [i_4 + 1] [i_4 - 1] [i_4 - 1]) : (arr_27 [i_10 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) * (((unsigned long long int) arr_14 [i_4 - 2])))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_21 [i_10 - 2] [i_4 - 1]))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_10 + 1] [i_4 - 1])))))));
                }
                /* vectorizable */
                for (unsigned char i_11 = 2; i_11 < 16; i_11 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_4 - 2] [i_4 - 2] [i_11 + 2])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1745197883)) : (8353424244485429131ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        arr_43 [i_4] [i_4] [i_11] [i_12] = ((/* implicit */long long int) arr_7 [i_11 - 1] [i_4 - 3]);
                        var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_41 [i_4] [i_5] [(signed char)14] [i_12]))) ? (((var_17) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) -7818216299756311900LL))));
                    }
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18)) ? (arr_26 [i_11 - 2] [i_5] [i_4 + 1]) : (arr_26 [i_11 + 1] [i_5] [i_4 + 2])));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_5] [i_11 + 2])) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_8 [i_5] [i_5] [14LL] [(_Bool)1])))))))));
                }
                /* vectorizable */
                for (long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    var_31 = (short)4486;
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) arr_45 [i_4] [i_4 + 2] [i_4]))));
                    arr_46 [i_4 - 3] [i_4 - 3] [i_13] [i_5] = ((/* implicit */unsigned short) ((arr_39 [i_4] [i_4 + 1] [i_13] [i_5]) >= (arr_39 [i_13] [i_5] [i_5] [i_4])));
                }
                arr_47 [(_Bool)1] [(_Bool)1] [i_4 + 2] = ((/* implicit */unsigned int) (-(arr_27 [i_4 + 2] [i_5] [i_5] [i_4 - 2] [i_4 + 2])));
            }
        } 
    } 
}
