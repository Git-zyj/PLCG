/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] &= 9223372036854775807;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] = -14349;
                        var_13 = 495858285;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_14 = (max(var_14, 24));
                            arr_16 [i_0] = 1;
                        }
                    }
                }
            }
        }
        arr_17 [i_0] = -7007426438869304949;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_20 [6] [6] = 8705;
        arr_21 [i_5] = -7007426438869304949;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {

                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    arr_30 [i_8] = 1328521694;
                    arr_31 [i_6] [i_6] [i_6] = -4908;

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        arr_34 [i_6] [i_7] [i_7] [i_9] [i_7] &= 1;
                        arr_35 [i_7] [i_8] [i_7] [i_6] = 0;
                        var_15 = (max(var_15, 1));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_38 [i_6] = 7007426438869304953;
                        arr_39 [i_6] [i_7] [i_7] [2] [0] [i_10] = 32757;
                        arr_40 [i_6] = 1;
                        arr_41 [10] [i_8] [i_8] [i_8] [3] |= 9223372036854775789;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        arr_45 [i_11] [11] [i_8 + 1] [i_8 + 1] = 29789;
                        arr_46 [i_7] [4] &= -7007426438869304959;
                    }
                    arr_47 [i_6] [i_6] [i_8] = -111;
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    var_16 ^= -29818;
                    var_17 |= -97;
                }
                for (int i_13 = 3; i_13 < 12;i_13 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_61 [i_13] = 176;
                                arr_62 [i_13] = 7396966457489104304;
                                arr_63 [i_6 - 1] [i_7] [i_13] [i_13] [10] = -8542008889738965190;
                            }
                        }
                    }
                    arr_64 [i_13] = -7007426438869304959;
                }
                for (int i_16 = 3; i_16 < 12;i_16 += 1) /* same iter space */
                {
                    arr_68 [i_6] = 65529;
                    var_18 ^= 5;
                }
                arr_69 [i_6] [i_6] = -1118173753;
                arr_70 [i_7] = 21199;
            }
        }
    }
    var_19 = -7396966457489104306;
    #pragma endscop
}
