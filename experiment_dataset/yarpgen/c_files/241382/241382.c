/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [22] [i_0] &= 192;
                var_20 = (min(var_20, (((((min(var_9, 3823995995))) ? ((min(var_9, var_3))) : (3800792526088356994 / var_9))))));
            }
        }
    }
    var_21 |= ((((((var_11 ? var_7 : var_16)) ? ((1974687126 ? 16639073700321519111 : 16639073700321519111)) : 1807670373388032505))));
    var_22 = ((var_1 ? ((-var_10 * (min(16, 16639073700321519111)))) : var_11));
    var_23 = var_1;
    #pragma endscop
}
