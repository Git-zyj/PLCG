/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 - 2] [1] = ((-(arr_0 [i_0])));
                var_11 = (max(var_10, (arr_1 [i_0 - 2])));
                var_12 ^= arr_2 [i_1] [12] [14];
                var_13 = 3568579729;
                var_14 = (min(8749017895591753958, var_8));
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
