/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((var_0 ? var_4 : var_8)), var_18));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 ^= 1537343438056235937;
                var_21 = (((((((max((arr_4 [i_0] [i_0] [i_0]), 5544927179604489041))) ? (arr_0 [i_0 + 1]) : ((6121456416360287353 ? 446702407094315919 : (arr_0 [i_0])))))) ? (arr_0 [i_0 + 1]) : ((var_13 / (arr_3 [i_0] [i_0] [i_0 + 1])))));
                arr_6 [i_0] = ((((arr_2 [i_1] [i_0] [i_0]) ? var_14 : (arr_3 [3] [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] [0] [i_3] [i_3] [i_0 - 1] &= ((5399312337991037317 ? (min(1537343438056235929, (arr_12 [i_0] [i_1] [i_2] [i_2 + 1] [i_1] [i_3])) : 212)));
                            arr_16 [i_3] [i_0] [i_0] [i_0] = (arr_5 [i_0 + 1] [i_2 - 2] [i_3 - 2]);
                            var_22 = (min(var_22, (1 * -0)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_23 = ((-(arr_24 [i_4] [i_4] [i_4] [i_6])));
                    arr_27 [i_4] = (arr_25 [i_5] [i_5] [i_5 + 1] [1]);
                }
                arr_28 [i_4] [i_4] = var_13;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_24 = min((arr_17 [1]), var_5);
                                arr_36 [i_9] [i_5] = (arr_34 [9] [i_5] [i_7] [i_5] [i_5]);
                                arr_37 [i_9] = (arr_35 [i_5 + 1] [i_5 - 1] [i_8 - 3] [i_9 + 3] [i_9 + 2]);
                                var_25 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
