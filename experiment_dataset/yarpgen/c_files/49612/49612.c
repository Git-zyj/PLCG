/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 ^= (arr_1 [i_0] [10]);
                var_20 = 16107660034705881294;
                arr_5 [i_0] [20] [i_0] &= ((16107660034705881305 ? var_11 : -var_12));
            }
        }
    }
    var_21 = (!12909637550617545587);
    #pragma endscop
}
