/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32186
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (arr_6 [(signed char)6] [i_1] [4])))), (arr_7 [1ULL] [i_1 - 1] [(_Bool)1]))), (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (min((arr_5 [i_0]), (arr_1 [i_0])))))))))));
                    var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_6 [(signed char)4] [i_1 - 1] [i_0])));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned int) arr_4 [(short)8] [i_3] [i_3]);
                        var_15 += ((/* implicit */short) arr_3 [i_2] [i_0]);
                        arr_10 [i_3] = ((/* implicit */_Bool) arr_7 [i_3] [i_1 + 1] [i_0]);
                    }
                    var_16 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1] [i_4 - 1]);
                                var_18 += ((/* implicit */unsigned char) arr_7 [i_1 + 1] [i_2] [i_1 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) (_Bool)1))))), (max((5970857270981895064ULL), (22ULL))))), (((/* implicit */unsigned long long int) max((var_10), (var_10))))))));
    var_20 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) min((min((arr_16 [i_6]), (arr_16 [(short)1]))), (arr_16 [i_6])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_22 += ((/* implicit */short) arr_15 [i_6]);
            var_23 = ((/* implicit */signed char) max((var_23), (arr_18 [i_6] [i_7])));
            /* LoopNest 3 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (int i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) arr_22 [(short)0] [i_7] [i_8] [i_7]);
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (arr_21 [i_10])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                for (unsigned short i_12 = 1; i_12 < 15; i_12 += 3) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_23 [10ULL] [10LL] [10LL] [(signed char)10]))));
                        arr_30 [i_6] [i_6] [i_7] [i_12 - 1] [(unsigned short)5] = ((/* implicit */int) arr_15 [i_6]);
                        arr_31 [i_6] [i_6] [i_7] [i_12 - 1] = ((/* implicit */long long int) arr_27 [i_12] [i_11] [i_7] [i_6]);
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_29 [6] [6]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 13; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    {
                        var_28 += ((/* implicit */unsigned long long int) arr_32 [i_6] [i_6] [14ULL]);
                        var_29 = ((/* implicit */unsigned long long int) arr_32 [(unsigned short)4] [i_7] [i_7]);
                    }
                } 
            } 
        }
    }
}
