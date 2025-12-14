/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28632
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_2] [i_2] [i_0] [(unsigned short)11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1 - 2]))));
                            arr_9 [i_0] [i_1] [i_2] [(unsigned char)10] [(signed char)11] = ((/* implicit */unsigned long long int) var_2);
                            var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((var_0) << (((/* implicit */int) arr_5 [i_1 - 2] [(_Bool)1] [i_1])))))));
                            var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) != (1104490324))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_1 + 1])));
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) arr_4 [6ULL] [i_1] [6ULL])) % (arr_0 [(unsigned char)8] [i_0]))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned short)16]))))))))))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_14 = ((/* implicit */unsigned char) max((max(((-(var_0))), (((/* implicit */long long int) ((unsigned char) (unsigned char)8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_0]) ? (((/* implicit */int) arr_5 [i_0] [(unsigned short)6] [i_0])) : (((/* implicit */int) arr_11 [i_0]))))) ? (var_9) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_6 [i_4] [i_1] [7ULL] [i_0]))))))))));
                    arr_12 [i_0] [(unsigned char)15] [i_0] [17] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (2093056U))), (((/* implicit */unsigned int) max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 1]))))));
                    arr_13 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                }
            }
        } 
    } 
    var_15 |= var_4;
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    var_16 += ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_24 [i_7] [(signed char)2] [i_5]))))), (arr_4 [(unsigned char)14] [i_6 - 1] [20ULL]))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                arr_31 [i_6 - 1] [i_7] [i_9] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_18 [i_6 - 2] [i_6])), (4294967295U)))));
                                var_17 = ((/* implicit */unsigned long long int) arr_20 [i_7]);
                                var_18 = ((/* implicit */unsigned short) (~(1104490324)));
                                arr_32 [i_9] [i_7] [i_9] [i_9] [i_9] = ((((arr_11 [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_27 [i_5] [i_8] [i_7] [i_7]))))) - (((/* implicit */unsigned long long int) ((unsigned int) ((1U) << (((((/* implicit */int) var_1)) - (56765))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) (-(arr_7 [(unsigned short)11] [i_7] [14ULL])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_28 [i_5] [6ULL] [0LL] [i_10] [i_10] [i_7] [i_7])))))));
                                var_20 = ((((arr_37 [i_5] [i_6 + 2] [i_6] [i_6 - 2] [i_7] [i_11 + 1] [i_11]) / (arr_37 [i_5] [i_6] [i_6] [i_6 + 2] [(unsigned char)0] [i_11 + 2] [i_11]))) < (((arr_37 [i_5] [i_6] [(_Bool)1] [i_6 - 1] [i_7] [i_11 + 2] [i_11 + 2]) << (((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 10; i_12 += 3) 
        {
            for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) arr_26 [i_5] [(unsigned short)4] [i_13] [i_12 + 2] [i_13] [(_Bool)0]);
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 3; i_14 < 10; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            {
                                var_22 = (-(arr_46 [i_5] [i_12] [i_13] [i_14 + 1] [i_12]));
                                arr_47 [i_12] [(_Bool)1] [i_13] [(unsigned char)7] [i_15] [i_15] = max((((/* implicit */unsigned long long int) (signed char)72)), (8891805733179106160ULL));
                            }
                        } 
                    } 
                    arr_48 [i_12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_12] [i_12]))))) % (((/* implicit */unsigned long long int) 6481276564955608361LL))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_16 = 1; i_16 < 10; i_16 += 3) 
        {
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(max((arr_37 [i_17] [(unsigned short)1] [i_16] [i_16] [(unsigned short)10] [i_5] [i_5]), (((var_2) ? (arr_26 [10U] [i_17] [10U] [i_5] [(_Bool)1] [(_Bool)0]) : (((/* implicit */unsigned long long int) var_9)))))))))));
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_39 [i_17] [i_16] [(_Bool)1]))))) / (max((4294967294U), (((/* implicit */unsigned int) ((18446744073709551615ULL) == (15468658638333779274ULL))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 3) 
    {
        var_25 = ((/* implicit */signed char) ((long long int) arr_7 [(signed char)13] [i_18] [i_18]));
        arr_57 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_18])) ? ((-(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))));
    }
}
