/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_3 * 3624930776) ? (var_8 / var_4) : var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [16]) * (arr_0 [i_0])));
        arr_3 [i_0] = ((0 >= (arr_1 [i_0] [i_0])));
        arr_4 [i_0] = 1374859386;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            arr_16 [i_2] [i_4 + 1] = (((((65530 ? 12630654651437931634 : 0))) ? (((17896121548861380644 < (arr_1 [i_3] [i_3])))) : (~var_5)));
                            var_15 = (min(var_15, (var_9 - var_3)));
                            var_16 = (arr_15 [1] [i_1] [i_2 - 1] [i_3] [2] [14] [2]);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (((((10077002982864633532 ? (arr_11 [i_4]) : var_1))) ? ((var_4 ? 160 : var_1)) : var_3));
                        }
                        var_17 = (var_4 % var_11);
                    }
                }
            }
        }
        arr_18 [i_0] = 208;
    }
    #pragma endscop
}
