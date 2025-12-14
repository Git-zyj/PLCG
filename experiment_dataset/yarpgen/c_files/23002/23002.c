/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 126));
    var_12 = var_4;
    var_13 = (((1903861702 * -1) >> (((var_10 & var_10) - 48))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (((!19125) / (arr_4 [i_0] [i_0] [i_0])));
                arr_5 [i_0] [9] [i_0] = ((!(((arr_2 [i_0]) || (arr_0 [i_0] [i_0])))));
                var_15 = 0;
            }
        }
    }
    #pragma endscop
}
