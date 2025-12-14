/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = (((arr_6 [i_0] [i_0 - 4] [i_1 + 1]) ? (arr_6 [i_0 + 1] [i_0 - 4] [i_2]) : -43));
                    var_11 = (~145);
                }
            }
        }
    }
    var_12 |= ((var_8 >> ((var_1 ? (var_7 && var_7) : 1))));
    var_13 = var_2;
    #pragma endscop
}
