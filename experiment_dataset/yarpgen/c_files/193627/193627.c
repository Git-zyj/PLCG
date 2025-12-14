/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 15;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_20 = (((arr_4 [i_0 + 1] [i_0] [i_1 + 1]) || (arr_2 [i_4])));
                            var_21 = (~153106701);
                            var_22 += (((~(arr_6 [i_4]))));
                        }
                    }
                }
                var_23 = (arr_8 [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 3]);
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_2] [9] [i_0] = (!var_17);
                            arr_19 [i_0] [i_1] = (var_7 ? (arr_16 [i_0] [i_1 + 4] [i_5 - 1]) : 1);
                            arr_20 [i_0] [i_5] [i_2] [i_1] [i_0] = ((-6370870897929838058 ? 53418 : var_1));
                            var_24 &= (((arr_10 [i_5 + 2] [i_5 + 1] [i_1 - 3] [i_0 + 1] [i_0 + 3] [i_0 + 2]) ? var_9 : (arr_10 [i_5 + 2] [i_5 - 2] [i_1 - 4] [i_0 + 3] [i_0 + 2] [i_0 + 1])));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_23 [i_7] [i_0] [i_0] [i_0] = ((var_16 < (arr_7 [i_0 + 2] [i_1 + 3] [i_7])));

                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    var_25 = (arr_9 [11] [i_8 + 1] [i_8 + 1] [i_0] [i_8 + 2] [i_8 + 3] [i_8 - 1]);
                    var_26 = (arr_21 [i_8] [i_0] [i_8] [i_8 + 2]);
                    var_27 |= (arr_15 [i_0 + 3] [i_1] [i_7] [i_7] [i_8] [7]);
                    var_28 -= ((~(arr_7 [i_8 + 3] [i_1 - 3] [i_0 + 2])));
                }
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    var_29 *= (arr_7 [i_0] [i_1] [i_9]);
                    var_30 += 3142529667;
                    arr_31 [6] [2] &= var_10;
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    arr_35 [i_0] [i_0] [10] [1] [i_0] [i_0] = (arr_30 [i_0] [i_1] [i_11]);

                    for (int i_12 = 4; i_12 < 18;i_12 += 1)
                    {
                        var_31 ^= (-5497186024333002865 < var_10);
                        var_32 = (-62 < 4186766354);
                        var_33 = (min(var_33, ((((((-563486693 ? (arr_9 [i_0] [6] [i_9] [i_11] [i_9] [i_11] [i_11]) : (arr_30 [i_0 - 1] [i_0 - 1] [i_0])))) ? ((var_18 + (arr_26 [13] [i_11]))) : (var_17 || 27481))))));
                    }
                    var_34 = var_2;
                }
                var_35 = (((arr_29 [i_1] [i_1 - 1] [i_1]) ? (arr_12 [i_1] [i_1 - 2] [i_1 - 2] [i_1]) : var_7));
                arr_38 [i_0] [i_0] [i_9] = ((((!(arr_6 [i_0]))) ? var_8 : ((var_12 ? var_8 : var_11))));
                arr_39 [i_0 + 1] [i_0] = ((~(arr_36 [2] [i_0] [i_0] [i_1 + 4])));
            }
            for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    arr_46 [i_0] = ((var_2 || (arr_28 [i_0 + 1] [7] [i_0] [i_13] [i_14] [i_14])));
                    arr_47 [i_0 + 3] [i_0 - 1] [i_0] [i_0] [i_0 - 1] = (((~var_18) ? (1 < 108200941) : -27481));
                    var_36 = (min(var_36, var_10));
                }
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    var_37 = 0;
                    arr_52 [i_0] [12] [i_0] [2] [i_15] = (((arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_1 - 1] [i_1 - 1]) ? var_18 : (arr_9 [i_1 - 1] [i_1] [i_1 - 3] [i_0] [18] [i_1 - 2] [i_1 - 1])));
                    var_38 = ((var_6 + (arr_48 [i_0] [i_15])));
                }
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            arr_58 [i_0] [i_0] = (((((arr_0 [i_0] [i_0]) < var_14)) ? 153106710 : (~var_19)));
                            arr_59 [i_0 + 2] [i_0] [i_13] [i_16] [i_17] = var_2;
                            arr_60 [i_0] [i_16 + 1] [i_13] [1] [i_0] = (arr_49 [i_0 + 1] [i_1] [i_0 + 1] [i_1]);
                            var_39 = ((~(arr_24 [i_0 + 2] [i_17])));
                        }
                    }
                }
            }

            for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
            {
                arr_64 [i_0] [18] [i_18] [i_0] = ((arr_33 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (arr_27 [i_0]) : (~242));
                var_40 = ((var_14 ? 1 : (arr_33 [i_0 + 1] [i_0 + 2] [i_0] [i_1 + 4])));

                for (int i_19 = 1; i_19 < 18;i_19 += 1)
                {
                    var_41 = ((36306 > (arr_21 [i_1 + 2] [i_0] [i_1 - 1] [i_0])));
                    arr_68 [i_0] = -9223372036854775802;
                    arr_69 [i_0] [i_0] [16] &= (((var_8 > var_15) ? (arr_14 [i_0 + 2] [i_1] [i_18] [i_19] [i_0] [i_1 + 1] [i_0]) : ((((arr_34 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]) < var_6)))));
                }
            }
            for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
            {
                var_42 = ((~(arr_8 [i_20] [i_1] [10] [i_0 + 3])));
                arr_73 [i_0] [i_0] [8] [i_0] |= (~var_9);
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 15;i_22 += 1)
                    {
                        {
                            var_43 = var_4;
                            var_44 = (arr_55 [1] [i_20] [i_22 + 2] [i_22 + 3] [1] [i_22] [8]);
                            arr_79 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_13 + ((var_7 ? var_13 : var_14))));
                            var_45 -= (arr_16 [1] [i_1 + 4] [i_1 + 4]);
                        }
                    }
                }
                arr_80 [i_0] = (((arr_12 [i_0 + 1] [i_1] [i_20] [i_1 - 3]) < var_19));
            }
        }
        for (int i_23 = 4; i_23 < 15;i_23 += 1) /* same iter space */
        {
            var_46 ^= (((arr_34 [i_0] [i_0 + 1] [i_23 + 3] [i_23]) || 1));
            var_47 = (arr_41 [i_0 + 1]);
            var_48 = (~((1 ? (arr_24 [i_0] [i_23]) : 1573020483)));
        }
        var_49 = (arr_9 [i_0] [14] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
        arr_83 [i_0] = (~(9 || -389283297));
    }
    var_50 = var_7;
    var_51 = var_4;
    #pragma endscop
}
