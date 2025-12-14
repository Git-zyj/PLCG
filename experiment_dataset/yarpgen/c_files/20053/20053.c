/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = ((((((arr_0 [i_0 - 1]) << (178 - 174)))) ? (((arr_3 [i_0 + 3]) ? -9223372036854775803 : (arr_4 [i_0]))) : ((((arr_6 [i_0] [i_0] [i_1 - 2]) ? (arr_3 [i_0 + 3]) : var_14)))));
                var_17 = (min(1, ((0 ? 21415 : 9223372036854775802))));
                arr_7 [9] [i_0] = (((max(((var_15 ? var_5 : (arr_4 [i_0]))), 18446744073709551615)) ^ (min((arr_4 [i_0]), var_13))));
                var_18 -= (((~2022595243) ? ((((-9223372036854775807 - 1) ? 1488219344 : -9223372036854775803))) : (((((((9223372036854775802 ? (arr_5 [i_1]) : -32763))) && -1))))));
            }
        }
    }
    var_19 = (max((min((max(var_10, 0)), (!12))), var_15));

    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_20 = (min((min(39, (((arr_8 [i_2]) - 2985820129164754625)))), (((!(var_0 | 1496))))));
        arr_10 [i_2] = (min((2147483647 != 37), 1521245141));
        arr_11 [i_2] [i_2] = ((!((min(0, var_9)))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = -44132;
        arr_17 [i_3] = (max((((!(((1729382256910270464 ? 1521245141 : 1)))))), (min((var_15 > -32002), (max(var_14, var_2))))));
        arr_18 [i_3] [13] = var_9;
        var_21 = (min((((var_15 - (arr_15 [i_3])))), (min(var_4, (32762 / -2402003114486059936)))));
    }
    var_22 *= ((var_9 ? var_1 : (!var_1)));
    var_23 = ((((max((~var_1), 2147483647))) ? -9223372036854775803 : -var_4));
    #pragma endscop
}
