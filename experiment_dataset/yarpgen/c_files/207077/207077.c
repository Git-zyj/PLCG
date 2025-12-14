/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min((var_12 - 50456), ((((((3160329792 ? -1389422963001739184 : -2147483645))) ? var_8 : -2147483645)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_8 [i_0]);
                    arr_10 [i_0] [i_1] [12] = ((-2147483645 ? 2147483645 : 2147483645));
                }
            }
        }
    }
    var_17 = var_5;
    var_18 = -2147483643;
    var_19 &= var_5;
    #pragma endscop
}
