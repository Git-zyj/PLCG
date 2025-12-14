/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_3;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_21 = (max(var_21, (((var_15 ? 150 : 51912)))));

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_22 = var_10;
            var_23 = (min(var_23, ((48567 ? (var_16 <= var_3) : (max(11093982851655644453, 16896163805446896620))))));
            var_24 = (var_16 + 48567);
            arr_8 [i_0] [2] [11] = -2147483645;
            arr_9 [i_0] = (var_17 / 34917);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_25 = (max(var_25, 2147483647));
            arr_12 [i_2] = var_17;
            var_26 = 48570;
            arr_13 [i_0] [i_2] [i_2] = (min((max(var_5, 2017207844)), (((127 << (var_9 - 43553))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_27 = var_4;
                arr_19 [i_0] [6] [i_0] [i_3] = (29505 - 17454747090944);
                var_28 = (min(var_28, (5150 != 1)));
                var_29 = (min(var_29, (7581892145969067840 & var_14)));
                var_30 = var_14;
            }
            var_31 -= var_11;
            var_32 -= (var_9 / 5796827555512171598);
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_33 = ((12724758335459264291 ? 3440370706442894158 : 2147483647));
            var_34 = (min(var_34, (42205 + var_4)));
            arr_22 [i_0] = (-7868055606761707583 <= var_1);
            var_35 = (232 - 0);
            var_36 = (((4448 - var_5) ? 40874 : ((0 ? var_16 : 9223372036854775807))));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 24;i_7 += 1)
            {
                var_37 *= (962195325988743614 & 15647442085175648310);
                var_38 = var_1;
                var_39 += min(2891947277, 4529);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_40 = (min(var_40, 18));
                            var_41 = (min((var_9 | var_15), ((2889797371 ? 4529 : 3))));
                            var_42 = var_17;
                        }
                    }
                }
                arr_33 [i_7] [i_6] [i_6] = (((-8 & 26561) ? ((13869713532098911431 ? 3309312262 : 1)) : ((max(-101, var_19)))));
            }
            arr_34 [i_0] [i_0] [i_0] = var_10;
        }
        for (int i_10 = 3; i_10 < 24;i_10 += 1)
        {
            arr_37 [i_0] [i_0] [i_10] = 4189;
            var_43 = ((8135120332069953997 ? 18446744073709551612 : 3570220467));
            var_44 = ((((((-3038663784043814014 ? -29178 : 106)) + 2147483647)) >> (((max(var_9, var_16)) - 16884571989470847248))));
        }
        var_45 = (((var_5 > 1920) & ((-115 ? (-32767 - 1) : 4174995786))));
    }
    var_46 = (min(var_46, 99));
    var_47 = var_19;
    var_48 = (min(var_48, var_18));
    #pragma endscop
}
