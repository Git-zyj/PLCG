/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_0 ^ var_2) ? (max(var_7, ((-36 ? -36 : -9171121792127645979)))) : var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 = var_6;
        var_18 = ((~(arr_0 [i_0 + 4])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 ^= ((var_4 ? (arr_4 [i_3] [i_0 + 1]) : (arr_4 [i_3] [i_0 + 3])));
                        var_20 ^= ((!(arr_1 [i_0 + 4])));
                        arr_11 [i_1] [i_1] [i_2] [i_3] = (((arr_10 [i_0] [i_1] [i_1] [i_1]) - (-9171121792127645995 / -9171121792127645986)));
                        var_21 &= (55 >= var_8);
                    }
                }
            }
        }
        arr_12 [i_0] = ((-8009258620952848900 & (~var_3)));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_22 = ((~(293475505 / -9171121792127645995)));
                    var_23 = (max(var_23, ((max(((((min((arr_7 [i_4] [i_4] [i_4] [i_4]), 53550))) ? 1 : (min((arr_10 [i_4] [1] [1] [i_6]), 9171121792127645987)))), (max(907984714461572154, var_6)))))));
                }
            }
        }
        arr_21 [i_4] = (((((arr_19 [i_4] [i_4] [i_4] [i_4]) * 12236))) | ((var_9 ? (arr_17 [i_4] [i_4] [i_4]) : (arr_15 [i_4] [i_4] [i_4]))));
        var_24 = (arr_6 [i_4] [i_4] [12] [i_4]);
        arr_22 [i_4] = min((((var_15 ? (arr_16 [14] [14]) : (!1)))), -1430878264608655884);
        arr_23 [i_4] = ((~(arr_7 [i_4] [i_4] [i_4] [i_4])));
    }
    #pragma endscop
}
