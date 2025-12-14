/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((max(-32474, 9678368)));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        var_11 = -244;
        var_12 = (arr_1 [8]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = (max(var_13, (arr_3 [i_1] [i_1])));
        var_14 |= 24625;
        var_15 = arr_4 [i_1] [i_1];
        var_16 = (max(var_16, (((max((arr_4 [i_1] [i_1]), (arr_3 [i_1] [i_1]))) << (((min((arr_3 [i_1] [i_1]), var_8)) - 478274808))))));
        arr_5 [i_1] [i_1] = ((((-24627 && (arr_4 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (max((~-22781), ((-((-(arr_1 [i_2])))))));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_13 [i_2] = (min((min((arr_0 [i_2]), var_7)), ((min(-24646, 50)))));
            var_17 = (24645 ^ 156);
            arr_14 [i_2] [i_2] = (~var_0);
            arr_15 [i_2] [i_2] = var_9;
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_18 += (-20540 * 9878);
            arr_18 [i_2] = (max((max((max(var_6, (arr_9 [i_4]))), ((((arr_1 [i_2]) | (arr_3 [i_2] [i_4])))))), ((~(min(var_3, var_6))))));
            var_19 = (arr_3 [i_2] [i_2]);
        }
        var_20 = (arr_7 [i_2]);
    }
    #pragma endscop
}
