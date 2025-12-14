/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = (-85 * 15922048365191137243);
                    arr_8 [i_0] [i_0] [3] = max((max((arr_6 [i_1] [i_1] [i_2] [i_1]), (((arr_6 [i_0] [6] [i_0] [i_2]) * 5708)))), ((((arr_4 [i_0] [i_0] [i_2]) >> (((arr_4 [i_0] [i_1] [9]) - 1617))))));
                }
            }
        }
    }
    var_14 += ((((var_0 ? var_6 : (84 >= 5147539891192559265))) + var_7));
    #pragma endscop
}
