/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 243));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_1 [i_0 + 3])));
        arr_4 [12] |= var_3;
        var_12 = 36;
        var_13 = (((arr_2 [i_0 - 1] [i_0 + 1]) / ((2304328595 ? 189 : 1990638701))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (((arr_6 [i_0]) ? (arr_10 [i_0]) : (arr_6 [i_0])));
                    var_15 += (arr_2 [i_1] [i_1 - 3]);
                    var_16 = (!var_0);
                }
            }
        }
    }
    #pragma endscop
}
