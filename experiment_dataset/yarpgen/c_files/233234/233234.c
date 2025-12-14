/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min(((max(var_19, -55))), (min(var_15, 140737488338944)))), ((min(1590316388, (max(1, 14)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((!(!1416331943)));
                    arr_7 [i_1] = var_17;
                }
            }
        }
    }
    #pragma endscop
}
