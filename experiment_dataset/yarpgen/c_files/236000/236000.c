/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min(var_3, var_17));
    var_21 = (((max(var_14, (var_5 ^ var_15))) >= 18446744073709551614));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 = var_15;
        var_23 = (arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = ((var_18 >= (2199023255551 / 68)));

            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                arr_14 [i_1] [i_1] [i_1] = -182390375369332305;
                var_24 = (max(((((arr_10 [i_1] [i_1]) / (arr_10 [i_1] [i_2])))), ((var_14 ? var_6 : var_5))));
            }
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                arr_18 [i_1] [i_2] = (max(((-var_1 >= (min((arr_16 [i_1]), (arr_12 [i_1] [18]))))), (((((arr_7 [i_1] [19] [i_4]) ^ var_3)) >= (arr_4 [18])))));
                arr_19 [i_1] [6] [i_1] = (arr_13 [i_1] [i_1]);
                var_25 = (arr_5 [i_1]);
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_26 = (154 >= -2199023255541);
                            var_27 ^= var_12;
                            arr_29 [i_1] [i_1] [i_6] [i_1] [i_8] = (4943443360070243912 >= var_11);
                            arr_30 [i_1] [1] [i_6] [1] [i_8 + 3] [i_8] [i_8 + 2] = arr_16 [i_1];
                            arr_31 [i_1] [i_1] [i_1] [i_7] [i_8] = var_15;
                        }
                    }
                }
            }
            var_28 = var_15;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            arr_34 [i_1] [i_1] = var_12;
            var_29 = (14849803359797560929 / 28);
            var_30 = (-18310 ? -2899006855469672689 : 18046205059277245234);
        }
        var_31 = ((2199023255535 >= (((238 + 4943443360070243906) * (0 * -6540325009235165593)))));
        arr_35 [i_1] = (arr_32 [i_1] [i_1] [i_1]);
    }
    #pragma endscop
}
