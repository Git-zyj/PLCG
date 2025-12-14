/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 += var_1;
        var_21 = ((((min((arr_1 [i_0] [i_0]), 19))) ? (max(var_14, (arr_0 [i_0]))) : 42553));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_22 = (min(var_22, (((((arr_6 [5] [i_2]) << (var_12 - 10907)))))));
            var_23 = (arr_6 [i_2 + 1] [i_2 - 1]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_24 = (((((arr_5 [i_1] [i_1] [12]) + 2147483647)) << (63699601 - 63699601)));
            arr_11 [0] [0] [i_3] = (7864320 - 255);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_25 += ((+(((arr_8 [14]) ? 2032 : (arr_3 [i_1])))));
            arr_15 [i_4] = (!7864320);
            var_26 *= (!7864321);
            var_27 = (min(var_27, -1752));
            var_28 = var_13;
        }
        var_29 = (max(var_29, 7864321));
    }
    var_30 = (min(var_3, (min(894616994, 3396492711))));
    var_31 = ((!(!-7864315)));
    #pragma endscop
}
