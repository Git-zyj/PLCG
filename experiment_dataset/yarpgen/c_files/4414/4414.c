/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_0, (min(-23902, 23902))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 += (arr_3 [i_0] [i_1] [i_0]);
                arr_4 [23] [i_0] [i_0] = (((arr_0 [i_0 - 1] [i_0 - 1]) ? (((max(23902, 3941384348431776801)))) : (arr_2 [i_0])));
            }
        }
    }
    var_12 = (!41634);
    var_13 = var_4;
    var_14 = (min(var_14, var_0));
    #pragma endscop
}
