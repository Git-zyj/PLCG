/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_10 = (min(var_10, (arr_2 [i_0 + 2])));
        var_11 = (min(((((min(var_9, (arr_0 [i_0] [i_0])))) & ((max((arr_2 [i_0]), 37412))))), (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_2] [i_0] [i_0 - 2]));
                    arr_9 [i_0] [i_0] = (((max(((1205 ? (arr_3 [i_0] [i_1] [i_0]) : 37412)), ((((arr_1 [i_1]) || var_8))))) < (min(378507354, (((16652 ? var_8 : (arr_5 [i_0] [i_0] [i_0]))))))));
                }
            }
        }
        arr_10 [i_0] = ((((min((-16649 + 16652), var_8))) ? var_7 : (max((2173407357 + 37412), (((29015 ? (arr_8 [i_0] [i_0] [i_0]) : var_0)))))));
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        var_13 = ((-(max(((32728 ? (arr_11 [i_3]) : var_7)), (min((arr_11 [i_3 - 1]), (arr_12 [i_3 - 1])))))));
        arr_13 [i_3] [13] = 693807651044487715;
        var_14 = ((((!(arr_11 [i_3])))));
        var_15 = 1;
        arr_14 [3] = ((((((!(arr_11 [i_3]))) ? 1178 : (var_7 == 16831568360235688631))) >> (var_5 - 19570)));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_16 *= ((((((arr_16 [i_4]) | (((arr_12 [i_4]) * (arr_16 [i_4])))))) ? ((max((max(1, 16652)), (min(var_3, -29016))))) : 3));
        arr_19 [i_4] [i_4] = (max(((~(max(var_4, -55)))), (((((((arr_11 [i_4]) ? 1 : 88))) ? ((((arr_12 [i_4]) < (arr_15 [i_4])))) : (arr_12 [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_17 = ((20488 != (arr_12 [i_5])));
        var_18 = (var_7 % 1);
        var_19 = (arr_17 [i_5]);
        var_20 -= (arr_22 [i_5]);
    }
    var_21 = ((~(max((max(var_5, 18252772983978388541)), (((var_2 ? var_4 : 65529)))))));
    #pragma endscop
}
