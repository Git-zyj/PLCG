/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_10 ? -1 : var_17));
    var_19 -= var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1 - 1] = (((1 ? var_9 : 4668798014637095416)));
            var_20 = (max(var_20, (((-1 ? -724304220347952106 : (arr_1 [i_0] [i_1 - 2]))))));
            var_21 = ((var_10 % (-1050293214 && 59)));

            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                arr_10 [i_2] = ((-2 ? 14608 : 128));
                arr_11 [i_2] = var_13;
                var_22 = (arr_3 [i_0] [i_0] [i_0]);
            }
            arr_12 [i_0] [i_1] = 536870911;
        }
        var_23 = (max(var_23, (((~(arr_5 [i_0] [i_0]))))));
        var_24 = (((arr_7 [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
