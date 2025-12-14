/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 = (((((-29884 ? ((var_6 / (arr_0 [i_0] [i_0]))) : (((-(arr_1 [i_0] [i_0]))))))) ? (((arr_2 [i_0 + 2] [i_0]) << (((max((arr_2 [i_0] [i_0]), var_14)) - 11594325320842090925)))) : (((((!14729132716449318752) <= (((arr_2 [i_0] [7]) % 170))))))));
        arr_3 [i_0] = 0;
        var_17 = ((10561946196396858534 < (9223372036854775807 / 2778350036773232745)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = (((arr_1 [i_1] [5]) ? 3442582599 : (((~(arr_5 [i_1] [3]))))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_2] [4] [i_2] = (3268 * 64);
            arr_9 [i_2] = ((+((-59 ? (arr_4 [i_1]) : (arr_7 [i_2])))));
            arr_10 [i_2] [i_1] [i_2] = ((~(arr_7 [i_2])));
            arr_11 [5] [i_2] [i_1] = 170;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_15 [i_3] [13] = 54;
            var_19 = (min(var_19, (~-4243181237556223308)));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_20 = (min(var_20, (((arr_4 [i_5]) ? (21 && 95) : 122))));
                var_21 = (min(var_21, 979420404));
                var_22 = (((!1) ? (arr_4 [i_5]) : (((arr_21 [i_1] [i_4]) ? 1999631433 : var_14))));
            }

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_24 [i_1] [i_4] [i_6] = arr_12 [i_1] [i_1] [13];
                arr_25 [i_1] [i_4] = 0;
            }
            var_23 = (max(var_23, (arr_18 [i_4] [i_1])));
        }
        var_24 = ((2147483647 ? 3676570068063349802 : 2));
        arr_26 [i_1] [i_1] = var_1;
    }
    var_25 = 1;
    var_26 = (!var_5);
    var_27 = ((5602365767139080644 ? -var_5 : var_13));
    #pragma endscop
}
