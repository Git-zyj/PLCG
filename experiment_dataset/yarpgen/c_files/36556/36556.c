/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = ((((-(arr_0 [i_0]))) % -49749));
                    var_20 = 515;
                }
            }
        }
    }
    var_21 = ((652235083154795847 % (-100 + var_12)));
    var_22 = var_14;
    #pragma endscop
}
