/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(2042186808, (((!(var_5 & var_5))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (((16173 ? ((9085767358032172319 << (16173 - 16173))) : -1411789918)))));
        var_12 = 49362;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 7;i_3 += 1)
            {
                {
                    var_13 = var_3;
                    var_14 = (arr_6 [i_1] [i_2] [i_3]);
                    var_15 = ((!(((19 ? 24141 : (arr_7 [i_3 + 3] [i_3 - 1] [i_3 - 1]))))));
                }
            }
        }
        var_16 = (((((((((arr_5 [i_1] [i_1]) & -1854010726))) ? (arr_2 [i_1]) : ((var_6 ? 16173 : (arr_2 [i_1])))))) & (arr_9 [i_1])));
    }
    #pragma endscop
}
