/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max(((-((var_7 ? var_14 : var_5)))), var_12));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = var_5;
        var_17 = var_9;
        var_18 *= ((!(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_19 = max(((var_5 % (((max(1, 1)))))), 1);
                    var_20 -= ((35 ? var_13 : var_12));
                }
            }
        }
        var_21 += (!var_12);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = ((((((!(arr_2 [i_4]))))) ^ var_6));
        arr_12 [i_4] [i_4] = ((109 ? var_5 : -115));
    }
    var_23 = ((max(((var_9 ? 9355277796260477576 : var_0), var_11))));
    #pragma endscop
}
