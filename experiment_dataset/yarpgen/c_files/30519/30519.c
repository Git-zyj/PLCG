/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((78 ? ((min(159, 18))) : var_2)), var_0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (min(((((~(arr_2 [i_0] [i_0]))) & 61510)), (max(130, (~var_5)))));
        var_11 = (min((arr_1 [i_0]), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = arr_4 [i_1] [i_2];
                    var_12 = (max((arr_7 [i_1] [i_1] [i_0]), (max((99 > 22798), 99))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {
                arr_17 [15] = 25847;
                arr_18 [i_4] [i_3 + 2] [i_3] = (arr_1 [i_3]);
            }
        }
    }
    #pragma endscop
}
