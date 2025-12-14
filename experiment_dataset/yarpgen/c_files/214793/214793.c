/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_4));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = (var_0 | var_2);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = (((arr_10 [i_0] [i_1 - 2] [i_2 + 3] [i_0] [i_4]) ? (var_5 + 1532660428319378481) : (min(var_0, (1532660428319378458 | -15644)))));
                                arr_14 [1] [1] [i_0] [i_1] [i_2 - 1] [i_3 - 1] [i_4] = (arr_13 [14] [i_1] [i_2] [i_3 + 1] [i_4] [i_1]);
                                arr_15 [i_0] [i_3] [i_0] = ((!(arr_11 [i_3])));
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] = (max(((~(arr_1 [19]))), (((((arr_2 [i_0]) < (arr_3 [i_0] [i_0])))))));
        var_12 = -var_9;
    }
    #pragma endscop
}
