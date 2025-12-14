/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((((min(((var_9 ? var_5 : var_2)), (max(var_5, var_2))))) ? ((var_4 ? 18949 : (((max(var_9, var_8)))))) : (((var_10 * (var_9 < var_0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] = (((((var_9 ? var_10 : var_7))) ? var_1 : (var_7 == var_0)));
            arr_6 [20] [20] [i_1] = 0;
        }
        for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_13 ^= ((((var_11 ? var_8 : var_8)) * var_3));
            arr_10 [0] = ((var_1 ? ((var_3 ? var_5 : var_5)) : var_4));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_14 = var_3;
            var_15 = (min(var_15, ((var_0 ? ((var_5 ? var_4 : var_11)) : var_5))));

            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                arr_17 [i_0] [i_0] [i_3] = ((var_7 ? ((var_4 ? var_5 : var_1)) : var_10));
                var_16 = var_7;
            }
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                arr_21 [i_3] = -9223372036854775778;
                var_17 = (min(var_17, ((var_8 ? var_4 : var_0))));
            }
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                var_18 = (((var_11 ? var_7 : var_3)));
                var_19 = var_2;
                arr_25 [0] [0] [i_6] &= var_9;
            }
            for (int i_7 = 3; i_7 < 23;i_7 += 1)
            {
                arr_29 [i_0] [i_0] [i_3] = (var_6 < var_9);
                arr_30 [i_3] [21] [21] = (var_0 <= var_11);
            }
            var_20 = ((1045486086 ? -9223372036854775778 : -19385));
        }
        var_21 = (min(var_21, (var_1 > var_6)));
    }
    var_22 = ((((min(var_2, (((var_0 ? var_9 : var_10)))))) ? (max(((var_0 ? var_4 : var_6)), ((max(var_9, var_4))))) : ((((min(var_8, var_9))) ? var_2 : var_1))));
    #pragma endscop
}
