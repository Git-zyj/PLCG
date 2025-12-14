/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(4488803491743712789, ((min(var_4, -5365419600552708274))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_18 = (max(var_18, var_1));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_19 += (!(var_3 || var_12));
            arr_6 [i_0] [i_1] [i_1] = var_15;
        }
        var_20 = ((28962 ? 173 : -5365419600552708268));
        var_21 ^= ((-((var_2 ? var_14 : 0))));
        arr_7 [i_0] [i_0] = var_3;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 |= var_11;
        arr_12 [i_2] = -1;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_17 [i_3] [i_3] = -173;
            var_23 = (var_15 * 338517782);
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        arr_21 [i_4] = var_2;
        arr_22 [i_4] = ((((((((arr_18 [i_4]) >= var_11)) ? (arr_18 [i_4]) : var_9))) ? (((((var_3 ? var_3 : -7841344784822255486))) ? ((var_8 ? var_1 : var_4)) : (~var_13))) : (((var_14 ? (((arr_19 [i_4] [i_4]) ? var_15 : var_9)) : var_15)))));
        var_24 = 245;
    }
    #pragma endscop
}
