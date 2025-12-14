/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (max((16697 - var_3), (((((-16697 ? 2147483644 : var_7))) ? ((467029239 ? var_15 : (arr_3 [i_1] [i_2]))) : (((arr_6 [i_0] [i_0] [6]) ? -1639757342 : var_3))))));
                    var_17 = (max(var_17, var_8));
                }
            }
        }
    }
    var_18 = (max(var_18, 88));
    var_19 &= (min((min(((min(var_7, var_11))), 4296929448913350868)), -1639757342));
    var_20 = (max(var_13, -2147483647));
    #pragma endscop
}
