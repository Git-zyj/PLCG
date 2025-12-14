/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223169
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
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (4294967295U)));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_15 = ((arr_9 [i_0] [i_1] [i_2 - 1] [i_3] [i_4]) % (arr_9 [4U] [4U] [4U] [i_3] [i_4]));
                            var_16 = arr_13 [i_0] [i_0] [i_1] [i_0 - 1] [i_0] [i_0 - 1];
                            var_17 = arr_8 [i_0];
                        }
                        var_18 = ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 4]) : (arr_1 [i_0 + 1]));
                        arr_14 [i_0] [i_0 + 1] [i_1] [i_0] = arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1];
                    }
                } 
            } 
            arr_15 [i_0 - 1] [i_0] [i_1] = 2013265920U;
            arr_16 [i_0] [3U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 3])) || (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0]))));
        }
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_19 ^= ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_5] [i_0])) ? (arr_13 [i_0 + 4] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_13 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5]));
            var_20 ^= arr_2 [i_0 + 2] [i_0 - 1] [i_0 + 2];
        }
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        var_21 -= 1U;
                        arr_29 [i_0] = ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0])) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_7] [i_0]) : (4294967295U));
                        var_22 += ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 3] [i_0] [i_6])) ? (arr_19 [i_7]) : (((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_6] [i_7] [i_7])) ? (arr_19 [i_6]) : (arr_6 [i_6] [i_7] [i_7]))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((arr_17 [i_0 + 4] [i_6]) == (4294967295U))))));
                    }
                } 
            } 
        } 
        arr_30 [i_0] [i_0] = ((((/* implicit */_Bool) 3816008981U)) ? (arr_3 [i_0 + 1] [i_0 + 4] [i_0 + 4]) : (arr_3 [i_0 + 4] [i_0 + 3] [i_0 + 4]));
        var_24 ^= ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 3])) ? (arr_26 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0]) : (arr_17 [i_0 + 4] [i_0 + 3]));
    }
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 1; i_10 < 20; i_10 += 2) 
        {
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    {
                        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10 - 1] [i_10] [i_10] [i_10 + 1])) ? (max((arr_40 [i_10] [i_10]), (67276889U))) : (0U)))) ? (max((arr_34 [i_10 - 1] [i_10]), (arr_34 [i_10 + 1] [15U]))) : (max((((/* implicit */unsigned int) ((arr_36 [i_9]) == (1407880512U)))), (min((4294967295U), (1U))))));
                        arr_41 [0U] [20U] [i_10] [i_11] [i_12] [i_10] = max((max((4294967292U), (arr_37 [i_9] [i_10] [i_11]))), (min((3773467458U), (arr_34 [i_9] [i_9]))));
                        var_26 = arr_33 [i_10];
                    }
                } 
            } 
        } 
        var_27 = arr_31 [i_9] [i_9];
        var_28 = max((((((/* implicit */_Bool) arr_32 [i_9])) ? (((((/* implicit */_Bool) 2U)) ? (arr_32 [i_9]) : (arr_38 [i_9] [i_9] [i_9] [0U]))) : (((arr_35 [i_9]) | (arr_35 [i_9]))))), (max((arr_35 [i_9]), (4235886370U))));
    }
    var_29 = var_5;
}
