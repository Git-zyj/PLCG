/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = ((40 ? 40 : (max(-47, ((-41 ? 40 : 52304))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((((min(((max(1505484227, 37))), (arr_8 [i_0 - 2] [i_0 - 2])))) ? (((arr_3 [i_0 - 2]) + (arr_9 [17] [0] [i_1] [i_0]))) : ((((((arr_7 [i_0] [i_0 - 2] [i_0] [i_0]) ? (arr_3 [1]) : (arr_1 [i_0])))) ? (arr_5 [i_0 - 1]) : 25467))));
                }
            }
        }
    }
    var_17 = (((~(13327 - -1))));
    var_18 = ((((((min(var_2, -402261874)) & var_2))) ? (((((min(var_9, 1340809734)) <= var_15)))) : var_10));
    #pragma endscop
}
