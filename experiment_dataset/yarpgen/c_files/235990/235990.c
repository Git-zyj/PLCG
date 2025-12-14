/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_15));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (~((-(arr_2 [i_0 - 2] [i_0 - 1]))));
                var_20 = (((arr_0 [i_0]) << ((((arr_1 [i_0 - 2]) >= (((arr_0 [i_1]) ^ (arr_5 [i_0 - 1] [2]))))))));
            }
        }
    }
    var_21 = var_17;
    var_22 = (((35914 || var_3) >= var_15));
    #pragma endscop
}
