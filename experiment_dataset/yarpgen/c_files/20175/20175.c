/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [8] = (min(7330983797631195247, -1630499105));
        var_21 = (min(var_21, 122));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_22 = 2443912885;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [6] [i_4] [i_3] [i_4] [i_1] &= 59;
                                var_23 = (min(var_23, 15));
                                var_24 ^= 123;
                            }
                        }
                    }
                    arr_17 [i_3] [i_2] = 4000235816;
                }
            }
        }

        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            arr_21 [i_6] [i_6] [i_1] = 1;
            arr_22 [i_6] [i_6] = 76;
            arr_23 [i_1] [i_6] [i_6] = 9;
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            var_25 = 1008;
            arr_26 [i_1] [i_1] [i_1] &= 199;
        }
        arr_27 [i_1] [i_1 - 1] = -214761514727307541;
    }
    var_26 -= var_6;

    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        arr_31 [i_8] = 294731488;

        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_40 [1] [1] [i_10] [i_11] [i_11] [i_9 + 1] = (max((min((max(-8745, 4000235813)), 415349515)), ((max(-415349512, -1034824578)))));
                        var_27 &= 0;
                    }
                }
            }
            var_28 = (max(var_28, 1));
            var_29 *= 3659006577;
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_30 = 2031958807;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_48 [i_8] [i_8] [12] [1] &= 0;
                        var_31 -= 2031958806;
                    }
                }
            }
            arr_49 [i_12] [i_12] = 294731476;
        }

        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_32 = 4004787771;
            var_33 = (max(var_33, ((min((max(9223372036854775807, 4547933784160516482)), ((max(13, 294731503))))))));
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 10;i_18 += 1)
                    {
                        {
                            arr_61 [0] [i_15] [i_16 + 1] [i_16 + 1] [i_18] [i_18] [i_17] |= (min((max(6734562056097657601, 106)), 194));
                            arr_62 [1] [i_16] [i_16 - 3] [i_16] [i_8] = 1091108296;
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            var_34 = (min(var_34, 73));
            arr_67 [i_8] [i_19] [i_19] = min(-4096, -4096);
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            var_35 ^= -9751;
            arr_70 [i_8 + 3] [4] &= -321926096;
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 13;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 14;i_23 += 1)
                        {
                            arr_80 [i_21] [i_20] [4] [i_21] [i_20] [i_21] = -43;
                            var_36 = 19;
                        }
                        for (int i_24 = 0; i_24 < 14;i_24 += 1)
                        {
                            arr_83 [i_24] [i_22] [i_20] [i_20] [i_8 + 2] = 1073739776;
                            var_37 = (min(var_37, 444841593));
                            arr_84 [i_8] [i_8] [i_20] [i_8] [i_20] = 243;
                            arr_85 [i_8] [i_21] [i_20] [i_24] = 50;
                        }
                        var_38 ^= 74;
                        var_39 = 222;
                        var_40 = 161;
                    }
                }
            }
        }
    }
    var_41 = 3;
    #pragma endscop
}
