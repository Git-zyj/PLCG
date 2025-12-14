/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (max((max(((-(arr_0 [0]))), (((arr_1 [5] [i_0]) + (arr_0 [5]))))), (((((((arr_1 [3] [9]) ? 1364375734607919037 : var_3))) && (arr_1 [i_0 - 1] [i_0 + 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 += (((((arr_0 [i_0 - 1]) ? var_7 : var_11)) ^ ((((!(!-61)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = ((!(arr_11 [i_2 - 3] [9] [i_2] [9] [i_0] [9])));
                                arr_15 [i_0] = max(((((((arr_3 [i_0] [2] [i_0]) - var_14))) ? 64 : (arr_12 [i_0] [i_3]))), (arr_7 [i_0] [i_1] [3]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max((var_9 || var_13), ((-(max(var_5, var_8))))));
    var_20 -= (~var_5);
    #pragma endscop
}
