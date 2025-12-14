/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -7591601544860796459;
        var_14 = ((var_7 ? (!var_10) : (max(2430151537, 2130246713))));
        var_15 = max(((max(var_5, var_10))), ((var_0 ? var_9 : 53786)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_16 = 1;
            arr_5 [i_0] [i_1] &= 4194303;
            arr_6 [i_0] [i_0] = (max(var_0, (((var_10 ? var_4 : var_11)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_0] [i_2] [i_0] = var_8;
            arr_12 [0] [i_0] [i_0] = (303670255 ? 2810006566187881854 : -1);
            arr_13 [i_0] = (var_11 ^ var_9);

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_17 [2] [10] [i_0] = 4294967292;
                var_17 = var_8;
                var_18 = ((-80 ? -13 : 26));
                var_19 = (536870911 ? var_3 : var_6);
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_20 = -var_3;
                var_21 = (!-5083158790767239250);

                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    var_22 = (max(var_22, (((~((242 >> (6247212725461705894 - 6247212725461705894))))))));
                    var_23 = 17168;
                    arr_22 [2] [i_0] [11] [i_4] [i_5] = ((var_2 ? var_7 : 53965));
                }
            }
            arr_23 [i_0] [i_0] = var_9;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_24 = var_4;
        var_25 = ((19 ? var_6 : 7708));
        arr_28 [i_6] = var_7;
    }
    var_26 &= ((1 ? ((((var_1 ? -1 : var_8)))) : var_11));
    #pragma endscop
}
