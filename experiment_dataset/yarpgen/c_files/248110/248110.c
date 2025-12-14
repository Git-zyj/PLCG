/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (arr_1 [i_0] [15]);
        var_11 = ((var_9 ? ((((!var_1) <= var_6))) : ((1 >> (852195048 - 852195048)))));
        arr_3 [i_0] [13] = ((var_0 ? var_6 : (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) < 1803580784));
        var_12 = (min(3724152172666397198, ((((arr_2 [i_0] [i_0]) && (arr_1 [i_0] [i_0]))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_1] [i_1] [i_1] = (var_9 != 4865269226843577469);
                    var_13 = ((6324 ? (min(((-1 ? 64988 : -8)), var_6)) : (arr_5 [i_3 + 1])));
                    var_14 = -17;
                }
            }
        }
    }
    #pragma endscop
}
