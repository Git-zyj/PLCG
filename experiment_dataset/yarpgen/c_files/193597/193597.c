/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_6, (0 || var_9)))) ? (1 % 1) : 1));

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = (min((arr_0 [i_0] [11]), (min((arr_0 [i_0] [i_0]), 4095))));
        var_20 = ((((((4294705152 > (arr_0 [i_0] [i_0 - 1]))))) | (arr_0 [i_0] [i_0 - 1])));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    {
                        var_21 = (((arr_1 [i_1]) ? -2625 : (arr_6 [i_3] [i_3])));
                        var_22 += (2569597047123605025 >> 1);
                        arr_12 [i_1] [i_2] [i_3] [i_4] = (((-(arr_8 [i_3]))));
                        var_23 = (min(var_23, (arr_9 [i_2] [2])));
                    }
                }
            }
        }
        var_24 = (arr_8 [12]);
        var_25 = (min(var_25, 663991003));
        var_26 = ((((-(arr_9 [16] [16]))) | -47073));
    }
    var_27 = (min(var_9, (((((1 ? var_11 : var_9))) ? var_15 : -var_9))));
    #pragma endscop
}
