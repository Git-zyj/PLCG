/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_7 ? var_9 : ((5324313625602139049 ? (var_5 == 10) : (max(1, var_2))))));
    var_17 = var_8;
    var_18 = -var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (arr_7 [i_0] [i_0])));
                    var_20 += ((-(arr_2 [i_1 + 1] [i_1 - 1])));
                    arr_9 [i_0] &= ((!((max((arr_8 [22] [i_1] [10] [10]), (~var_11))))));
                }
            }
        }
    }
    #pragma endscop
}
