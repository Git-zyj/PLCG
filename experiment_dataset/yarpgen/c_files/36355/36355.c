/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] [i_1] |= ((-((((arr_1 [i_0] [i_1]) == (arr_1 [i_0] [i_0]))))));
                var_14 = (arr_0 [i_0]);
            }
        }
    }
    var_15 = 1619339548;
    var_16 -= var_3;
    #pragma endscop
}
