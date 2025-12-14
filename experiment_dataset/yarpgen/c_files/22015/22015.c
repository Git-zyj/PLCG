/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = var_11;
            arr_6 [i_0] [i_0] = (~2147483647);
            var_17 += (arr_3 [i_0] [i_1]);
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 -= 1;
            var_19 = (min(var_19, (arr_8 [i_0])));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_14 [i_3] [i_3] = (arr_11 [i_3] [i_3] [i_0]);
            var_20 -= (!65533);
        }
        arr_15 [i_0] = (arr_9 [i_0] [8] [i_0]);

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_21 = (min(var_21, 23047));
            arr_18 [1] [1] |= 255;
            arr_19 [i_0] = 32739;
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_22 = ((!(~1)));
        var_23 *= var_13;
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_24 = (~32756);
        arr_24 [1] = (min((arr_22 [i_6] [i_6]), (arr_22 [i_6] [1])));
        arr_25 [i_6] = (arr_23 [i_6] [i_6]);
        arr_26 [i_6] |= 23961;
        var_25 = (min(var_25, 32736));
    }
    #pragma endscop
}
