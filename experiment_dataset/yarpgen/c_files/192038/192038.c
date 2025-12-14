/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (arr_1 [i_0] [i_0 - 2]);
                var_10 = (min(var_10, (((((min(-81, ((88 << (63 - 40)))))) ? (min((arr_3 [i_0 - 2]), -71)) : var_1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_11 = (min(var_11, ((((var_7 + -12633) ? ((((min(var_8, var_5))) ? (-92 + 1234965858) : (((min(-73, -103)))))) : (arr_5 [i_3] [i_2]))))));
                arr_9 [i_2] [i_2] = (((~97) ? ((((!(arr_3 [i_2 + 3]))))) : (((arr_3 [i_2 + 2]) ? var_2 : var_6))));
            }
        }
    }
    #pragma endscop
}
