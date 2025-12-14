/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_15 ^= ((4364597252815207369 * 1) ? 2147483647 : 2147483647);
                        var_16 = max(((-903128264 ? -1 : -1213352164)), 131071);
                    }
                    var_17 = (-1961982455229109703 / -1861196043);
                }
            }
        }
    }
    var_18 = var_3;
    var_19 = 0;
    var_20 = var_5;
    #pragma endscop
}
