/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((18446744073709551615 ? var_5 : -8369944639722408823))) ? (arr_0 [i_0]) : (((442582804135326342 ? 0 : 2988191428245285202)))));
        arr_3 [i_0] [i_0] |= (-(arr_1 [1]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_11 = (((((var_1 ? var_5 : var_3))) ? (((68 ? var_0 : var_9))) : ((var_0 ? 45275 : 18446744073709551593))));
        arr_6 [i_1] [i_1] = var_4;
        var_12 = var_9;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (arr_8 [4]);
        var_13 = (min(var_13, (3015133025506145397 != var_0)));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_4] = (var_7 / 1);
                        arr_20 [i_4] [i_4] = ((-(14512000575319597747 % 3122031355260308113)));
                        arr_21 [i_4] [i_5] [i_4] [i_3] [i_4] = 20490;
                        var_14 = (min(var_14, (((var_3 ? (arr_11 [i_4] [i_2]) : (((0 ? var_9 : var_5))))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_24 [i_6] = var_5;
        var_15 = (min(var_15, 1682390449));
    }
    var_16 = (min(((((!var_2) >> (((~var_7) - 1194252016))))), (((1 != var_3) ? var_6 : (var_3 % var_6)))));
    var_17 = var_2;
    #pragma endscop
}
