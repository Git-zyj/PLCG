/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [5] [i_0] [i_0 + 2] = ((-((-679814464 ? 0 : 7018918087993305642))));
                var_21 = -11711;
                var_22 = (max(var_22, ((min(0, var_11)))));
                arr_7 [i_0] = max(((~(((-5594061158686700573 != (arr_5 [i_0])))))), 0);
            }
        }
    }
    #pragma endscop
}
