/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (arr_0 [i_0] [i_0]);
                var_21 = var_1;
                var_22 = (min(var_22, 6));
                arr_4 [i_1] [i_1] [i_1] = (~65528);
            }
        }
    }
    var_23 += ((var_3 ? (var_10 | var_14) : 65528));
    var_24 = (min(var_24, -4096));
    #pragma endscop
}
