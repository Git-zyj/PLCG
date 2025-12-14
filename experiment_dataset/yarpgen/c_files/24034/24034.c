/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((var_7 ? (((min(1, 1)))) : 5558955722473113733))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 *= (((((~(var_6 >> 0)))) ? var_0 : (((var_5 << (var_16 - 8))))));
                    arr_11 [i_0] [i_0] &= 0;
                }
            }
        }
    }
    var_19 = (!((((max(1, 0))))));
    var_20 *= var_8;
    #pragma endscop
}
