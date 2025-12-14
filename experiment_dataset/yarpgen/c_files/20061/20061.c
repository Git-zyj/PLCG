/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min((var_5 + var_9), (((var_11 ? var_7 : var_6))))) < ((min(var_7, var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] [20] [0] &= (31 / 1972738200);
                    arr_10 [i_0] [19] [i_0] [i_2] = (var_12 | -45);
                    arr_11 [i_0] = ((~(-1 & 1972738200)));
                }
            }
        }
    }
    #pragma endscop
}
