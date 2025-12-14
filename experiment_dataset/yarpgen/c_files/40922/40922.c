/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = (~var_0);
        arr_2 [i_0] [i_0] = (!var_15);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (~var_10);

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_20 = var_7;
                        arr_14 [i_4] [i_3] [i_3 - 2] [i_3] [14] = (arr_5 [i_2]);
                    }
                }
            }
            var_21 *= -16643;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_22 -= var_1;
                        var_23 = (min(var_23, (((~(arr_1 [i_1] [i_1]))))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_24 = 992;
            var_25 &= ((~(arr_5 [i_1])));
            arr_24 [i_1] [12] [i_1] &= var_11;
        }
        var_26 = ((~(arr_15 [i_1] [i_1] [i_1] [i_1])));
        arr_25 [i_1] = (!-9223372036854775785);
    }
    var_27 &= var_3;
    #pragma endscop
}
