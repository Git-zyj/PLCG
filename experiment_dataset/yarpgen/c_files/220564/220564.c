/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_10 |= (((arr_2 [i_0 + 3] [i_0]) ? -11672 : 255));
        var_11 = (((arr_3 [i_0 + 3]) ? (arr_3 [i_0 + 2]) : 16515));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 -= 222;
                    arr_11 [i_0] [i_1] [i_1 + 1] [i_2] = 1;
                    var_13 ^= (96 ? -96 : (~57344));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                {
                    arr_20 [i_3 - 4] [1] = 104;
                    var_14 += (((((arr_14 [i_3 - 4] [i_3 - 4]) ? (min((arr_7 [i_3]), -2271723018789102677)) : (((-96 ? (arr_19 [i_3 - 4] [i_3 - 4] [i_4] [i_5]) : (arr_18 [i_3 + 1]))))))) ? (((((18446744073709551604 ? 29526 : 11648))) ? (arr_13 [i_5 - 1]) : 8191)) : (((11672 ? 255 : ((96 ? -30048 : 4072264849))))));
                    arr_21 [i_3] [i_4 - 2] [i_5] = ((-6490777780204061417 ? (min(57344, 174)) : (((arr_12 [i_3] [i_5 + 1]) ? (arr_15 [i_4 - 2] [i_4] [i_4]) : (~11672)))));
                    var_15 = 2097152;
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 8;i_8 += 1)
                {
                    {
                        var_16 += (!14);
                        var_17 = -0;
                    }
                }
            }

            for (int i_9 = 3; i_9 < 7;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_18 &= 32767;
                            var_19 = (((arr_34 [i_6 - 1] [i_3 - 1] [i_3 + 1] [i_3]) ? (arr_34 [i_6 - 1] [i_3 - 3] [i_3] [i_3]) : 65519));
                            var_20 = 3415450852;
                        }
                    }
                }
                var_21 = (min(var_21, (((!(arr_27 [i_3 - 4]))))));
                arr_38 [i_9] = (!-91);
                arr_39 [i_3] [i_6 - 2] [i_6 - 2] [i_9] = (((43135 >> 0) ? -6 : -11672));
            }
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 8;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 9;i_14 += 1)
                    {
                        {
                            arr_48 [4] [i_3] [i_3] [i_3] &= ((-47 ? 393216 : (arr_8 [i_3 - 1] [i_3 - 3])));
                            var_22 = arr_7 [i_14];
                        }
                    }
                }
                var_23 = (1 % -2);
                var_24 = (min(var_24, -2));
                var_25 = ((-(arr_19 [i_3] [i_6 - 2] [i_3 + 1] [i_3])));
            }
        }
        var_26 = ((0 ? (max((~222702455), (!135))) : ((+(((arr_33 [i_3 - 2] [i_3 + 1]) ? 4294959104 : 2669))))));
        arr_49 [i_3 - 2] [i_3] = (((((~(arr_7 [i_3 + 1])))) ? ((8186 ? (arr_7 [i_3 - 3]) : (arr_7 [i_3 - 1]))) : ((-(arr_7 [i_3 + 1])))));
    }
    var_27 = (~var_6);
    #pragma endscop
}
