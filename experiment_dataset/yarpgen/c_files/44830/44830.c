/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 18446744073709551591;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = 4394;
            arr_6 [2] [i_1] &= 1;
            var_13 = -121;
            var_14 = (max(var_14, -120));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = 123;
            var_15 = 1567400439;

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                arr_12 [i_0] [i_2] [i_3] [i_3] = 65531;
                var_16 = (min(var_16, 1));
            }
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_15 [i_0] [i_0] = 1;
            var_17 ^= 11;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_18 = (min(var_18, -2));

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {

                for (int i_7 = 4; i_7 < 11;i_7 += 1)
                {
                    arr_23 [i_0] [i_0] [i_6] [1] = 126;
                    arr_24 [i_0] [i_0] = 65530;
                    var_19 &= 1;
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_20 = -10;
                    var_21 = -8615076;
                }
                var_22 = 11376701925865133245;
                arr_28 [0] [0] [i_0] [i_5] = -72;
            }

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                arr_32 [i_0] [i_0] [i_0] = 120;

                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    var_23 = (max(var_23, 6206513501661836556));
                    var_24 += 126;
                    arr_35 [i_0] [i_5] [i_5] [i_10] [i_0] [i_0] = 1;
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    arr_40 [10] [i_0] [i_9] [i_0] [i_0] = 1;
                    arr_41 [i_0] [i_5] [i_5] [i_0] [i_11] = -8;
                }
            }
            arr_42 [i_0] [i_5] = 33584;
        }
        var_25 = 29776;
        arr_43 [i_0] = 1;
    }
    var_26 = var_0;
    var_27 = 3695592363;
    #pragma endscop
}
