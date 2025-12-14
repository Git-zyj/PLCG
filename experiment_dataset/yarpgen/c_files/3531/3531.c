/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = 12563837195527004700;

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_18 = 5882906878182546916;
            var_19 = (min(var_19, (((max((122 && 5882906878182546942), -1806464658))))));
            var_20 ^= ((~(min(5882906878182546915, 0))));
        }
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            var_21 = (((arr_5 [i_2 - 3] [i_2 - 3]) ? -21 : (((min((arr_7 [i_2]), 104)) / (max(55, 12563837195527004692))))));
            arr_9 [i_0] [8] = (arr_0 [i_2]);
        }
        var_22 = (arr_1 [i_0] [2]);
    }
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        arr_14 [i_3] = (arr_1 [i_3] [i_3]);
        var_23 = (max(var_23, (((!(1 || 12563837195527004700))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] [1] = 12563837195527004675;
        var_24 = (((((((107 ? (arr_13 [7] [i_4]) : 0))) ? (max(1109049206249798945, 127)) : 131071)) % 18446744073709551614));
    }
    var_25 = var_6;
    var_26 += 18446744073709551590;
    #pragma endscop
}
