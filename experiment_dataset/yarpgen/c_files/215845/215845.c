/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 |= ((10479673554138821997 ? 55 : (-127 - 1)));
                var_19 = (max(var_19, var_14));
            }
        }
    }
    var_20 -= (min(((var_14 ? (max(10479673554138821979, var_12)) : ((10229685723996297467 ? var_7 : 7967070519570729619)))), var_11));
    var_21 = ((((var_3 ? (var_4 < var_14) : var_4))) ? var_5 : (((((var_2 ? 30 : 7967070519570729617))) ? (((-127 - 1) - var_10)) : (var_13 | 7967070519570729612))));
    #pragma endscop
}
