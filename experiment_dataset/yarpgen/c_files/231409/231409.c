/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = var_9;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_14 = (max((max(var_12, 78)), var_13));

                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {

                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_4] [i_0] = var_4;
                        var_15 ^= 22639;
                        arr_14 [i_0] [i_1] [i_0] [i_3] [5] [7] [i_4] = (-127 - 1);
                    }

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [3] [i_5] [i_0 + 4] = 2758845668031790348;
                        var_16 &= var_4;
                        var_17 = 127;
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [6] &= (var_1 ^ 170859964);
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {

                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [i_0] [12] [i_2] [i_0] [i_7 - 1] &= (((((max(-8326941954778333885, var_10)) % var_3)) / 43));
                        arr_25 [i_0] [i_0] [i_1] [i_2] [i_6] [i_7] = ((((min((min(-45, 170859964)), (var_1 - 170859978)))) % 10692591166926779313));
                        var_18 ^= var_7;
                        arr_26 [i_6] [i_7 - 2] = var_3;
                        arr_27 [3] [3] [i_6] [i_6] [i_6] [i_1] = 7016476108516673977;
                    }
                    arr_28 [i_6] = 15020538571838549840;
                    arr_29 [i_0] [i_6] = (max(0, var_3));
                }
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    var_19 = (min(var_19, var_7));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_0 + 4] &= ((((var_0 >> (4124107340 - 4124107319))) % var_4));
                        var_20 = 17855721508244089796;
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_21 &= (1582329754575169881 ^ var_5);
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10] [i_10] = 65055;
                        var_22 = var_2;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_1] [i_2] [i_8] [i_11] = (((((((min(19865, var_7))) / 591022565465461819))) || 2147483647));
                        arr_41 [i_0] = 0;
                        arr_42 [i_0 + 2] = ((591022565465461820 >> (14040702691201467210 - 14040702691201467206)));
                        arr_43 [i_8] [10] = (max(17855721508244089784, 7515));
                    }
                }

                /* vectorizable */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_48 [i_0] [i_2] [i_2] [i_12] [i_2] [i_2] = 48235;
                    var_23 = (max(var_23, -4341765496275068165));
                }

                /* vectorizable */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    arr_51 [i_13] [i_2] [i_0] [i_0] = 170859964;

                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        arr_55 [i_0 - 1] [i_1] [i_14] [i_0 - 1] [i_14 + 2] [i_2] [i_0 - 1] = var_8;
                        var_24 = 45688;
                        arr_56 [i_14] = var_5;
                    }
                }
            }
            arr_57 [i_0] [i_0] [i_1] = 55485;
        }

        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_25 = (max(var_25, ((max((-127 - 1), ((1 >> (var_9 - 4072926103769264328))))))));
            var_26 = (min(var_26, var_3));
        }
    }
    var_27 = (var_13 <= var_1);
    #pragma endscop
}
