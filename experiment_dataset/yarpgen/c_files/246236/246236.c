/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [12] [i_1] = 37810;
                arr_7 [16] [i_0] [16] = ((min(21474, (arr_1 [i_0]))));
                arr_8 [i_0] [i_0] = var_18;
                var_20 = (min((arr_5 [1] [i_0]), 677417534));
            }
        }
    }
    var_21 = (((((0 || 4294967295) >> 37804)) & -4204));
    var_22 = (min(54057, 1));
    #pragma endscop
}
