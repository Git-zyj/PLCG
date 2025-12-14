/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, -var_12));
    var_20 *= (2711027622 < ((~((109 ? var_4 : var_11)))));
    var_21 = 16;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_22 -= ((!(((var_13 ? (arr_1 [2]) : 1594268749)))));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_23 = ((-27942 <= ((((((-1594268763 ? var_1 : (arr_7 [i_0] [i_1] [i_2] [i_2])))) ? (((arr_2 [i_0]) ? -1594268760 : (arr_5 [i_0] [i_1] [i_2]))) : 27949)))));
                var_24 ^= ((((var_8 ? 15 : -4422)) << (((max((arr_0 [i_1]), 4928248603053510913)) - 18446744073291335987))));
            }
        }
        arr_8 [i_0] = ((((min(var_17, ((var_13 ? var_10 : (arr_3 [0])))))) ? -8336788948249472631 : 27951));
        var_25 = (min(var_25, (max(((-27917 ? (~var_0) : (min((arr_6 [i_0] [i_0]), 1022)))), 876238247))));

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_26 = (((arr_1 [i_3]) ? (((arr_5 [i_3 - 2] [i_3 + 1] [i_3 + 1]) ? 5195555634462463572 : (arr_5 [i_3 - 2] [i_3 + 1] [i_3 + 1]))) : var_3));
            arr_12 [i_0] [i_3] = 7;
            var_27 = (min(var_27, (arr_11 [i_0])));
        }
        for (int i_4 = 4; i_4 < 8;i_4 += 1)
        {
            arr_17 [i_0] [i_4] = var_3;
            arr_18 [i_0] [i_4] = (arr_6 [i_0] [i_4]);
            arr_19 [i_4] = 40434;
        }
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        arr_22 [i_5] = ((((64 ? 1021316158 : 2147483631))) ? (arr_21 [i_5]) : (min(-1575583993, (arr_21 [i_5 + 1]))));
        arr_23 [6] |= ((-((-(~var_11)))));
        arr_24 [i_5] = 223;
    }
    #pragma endscop
}
