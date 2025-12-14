/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((var_4 & var_3), (var_10 % var_6)))) && var_8));
    var_18 = (((((var_1 & var_4) & 149)) % ((((max(149, 87))) + var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (~-var_0);
                arr_6 [i_1] [i_1] = 169;
                arr_7 [i_1] [i_1] [i_1] = ((((max(149, 168))) & ((((var_2 < (arr_3 [i_0] [i_0])))))));
                arr_8 [i_0] = (arr_0 [9]);
            }
        }
    }
    #pragma endscop
}
