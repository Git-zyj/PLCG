/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (((!var_6) ? ((max(var_13, var_14))) : var_6));
    var_17 = ((!(var_9 > var_8)));
    var_18 ^= var_10;
    var_19 = var_14;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_20 = var_11;
            var_21 &= var_12;
            arr_6 [i_0 + 1] = (arr_5 [i_0] [i_0]);
            var_22 = ((var_13 >> (var_0 - 5428818363330539646)));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_23 = -var_15;
            arr_9 [i_2] = ((!(((-2321191800384307455 ? var_15 : (-9223372036854775807 - 1))))));
        }
        var_24 = (((arr_5 [i_0 + 1] [i_0 - 1]) >= (((arr_5 [i_0 + 1] [i_0 - 1]) + (arr_5 [i_0 - 1] [i_0 + 1])))));
    }
    #pragma endscop
}
