/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = 59043;
                    var_22 = ((arr_2 [3]) ? (arr_0 [i_1 + 1]) : (((~(arr_5 [i_0])))));

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        var_23 = 45481;
                        var_24 = ((~(((!(((-(arr_11 [i_0])))))))));
                        arr_12 [i_2] [i_2] [i_2] = var_5;
                        var_25 = ((10835176184323240779 ? 1 : 3232835446000318251));
                    }
                }
            }
        }
    }
    #pragma endscop
}
