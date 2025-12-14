/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((((((var_13 ? var_11 : -2969700155888938658)) >= -var_12)) ? var_12 : (((!((max(-66, 96))))))));
                    arr_7 [i_1] [i_1 + 3] [i_1 + 1] = ((~((~((var_10 ? var_11 : var_2))))));
                    var_14 = (max(var_14, ((((((var_11 ? var_6 : 87))) ? ((var_10 << (18550 - 18494))) : (~var_13))))));
                }
            }
        }
    }
    var_15 = (~var_0);
    #pragma endscop
}
