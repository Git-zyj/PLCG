/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((-13755 ? (13780 * var_9) : (~13754)))) ? (max(26100, var_12)) : (min((max(var_0, var_1)), var_11)));
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [13] = (~1000977129);
                                var_15 = ((1000977142 <= (max((min(var_2, var_12)), (var_11 & var_3)))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_1] [i_2] = (((max((min((arr_2 [i_1] [i_2]), (arr_3 [i_0]))), (((var_2 + (arr_0 [i_1] [i_0]))))))) ? (((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_3 [i_0]) : (!var_12))) : 33);
                }
            }
        }
    }
    #pragma endscop
}
