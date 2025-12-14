/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((var_0 <= ((200 >> (56 - 43))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [21] &= (((7820165530909282222 ? 11 : 1)));
                    arr_8 [1] [i_1] [i_2] = ((min((arr_3 [i_1 - 1]), 55)));
                    var_13 = ((-((6 | (~18446744073709551608)))));
                }
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
