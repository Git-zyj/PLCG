/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_10 = var_4;
            var_11 = (max((!var_8), (max(var_8, var_9))));
            var_12 = (min(var_12, var_5));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_7 [i_0] [i_2] [i_0] = (-13131 * var_5);
            arr_8 [i_2] = (((((min(var_6, var_6)) * -1)) / (~var_1)));
        }
        var_13 = (((max(-3749, 1032068638)) > -1524844893));
    }
    var_14 = (~var_0);
    var_15 = var_1;
    var_16 = var_4;
    #pragma endscop
}
