/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -3118;
    var_20 = (max(var_20, (((((((((10905425843440036490 ? 50 : var_3))) ? (max(var_6, var_8)) : 10905425843440036490))) ? (min(268970356870453165, var_13)) : (~var_9))))));
    var_21 *= var_16;
    var_22 = (((((10905425843440036490 != 50) ? var_7 : var_18)) / (((var_2 ? var_7 : 61252)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_23 = (((arr_2 [i_0] [0]) >= (((!(arr_5 [i_0]))))));
                arr_7 [i_0] [i_1] = ((1 ? 4044162764048767801 : 4975084396161689630));
            }
        }
    }
    #pragma endscop
}
