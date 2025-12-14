/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((!((!(((var_14 ? var_12 : var_15)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 += (((arr_2 [i_0]) ? ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (((arr_0 [i_0] [i_0]) & -14031))));
        var_19 = (min(var_19, ((((arr_1 [i_0]) ^ (min((arr_3 [10]), (arr_2 [6]))))))));
        arr_4 [4] = (!3701);
        arr_5 [i_0] = ((var_9 - ((0 ? ((var_10 ? (arr_1 [i_0]) : (arr_3 [i_0]))) : (((6574 != (arr_2 [i_0]))))))));
        arr_6 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_1] = 58962;
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_19 [i_3] [1] [i_3] [1] [i_3] = (var_11 - 58947);
                        var_20 = 6586;
                    }
                }
            }
        }
        arr_20 [i_1] = ((((arr_17 [1] [i_1] [1]) - 127)));
        var_21 = ((!((min((arr_14 [i_1] [8]), ((120 ? 3725607854710046451 : 6574)))))));
    }
    #pragma endscop
}
