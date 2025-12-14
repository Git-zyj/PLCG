/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_14 += ((var_0 ? 119 : var_11));
        var_15 = -5532588987260823002;

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_16 = 0;
            var_17 ^= (~var_5);
            arr_4 [i_0] = (((arr_1 [4]) ? ((0 ? (arr_2 [i_0]) : 126)) : (arr_1 [i_0 + 4])));
        }
        arr_5 [i_0] = (((((-1 ? var_5 : 0))) ? var_9 : -125));

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_18 = (min(var_18, -73));
            var_19 -= (((var_10 - 0) + -81));

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = (((((-14658 ? var_10 : var_1))) ? (arr_0 [i_2 + 1] [i_2 + 1]) : ((((-2147483647 - 1) * (arr_7 [i_2] [i_2]))))));
                var_20 ^= ((var_4 | (arr_8 [i_2] [i_2] [i_2])));
            }
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                var_21 = 0;
                var_22 = 15457375247025951980;
                var_23 = var_2;
                var_24 = (((arr_11 [i_4 + 1] [i_0] [i_0 + 4]) * var_9));
            }
        }
    }
    var_25 &= var_12;
    #pragma endscop
}
