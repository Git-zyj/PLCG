/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_19, var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 = -var_19;
                    var_22 = (min(var_22, -31456));
                    arr_8 [i_0] [i_1] [i_0] = (arr_0 [i_0] [i_0]);
                }
            }
        }
        var_23 += (max(((min(1, (arr_3 [8] [i_0] [8])))), (((arr_0 [i_0] [6]) ? (arr_5 [3] [i_0] [i_0]) : (arr_6 [i_0] [17])))));
    }
    #pragma endscop
}
