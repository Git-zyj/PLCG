/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 8058535260620065531;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 &= 0;
            arr_7 [i_0] = 1;
            var_16 = -10;
            var_17 = 1;
            var_18 ^= 70300024700928;
        }

        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            var_19 = 35;
            var_20 = 70300024700949;
        }
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_21 = (max(var_21, 4393751543808));

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            arr_17 [i_4] [i_4] [i_4] = 12915207770046786763;
            arr_18 [i_4] = -70300024700950;
        }
        var_22 &= 29115;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                arr_25 [3] [i_5] [i_6] = -66;
                var_23 += 43;
                var_24 = (max(var_24, -48));
                arr_26 [i_5] [2] &= 523889684;
            }

            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                var_25 = 126;
                var_26 = -70300024700918;
                var_27 = (min(var_27, 47));
            }
            var_28 += 1;
        }
        arr_29 [i_3] = -19;
    }
    var_29 = var_1;
    var_30 = var_12;
    #pragma endscop
}
