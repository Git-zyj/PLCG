/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_7 | var_7) < var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_1 [i_1] [i_0]) ? ((min(387289945, var_10))) : ((var_11 ? var_1 : var_0))));
                arr_6 [i_0] [i_0] = var_6;
                var_14 = (max(var_14, ((((arr_2 [i_0]) == (min((min(var_1, var_6)), var_7)))))));
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
