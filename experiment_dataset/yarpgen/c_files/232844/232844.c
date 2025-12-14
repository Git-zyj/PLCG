/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_10 ? 26816 : var_0))) ? var_0 : var_1));
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_13 = ((((((arr_2 [i_1 - 2] [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : 26801))) ? (41126 * 0) : 52));
                            var_14 = (((((((1 ? (arr_2 [i_3] [i_1]) : var_10)) - ((((arr_6 [i_2]) == (arr_6 [i_2]))))))) ? -20374 : (max((arr_5 [i_0] [i_1] [i_2] [i_3]), ((52 ? 52 : var_6))))));
                            arr_9 [i_2] [i_1] [i_2] [i_0] [i_3] = (arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 1]);
                        }
                    }
                }
                var_15 = (max((arr_0 [i_1 + 1]), (arr_8 [i_0] [i_1] [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                {
                    var_16 = 5;
                    var_17 = -238;
                }
            }
        }
    }
    #pragma endscop
}
