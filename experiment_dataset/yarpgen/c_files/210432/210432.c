/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = (min(var_0, (~var_5)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1 - 1] [i_0] [i_3] [i_3] = (-var_4 / 1);
                            var_15 = (min((arr_9 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_3 - 1]), -var_1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_16 = (arr_0 [9] [9]);
                            var_17 |= ((!(arr_14 [i_0] [i_1])));
                            var_18 = var_3;
                        }
                    }
                }
            }
        }
    }
    var_19 = (min((var_5 || var_2), var_3));
    var_20 = (min(((min(var_9, (var_11 > var_6)))), 83878127));
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_21 = (min(-var_1, ((((arr_19 [i_6] [i_7 - 1] [i_6 - 2]) & (arr_22 [i_6] [i_7 + 1] [i_6] [i_8 + 1]))))));
                            var_22 = 1;
                            arr_25 [i_7] [i_7] = (4211089168 / var_12);
                            var_23 = (min(var_23, (arr_20 [i_6 - 1])));
                            var_24 = ((((max((arr_20 [i_6]), (arr_23 [i_7])))) != ((((arr_20 [i_6 + 1]) < var_3)))));
                        }
                    }
                }
                var_25 = (arr_19 [i_6] [i_6] [i_6 - 2]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            {
                var_26 = (max(var_26, -var_3));
                arr_33 [i_10] = (+-32736);
            }
        }
    }
    #pragma endscop
}
