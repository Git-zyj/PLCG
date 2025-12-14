/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_5));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = ((!var_5) ? (((arr_6 [13] [2] [13] [i_4 + 1]) ? 1 : (arr_1 [i_4 - 2]))) : ((-(arr_1 [i_4 - 3]))));
                                var_16 = var_4;
                                var_17 = (max(((((((min(1, -24218)))) / 6293605585559256374))), (5103362908983597298 / 429089446)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            {
                arr_17 [i_5] [i_5] [i_6 - 2] = (((~244) >= (((arr_13 [i_6 - 2] [i_6 - 1]) ? var_1 : var_2))));
                var_18 |= var_1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                arr_23 [i_7] = ((+((max((arr_3 [i_7] [i_8]), (arr_3 [i_8] [i_7]))))));
                var_19 ^= (((((((var_7 ? -1914685944 : var_9))) ? (arr_20 [i_7] [i_7] [8]) : (arr_15 [i_7] [i_8])))) ? var_9 : (arr_22 [1]));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_31 [i_7] [i_7] [i_7] [i_7] = (arr_21 [i_7] [i_7]);
                            var_20 = (min(var_20, (((((max((arr_10 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 + 1]), var_12))) <= (arr_27 [i_7] [i_10 - 1] [10]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
