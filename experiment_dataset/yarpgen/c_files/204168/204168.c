/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(var_18, (((min(8087408518581544880, var_13)) << (((!13455894277605069701) ? var_4 : 0))))));
        arr_4 [i_0] = arr_2 [i_0] [i_0];
        arr_5 [i_0] = arr_0 [i_0];
    }

    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_19 = ((!((((arr_2 [i_1 + 1] [i_1 + 1]) - var_5)))));
        arr_9 [6] |= (min((!var_8), 4986034463796954751));
        var_20 = arr_6 [i_1];
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3] = arr_13 [i_2] [8] [i_2];

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_23 [i_2] [i_3] [i_2] [i_2] [i_6] [i_6] = (2 < var_13);
                            arr_24 [i_2] [i_2] [i_4] [i_5] [i_6] = (((max(var_2, (arr_21 [0] [i_3] [i_4] [i_5] [i_5])))) ? ((~(((arr_7 [i_2]) ? 4990849796104481914 : var_11)))) : (~var_0));
                            var_21 = (min(var_21, (min(((~(arr_3 [i_2] [i_2]))), (14053344453128565021 | 5277124162892050564)))));
                            arr_25 [i_2] [8] [i_3] [i_3] [i_4] [i_2] [i_6] = var_2;
                        }
                        arr_26 [i_2] [i_3] [i_3] [i_3] = min((arr_13 [i_2] [i_3] [i_4]), (((!10918905551829862939) ? var_15 : (var_1 != var_16))));
                    }
                    for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_22 = (0 ? 8087408518581544880 : 860503053379093086);
                        var_23 = ((18446744073709551603 ? var_7 : (min(0, 18446744073709551612))));
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_24 = ((((var_14 ? var_8 : var_9))) % (min(((var_3 ? var_13 : (arr_10 [i_2]))), ((var_12 ? var_1 : (arr_29 [i_3] [i_3] [i_3] [i_8 - 3] [i_2] [i_2]))))));
                        arr_32 [i_2] [15] [i_2] [i_4] [i_4] [i_8 - 3] = ((((arr_29 [i_2] [i_2] [i_4] [i_8] [i_8 + 2] [8]) + 14)) << (((~var_17) - 8392602442136239881)));

                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_25 = (((((arr_2 [i_9 + 2] [i_9 - 1]) ? 12570194764041341046 : (arr_2 [i_9 + 1] [i_9 + 1]))) > 6770892252236745664));
                            arr_36 [i_2] [i_3] [i_4] [i_2] [i_9 + 2] = var_16;
                            var_26 = ((!(arr_21 [3] [i_3] [i_4] [i_8] [i_9 + 1])));
                        }
                    }
                }
            }
        }
        arr_37 [i_2] = (+(((arr_28 [i_2] [i_2]) & (arr_28 [i_2] [i_2]))));
        var_27 = min(((((!(arr_16 [i_2] [i_2]))) ? (var_16 || var_15) : -var_5)), (((var_13 ? 8106299210914090967 : var_5))));
        var_28 &= var_15;
    }

    for (int i_10 = 2; i_10 < 9;i_10 += 1)
    {
        arr_41 [i_10] = (((9805649967439875489 == 18446744073709551615) > (((var_14 & (arr_21 [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 2]))))));

        for (int i_11 = 3; i_11 < 6;i_11 += 1)
        {
            var_29 *= arr_33 [i_10] [i_10] [i_10] [i_11] [i_11] [i_11];
            var_30 = (max(var_30, ((~(max(18446744073709551615, 10119820218575950641))))));
            arr_44 [i_10] [i_10] [i_10] = ((var_0 && 1) ? (((min((var_17 && var_13), (((arr_2 [i_10] [i_11 + 2]) && 12013496510670506380)))))) : 2);
        }
        var_31 = arr_7 [i_10];
        var_32 = (var_8 ^ (~613576320060363867));
    }
    #pragma endscop
}
