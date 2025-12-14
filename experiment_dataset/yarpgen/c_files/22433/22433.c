/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 255));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = var_6;
                    arr_8 [i_1] [i_1] [i_1] = -134217728;
                }
            }
        }
    }
    var_19 |= ((+(((!191) ? 4095 : var_0))));
    var_20 = (((((-1 ? (var_10 / var_8) : (((6538926777341157480 ? 61 : var_16)))))) && ((min(206, var_1)))));
    #pragma endscop
}
