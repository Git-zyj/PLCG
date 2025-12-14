/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((((max(var_13, -102))) ? ((-var_0 ? var_7 : (!var_10))) : (((min(var_2, 240))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (arr_8 [i_1 + 1] [i_0 + 1] [i_0 - 2]);
                    var_16 = ((((-(max((arr_7 [i_0] [16] [i_1] [i_0]), var_0)))) / (((-(arr_0 [i_0 - 1] [i_0]))))));
                    var_17 = (max(var_2, (((((var_5 ? (arr_2 [i_0]) : 223))) ? var_13 : var_12))));
                    var_18 = (max(var_18, (((-((-(arr_9 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1]))))))));
                }
            }
        }
    }
    var_19 = (max(var_1, var_10));
    #pragma endscop
}
