/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(1, var_13));
    var_19 = -68;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (~-68);
                    arr_7 [i_0] [i_0] [i_1] [10] &= ((~((-(arr_5 [i_0] [i_0] [8] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
