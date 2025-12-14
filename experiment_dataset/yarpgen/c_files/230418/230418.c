/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((~(((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_1 - 2]))))))));
                arr_6 [i_0] [i_1] = var_3;
            }
        }
    }
    var_19 = ((~(min(((var_16 ? var_4 : 2124103257)), var_10))));
    #pragma endscop
}
