/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (min(var_15, 103564716));
                arr_4 [8] [8] [i_1] = max((((min(103564707, (arr_3 [i_1]))))), var_1);
                arr_5 [i_1] = ((max((arr_1 [i_0]), 2442902567)) * 4191402562);
            }
        }
    }
    var_16 = var_8;
    var_17 = (max(var_17, (((((~15) + 2147483647)) >> ((((var_13 % var_1) <= (var_1 & var_6))))))));
    #pragma endscop
}
