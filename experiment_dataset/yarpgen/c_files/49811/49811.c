/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!((max(var_1, var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = ((!(!var_13)));
                    arr_8 [i_1] [i_1] = (((arr_1 [i_0]) ? (((arr_6 [i_1] [i_2] [i_2] [i_2]) ? 10873 : (arr_0 [i_1]))) : (arr_3 [i_0] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
