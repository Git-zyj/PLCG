/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (~var_13);
                    var_22 = (((arr_1 [i_0] [i_2]) || (~var_4)));
                }
            }
        }
    }
    #pragma endscop
}
