/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = 8067929336045527997;
        arr_2 [i_0] [i_0] = 9167449926204874464;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = 10378814737664023619;
                    arr_7 [i_2] [i_1] [i_0] [14] = 10378814737664023618;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_17 [i_5] [14] [14] = 2322975744;

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_15 = 0;
                            var_16 = 22072;
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_17 = 32767;
                            var_18 = 10378814737664023619;
                        }
                        arr_24 [i_5] [i_5] [i_5] [i_5] = 40;
                    }
                }
            }
        }
        arr_25 [i_3] = 0;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_19 = -1583668814;

        /* vectorizable */
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            var_20 = 8067929336045527997;

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_21 = 4611686018427387872;
                var_22 = 5312117795317236562;
                var_23 = 10378814737664023618;
            }
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                var_24 = 3540;
                arr_37 [i_10] = 10378814737664023618;
            }
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                arr_40 [i_13] [i_13] [i_13] [i_10] = 8067929336045527996;
                var_25 = 10378814737664023600;
                var_26 = 27106;
                arr_41 [i_10] [i_9] [i_9] = 8390;
            }
            var_27 = -1;
            arr_42 [i_10] [i_10] = -10;
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            arr_47 [i_14] [1] [i_9] = 105;

            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                arr_51 [i_9] = 105;

                for (int i_16 = 3; i_16 < 12;i_16 += 1)
                {
                    arr_55 [i_9] [i_14] [i_15] [i_16] = 4294967295;
                    arr_56 [i_16] [i_16] = 2147483647;
                    arr_57 [i_16] = 0;
                    var_28 = 0;
                }
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    arr_60 [i_15] = 8;
                    arr_61 [i_9] [i_9] [i_9] [i_9] = -196925574;
                    arr_62 [i_9] [i_14] [i_15] [13] [i_17] [i_17] = 8067929336045527991;
                    var_29 = 0;
                    arr_63 [i_9] [9] [i_9] [i_17] [i_17] [i_9] = -797431877;
                }
                for (int i_18 = 3; i_18 < 14;i_18 += 1)
                {
                    arr_66 [12] [2] = 10378814737664023618;
                    var_30 = 15744;
                }
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_31 = -1;
                    var_32 = 122;
                    var_33 = 0;
                }
                var_34 = -4269;
                var_35 = 99;
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                var_36 = 0;
                arr_73 [i_9] [i_14] [i_20] [11] = 1;
            }
            var_37 = 274376513;
        }
        for (int i_21 = 0; i_21 < 15;i_21 += 1)
        {
            /* LoopNest 2 */
            for (int i_22 = 1; i_22 < 13;i_22 += 1)
            {
                for (int i_23 = 3; i_23 < 14;i_23 += 1)
                {
                    {
                        arr_84 [i_23] [i_21] [i_23] [i_23] = 1770893727;
                        arr_85 [13] [i_23] [i_23] [i_9] = 10378814737664023613;
                        arr_86 [i_23] = 8802;
                        arr_87 [i_23] = 3;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 15;i_25 += 1)
                {
                    {

                        for (int i_26 = 0; i_26 < 15;i_26 += 1) /* same iter space */
                        {
                            var_38 = -55;
                            arr_96 [i_26] [11] [i_26] [i_26] [11] [i_25] [i_26] = 10378814737664023619;
                        }
                        /* vectorizable */
                        for (int i_27 = 0; i_27 < 15;i_27 += 1) /* same iter space */
                        {
                            arr_100 [i_27] [i_27] [i_27] [i_27] = 3583803672052778260;
                            var_39 = 1;
                        }
                        arr_101 [12] [i_21] = 4064;
                    }
                }
            }
            var_40 = 4294963232;
            arr_102 [i_9] = 17;
            var_41 = -105;
        }
        for (int i_28 = 0; i_28 < 15;i_28 += 1)
        {
            arr_105 [i_28] = 8067929336045528003;

            for (int i_29 = 1; i_29 < 13;i_29 += 1)
            {
                arr_109 [i_9] [i_28] [i_29] [i_29] = 10378814737664023638;
                var_42 = 0;
                var_43 = 30296;
                arr_110 [i_28] [i_28] [i_28] [i_28] = 0;
            }
            for (int i_30 = 0; i_30 < 15;i_30 += 1) /* same iter space */
            {
                arr_114 [i_9] [i_9] [i_28] [i_28] = -1419468540;
                arr_115 [i_9] [i_9] [i_28] [i_28] = 8;

                for (int i_31 = 0; i_31 < 15;i_31 += 1)
                {
                    arr_119 [i_28] = 11444;
                    arr_120 [i_9] [i_28] [i_9] [i_28] = -27;
                    var_44 = -27;
                }
                arr_121 [i_28] = 4269;
            }
            for (int i_32 = 0; i_32 < 15;i_32 += 1) /* same iter space */
            {
                arr_124 [i_32] [i_28] [i_9] = 8726919205695537468;
                arr_125 [i_9] [i_28] [i_28] = -18;
            }
        }
        var_45 = 18;
        arr_126 [11] = -105;
    }
    var_46 = var_8;
    #pragma endscop
}
