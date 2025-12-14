/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_14);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (var_2 + (min((var_8 | var_14), -14460)));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_1] = (9810669169021787422 + var_10);
            arr_8 [i_1] = (2147483633 ^ ((((var_9 ? var_10 : 0)))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = 2605187693653798455;

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_14 [i_3] = ((!(arr_4 [i_3] [i_2])));
                arr_15 [i_0] [i_2] [i_0] = min((arr_6 [i_0] [i_3]), (max((arr_10 [i_0]), (!14459))));
                arr_16 [i_2] [1] = 0;

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_20 [i_2] = -14460;
                    arr_21 [i_4] = (max((max(18446744073709551615, 14460)), var_6));
                    arr_22 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = 1715497317;

                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        arr_26 [i_5] [i_2] = ((var_2 ? (!var_14) : 224));
                        arr_27 [8] [4] [i_3] [8] [i_3] = ((var_14 >> (min(1, 18446744073709551609))));
                    }
                    arr_28 [i_0] [i_2] [i_3] [i_3] [2] [i_3] = (((((0 ? 14451 : 1200250184))) <= ((919238419 ? 18446744073709551609 : 132))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_31 [i_0] [i_0] [i_0] [i_0] = ((var_0 - (((((arr_23 [i_6] [i_3] [i_2] [8] [0]) >= var_3))))));
                    arr_32 [i_6] [i_2] [i_2] [i_0] = (min((((var_7 ? -225 : 0))), 1427867503));
                    arr_33 [i_3] [4] [i_3] [i_0] = ((min(((var_5 ? -1 : 2827049168958302439), var_7))));
                    arr_34 [i_0] = ((((max(1629136575, 14459))) ? ((var_0 | (min(666356356, var_13)))) : (14465 > 123)));
                    arr_35 [i_0] [i_6] [i_3] [i_6] [i_2] = (!var_8);
                }
                for (int i_7 = 3; i_7 < 7;i_7 += 1)
                {
                    arr_40 [i_3] [i_7] [0] [i_2] [0] [i_3] = (((((0 ? var_10 : -14465))) && 0));
                    arr_41 [i_7] [i_7] = ((((1075169239 ? 16384 : var_8))) ? ((max(-14424, var_14))) : var_2);
                }
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_44 [7] [7] [i_8] [i_8] = (max((((!((min((arr_17 [i_2] [i_2]), -81)))))), ((-((248 ? 1020 : var_11))))));
                arr_45 [5] [i_8] [i_0] = var_7;
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_56 [i_9] = ((var_7 && (!0)));
                        arr_57 [i_0] [6] [6] [0] &= (-1075169240 != 0);
                    }
                }
            }

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                arr_60 [i_9] [i_9] [i_9] [i_9] = 1;
                arr_61 [i_0] [i_9] [1] [1] = var_0;
                arr_62 [i_0] [5] |= (var_11 + 234);
            }
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            arr_66 [i_0] = (-127 - 1);
            arr_67 [i_13] [i_13] = ((10189378712377936575 << (27515 - 27508)));
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            arr_72 [i_15] &= var_5;
            arr_73 [i_15] = (((6 && var_1) ? (max(1, ((var_5 ? var_13 : (arr_59 [i_15] [i_15] [7] [i_14]))))) : var_11));
            arr_74 [i_15] [i_15] = (((-(max(var_9, (-9223372036854775807 - 1))))));
        }
        arr_75 [i_14] [i_14] = (max(var_13, 131071));
        arr_76 [i_14] = ((1 >= (min(-12071, (max(525292654, 0))))));
    }
    #pragma endscop
}
