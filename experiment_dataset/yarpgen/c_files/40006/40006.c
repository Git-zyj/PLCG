/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        var_13 = (min(var_13, ((((arr_0 [i_0 + 1]) * (arr_1 [i_0 + 1]))))));

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            var_14 = (!(((var_5 / (arr_2 [i_1])))));
            arr_5 [i_0] [i_1] = (arr_4 [17]);
            var_15 = (((((var_8 ? (arr_2 [i_0 - 1]) : (arr_4 [i_0 - 2])))) ? (arr_4 [i_1 - 4]) : var_7));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_16 = (-2135919062 >= var_4);
            arr_9 [i_0] [i_0] = -1621150344392736075;
            var_17 = (max(var_17, (-21588 <= var_6)));
        }
    }
    var_18 = (var_1 <= (((((-25912 ? var_8 : var_9)) < ((var_9 ? var_2 : var_3))))));
    #pragma endscop
}
