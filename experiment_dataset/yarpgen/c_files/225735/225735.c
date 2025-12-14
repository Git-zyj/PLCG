/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [23] [i_1] [24] = (((-2147483647 - 1) ? (((max(var_7, var_15)))) : var_6));
                    arr_9 [i_1] [i_1] [i_1] = var_0;
                    var_18 *= ((!((!(arr_3 [21] [i_1 - 1])))));
                    arr_10 [i_0] [1] [i_2] = (min(((max((arr_4 [i_1 - 1]), (arr_4 [i_1 + 2])))), 1008));
                }
            }
        }
    }
    var_19 |= var_15;
    #pragma endscop
}
