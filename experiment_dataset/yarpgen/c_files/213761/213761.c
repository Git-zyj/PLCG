/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(var_14, (min((var_18 * var_8), 4169409540)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_3 [i_0]);
                arr_5 [i_0] [i_1] [i_1] = ((!((((((125557756 ? var_0 : 28389))) ? (max(4169409530, 10421)) : (arr_1 [i_0] [i_1]))))));
                arr_6 [i_0] [i_0] = max((max((arr_2 [i_1] [i_1] [i_0]), ((121 ? (arr_2 [12] [i_0] [i_0]) : 4169409539)))), (((4169409523 ? 2047 : -1383996259))));
            }
        }
    }
    #pragma endscop
}
