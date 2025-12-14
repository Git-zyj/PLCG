/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_1] = var_3;
                    var_10 = (max(var_10, (((-1514667030 >= 1208066625) ? ((1208066625 ? -126 : 113)) : ((((arr_4 [i_0] [i_0]) > -1208066623)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 = (591407768 > 3188237858472782689);
                                var_12 = 591407771;
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_13 = 66;

            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                var_14 = var_9;
                arr_25 [i_6] [i_6] [i_6] [i_7] = -1208066604;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_31 [i_5] [i_5] [i_8] [i_5] [i_6] = var_9;
                            arr_32 [i_6] [i_6] = ((var_5 ? 1208066603 : (arr_8 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 2])));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
            {
                arr_36 [i_6] [i_6] [i_6] = var_3;
                arr_37 [i_6] = ((34359738367 ? 113 : -14));
            }
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            var_15 = var_2;
            var_16 = ((6815195178556888131 << (729382195 - 729382145)));
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
        {
            arr_42 [i_12] = ((var_5 >= (-110 >= -1208066625)));
            var_17 = (((arr_9 [i_12] [i_12] [i_5]) || (arr_27 [i_5] [i_5] [8] [8])));

            for (int i_13 = 2; i_13 < 16;i_13 += 1)
            {
                var_18 += var_5;
                var_19 ^= var_2;
                arr_45 [i_5] [i_12] [i_12] [i_5 - 2] = var_9;
                var_20 += var_0;
            }
        }
        var_21 = (max(var_21, (arr_8 [i_5] [i_5] [i_5] [i_5 - 3])));
    }
    for (int i_14 = 3; i_14 < 16;i_14 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 15;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_22 ^= 20749;
                            var_23 *= ((((((arr_16 [i_18]) ? ((2053801304600367069 ? 16392942769109184525 : var_7)) : var_1))) && (((1345175138826751005 ? -729382192 : ((-225079940 ? (arr_29 [i_14] [i_15] [i_18] [i_15] [i_16] [i_18] [i_18]) : 64512)))))));
                        }
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            var_24 = var_2;
                            var_25 = var_5;
                            var_26 = var_3;
                        }
                        var_27 = (arr_61 [i_17] [i_17] [i_16] [i_17]);
                    }
                }
            }
        }
        arr_62 [i_14] = (arr_58 [i_14 - 1] [i_14 - 2] [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 + 1] [i_14 + 1]);
        var_28 = (max(var_28, (((((min((arr_24 [10] [i_14 - 1] [i_14 - 1] [10]), (arr_51 [i_14] [i_14 - 3])))) ? (((!((((arr_56 [i_14 - 2]) ? (arr_56 [i_14]) : var_1)))))) : (arr_26 [i_14] [12] [i_14] [12] [i_14 - 1]))))));
    }
    var_29 = (max(var_29, var_4));
    var_30 ^= var_8;
    var_31 = (max(((var_6 ? 2053801304600367088 : 127)), (max(var_2, var_4))));
    #pragma endscop
}
