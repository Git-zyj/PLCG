/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 |= ((1851976323 * ((var_2 * (!var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] = (1851976321 ? -1851976323 : 0);
                    var_13 = var_0;
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((((((arr_4 [i_2] [i_2 + 1] [i_0]) ? (arr_4 [i_2 + 2] [i_2 - 2] [i_0]) : (arr_4 [i_0] [i_2 - 2] [i_0])))) ? (arr_4 [i_0] [i_2 + 4] [i_0]) : (((arr_4 [i_0] [i_2 - 1] [i_0]) ? (arr_4 [i_0] [i_2 + 2] [i_0]) : (arr_4 [i_0] [i_2 - 1] [i_0])))));
                }
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
