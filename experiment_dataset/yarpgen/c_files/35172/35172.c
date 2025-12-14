/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = ((var_15 << ((((-((var_7 << (((arr_5 [i_0] [i_1] [i_0]) - 4188589405)))))) - 1275068407))));
                    var_20 = (arr_1 [1]);
                    var_21 = (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1])));
                }
            }
        }
    }
    var_22 = (min(var_22, (((-734059763 % (((max(var_1, 0)))))))));
    #pragma endscop
}
