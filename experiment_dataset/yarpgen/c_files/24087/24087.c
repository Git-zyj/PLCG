/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [10] [i_1] = ((((var_5 ? 1938589084 : (min(3415432125, var_15))))) * (((((var_19 ? var_6 : -17099))) * (17104 / 4180374306481683816))));
                var_21 = (min(var_21, ((max((var_2 <= var_0), 17099)))));
                arr_6 [i_1] [i_1] = min(2147483647, (((29209 * 0) >> ((((var_10 << (var_7 - 10627430251612931036))) - 32754)))));
            }
        }
    }
    var_22 = (min((((!((min(530186413, 32767)))))), (max(((max(-29210, var_19))), (((-124 + 2147483647) << 0))))));
    var_23 = var_18;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 = (max((min(65535, (max(-162350196, var_18)))), (((var_1 - var_11) ? 52524 : ((max(var_10, 13011)))))));
        arr_9 [14] &= 1;

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_25 *= (max((6762 < var_12), (-920500313 == var_17)));
            arr_12 [i_2] = ((13011 ? ((min(var_11, 80))) : ((((((var_6 ? -732090040 : var_19)) + 2147483647)) >> (6531155513965511002 == var_1)))));
            arr_13 [i_2] = ((-17099 < (min(((min(201, 28837))), (224 * var_11)))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_17 [i_2] [i_2] [i_2] = ((707165186 ? -17099 : var_5));
                var_26 = var_4;
            }
        }
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            var_27 = (max(var_27, ((min((((var_14 % var_13) | (216 == var_17))), ((((var_9 != var_13) - -29216))))))));
            arr_22 [i_2] [1] = (((((134209536 % var_16) - (48179 - var_17))) * 0));
            arr_23 [i_2] [i_2] [i_5] = 1;
        }
        var_28 = 24241;
    }
    #pragma endscop
}
