/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (max(var_20, (((4095 != (((arr_0 [i_0]) ? -18 : -15)))))));
        var_21 = (max(((0 ? (max(4096023626, 65535)) : (arr_0 [i_0]))), ((((127 - -19) < (((arr_1 [i_0]) ? var_1 : 0)))))));
        var_22 = (max(var_22, (arr_1 [5])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            {
                arr_11 [i_1] = ((-2526405537300373192 ? (arr_7 [i_1]) : 65535));
                var_23 = 0;
            }
        }
    }
    #pragma endscop
}
