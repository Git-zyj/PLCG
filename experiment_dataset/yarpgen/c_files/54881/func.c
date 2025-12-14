/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54881
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (+(arr_1 [i_0])))) : (((((/* implicit */_Bool) (short)-30440)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = arr_4 [i_2];
                    var_15 = ((/* implicit */unsigned long long int) ((var_5) <= (((/* implicit */int) (short)28573))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_16 *= ((/* implicit */short) ((unsigned long long int) arr_9 [i_4] [i_3] [i_2] [i_0]));
                            arr_14 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((int) (short)-30440));
                        }
                        arr_16 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((((/* implicit */_Bool) (short)30439)) ? (134152192) : (((/* implicit */int) (short)-30454)))) : (arr_5 [i_2])));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (short)-32761);
                        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28566))) == (10431296319757023155ULL)));
                        var_18 = ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (((/* implicit */int) (short)-30454)));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        arr_21 [i_5] [i_2] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_5 - 3] [i_2] [i_0])) || (((/* implicit */_Bool) arr_9 [i_0] [i_5 - 2] [i_2] [i_5]))));
                        arr_22 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5] = var_0;
                    }
                    for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (((+(var_9))) + (arr_7 [i_6] [i_2] [i_1] [i_0]))))));
                        var_20 = ((/* implicit */int) (short)-20582);
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_1] [i_0] [i_1] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (100892747)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7ULL)) ? (-7) : (100892747)))) : (arr_13 [i_0]));
                                arr_31 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (short)30439)))) : (((((/* implicit */int) var_1)) & (((/* implicit */int) (short)-30440))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 2) 
        {
            var_21 = ((/* implicit */int) (short)28568);
            var_22 *= ((/* implicit */short) (+(arr_13 [i_0])));
        }
        for (int i_10 = 2; i_10 < 19; i_10 += 2) 
        {
            var_23 = arr_29 [i_10] [i_10 + 2] [i_10 + 1] [i_10] [i_10 - 1];
            arr_38 [i_0] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_10]) + (arr_6 [i_0] [i_10])))) ? (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_13)) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20604)))));
        }
        for (short i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            arr_42 [i_0] = ((/* implicit */short) ((var_9) != (arr_2 [i_11] [i_0])));
            var_24 = ((/* implicit */short) var_5);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 1) 
            {
                arr_47 [i_13] [i_12] [i_0] [i_0] = ((/* implicit */int) var_1);
                arr_48 [i_12] [i_13] = arr_18 [i_13 - 1] [i_13] [i_13 + 1] [i_13 + 1];
            }
            for (short i_14 = 3; i_14 < 20; i_14 += 4) 
            {
                arr_53 [i_0] [i_14] = (~(((arr_34 [i_0] [i_12] [i_14]) / (((/* implicit */int) arr_37 [i_14] [i_12] [i_0])))));
                var_25 = ((/* implicit */unsigned long long int) (~(var_12)));
            }
            /* LoopSeq 1 */
            for (short i_15 = 3; i_15 < 20; i_15 += 4) 
            {
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_0] [i_15 + 1] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_15 + 1] [i_15]))) : (var_9)));
                var_27 ^= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_49 [i_0] [i_12] [i_15 - 1])) : (((/* implicit */int) (short)14576)));
            }
            var_28 = ((((/* implicit */_Bool) ((unsigned long long int) arr_43 [i_0]))) ? (((((/* implicit */_Bool) (short)20581)) ? (arr_41 [i_0] [i_12] [i_12]) : (var_5))) : (((((/* implicit */_Bool) arr_52 [i_12] [i_12] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (var_3))));
        }
    }
    for (unsigned long long int i_16 = 2; i_16 < 19; i_16 += 1) 
    {
        var_29 = (-(((/* implicit */int) (short)0)));
        var_30 *= ((/* implicit */unsigned long long int) var_3);
    }
    var_31 = ((/* implicit */short) min((var_31), (((short) ((((/* implicit */int) (short)-20597)) == (var_6))))));
    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) 12400457150327722118ULL))));
}
