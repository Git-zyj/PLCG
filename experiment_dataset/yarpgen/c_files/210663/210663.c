/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0]) * (arr_0 [i_0])));
        var_19 = (max(var_19, ((((((var_10 ? 81 : 14))) == (((arr_0 [i_0]) << (arr_0 [i_0]))))))));
    }
    var_20 = var_14;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_21 = ((!((max((arr_5 [i_2 + 1] [i_2 - 3]), -6657)))));
                    var_22 = ((((((arr_3 [i_2 + 1] [i_2 - 3]) / 65527))) ? (max(0, var_0)) : 2535466290));
                }
            }
        }
    }
    #pragma endscop
}
