/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((10 ? 43491 : -4816475714400883883))) ? (((-4816475714400883883 ^ 22049) / 43497)) : ((((-277351689 == 22044) ? (65518 - var_2) : var_0)))));
    var_17 = 22039;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, 65518));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_19 ^= -var_6;
                            var_20 = -1;
                            arr_14 [i_4] [i_3] [16] [17] [i_1] [i_4] = (~-4816475714400883883);
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_21 = (((((-(arr_9 [i_2 - 1] [i_1] [i_1 - 1])))) ? ((((!(~var_10))))) : ((((((arr_9 [i_0] [0] [i_3]) ? var_6 : var_9))) ? (arr_1 [i_5] [i_0]) : (((arr_3 [i_0] [i_1 - 1] [1]) * 0))))));
                            var_22 = (max(var_22, ((((((1 <= 43496) == 43519)) ? 4 : ((min(17, 1589433073))))))));
                            var_23 += var_12;
                        }
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_24 += (min((!43503), 4294967292));
            arr_20 [3] [i_0] = ((arr_3 [3] [i_6] [i_6]) ^ ((((-7303878980573508699 == (((min(var_6, var_7)))))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_25 = (((arr_7 [i_0] [1] [i_7] [i_7]) ? 22045 : (arr_7 [i_0] [i_7] [i_7] [13])));
            arr_24 [5] [i_0] [i_0] = (255 != 22044);
            var_26 = ((63 ? -261447331 : 65513));

            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                var_27 &= (((arr_10 [i_8] [i_7] [i_0] [i_0] [4]) != (arr_11 [i_0] [i_0] [i_0] [i_8 - 3] [i_8])));
                arr_28 [i_8] [i_8] [i_7] [i_0] = var_2;
                var_28 = (((127 ? 1 : 43505)));
            }
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_29 = (19 % 9223372036854775807);
                            var_30 = (max(var_30, (((~((var_12 ? -32756 : (arr_13 [i_0] [i_7] [i_9] [i_0] [i_0]))))))));
                            var_31 += (arr_19 [i_0] [i_0]);
                        }
                    }
                }
                arr_36 [i_9] [i_7] [i_9] = ((var_15 ? var_14 : (var_3 || 22045)));
                var_32 = (arr_8 [i_9] [i_9 - 1]);
                arr_37 [i_9] [i_9] [20] = ((22033 ? 15 : 525072637));
            }
            for (int i_12 = 2; i_12 < 20;i_12 += 1)
            {
                var_33 = 22052;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_34 = (arr_43 [i_7] [i_12 - 1] [i_13] [i_14]);
                            var_35 = (8 ? (arr_22 [5]) : var_10);
                        }
                    }
                }
            }
        }
        var_36 += (min(((max(var_11, 43487))), var_8));
    }
    for (int i_15 = 1; i_15 < 15;i_15 += 1) /* same iter space */
    {
        var_37 = ((65534 ? 13691286184592319451 : -6281));
        var_38 = (min((((!(arr_18 [i_15 - 1] [i_15 + 2])))), (arr_41 [i_15] [i_15 - 1])));
        var_39 = (arr_1 [i_15] [i_15]);
        var_40 = ((~((-200 ? var_5 : (var_7 & 17)))));
        var_41 = (((((9223372036854775807 < var_12) >> (-5 <= 1))) < (arr_48 [i_15])));
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 15;i_16 += 1) /* same iter space */
    {
        arr_51 [i_16] = (0 << (22062 - 22052));
        var_42 = var_9;
        var_43 = (((var_11 / 64) ^ ((((arr_47 [i_16]) != (arr_1 [i_16] [i_16]))))));
        arr_52 [i_16] = (var_10 * 17);
    }
    #pragma endscop
}
