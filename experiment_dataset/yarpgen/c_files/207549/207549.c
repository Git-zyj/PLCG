/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = var_5;
    var_20 = var_9;
    var_21 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((-var_5 + 9223372036854775807) >> (((arr_0 [i_0] [i_0]) + 29462)))) * var_1));
        arr_3 [i_0] [i_0] = 3442972234;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (arr_5 [i_0] [i_0]);
            var_22 = (((arr_6 [i_0] [i_0]) ? (((var_0 < (arr_0 [i_0] [i_0])))) : (arr_0 [i_0] [i_0])));
            var_23 = (min(var_23, var_17));
            arr_8 [i_1] = -1;
            arr_9 [i_0] [i_0] = (!1853311130);
        }
    }
    #pragma endscop
}
