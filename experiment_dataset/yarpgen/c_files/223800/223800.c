/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [5] [i_1] = (((arr_4 [i_0] [i_0] [i_0]) == (arr_0 [i_0])));
                arr_7 [i_0] [i_0] [i_1] = (65527 != 113);
            }
        }
    }
    var_18 = (((max((max(7597644552566537921, 1)), (var_2 == var_17))) >> (((max(var_8, var_10))))));
    var_19 = var_15;
    #pragma endscop
}
