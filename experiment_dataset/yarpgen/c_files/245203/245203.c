/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((var_5 < (var_12 * var_3))) ? var_11 : var_11));
    var_14 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((-8293 ? 2147483647 : ((9211489763777601914 ? var_1 : 18446744073709551615))));
        var_15 |= (((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] |= (2147483647 < -var_6);
            arr_7 [1] [i_1] = (var_4 != 782512994);
        }
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_16 = (min(2147483647, 2147483647));
        var_17 = min(var_7, -2147483647);
        arr_12 [i_2] = ((max(-var_5, (min(-782512995, 6)))));
    }
    var_18 = ((-(((2147483618 <= 2850776082) ? -782512990 : (max(0, -782512994))))));
    #pragma endscop
}
