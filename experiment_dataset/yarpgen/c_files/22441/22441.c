/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((max(var_15, var_3)) > var_13))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 2] [i_0 - 2] [i_2 - 1] [6] = (min(((0 | ((var_14 ? (arr_0 [i_0] [i_2]) : 5238026522972155408)))), (arr_4 [i_2] [i_2 - 1] [i_2])));
                    arr_7 [i_2] [i_1] &= 18446744073709551615;
                }
            }
        }
    }
    #pragma endscop
}
