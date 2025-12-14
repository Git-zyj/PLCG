/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_2;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_14 ^= 4294967295;
            var_15 = (arr_4 [i_0 + 1]);
            var_16 = var_6;
            var_17 |= arr_5 [i_0] [15];
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_18 = (((max((max(0, var_8)), (~var_11))) <= (arr_0 [i_0 - 1] [i_0 + 1])));
            var_19 = var_10;
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_20 -= var_5;
            var_21 = (max(((((((var_6 + 9223372036854775807) >> (4294967293 - 4294967293))) <= 4294967295))), (~-8219007491519656291)));
            var_22 = (arr_6 [i_0] [i_0]);
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_13 [i_4] [i_0] = (arr_7 [i_4]);
            arr_14 [i_0] [1] [16] = var_4;
        }
        var_23 = (max(var_23, ((((((max((arr_4 [i_0 + 1]), (arr_12 [i_0]))) - 0)) - -77)))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_24 += var_9;
        var_25 = -0;
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_26 = (var_0 <= 32242);
        arr_19 [0] = ((~(max(443604415, var_11))));
        var_27 = 802978266639880128;
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        var_28 -= ((+(((arr_21 [i_7 + 1] [i_7 + 2]) >> (1776613998 - 1776613995)))));
        var_29 = 48;
    }
    var_30 *= var_6;
    #pragma endscop
}
