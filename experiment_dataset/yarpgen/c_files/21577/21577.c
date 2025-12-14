/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, 239));
                    var_16 = var_13;
                    var_17 = var_9;
                    var_18 = (((((min((arr_0 [i_0]), var_5)))) - ((-(arr_4 [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    var_19 |= (var_2 ? var_9 : var_2);
    var_20 = var_12;
    #pragma endscop
}
