/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3028
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
                arr_5 [i_1] [1] = (max(((+(((arr_2 [i_0]) ^ (arr_4 [i_0]))))), var_11));
                var_15 = (min(var_15, 1));
            }
        }
    }
    var_16 &= var_1;
    var_17 = var_1;
    var_18 = 25603;
    var_19 = 48080;
    #pragma endscop
}
