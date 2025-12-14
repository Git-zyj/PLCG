/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = var_10;
            var_17 = 10370917951988763863;
            var_18 = var_5;
            var_19 = ((3395628170 << (-5898200534489464974 - 12548543539220086627)));
            var_20 = 673750530;
        }
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_21 = var_13;
                        var_22 = 15161;
                        var_23 = 12872510051092132412;
                        var_24 = (min(var_24, (92 & 18446744073709551615)));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_4] [i_5] = (15168 ^ var_9);
                            var_25 = 12872510051092132412;
                        }
                        for (int i_6 = 4; i_6 < 7;i_6 += 1)
                        {
                            var_26 = 1959634720;
                            var_27 = (min(var_27, 935695520));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_28 = (max(var_28, var_2));
                            var_29 = (max(var_29, 15161));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_22 [i_2] [i_2 + 1] [i_3] [i_4] [i_4] [i_8] = (16777215 / 518518516);
                            var_30 = var_6;
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_31 = max(12872510051092132408, (max(var_0, var_14)));
        var_32 = (-32767 - 1);
    }
    var_33 = var_13;
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 9;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 9;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 8;i_14 += 1)
                        {
                            {
                                var_34 = (min(var_34, var_14));
                                arr_39 [i_10] [i_10] [i_11] [i_10] [i_10] = (var_8 % var_7);
                            }
                        }
                    }
                    arr_40 [i_11] = -731880067980126785;
                    var_35 = (min(var_35, var_6));
                    var_36 = (max(-6566569155616302410, var_12));
                }
            }
        }
    }
    var_37 = var_6;
    #pragma endscop
}
