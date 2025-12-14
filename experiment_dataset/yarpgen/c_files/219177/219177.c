/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((((arr_0 [i_0] [i_0]) && (arr_0 [i_0] [i_0]))) || ((min(4095, (arr_1 [i_0])))))) || (!var_12)));
        var_13 = (max((arr_1 [i_0]), var_9));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [5] = 4102;
                        var_14 = (max(var_14, 29492));
                        var_15 = (arr_5 [i_2 + 2]);
                        arr_13 [12] [12] [10] [i_3] [i_3] [i_0] = (((((max((arr_7 [i_2] [i_2 + 2] [i_2 + 2]), 4075)))) - (arr_1 [i_0])));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_16 = (max(var_16, -3304115636214015351));
            arr_17 [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0]);
            var_17 = 4746027906056257550;
            arr_18 [i_0] [i_0] [i_0] = (!(arr_16 [i_0] [i_4]));
        }
        arr_19 [i_0] = (arr_11 [i_0] [i_0]);
    }
    var_18 = (-var_1 & var_9);
    var_19 = var_11;
    #pragma endscop
}
