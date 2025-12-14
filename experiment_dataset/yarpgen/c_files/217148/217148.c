/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 = (min(var_13, ((min(18446744073709551615, 85)))));
        arr_3 [2] |= max(((max(12988, 12988))), (min(6619999899248759930, 4884872321005974817)));
        var_14 = (min(52547, (max(13792966910554840092, 65535))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_15 = (min(var_15, 57943));
        arr_6 [i_1] = 22395;
        var_16 = (min(var_16, 241));
        var_17 = 59052;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        var_18 = (min(var_18, 4884872321005974817));
        var_19 ^= 12988;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_20 = (min(var_20, ((min(((max(22769, (arr_8 [i_3])))), (max(var_3, (arr_8 [i_3]))))))));
        var_21 -= min(((min(161126699, (arr_8 [i_3])))), (min((arr_1 [10]), var_11)));
        var_22 += (min(63087, (max(-32752, 349011926))));
        var_23 ^= (min(((max((arr_2 [i_3]), 0))), (min(12077, (arr_2 [i_3])))));
    }
    #pragma endscop
}
