/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_15 = (((arr_11 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3]) ? (min(-9223372036854775793, (arr_11 [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 3]))) : (arr_11 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3] [i_3])));
                        var_16 &= ((!2907071789798625215) ? (((-((var_11 ? var_10 : (arr_9 [i_0] [i_1] [i_2] [i_3 + 1])))))) : ((((max(2907071789798625215, -2907071789798625216))) ? var_4 : var_13)));
                        arr_12 [16] [16] [16] [i_3] = var_4;
                    }
                }
            }
        }
        var_17 = 2907071789798625215;
        arr_13 [i_0] = (((((((((arr_6 [i_0] [5] [i_0] [i_0]) ? var_5 : var_6))) ? 2907071789798625216 : (max(-2907071789798625212, (arr_7 [i_0] [i_0] [i_0] [i_0])))))) ? (((0 ? -2907071789798625209 : -13))) : (arr_7 [1] [8] [i_0] [i_0])));
        var_18 = (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? ((var_5 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_2)) : 103));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_19 = var_13;
        arr_16 [i_4] [0] = (min(((6905 ? 2455070219 : 1)), (!-5635)));
    }
    #pragma endscop
}
