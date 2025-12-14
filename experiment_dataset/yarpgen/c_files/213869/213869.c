/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = -var_13;
        var_18 = (max(var_18, ((min(680744865, (min(-680744869, 32765)))))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
            {
                var_19 = (!var_7);
                arr_9 [i_0] [i_0] [i_1] = ((-(((var_4 <= ((680744865 ? (arr_0 [3]) : var_11)))))));
                var_20 = ((~(((var_2 || (2128662735 / -72))))));
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_21 = 0;
                    var_22 = (min(var_22, (((var_5 >> (-8959 + 8967))))));
                    var_23 = (min(var_23, ((-(max(-1, ((max(249, var_8)))))))));
                    var_24 = ((var_12 ? 236 : (arr_1 [i_1] [0])));
                    arr_14 [i_0] [i_1] [i_3] = (max((650951931 * -680744865), ((min(-680744860, -72)))));
                }
                var_25 = (min(var_25, (((!((((-7009993638291016097 / 1) | 220))))))));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_26 = ((var_2 ? ((max(-21731, (arr_7 [i_1] [i_1 + 2] [i_1])))) : -2119419205));
                var_27 ^= ((-(-5172158836078503116 && var_12)));
                var_28 ^= 7263029985617813306;
                var_29 = ((4161803921 == ((((min(var_14, var_15)))))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_30 = 2128662735;

                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    var_31 |= 18;
                    var_32 = (min(var_32, (((2128662722 ? (-2147483647 - 1) : 1)))));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_23 [i_0] [14] [i_6] [i_6] &= 680744861;

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_33 = (-2147483647 - 1);
                        arr_28 [i_0] [i_1] [i_6] [21] [i_9] = 50;
                        var_34 = 237;
                        arr_29 [5] [i_1] [i_6] [15] [17] [4] = var_11;
                    }
                    arr_30 [15] [i_1] [i_6] [20] = ((-2128662758 * ((var_2 ? var_15 : var_4))));
                }
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_35 = (max(var_35, var_1));
                        var_36 = (min(var_36, (680744873 && -62)));
                        var_37 ^= -0;
                        arr_39 [5] [i_1] [i_6] [i_6] [15] = (var_1 / 4096);
                    }
                    for (int i_12 = 3; i_12 < 21;i_12 += 1)
                    {
                        arr_42 [i_1] [i_1] [19] [3] [12] = 237;
                        var_38 &= var_8;
                        arr_43 [i_12] [19] [i_1] [i_1] [0] [3] = 0;
                        var_39 = 64653;
                    }
                    var_40 += (3 <= var_4);
                    arr_44 [i_1] [i_6] [i_1] = 5172158836078503115;
                }
            }
            var_41 = (min(120, var_5));

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_42 ^= (!18);
                            var_43 ^= var_14;
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    arr_55 [i_1] [14] = var_1;
                    arr_56 [i_1] [i_1] = max(((-(255 >> 1))), (-28571 % 250));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    var_44 -= (~(arr_25 [i_1 + 2] [i_0] [i_1 + 2] [i_1 + 2] [i_1 - 1]));
                    var_45 = 1553638894;
                }
            }
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                var_46 |= ((8565274938155956707 ? 3782231446572010323 : ((((-6908516255975850181 && ((((arr_4 [i_0] [16]) + var_15)))))))));
                var_47 = (max(-var_10, var_13));
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                arr_64 [i_1] = (min((1 >= var_7), 28672));
                var_48 |= (var_5 / ((max(19646, var_8))));
                var_49 ^= (((((min(var_4, (arr_51 [i_0] [i_0] [i_1] [1] [i_19]))) * 109)) / (((max(109, (max((arr_4 [i_0] [i_1]), (arr_16 [i_0] [i_1 - 1] [i_19] [0])))))))));
                arr_65 [i_1] = var_3;
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        {
                            arr_73 [i_0] [1] [i_1] [i_0] [i_0] [i_0] = ((~(-1037863559 != 109)));
                            arr_74 [i_0] [1] [i_19] [i_0] [10] [i_0] |= (56 | var_0);
                            var_50 = var_2;
                        }
                    }
                }
            }
            var_51 = -32505856;

            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                arr_77 [i_1] [i_1] [18] [i_0] = ((var_14 ? (var_8 == 50876) : ((min(93, (arr_20 [14] [4] [i_1] [i_0]))))));
                arr_78 [13] [i_1] [i_22] = 1;
                var_52 = (min(((min((-32767 - 1), var_3))), 28672));
                var_53 = var_10;
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        {
                            var_54 += 949942639;
                            arr_84 [i_1] [i_22] [i_1] = (max(2576425367, 134));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_25 = 0; i_25 < 22;i_25 += 1)
            {
                var_55 = (((-680744870 + 2147483647) << (((-5172158836078503093 && -1553638889) - 1))));
                var_56 = var_2;
            }
        }
    }
    var_57 = var_3;
    var_58 = ((-5125091311867892574 ? var_16 : 240));
    #pragma endscop
}
