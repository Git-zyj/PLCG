/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((25315 < var_13) ? var_1 : ((min(var_0, var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = ((-(((arr_5 [i_0] [i_1] [i_1]) ? 4907087206434435531 : (arr_5 [i_0 + 1] [i_1 + 2] [i_2 + 1])))));
                    var_19 = ((((1815994365 ? 10 : 165)) - -28327));
                    arr_10 [i_0] [i_1] [i_0] = ((-(arr_0 [i_0] [11])));
                }
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
