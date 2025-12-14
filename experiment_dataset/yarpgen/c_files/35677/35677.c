/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = 687800223;
        arr_2 [i_0] = ((-(((!((!(arr_1 [i_0]))))))));
        arr_3 [i_0] = (((((!-687800214) ? (226 * var_12) : var_16))) ? 39308 : var_15);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 *= 2147483647;
            arr_8 [i_0] [i_1] = -687800223;
        }
    }
    var_22 = ((((var_13 ? var_14 : (((38904 ? -687800225 : 39310))))) ^ var_16));
    var_23 += ((5829324795295577126 | ((((255 * 52) ? 26224 : var_12)))));
    #pragma endscop
}
