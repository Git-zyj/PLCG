/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [12] [12] = (((arr_2 [i_0]) << ((((arr_0 [i_0]) <= (arr_0 [i_0]))))));
        var_14 = (arr_1 [i_0]);
        var_15 = (max(var_15, 208));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_16 = (((max(-24, (!0)))) << (((min((arr_5 [i_1 - 2]), var_5)) + 913714436)));
        var_17 += (((((arr_4 [i_1 - 2]) << 59)) <= ((((((max((arr_6 [i_1] [18]), 0))) <= var_4))))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_18 = (((((-124 + 2147483647) << (((arr_7 [i_1]) - 37))))) ? -9079760992900100459 : (arr_6 [i_1] [i_1 - 1]));
            arr_9 [i_2] [i_1] [i_2] = ((!(((arr_5 [i_1]) <= (max(48, 1125899906842623))))));
            var_19 = arr_5 [i_1 - 2];
            arr_10 [i_2] [i_2] = (((((var_10 <= (arr_4 [i_1 - 1])))) << (((arr_6 [21] [i_2]) - 208))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [13] [i_3] [i_1] |= (arr_12 [i_1 - 2] [i_1 + 1] [i_1 - 2]);
            arr_14 [i_3] [i_1] = (((!18446744073709551609) << (((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 2]) - 588011829))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_20 = (((((arr_16 [i_4] [i_1 + 1]) ? (arr_16 [i_1 + 1] [i_4]) : (-127 - 1))) << (((max(1, 7894580961853467246)) - 7894580961853467242))));
            var_21 = (max(var_21, (arr_7 [i_1])));
            var_22 = (max((max((min(var_11, 0)), (arr_5 [i_4]))), var_0));
        }
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_23 -= 208;
            var_24 = ((((197 << (185 - 185))) <= 2147483647));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    {
                        var_25 &= var_4;
                        arr_28 [i_7] [i_5] [i_7] [i_7] = (2858951488519585175 <= -68);
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            var_26 = (min((((arr_20 [i_5 + 2]) << ((((max(198, 44))) - 194)))), (arr_26 [0] [i_9] [i_9] [14] [i_5])));
            var_27 = var_6;
            arr_32 [i_9] &= ((!(((((((-1845711854 ? -1835992001 : -87)) + 2147483647)) << ((((18446744073709551597 ? 1487579431 : var_0)) - 1487579431)))))));
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            var_28 ^= ((8621795553085787036 ? var_3 : (4294963200 << 16)));
            arr_36 [i_5] = ((40 ? -38 : 254));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_29 = -0;
                            var_30 += 981700035;
                        }
                    }
                }
            }
        }
        for (int i_14 = 1; i_14 < 21;i_14 += 1)
        {
            var_31 = 138;
            var_32 *= (max(-289886972356377638, (max((((arr_4 [i_14 + 1]) << (117 - 55))), -100))));
            var_33 = (min(var_33, 4194303));
        }

        /* vectorizable */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_34 = 255;
            arr_49 [22] [i_5] = -9223372036854775800;
            var_35 = (max(var_35, (((-(arr_25 [i_5 - 2] [i_15]))))));
        }
    }
    var_36 = ((var_9 <= (!var_12)));
    var_37 = 1218990801;
    #pragma endscop
}
