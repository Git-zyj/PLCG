/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((+-61440) ? var_9 : var_15));
    var_17 = var_0;
    var_18 *= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            var_19 = (min(var_19, -2684877635931934454));
            var_20 = (4095 ? 191 : 4294967280);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = ((61440 ? 48 : 2133));
            var_22 = ((-5292655098612269206 != ((var_10 ? var_10 : -166863020622980555))));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_23 = ((-5980482852537923450 ? 547047142 : var_1));
                var_24 -= (164 ^ 40);
                var_25 = (max(var_25, 61441));
                var_26 = (!57);
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_27 ^= (!63403);
                var_28 = (max(var_28, var_0));
            }
            var_29 = var_1;
        }
        var_30 ^= ((var_12 ? var_12 : 11183));
        arr_13 [6] &= var_10;
        var_31 += 8;
        arr_14 [i_0] [i_0] = (~-10);
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = ((!((min((-9223372036854775807 - 1), var_2)))));
        var_32 ^= 238972734;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_33 ^= (var_8 / -3525202930177649732);
                        var_34 = (min(var_34, -32349));
                    }
                }
            }
        }
        var_35 = (min(var_35, (((var_8 <= (!3055794677))))));
        var_36 = ((((-34 ? var_8 : (arr_25 [i_6] [i_6] [i_6] [i_6]))) ^ (((var_7 ? var_15 : var_14)))));

        for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_37 = (max(var_37, var_1));

            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                arr_37 [i_6] &= ((-var_14 ? var_11 : var_13));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_38 = -547047170;
                            var_39 = (max(var_39, var_7));
                        }
                    }
                }
                var_40 = (max(var_40, var_13));
                arr_44 [i_6] [i_11] [i_11] = 3738104194;

                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_41 -= (((arr_23 [8] [i_10 + 1]) && (4436566698999039052 > -43)));

                    for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
                    {
                        var_42 ^= ((2040 ? var_6 : var_5));
                        arr_52 [i_15] [i_10 + 1] [10] [i_11] = (((arr_30 [17] [i_6] [i_10 - 1] [i_14] [0] [2]) ? (arr_42 [i_6] [1] [i_10 + 1] [i_14] [i_15]) : var_8));
                        var_43 *= (!43907);
                    }
                    for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
                    {
                        arr_56 [i_6] [i_6] [i_11] [i_14] [i_16] = var_12;
                        arr_57 [i_6] [i_10] [i_10] [i_10] [i_16] = (arr_49 [i_16] [i_6]);
                    }
                }
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    arr_62 [i_6] [7] [i_11] [i_17] [i_6] [17] = ((-((1 ? 556863102 : 168))));
                    arr_63 [i_17] [i_10 + 1] [i_11] [i_11] = ((-((11810725931699989946 ? var_10 : var_3))));
                    var_44 = (max(var_44, (-var_9 ^ var_9)));
                }
            }
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                var_45 *= 28202;
                var_46 ^= (((arr_47 [i_6] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_6]) ^ var_1));
                var_47 -= 61440;
                arr_68 [21] = 159;
            }
            arr_69 [i_6] = (!var_14);
            var_48 = (max(var_48, var_5));
            var_49 = (2132352376 % 547047142);
        }
        for (int i_19 = 1; i_19 < 24;i_19 += 1) /* same iter space */
        {
            arr_74 [i_19] = (var_1 <= 5292655098612269199);

            for (int i_20 = 1; i_20 < 24;i_20 += 1)
            {
                var_50 = ((5160634090538512937 ? (arr_70 [i_19] [i_19 - 1] [i_19]) : 0));
                arr_77 [4] [i_19] [i_20 - 1] [i_19] &= (112 <= 56);
                var_51 = (arr_49 [i_19 - 1] [i_20 + 1]);
            }
            for (int i_21 = 2; i_21 < 24;i_21 += 1)
            {
                arr_82 [i_19] [i_19] [i_19] = 4674139251225896712;
                arr_83 [i_19] [i_21 + 1] [9] [i_19] = -var_13;
                arr_84 [i_19] = (((4811300626691037643 & 9) ? var_2 : ((231 ? -2213141726068384912 : 2305843009213693952))));
                var_52 = var_9;
                var_53 = (max(var_53, (0 % var_11)));
            }
            arr_85 [i_19] = (-21929 ? 262140 : var_7);
        }
    }
    #pragma endscop
}
