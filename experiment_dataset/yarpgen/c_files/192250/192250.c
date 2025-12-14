/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((max(var_11, var_7))) ? ((-6815616353405140465 ? var_6 : var_7)) : var_7))) ? (((~(var_8 == -8705)))) : (((!var_0) ? var_5 : ((min(1648676814, var_9)))))));
    var_16 = ((!((min(var_6, (-32767 - 1))))));
    var_17 = ((-(~26427)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = (((((arr_9 [i_1] [i_2] [i_1]) ^ 2147483647)) & (8685 <= 31830)));
                        var_19 = ((4294967295 ? -3428866680194993421 : (-32767 - 1)));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (arr_11 [i_0]);
        arr_13 [i_0] = (var_0 / 5119);
        var_20 = (20505 % 2695940948542972918);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((((8690 ? 9007199254609920 : -25332))) ? (((arr_7 [9] [i_4] [i_4] [i_4]) ? (arr_8 [i_4] [i_4] [i_4] [i_4]) : (arr_1 [i_4]))) : (var_6 & 32761));
        var_21 = var_8;
        arr_17 [i_4] = (1439325068 - 0);
        arr_18 [13] = var_0;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_22 = var_3;
        var_23 = (min((min((arr_19 [i_5]), var_0)), 29451));
        var_24 = ((((-((var_7 ? var_6 : 4294967295)))) << (((((arr_19 [i_5]) + (arr_20 [i_5] [i_5]))) - 2154132362))));
        var_25 = (arr_19 [i_5]);
    }
    #pragma endscop
}
