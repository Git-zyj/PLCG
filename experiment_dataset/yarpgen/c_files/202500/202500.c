/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_11);
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = ((((((((arr_7 [i_0] [i_1] [i_2] [i_0]) > var_1))) == (var_1 != var_10))) || (~var_6)));
                    var_15 = var_0;
                    var_16 = ((min(var_0, var_1)));
                }
            }
        }
    }
    var_17 = ((!(var_6 / var_10)));
    var_18 -= (max(((max(var_0, var_2))), var_4));
    #pragma endscop
}
