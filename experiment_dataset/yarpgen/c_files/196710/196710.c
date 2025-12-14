/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = 65001;
                var_12 = (((arr_3 [i_0] [i_0] [i_0 + 2]) >= (arr_2 [i_0])));
                arr_5 [i_0] = (arr_2 [i_0]);
            }
        }
    }
    var_13 = (-117 > 117);
    var_14 = (min(var_14, (0 * var_8)));
    #pragma endscop
}
