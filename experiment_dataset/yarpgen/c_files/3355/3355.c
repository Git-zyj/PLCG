/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (arr_1 [i_0 + 2]);
                var_15 = var_6;
            }
        }
    }
    var_16 = (((((~(var_10 && var_5)))) ? var_1 : var_0));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_17 = (arr_8 [i_2] [i_2]);
        arr_10 [i_2] [i_2] = ((((min(-863662555, -863662556))) > ((-((var_13 ? 32767 : var_6))))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        arr_13 [i_3] = (min(((((~-2143693328) < ((max((arr_7 [1]), 49041)))))), (min(132, (arr_8 [i_3 + 1] [i_3])))));
        var_18 = (((((-((var_5 >> (27593 - 27578)))))) ^ (min((arr_9 [i_3 + 2]), (((var_5 ? (arr_11 [i_3 + 1]) : var_3)))))));
    }
    var_19 = var_5;
    var_20 -= var_12;
    #pragma endscop
}
