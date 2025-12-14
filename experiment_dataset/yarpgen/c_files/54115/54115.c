/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_10 ? (min(932045396, var_3)) : var_4))) ? 1924061602 : 10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((var_1 ? -var_14 : 254));
                    arr_8 [i_2] [i_1] = (~(arr_6 [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
