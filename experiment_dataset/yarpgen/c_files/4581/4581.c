/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((((137 ? 1 : 0))) ? var_15 : ((-1 ? 21 : 576460752303423487))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_17 = (min(var_17, -14));
            arr_4 [i_0] [i_0] [i_0] = 1;
            var_18 = (max(var_18, (((!((((arr_3 [i_1] [i_1 - 3]) ? (arr_3 [i_0] [i_1 - 3]) : var_6))))))));
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_19 = (~1);
            var_20 = (max(var_20, (arr_2 [i_2 - 2])));
            arr_8 [i_2] = (((((((var_2 ? 4096 : (arr_3 [i_0] [i_2 - 1])))) ? (((var_4 ? 1 : (arr_1 [i_2 - 1])))) : ((1 ? 2369 : (arr_0 [i_0]))))) > (max(9561680012348447293, ((min(var_8, 28)))))));
            var_21 -= ((((~(arr_3 [i_0] [i_2 - 3]))) ^ ((min((arr_6 [i_2 + 1] [i_0]), var_8)))));
            var_22 = ((~(arr_0 [i_0])));
        }
        arr_9 [i_0] = (min(((0 ? (arr_2 [i_0]) : (arr_1 [i_0]))), (1 << 1)));
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_23 = (max(var_23, (((((var_9 * (arr_10 [i_4 + 1]))) / (((var_1 * 0) ? (13 / 6988492825633249629) : 32767)))))));
            var_24 = (min(((max((arr_13 [i_4] [i_3]), (arr_12 [i_3] [i_3] [i_4 + 3])))), 2096128));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_25 -= (arr_14 [i_3] [i_5] [i_5] [i_3]);
                            var_26 -= 2707687012;
                            var_27 = (arr_15 [i_3] [i_6] [i_7]);
                            var_28 = (min((((5303052864456029009 ? 833249732 : 32353))), ((-(((arr_18 [i_4]) ? (arr_11 [i_3] [i_7]) : 11717929750387454877))))));
                        }
                    }
                }
            }
            var_29 = 2138365520;
        }
        arr_21 [i_3] [i_3] = var_2;
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        arr_26 [i_8 + 1] [i_8] = (((((4294967295 ? (arr_25 [i_8 - 3] [i_8 - 3]) : var_9)) < (((var_5 ? (arr_24 [10]) : (arr_20 [i_8 - 2] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
        arr_27 [i_8] = (min((max((arr_16 [i_8 - 3] [i_8] [i_8]), (arr_18 [i_8]))), (arr_13 [i_8] [i_8 - 2])));
        var_30 = (((arr_22 [i_8]) ? (((min((max((arr_24 [i_8 + 1]), (arr_13 [i_8] [i_8]))), 7)))) : (~10774759036150253660)));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_31 = (arr_15 [i_9] [i_9] [i_9]);
        var_32 = (((arr_14 [i_9] [2] [i_9] [16]) ? (!var_13) : (!18014398509416448)));
        arr_30 [i_9] = (!1);
        var_33 = (((arr_16 [i_9] [0] [12]) ? ((18446744073709551615 ? 12531645672333514071 : 1)) : var_11));
    }
    var_34 *= -1;
    var_35 = ((-var_12 >= (~var_8)));
    #pragma endscop
}
