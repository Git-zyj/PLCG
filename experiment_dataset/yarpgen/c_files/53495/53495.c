/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_16) ? var_0 : ((((-110 == -110) + 109)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_2] = ((120 + ((min(122, 3)))));
                    arr_11 [i_0] [i_1] [21] [i_2] = ((~(((-117 / 58229) / (max((arr_4 [17]), (arr_9 [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
