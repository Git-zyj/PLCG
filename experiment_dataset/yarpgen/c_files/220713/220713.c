/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((!((max(var_4, var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = ((!(arr_5 [i_0 - 1] [i_0] [i_1 - 1] [i_0])));
                    arr_8 [i_0] [i_1] [14] [i_0] = min((((arr_1 [i_0]) ? (max(1, var_7)) : ((((arr_5 [i_1] [i_0] [18] [i_1 - 1]) ? var_2 : -73))))), (!var_7));
                }
            }
        }
    }
    #pragma endscop
}
