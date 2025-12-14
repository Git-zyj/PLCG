/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        var_11 = (arr_1 [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (var_0 % -70);
        arr_7 [i_1] [i_1] = 18446744073709551587;
        var_12 = (min(var_12, (((var_8 ? (arr_4 [i_1] [i_1]) : ((var_6 ? (arr_5 [i_1]) : 47)))))));
    }

    for (int i_2 = 4; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_0));
        var_14 |= (((~var_7) * var_9));
    }
    for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            arr_16 [i_3] [i_3] [i_3] = ((var_0 & (((arr_9 [i_4]) / (((arr_12 [i_4]) | 0))))));
            var_15 |= 4194303;
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_16 = (max(var_1, (!var_5)));
            var_17 = ((((0 / ((((arr_8 [i_3]) / var_4))))) * -528313397));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_21 [i_3] = 70;
            var_18 = (arr_13 [i_3]);
            var_19 = (max(((((~var_2) ? var_7 : (~var_7)))), (((((arr_20 [i_6]) ? var_5 : var_4)) ^ -119))));
            var_20 = (!0);
        }
        var_21 = (!-70);
        var_22 = 400626969;
        var_23 = (min(var_23, ((max((arr_18 [i_3] [i_3] [i_3]), (arr_18 [i_3] [i_3] [i_3]))))));
        arr_22 [i_3] = (max(((((max(14, var_4))) ? ((var_5 ? var_6 : 1206859672)) : var_6)), ((((~var_3) < (var_1 - var_8))))));
    }
    var_24 = (((var_5 + (~var_6))));
    #pragma endscop
}
