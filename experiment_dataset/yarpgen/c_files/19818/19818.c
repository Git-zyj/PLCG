/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = ((((((3564879307014999726 < (arr_0 [i_0] [23]))))) < ((min(1056629071, var_6)))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 = 61;
                        var_18 = (arr_10 [i_3 + 1] [i_2 - 2] [i_1] [i_0]);
                    }
                }
            }
        }
    }
    var_19 = (-1405018326 || ((var_11 > ((0 ? 1405018335 : 194)))));
    var_20 = (min(var_11, 1405018325));
    #pragma endscop
}
