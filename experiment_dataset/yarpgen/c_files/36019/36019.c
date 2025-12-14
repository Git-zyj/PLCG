/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min(-650784116, var_6)) & (((min(var_4, var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = (arr_0 [i_0 - 1] [5]);
                    var_13 |= (var_6 > 650784115);
                    var_14 = ((min(((var_5 ? (arr_5 [i_0]) : 255)), 1)));
                }
            }
        }
    }
    #pragma endscop
}
