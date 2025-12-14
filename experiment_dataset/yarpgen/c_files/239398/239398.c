/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= -var_3;
        var_10 = 15816454805805824981;
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_11 = (((-32767 - 1) > ((((((var_6 ? var_5 : 1))) || (8240537488442955374 || 32768))))));
        var_12 = (((((min(7469506709557884751, 6687)) * var_4)) | (var_5 / -5866973617670047109)));
        var_13 = (min(var_13, (((((((9223372036854775807 ? var_3 : 1))) ? 6 : (32768 && var_8)))))));
        var_14 = (!(~var_6));
    }
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        arr_9 [i_2 - 1] [i_2] = 32766;
        arr_10 [i_2] [i_2] = (min((((var_0 ? var_0 : var_5))), (((~var_2) ? var_3 : (1 && var_9)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_14 [21] [i_3] = var_4;
        var_15 = ((~(var_0 | 16383)));
        var_16 = (!(!var_5));
        var_17 = var_8;
        arr_15 [i_3] = var_3;
    }
    var_18 = var_1;
    var_19 = (((((32767 ? ((var_5 ? (-2147483647 - 1) : 1)) : 32769))) ? (~0) : -1));
    #pragma endscop
}
