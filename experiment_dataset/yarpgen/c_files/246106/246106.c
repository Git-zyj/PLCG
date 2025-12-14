/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 ? (((var_10 ? var_5 : var_5))) : -var_10));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = var_8;
                    arr_9 [i_0 - 1] [i_2] = (((((-(arr_2 [i_1])))) * (-8098058668500980187 || 0)));
                }
            }
        }
    }
    var_13 = ((var_3 << ((var_10 ? var_10 : (~var_10)))));
    var_14 += ((-124 ? ((-((var_9 ? var_1 : var_3)))) : (var_3 >= var_10)));
    #pragma endscop
}
