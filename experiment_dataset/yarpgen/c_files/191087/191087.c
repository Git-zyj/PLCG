/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((~1417) ? var_0 : (((~var_6) ? (max(var_4, var_1)) : (((16706 ? 255 : 16678)))))));
    var_12 = ((var_9 ? (((var_4 ? -16698 : (-2147483647 - 1)))) : 38));
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 += var_0;
        var_15 = (((((10111 ? (arr_1 [i_0]) : 18446744073709551589))) ? (arr_1 [i_0]) : ((-4011374341 ? var_8 : 8184))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        var_16 = -var_7;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = var_3;
        arr_8 [i_1] = var_3;
        arr_9 [i_1] [8] &= ((((((27950 ^ var_9) ? (min(10092, 12)) : (((~(arr_1 [i_1]))))))) ? (((82 | (arr_6 [i_1])))) : ((((var_10 ? (arr_0 [i_1]) : 18446744073709551615)) >> (((~10389532294074070932) - 8057211779635480623))))));
    }
    var_18 &= 1;
    #pragma endscop
}
