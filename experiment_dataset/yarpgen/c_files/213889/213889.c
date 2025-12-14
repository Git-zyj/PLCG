/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_11 && ((min(var_11, ((min(var_1, 51))))))));
    var_19 = var_15;

    for (int i_0 = 3; i_0 < 6;i_0 += 1) /* same iter space */
    {
        var_20 = (((((arr_1 [i_0] [i_0 - 1]) & (arr_1 [i_0] [i_0 - 3]))) | (~var_17)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (((((arr_2 [i_3] [i_2 - 1] [i_0 - 1]) / var_17)) * (min((arr_2 [i_2] [i_2 + 2] [i_0 + 1]), var_9))));
                        var_22 = (min(8547, 8547));
                        var_23 = ((-(((arr_6 [i_0] [i_2 + 1] [i_0] [i_3]) ? (arr_2 [9] [i_2 - 2] [i_2 - 3]) : var_6))));
                    }
                }
            }
        }
        var_24 = (((-25837 ^ 30999) == (min(-1793865822, 2147483647))));
    }
    for (int i_4 = 3; i_4 < 6;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [i_4 + 4] = (((~-5484) >> (((max(var_11, (2147483647 && 19181))) - 717635548))));
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [2] = ((-491786719 || 25839) ? ((((arr_1 [i_5 - 1] [i_4 - 1]) < (arr_12 [i_4 + 4])))) : ((-879381240 ? -1278788051 : -18616)));
                    arr_21 [9] [i_5 + 3] [9] = var_12;
                }
            }
        }
    }
    #pragma endscop
}
