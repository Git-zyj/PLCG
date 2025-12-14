/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((~(arr_4 [i_0]))));
                var_17 = ((((var_1 ? (arr_4 [i_0]) : (arr_4 [i_0]))) == ((-(arr_4 [i_1])))));
                var_18 = (min(var_18, 871020769));
                var_19 = ((-8882 ? 54860 : -871020769));
            }
        }
    }
    var_20 = (((((min(var_4, var_2)))) ? ((2032 | ((2123366612 ? -871020769 : -871020769)))) : var_14));
    #pragma endscop
}
