/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = (arr_5 [i_2] [i_1] [i_0]);
                    arr_7 [14] [i_1] = 35175782154240;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_12 [i_3] [i_4] = 18446708897927397375;

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_17 [i_5] [i_3] [i_3] [i_3] = (((819365581 ? 3823889046 : var_1)));
                arr_18 [i_3] [i_3] [i_4] [i_5] = (((((18446708897927397375 ? 1 : var_4))) ? ((var_13 ? 819365581 : 18446708897927397391)) : 24));
                arr_19 [i_5] [i_5] [i_3] = (~18446708897927397359);
                var_16 = 101;
            }
            var_17 = 18446708897927397376;
        }
        var_18 = ((min(var_15, var_0)));
    }
    var_19 = var_9;
    #pragma endscop
}
