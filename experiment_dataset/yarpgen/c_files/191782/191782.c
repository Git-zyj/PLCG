/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 -= var_8;
    var_19 |= min(((-(12582912 % var_14))), 2577073035);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (min((((~2089372787) & 1406136469)), ((max(-55, 3297654493)))));
                    arr_9 [i_1] = ((((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_5 [i_0] [i_0] [i_0]))) * 3780856371);
                }
            }
        }
        arr_10 [12] = (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])));
        var_21 = var_14;
    }
    #pragma endscop
}
