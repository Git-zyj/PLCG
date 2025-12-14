/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = var_12;
        var_20 = ((2547285526 ? 127 : var_5));
        var_21 = (((((-252027478 ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? 12 : 78));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_22 = ((!(arr_0 [i_1])));
        var_23 = (min(var_23, (((arr_3 [i_1]) ? 30 : (arr_3 [i_1])))));
        var_24 = (max(var_24, (((!(arr_1 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        var_25 = (((0 ? 17334237202837081490 : 97000953)));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_26 = (~var_8);
                        arr_16 [i_2] = (455594983 | 2061981379);
                    }
                }
            }
        }
    }
    #pragma endscop
}
