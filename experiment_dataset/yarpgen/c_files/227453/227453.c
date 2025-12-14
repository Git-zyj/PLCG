/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_5));
    var_20 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (((arr_2 [i_1 - 2] [i_1 - 1] [i_0]) == var_10));
                    var_21 = (min(var_21, ((((10843036298489547895 ^ -41) <= -113)))));
                }
            }
        }
    }
    #pragma endscop
}
