/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = min((min(-56, -1830392415)), ((min(var_4, 0))));
                    arr_11 [i_0] [i_1] [i_2] = (min(5131383101236443042, ((max(-1198458033, 8281)))));
                    arr_12 [i_0] [i_0 - 2] [i_2] = (max(((min(57255, 8281))), (min(855058232, 855058236))));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            arr_16 [i_3] [i_0 - 2] = -22774;

            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_19 [6] = 855058225;
                arr_20 [i_0] [i_3] [i_4] = 855058236;
                arr_21 [i_0] [8] = 31589;
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_14 = 855058225;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_15 = 855058204;
                            var_16 = 245;
                            var_17 = 29174;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                var_18 = 855058204;
                var_19 = 4170528462;
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_20 = 166;

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_21 = (min(var_21, 8276));
            var_22 = 855058232;
        }
        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            arr_39 [1] = 84;

            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                {
                    arr_45 [i_9] [i_11] [i_11 - 1] [i_11] [i_13] = 3439909062;

                    for (int i_14 = 2; i_14 < 16;i_14 += 1)
                    {
                        var_23 = 57267;
                        arr_48 [i_11] [i_11] [i_11] [i_11] = 65529;
                        var_24 = (max(var_24, 6681268227906086972));
                    }
                    arr_49 [i_9] [16] = 1;

                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        arr_54 [i_9] [i_11] [i_12] [i_13] [i_11] [i_11 + 1] [i_12] = 32690;
                        var_25 -= 855058209;
                    }
                    arr_55 [i_13] [i_12] [i_11] [i_9] = 1;
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                {
                    var_26 = 1855055189;
                    var_27 = (max(var_27, 4294967295));
                }

                for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
                {
                    arr_61 [i_17] [i_11] [4] = -14;
                    var_28 = 422607132;
                }
                for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
                {

                    for (int i_19 = 1; i_19 < 15;i_19 += 1)
                    {
                        arr_66 [i_19] [i_19] = 1;
                        arr_67 [i_19] [i_9] [i_12] [i_11] [i_19] = 57255;
                        var_29 = -23;
                        var_30 = (max(var_30, 1));
                        var_31 = 1;
                    }

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_32 = 1780518159;
                        var_33 = -7722;
                    }
                    arr_70 [i_18] [i_12] [i_11] [i_9] = 0;
                    arr_71 [i_18] [11] [i_11] [i_18] = 54964;
                }
            }
            for (int i_21 = 4; i_21 < 16;i_21 += 1)
            {
                var_34 *= 7712;
                var_35 = -22774;
            }
        }
        for (int i_22 = 0; i_22 < 17;i_22 += 1)
        {

            for (int i_23 = 0; i_23 < 17;i_23 += 1)
            {

                for (int i_24 = 0; i_24 < 17;i_24 += 1) /* same iter space */
                {

                    for (int i_25 = 0; i_25 < 17;i_25 += 1)
                    {
                        var_36 = 2082664712;
                        var_37 = (max(var_37, 0));
                    }

                    for (int i_26 = 4; i_26 < 15;i_26 += 1)
                    {
                        var_38 = 3408685433479875322;
                        var_39 = 22774;
                    }
                }
                for (int i_27 = 0; i_27 < 17;i_27 += 1) /* same iter space */
                {
                    var_40 = 14231;
                    arr_88 [i_9] [11] [i_22] [i_23] [i_22] [i_27] = 15294;
                    var_41 = (max(var_41, 3439909091));
                }
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 17;i_28 += 1)
                {
                    for (int i_29 = 1; i_29 < 16;i_29 += 1)
                    {
                        {
                            arr_95 [i_29 - 1] [i_29] [i_23] [i_29] [i_9] = -1561266811;
                            arr_96 [i_9] [i_9] [i_29 + 1] [i_28] [i_28] [i_23] [i_29] = 22769;
                            var_42 = 7017453138881905857;
                            var_43 = (max(var_43, 1595862099));
                            var_44 ^= 1;
                        }
                    }
                }
                var_45 = 1;
            }
            for (int i_30 = 1; i_30 < 16;i_30 += 1)
            {
                arr_99 [i_9] [i_22] [i_30] = -7730;
                arr_100 [i_9] [i_9] [i_30 + 1] [i_30] = 1;
                var_46 = (min(var_46, 1063840175));
            }
            var_47 = 6;
        }
    }
    var_48 *= var_11;
    var_49 = (min(var_49, ((max(var_3, (min(var_6, var_10)))))));
    var_50 = var_11;
    var_51 &= var_7;
    #pragma endscop
}
