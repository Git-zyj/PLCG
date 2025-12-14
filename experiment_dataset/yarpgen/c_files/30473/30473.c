/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_7));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] = arr_4 [19] [i_2] [i_2 + 3];
                    var_17 = min((((!(arr_2 [i_1 + 3])))), (arr_3 [i_0] [i_1 - 1] [i_2]));
                }
            }
        }
    }
    var_18 = (max(var_12, ((var_15 ? var_8 : var_12))));
    var_19 ^= ((var_12 << (var_2 - 60256)));
    var_20 = ((((min(32768, (max(var_12, var_11))))) ? var_7 : var_14));
    #pragma endscop
}
