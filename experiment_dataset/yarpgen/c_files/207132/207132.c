/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_11 = ((((-14021 ? 0 : 112)) < (((arr_0 [i_0]) | ((max(62, 1922152589)))))));
        arr_2 [i_0 + 1] = (min(1737822155, 1804172295));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = ((((max(((max(var_2, 14040))), 14020))) ? ((min(21246, ((4547445301632087400 ? 1 : 4093491601))))) : (((((arr_3 [16]) && var_7)) ? 2490794985 : (var_5 + -116)))));
        var_12 = (((((1018705989 ? ((4098577363 ? -84170368 : 18446744073709551615)) : (arr_4 [i_1] [i_1])))) ? ((6386744993020823728 ? (arr_4 [i_1] [i_1]) : 1426494810)) : (((((((arr_3 [10]) ? (arr_3 [18]) : -1)) < 0))))));
    }
    var_13 = (max(((max(((1737822170 << (14982 - 14982))), ((56 ? 199 : -45))))), var_8));
    #pragma endscop
}
