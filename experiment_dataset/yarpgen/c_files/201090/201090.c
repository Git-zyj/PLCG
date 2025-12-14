/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 += (+(((((var_2 ? (arr_1 [i_0]) : var_6))) ? 0 : (max(0, 4272829673)))));
        var_11 = var_8;
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_6 [8] = (((min(var_5, (arr_2 [i_1 - 1] [i_1 - 1])))));
        arr_7 [i_1 + 1] = ((((((21 ? 2 : 2438814011)) ? (arr_5 [i_1] [i_1 + 1]) : var_4))));
        var_12 = (min(var_12, ((((arr_0 [i_1] [i_1 - 2]) ? var_4 : (0 >= 1))))));
        arr_8 [9] = ((((((arr_2 [i_1 - 2] [i_1 - 1]) ? ((((arr_0 [i_1] [i_1]) ? (arr_3 [i_1]) : (arr_5 [i_1 - 1] [i_1 - 1])))) : var_2))) ? ((((arr_1 [i_1 - 1]) ? (1 && var_4) : (arr_5 [i_1] [i_1])))) : var_7));
    }
    var_13 = (((!1) >= var_7));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_14 = var_1;
                arr_16 [i_2] [i_3] [i_2] = var_3;
            }
        }
    }
    #pragma endscop
}
