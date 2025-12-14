/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_13 [i_2] [i_0] [20] [i_2] [8] |= -755100437;
                        var_15 *= 1;
                    }
                }
            }
        }
        var_16 = var_10;
        arr_14 [i_0] [i_0] = 1;
        var_17 += (-9223372036854775807 - 1);
        var_18 = var_13;
    }
    var_19 = 14;
    var_20 = 268435455;

    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_21 = 1;
        arr_18 [i_4 + 1] = 1711507527131882713;
        arr_19 [i_4] = 2012651308744589552;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_23 [i_5] &= var_1;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 14;i_7 += 1)
            {
                {
                    var_22 = 268435462;
                    var_23 = (min(var_23, 254));
                }
            }
        }
        var_24 = 1861353011;
    }
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_33 [i_8] [i_9] [i_8] = var_4;
            var_25 = 1861353011;

            /* vectorizable */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_37 [i_8] [i_8 + 1] [i_9] [i_10] = var_12;
                var_26 = -3118220304255179802;
                var_27 = 43663;
            }
            var_28 |= 3048690653;
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {
                    {
                        arr_49 [i_8] [i_8] [7] [i_12] [i_8] = var_3;
                        var_29 = var_2;
                        arr_50 [i_8] = 3332764549;
                        arr_51 [i_8] [i_8] [i_12] [3] = var_2;
                        var_30 |= 4093409331;
                    }
                }
            }
            var_31 = (min(var_31, var_2));
            var_32 = var_14;
        }
        var_33 = 1;
        var_34 |= 70;
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        var_35 = 36028779839094784;
        var_36 &= var_9;
        var_37 -= 4520610918431543777;
        arr_55 [i_14] = 30917;
    }
    #pragma endscop
}
