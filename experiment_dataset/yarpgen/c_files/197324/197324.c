/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_1, ((max(9223372036854775807, 9223372036854775794)))));
    var_17 = -1;
    var_18 = (min(-var_8, (min(var_14, ((145 ? 62530 : 9223372036854775794))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = var_4;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = (((arr_3 [i_1]) ? var_6 : 125));
            var_20 = (arr_5 [i_0]);
            arr_8 [i_0] [i_0] [i_0] = ((1023 ? ((((!9916) ? (min((arr_5 [12]), 1175458352)) : ((((!(arr_7 [i_0] [i_0] [i_0])))))))) : -9223372036854775806));
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_13 [i_0] [i_0] [i_0] = (min(536739840, 9223372036854775807));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_21 = ((((arr_12 [i_2 - 1] [i_2 - 2]) + 2147483647)) >> (!193));
                var_22 ^= ((~(max((-1 | var_12), (arr_12 [i_3] [i_0])))));
                var_23 = ((((!(((~(arr_2 [i_0])))))) ? ((((arr_14 [i_3] [i_3] [i_2] [i_2 - 2]) ? (arr_14 [i_3] [i_3] [i_2 + 1] [i_2 - 2]) : (arr_14 [i_3] [i_3] [i_3] [i_2 - 2])))) : ((149844155902968603 ? (var_14 & -9223372036854775795) : ((((var_1 + 2147483647) << (188 - 188))))))));
            }
        }
        var_24 ^= (min((((var_10 == (arr_15 [i_0] [i_0] [i_0] [i_0])))), -73));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    arr_22 [i_5 - 1] [i_0] [i_0] [i_0] = (max((((arr_20 [i_0] [i_4] [i_5 + 1]) ? (~-9223372036854775798) : (((min((arr_15 [i_5] [i_5] [i_5 + 1] [i_5]), (arr_7 [i_0] [i_0] [i_0]))))))), (var_3 - -536739841)));
                    arr_23 [i_0] [i_0] [i_0] [i_0] = (((max(121, 1))));
                    arr_24 [i_0] [i_4] [i_0] = 9223372036854775794;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_28 [i_6] = -11;
        arr_29 [i_6] = (arr_3 [i_6]);
        arr_30 [i_6] [0] = arr_25 [i_6];
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        arr_34 [i_7] [i_7] = ((3328870542 ? 3119508944 : 110));
        var_25 = 30734;
    }
    #pragma endscop
}
