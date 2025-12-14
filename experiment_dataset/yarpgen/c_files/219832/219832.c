/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((arr_3 [i_1 + 1] [i_1]) + 696445564);
                arr_6 [i_0] = 209;
                var_12 += (~-3560815858756104590);
            }
        }
    }
    var_13 = (min(var_5, var_3));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 24;i_4 += 1)
            {
                {
                    var_14 = (((arr_14 [i_3] [i_4] [i_4] [i_4 + 1]) >> (((max((((var_3 ? 8191 : var_0))), (min(var_2, 4294967295)))) - 196444763))));
                    var_15 = (min(var_15, ((((((18 / (arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 2])))) ? ((((arr_11 [i_4 - 2] [i_4 - 1] [i_4 - 1]) / (arr_11 [i_4 - 1] [i_4 + 1] [i_4 + 1])))) : ((-1 ? 11407402211619561659 : -16)))))));
                }
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
