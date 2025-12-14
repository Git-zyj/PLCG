/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((min(37283, 242))), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((max(var_12, (arr_2 [i_0] [i_0])))) ? (((min(31, 13)))) : (((arr_2 [i_0] [i_0]) << (((arr_2 [i_0] [i_0]) - 15223885477266114776))))));
                var_14 = var_4;
                var_15 = ((var_11 | ((31400 ? (((max(var_1, var_5)))) : (arr_2 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
