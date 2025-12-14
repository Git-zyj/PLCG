/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min((-127 - 1), var_12))) ? var_7 : var_8));
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = ((22385 ? 62136 : -22061));
                    arr_6 [i_0] = (arr_0 [i_1 - 1] [i_0 - 1]);
                    arr_7 [i_1] [i_1 - 1] = ((-(max(var_10, (min(213, -7207646735351600035))))));
                }
            }
        }
    }
    var_16 = (max(52034, (-8740748252658957674 - -7207646735351600016)));
    #pragma endscop
}
