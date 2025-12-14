/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_1 [i_1]) ? (~1831624419) : 1831624416))) ? 3694768466880445245 : (((((2463342876 ? 1831624419 : 12290116102133374524)))))));
                    var_17 = ((((!(arr_7 [i_1 + 3] [i_0 + 2] [i_0]))) ? ((12290116102133374524 ? (arr_4 [i_1 + 2]) : (-127 - 1))) : -12));
                }
            }
        }
    }
    #pragma endscop
}
