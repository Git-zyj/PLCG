/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_3, (min((min(var_15, (arr_9 [16] [16] [i_0] [i_0]))), var_2))));

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                var_20 = var_0;
                                var_21 = (((((min((arr_12 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [12]), (arr_12 [i_0] [i_1 + 2] [11] [1] [i_4 - 1]))))) < (min((arr_4 [i_1] [i_1 + 1] [i_1 + 2]), 2340682385))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_22 ^= arr_10 [12] [i_3] [i_2] [i_2] [16] [i_3] [i_0];
                                arr_15 [i_1] [i_1] = (arr_4 [i_1] [1] [i_2]);
                            }
                            arr_16 [i_2] [i_1] [i_2] [i_3] [i_2] = (min((((min(1, 2904747499)) - (arr_10 [i_3] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0]))), ((((arr_7 [i_1] [i_1 + 1] [i_1 + 1]) && (arr_14 [i_0] [i_1] [i_2] [i_3] [i_3]))))));
                            var_23 = ((((max((arr_7 [i_1] [i_1] [14]), -84295725))) ^ (max(67108863, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))));
                            var_24 |= ((((((3965498869 ? 4265955348 : -1779118688))) ? (((var_6 > (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] [i_3])))) : (arr_4 [i_0] [i_1] [i_0]))));
                        }
                    }
                }

                for (int i_6 = 4; i_6 < 18;i_6 += 1)
                {
                    var_25 = (arr_18 [3] [i_1 + 1] [6] [1]);
                    var_26 = (((min(1954284919, 106)) * ((var_6 ^ ((((!(arr_9 [12] [i_1 - 1] [i_1 - 1] [i_1])))))))));
                    var_27 = ((var_15 ? (arr_9 [i_0] [i_1 + 1] [i_6 - 1] [2]) : (min(var_11, 3861928704))));
                }
            }
        }
    }
    var_28 = (((((var_11 & (max(var_5, var_18))))) ? (max(((min(var_10, var_0))), (max(var_15, var_3)))) : (min(var_17, var_15))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            {
                var_29 = (min(var_29, (((-((((max(1, var_14))) ? (((arr_23 [8] [i_8] [i_8]) + 16316322321142571025)) : ((max((arr_19 [i_7] [i_7]), (arr_22 [i_7] [i_7] [i_8])))))))))));
                arr_25 [i_8] = (max((max((arr_19 [i_8 + 1] [i_8 + 1]), (arr_20 [i_8 + 1]))), ((((arr_23 [i_8] [i_8 + 1] [i_8]) - (((arr_20 [13]) ? (arr_19 [9] [i_8 + 1]) : var_17)))))));
            }
        }
    }
    #pragma endscop
}
