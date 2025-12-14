/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (((var_11 && (arr_1 [i_0 + 1] [i_0 + 1]))));
                    var_14 = ((((((41 ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0] [i_0]))))) ? var_4 : var_0));
                    var_15 = (arr_5 [i_0] [i_1] [i_1] [i_2]);
                }
            }
        }
    }
    var_16 = 24;
    var_17 = (max((max(24663531, ((0 ? var_4 : -1770494816)))), -61));
    #pragma endscop
}
