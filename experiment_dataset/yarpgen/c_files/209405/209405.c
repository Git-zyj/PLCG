/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_17 ? -5806 : var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [11] [i_2] [i_1] = (arr_3 [i_0] [i_1] [i_0]);
                    arr_10 [i_1] = (max((((arr_4 [i_2 - 2] [i_1] [i_2]) ? (arr_4 [i_2 + 2] [4] [i_2]) : (arr_4 [i_2 + 2] [i_1] [i_0]))), (((arr_4 [i_2 + 3] [5] [i_1]) ? 5794 : (arr_4 [i_2 + 2] [i_1] [11])))));
                    var_20 = (arr_6 [i_2 + 3] [i_1] [i_1] [i_0]);
                }
            }
        }
    }
    var_21 = (~var_14);
    var_22 |= var_1;
    #pragma endscop
}
