/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) / -var_16));
        arr_2 [i_0] = 606;
        arr_3 [i_0] = 65532;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_20 = ((-(arr_4 [i_1 - 1] [i_1 - 1])));
        var_21 = (1225650598 ^ 600);
    }
    var_22 = (((min(var_16, var_1)) * var_13));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
        {
            var_23 = (min((max((arr_10 [i_3]), (arr_5 [i_2]))), (arr_8 [i_3 + 1] [i_2])));
            arr_13 [i_3] = 606;
            var_24 ^= (~-102);
            var_25 = (max((min(var_11, ((min(1, (arr_5 [i_2])))))), (((var_1 || (arr_4 [i_3 - 1] [i_3 + 1]))))));
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
        {
            arr_17 [i_2] [i_2] [i_2] |= (((var_1 + 2147483647) << (56297 - 56297)));
            var_26 = (min(var_26, ((max((~64927), (arr_14 [i_2] [i_2] [i_2]))))));
            var_27 = ((~((14 ? 58580 : (arr_0 [i_4])))));
            var_28 |= (((arr_7 [i_4 + 1] [i_4 + 1]) >= (arr_14 [0] [i_4 + 1] [0])));

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_20 [i_2] [i_2] [i_4 + 2] [0] &= (((!(arr_5 [i_4 + 1]))));
                var_29 = (max(var_29, (!10870215141638629063)));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_28 [i_2] [i_2] [i_4 - 1] [i_6] [i_4] [i_7] = (!104);
                    var_30 = (max(var_30, (arr_4 [i_4 + 1] [i_4])));
                }
                var_31 = (((arr_25 [i_6] [i_6] [i_4 + 2] [i_4 - 1]) ? (((max((arr_27 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1]), (!9230))))) : var_7));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_35 [i_2] [i_4] [i_4] [i_4] [i_8] [i_9] = ((!(((4294967295 ? (arr_25 [i_2] [i_2] [i_2] [i_4 + 2]) : (arr_34 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] [i_4 + 2]))))));
                    var_32 = (min(var_32, (((((min((arr_8 [i_2] [i_2]), (arr_9 [i_2])))) ? (65527 <= -8249907256234688843) : (((arr_1 [i_8] [i_4]) ? (~1) : 3621368167982149638)))))));
                    arr_36 [i_2] [i_2] [i_2] [i_2] [i_4] = (1 & -24);
                }
                arr_37 [i_4] [i_8] = (max(-3648549635, ((max((arr_25 [i_2] [i_4] [i_4] [i_8]), (!89))))));
                var_33 -= ((~(((arr_12 [i_2] [i_4 + 2]) / (arr_12 [i_4] [i_4 + 2])))));
                var_34 = ((~(min((arr_18 [i_4] [i_4] [i_4 + 2]), var_8))));
                var_35 = 34948;
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                arr_42 [i_4] = (max((arr_4 [i_4 + 2] [i_2]), -15));
                arr_43 [i_4] [i_2] = (((0 & (arr_5 [i_4 + 1]))));
                var_36 = ((min(-10535, 4294967282)) * 1);
                var_37 = ((12 ? 24075 : 10958892807874734972));
                arr_44 [i_2] [9] [i_4] [i_10] = (min(24075, (((!(arr_29 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
            }
        }
        /* vectorizable */
        for (int i_11 = 3; i_11 < 8;i_11 += 1)
        {
            var_38 -= (arr_31 [i_2] [i_2] [i_11 - 1] [i_2] [i_11 - 2] [i_11]);
            var_39 = (max(var_39, (((3616267392 ? 1 : 98)))));
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_40 = (max(var_40, (~1)));
            var_41 = 64;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    {
                        var_42 = 17689104192646031813;
                        var_43 *= (max((arr_39 [i_2] [i_14] [i_2] [0]), (((arr_9 [i_14]) ? ((((!(arr_54 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))) : (arr_48 [i_12] [i_14])))));
                        var_44 -= var_8;
                        var_45 &= ((-((~(16266294959204318067 >= 2128075714)))));
                        arr_57 [i_2] [i_12] [i_12] [i_13] [i_14] = ((+(((arr_54 [i_2] [i_2] [i_2] [1] [1] [i_14]) / 1225650598))));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            var_46 = (max(var_46, var_2));
            var_47 = 2505060411172140878;
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_48 = (min(var_48, ((2520229779 * (arr_25 [i_2] [i_2] [i_2] [i_2])))));
            arr_64 [i_16] [i_2] = -114;
            var_49 ^= var_10;
        }
    }
    for (int i_17 = 1; i_17 < 18;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 18;i_19 += 1)
            {
                {
                    var_50 = (((-113 ? 18087443925323782812 : -1078147477)));
                    arr_76 [i_17 - 1] [i_17] = (~(((65532 * var_16) ? (min((arr_68 [i_17 + 1] [i_17]), var_10)) : -3)));
                }
            }
        }
        var_51 = 65533;
        arr_77 [i_17] [i_17] = ((!(arr_67 [i_17 + 1])));
    }
    var_52 = (max(var_52, var_18));
    #pragma endscop
}
