/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21881
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            arr_14 [i_2] &= ((/* implicit */unsigned short) arr_0 [(unsigned short)3]);
                            var_16 = var_8;
                            arr_15 [i_1] [i_1] [i_1] [1U] = ((/* implicit */unsigned int) var_1);
                        }
                        arr_16 [i_0] [3LL] [i_1] [i_3] = ((/* implicit */_Bool) max(((unsigned short)41958), ((unsigned short)41958)));
                        arr_17 [i_1] = ((/* implicit */short) arr_12 [i_3] [i_1] [i_3] [i_1] [i_1] [i_1] [i_0]);
                        var_17 -= ((/* implicit */unsigned char) var_15);
                        var_18 = ((/* implicit */signed char) var_13);
                    }
                } 
            } 
            var_19 ^= ((/* implicit */unsigned char) arr_11 [i_1] [i_1 - 4] [i_0] [i_1] [i_1 - 4]);
            var_20 = max((arr_7 [i_1 - 3]), (arr_7 [i_1 + 1]));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (long long int i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            arr_27 [i_1] [3U] [i_1] [i_0] [i_5] [(unsigned char)4] [4LL] = ((/* implicit */int) max((1868198995U), (((/* implicit */unsigned int) arr_4 [i_5] [i_6 - 1]))));
                            var_21 = ((/* implicit */int) arr_12 [i_0] [i_1] [i_1 - 4] [i_5] [i_5] [i_0] [i_7]);
                            arr_28 [i_0] [i_0] [i_1] [i_6] [i_7] [i_5] [i_7] = ((/* implicit */long long int) arr_19 [i_6] [(_Bool)1] [i_0]);
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 3; i_8 < 10; i_8 += 2) 
        {
            var_22 = ((/* implicit */short) max((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_8 - 3] [i_0] [8] [i_0])), (max((((/* implicit */long long int) arr_23 [i_8] [i_8] [(unsigned char)2])), (var_8)))));
            arr_31 [i_0] = ((/* implicit */unsigned int) var_8);
        }
        var_23 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_15)));
    }
    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        arr_35 [(signed char)13] = arr_33 [i_9];
        var_24 = ((/* implicit */short) min((((/* implicit */long long int) arr_33 [i_9])), (arr_32 [i_9])));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (int i_11 = 2; i_11 < 16; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_1))));
                                var_26 = ((/* implicit */unsigned char) var_15);
                                arr_48 [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_6)), (var_7)));
                                arr_49 [i_9] [i_10] [4LL] [10LL] [(_Bool)1] [10ULL] [i_10] = ((/* implicit */unsigned int) min((arr_47 [0LL] [i_13] [9ULL] [i_13 - 1] [i_13 - 1] [i_13] [i_13]), (max((arr_47 [i_13] [5] [i_13 + 2] [i_13 + 3] [i_13 + 1] [13ULL] [i_13]), (var_1)))));
                            }
                        } 
                    } 
                    var_27 += ((/* implicit */signed char) min((min((arr_43 [i_11 + 2] [i_11] [i_11 + 2]), (arr_43 [i_11 - 1] [i_11 - 1] [i_11 - 1]))), (arr_43 [i_11 + 2] [(unsigned char)8] [i_11 + 1])));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_34 [i_9]), (((/* implicit */unsigned int) var_4))))), (max((((/* implicit */unsigned long long int) arr_34 [i_9])), (var_5))))))));
    }
    var_29 = ((/* implicit */int) var_1);
    var_30 = ((/* implicit */long long int) var_2);
}
