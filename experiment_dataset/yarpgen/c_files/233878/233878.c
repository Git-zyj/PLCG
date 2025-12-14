/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 += 3512826284235184704;
                    var_19 -= ((((max(var_9, var_3))) ? (arr_2 [i_0] [i_1 + 1] [4]) : var_8));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_10 [i_3] = (arr_7 [i_3] [i_3]);
        var_20 = ((!((max((arr_5 [i_3] [i_3] [i_3]), var_15)))));
        var_21 += (~18446744073709551615);
        var_22 = 241973772;
    }
    var_23 += (!var_4);
    #pragma endscop
}
