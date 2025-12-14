/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = var_1;
                            var_16 = max((arr_3 [i_3]), (((var_6 ? ((min(-12683, (arr_8 [i_3])))) : 17883))));
                            arr_11 [14] [8] [8] [i_1] [i_0] = ((((~(arr_6 [i_2 - 3])))) ? (((arr_5 [i_2 + 1] [i_0 - 3]) ? (arr_6 [i_2 - 2]) : var_3)) : (arr_6 [i_2 - 2]));
                        }
                    }
                }
                arr_12 [i_1] [i_0] [i_0] = 13486937875306495463;
                arr_13 [i_0] [i_0] [i_1] = var_13;
            }
        }
    }
    #pragma endscop
}
