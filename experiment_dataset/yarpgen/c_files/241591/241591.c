/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [16] [15] = ((-(min(3105895829, 23))));
                arr_7 [i_0] [i_0] [i_0] &= ((0 ? -16 : -6194051382913794801));
                arr_8 [i_1] [9] [i_0] = (min(1, (max(6194051382913794793, (((3813830603820935554 ? 1 : 1)))))));
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
