/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_18 = (((((!var_11) ? (arr_0 [i_0]) : 26168))) % var_16);
        var_19 = (min(var_19, 223));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0 - 3] [i_0] = ((~(((arr_1 [i_0]) ^ var_15))));
            var_20 = ((((-8032814895026569520 ? var_13 : var_1)) % 65535));
            var_21 = var_11;
        }
        var_22 = (min(var_22, (arr_1 [i_0 + 2])));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_23 = (4414864114511154864 ? -6031508207804497719 : ((min((((arr_6 [i_2] [i_2]) ? (arr_8 [i_2]) : (arr_7 [i_2] [i_2]))), (var_9 + 2400281863)))));
        var_24 = ((!(arr_6 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_15 [i_3] [i_4] &= (arr_6 [i_3] [i_4]);
            var_25 = (max(var_17, 13941));
            var_26 = 4414864114511154864;
        }
        var_27 += (arr_11 [i_3]);
    }
    var_28 = (max(var_28, var_14));

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_29 += ((var_11 ? -27 : var_5));
        var_30 = -10898;
        var_31 *= var_16;

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_32 = ((((max((((arr_0 [i_6]) - (arr_10 [i_6]))), (arr_1 [i_5])))) ? ((((((arr_4 [i_5] [i_5] [i_5]) <= 8738211024795027910)) ? 55546 : ((((arr_0 [i_6]) != 4294967295)))))) : var_3));

            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    var_33 += (min(-14445, (max(((min((arr_4 [i_5] [1] [i_8 - 1]), var_5))), var_1))));
                    var_34 = 32767;

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        arr_29 [i_5] [i_6] [i_7] [i_8] [i_6] [i_6] [i_5] = var_4;
                        var_35 = arr_14 [i_5] [i_6] [i_9];
                        var_36 = ((-1909892954535326969 ? var_5 : (arr_20 [i_7 + 1] [i_9 + 3] [i_8 - 1] [i_8])));
                        var_37 = (min(var_37, (((var_13 ? (arr_20 [i_9 - 1] [i_8] [i_5] [i_5]) : (arr_20 [i_5] [i_8 + 2] [i_7] [i_8]))))));
                    }
                }
                var_38 = var_9;
                var_39 += var_14;
            }
            arr_30 [i_6] [i_6] = 1;
        }
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            var_40 = (min((((!-23278) ? (((arr_3 [i_5] [i_5]) ? var_4 : (arr_1 [i_5]))) : ((var_2 << (((arr_25 [i_5] [i_5] [i_10 - 1] [i_5] [i_10 + 1]) - 3252)))))), 29797));
            var_41 = (~((-14445 ? ((((10412 < (-9223372036854775807 - 1))))) : (min(var_14, -5803201660224962443)))));
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_42 = 1;
            var_43 ^= (max((min((arr_12 [i_11] [i_5]), -474484947641563989)), (((!(arr_16 [i_11] [i_5]))))));
        }
        var_44 = (max(var_44, var_0));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_45 = ((!(arr_36 [i_12])));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_41 [i_13] [i_13] = -4294967282;
            var_46 = 255;
            var_47 = (((arr_36 [i_13]) ? (!32755) : ((var_4 ? 17983 : (arr_7 [i_12] [8])))));
            var_48 = 26023;
        }
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 19;i_14 += 1)
    {
        var_49 = -1573986057670736216;

        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                arr_50 [i_14] [i_15] [i_16] = var_2;
                var_50 = (((arr_45 [i_14] [i_15]) << (var_2 - 163)));
                var_51 = (arr_43 [i_14 - 1] [i_15]);
            }
            var_52 = 11314;
            var_53 = -22;
            var_54 = (arr_43 [18] [i_15]);
        }
        var_55 = (min(var_55, 247));
    }
    #pragma endscop
}
