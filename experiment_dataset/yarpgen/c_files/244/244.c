/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = (((((min(var_5, var_11)))) << (var_6 - 1915490053)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_3 [i_0] [i_0] [0])));
                arr_6 [i_0] = min(0, (((arr_1 [i_1 + 1]) ? var_0 : (arr_1 [i_1 - 1]))));
            }
        }
    }
    #pragma endscop
}
