/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (!96);

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_0] = var_12;

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_10 [i_2] [i_0] = (!6581);
                var_14 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                var_15 += (max(6023, (arr_6 [2] [i_1 + 1])));
                arr_11 [i_0] [i_1] [i_0] [i_2] = ((max((arr_8 [i_0] [i_1 + 1] [i_2] [i_0]), 565964245)));
            }
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            arr_14 [i_0] [i_0] = var_10;
            arr_15 [i_0] = (arr_12 [i_0] [i_0]);
            var_16 ^= -2100114460;
            var_17 |= var_13;
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_18 -= 13022;
            var_19 = (max(var_19, (arr_5 [i_0] [i_4 + 2] [i_4 - 1])));
        }
        var_20 = (min((((arr_6 [i_0] [13]) ? (arr_17 [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0]))), (!59499)));
    }
    var_21 += (!-13025);
    #pragma endscop
}
