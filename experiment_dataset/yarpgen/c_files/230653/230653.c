/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [7] = ((+(((arr_5 [i_0] [i_1 - 2]) | var_6))));
                arr_7 [i_0] [i_0] [16] |= (((~(13603 != 1985201546))));
                arr_8 [i_0] [i_1] = ((max(-9790, (arr_4 [i_1 - 2] [i_1 - 2]))));
            }
        }
    }
    var_14 ^= (max((((var_6 ? var_5 : 182))), var_1));
    var_15 = (var_2 | ((var_11 ? var_2 : (-32767 - 1))));
    #pragma endscop
}
