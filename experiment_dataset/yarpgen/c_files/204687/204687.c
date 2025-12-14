/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_2] = ((!(!17870283321406128128)));
                    arr_12 [i_0] [i_0] [i_0] [i_2] = var_0;
                    var_10 += ((576460752303423491 ? (((576460752303423490 ? var_0 : 7324232139207106881))) : 27380));
                    arr_13 [13] [19] [i_2] [i_2] = -1;
                }
            }
        }
    }
    var_11 = (65535 | var_8);
    #pragma endscop
}
