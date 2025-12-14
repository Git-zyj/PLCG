/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!(!162));
        arr_3 [i_0] [i_0] = ((1 ? var_4 : (~-1379012075)));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        var_10 = var_2;
        var_11 = (+-1379012075);
        var_12 = -1379012065;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_11 [1] [i_2 + 1] [i_3] = 15;
                arr_12 [2] [2] [i_3] = ((!(((-2 ? 1 : var_0)))));
                arr_13 [i_1] = ((-(!245)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_2] [i_2] [i_4] = 268304384;
                            arr_19 [i_1] [i_3] |= (~var_2);
                        }
                    }
                }
                var_13 = (!var_3);
            }
            for (int i_6 = 4; i_6 < 6;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 2; i_7 < 7;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        var_14 ^= (!4026662912);
                        var_15 = 15;
                        arr_26 [2] [i_2] [i_6] [0] [i_7 - 2] [5] = (~var_0);
                        arr_27 [1] [i_1] [i_1] [i_2 + 1] [i_6 - 2] [i_7] [i_8 - 2] |= ((-(~1379012082)));
                    }
                    var_16 = (~-1379012065);
                    var_17 = (!120);
                    var_18 = 268304384;
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_19 = var_1;
                    arr_31 [i_9] = ((-67 ? 1 : (~4294967295)));
                    arr_32 [i_1] [i_1] [i_6] [i_9] = 78;
                    arr_33 [i_1 - 2] [1] [i_6] [i_9] = -var_4;
                }
                arr_34 [i_1] [i_1] [i_2] [i_6] |= var_6;
                var_20 = (~1822666950748081453);
                var_21 = ((var_5 ? -242 : var_5));
            }
            for (int i_10 = 4; i_10 < 6;i_10 += 1) /* same iter space */
            {
                arr_38 [i_10] [i_1] [i_10] = 11;
                var_22 = ((-2 ? var_5 : var_3));

                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_23 = (min(var_23, var_7));
                    arr_41 [i_1] [i_11] [i_10] [i_11] [i_10] |= 11;
                }
                arr_42 [i_10] = var_2;
                arr_43 [i_1] [i_10] [i_10] = 0;
            }
            var_24 = (min(var_24, (~4645583107185541101)));
            var_25 = -31;
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 9;i_12 += 1)
        {
            arr_48 [i_12] [i_12] [i_1] = (!var_1);
            arr_49 [i_1 - 1] [i_1] [i_12] = (!var_0);
            var_26 = var_5;
            var_27 |= -var_3;
        }

        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            var_28 = (!4);
            var_29 = (~var_3);
            arr_54 [i_1] [i_1] [i_13] = (~var_9);
            var_30 = 13801160966524010520;
        }
    }
    var_31 -= ((2305843007066210304 ? (!92) : var_6));
    #pragma endscop
}
