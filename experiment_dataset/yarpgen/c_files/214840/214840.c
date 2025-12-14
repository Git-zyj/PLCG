/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(-3726, (((arr_4 [i_1] [i_0] [i_0]) ? (~var_8) : var_4))));
                arr_6 [i_0] [20] [20] |= var_6;
                var_10 = ((min((arr_0 [i_0]), (arr_0 [i_0]))));
                arr_7 [i_1] = ((-((min((arr_0 [i_0]), 16)))));
            }
        }
    }
    var_11 += ((((((var_3 ? var_1 : -1)))) ? var_1 : var_2));
    #pragma endscop
}
