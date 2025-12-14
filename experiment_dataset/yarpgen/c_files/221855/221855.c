/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 186;

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_18 = (arr_2 [2] [i_0]);
        arr_3 [i_0] = (arr_1 [i_0]);
        var_19 = (max(var_19, (3 >= -80)));
        arr_4 [1] [7] = ((1 ? 1 : 1));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] = (min((22083 || 146), -95));
            arr_8 [i_0] [i_0] = max((var_7 < 1), var_4);
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_20 = (min((((-((32767 ? var_11 : 1))))), (min(-6, (max(126, (arr_2 [i_2] [i_0])))))));
            var_21 = ((~(~var_15)));
            var_22 = var_5;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_18 [i_4] = (min((-54 * 83), ((((-9223372036854775801 * (arr_11 [2] [i_2] [8] [8]))) | (((max((arr_11 [i_4] [1] [i_2] [i_0]), (arr_13 [i_4] [i_4] [i_4] [i_4])))))))));
                        var_23 -= ((var_14 ? (!var_6) : var_7));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                arr_23 [i_5] [i_5] [i_0] = var_16;
                arr_24 [2] [i_2] [i_0] |= ((~((((max((arr_0 [i_0] [i_0]), var_12))) ? -1371826842176161438 : -1371826842176161447))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_27 [i_0] [i_6] = (((arr_5 [i_0 - 2] [i_0 - 4]) > (arr_5 [i_0 - 2] [i_0 + 1])));
                var_24 = -32;
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_32 [i_7] [i_2] [i_0] = (0 * 9223372036854775801);

                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    var_25 = var_8;
                    var_26 = ((((arr_34 [i_8 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1]) >= (arr_34 [i_8 + 2] [i_0 - 2] [i_0 - 4] [i_0 - 1]))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_27 = 4222204996370774314;
                    arr_39 [i_0 - 2] [i_0] [i_0] = (!var_11);
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_28 |= (arr_5 [i_0 - 4] [i_0 - 3]);
                    var_29 -= ((!((((arr_40 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 4] [i_0 - 4]) ? var_7 : (arr_40 [i_0] [i_0 - 4] [5] [i_7] [i_10]))))));
                    var_30 |= ((!(((min(839979612002151196, (arr_34 [1] [i_2] [4] [1])))))));
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        var_31 = ((min(var_0, (max(-108, -1371826842176161438)))) - -32);
        var_32 = (max(((((arr_43 [i_11] [i_11]) & (arr_43 [i_11] [i_11])))), (min(var_15, -13))));

        /* vectorizable */
        for (int i_12 = 4; i_12 < 13;i_12 += 1)
        {
            var_33 += (-31 < 109);
            var_34 = 1491689987764572391;
            var_35 = ((var_11 ? 13109 : (arr_46 [i_12 - 1] [i_11 - 1])));
            var_36 -= ((~(arr_43 [i_11] [i_11])));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_37 = (max(var_37, (arr_43 [i_11] [i_11])));
            arr_51 [i_13] = 236;
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_38 += (arr_45 [i_11]);
            var_39 = ((-17 ? var_3 : var_13));
        }
    }
    #pragma endscop
}
