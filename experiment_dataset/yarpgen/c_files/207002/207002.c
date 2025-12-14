/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_13 = (-2147483647 - 1);

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_14 = (min(var_14, -var_11));
                    var_15 = 1;
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_0] = ((~(~65535)));
                    var_16 = ((var_8 ? var_4 : var_7));

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_2] = -1;
                        arr_18 [i_5 - 1] [i_1] [i_2] [i_2] [i_0] = 17278;
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_1 - 1] [i_6] = 1;
                        arr_22 [i_2] = (((~var_9) ? 3053508718 : var_10));
                        var_17 &= 268435328;
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_18 += (~28);
                        arr_26 [i_0] [1] [1] [15] [i_2] = var_6;
                        var_19 = (min(var_19, var_9));
                        arr_27 [i_0] [i_0] [i_0] = ((!(!-994745755)));
                        var_20 |= (!var_4);
                    }
                }
                var_21 = 17267;
            }
        }
        var_22 = ((-var_10 ? (~var_12) : var_1));
        arr_28 [i_0] |= (~1);
        var_23 &= (!var_4);
        arr_29 [i_0] = 268435328;
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {

        for (int i_9 = 4; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_24 = (max(var_24, var_9));
            arr_36 [i_9 - 1] [i_9 - 1] [i_8] |= var_1;
        }
        for (int i_10 = 4; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_41 [i_8] [15] = ((~((1543603676 ? 1 : var_0))));
            var_25 = (max(var_25, 1));
            arr_42 [i_8] [i_10] [i_10] = 17278;
            arr_43 [i_8] = (~3584);
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {

                        for (int i_14 = 1; i_14 < 16;i_14 += 1)
                        {
                            arr_53 [i_11] [i_12] [i_11] [i_11] [5] [i_11] [i_11] = 0;
                            arr_54 [i_8] [i_11] [i_12] = -121;
                        }
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            var_26 -= 4503595332403200;
                            arr_58 [i_12] [i_11] [7] [i_11] [i_11] [i_11] = var_7;
                        }

                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            var_27 = (min(var_27, var_11));
                            arr_62 [i_8] [i_11] [i_12] [i_12] [i_12] = ((var_10 ? (((116 ? 3034628097 : 123))) : ((var_10 ? var_2 : var_5))));
                            var_28 &= 123;
                            var_29 *= 23877;
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_30 = (min(var_30, var_6));
                            var_31 &= (((((2491543882 ? var_0 : 12681663158518539279))) ? var_12 : var_1));
                            var_32 = (~23);
                            var_33 = var_11;
                        }
                        var_34 = (~var_4);
                        var_35 = (min(var_35, (~994745751)));
                        var_36 = 12681663158518539262;
                    }
                }
            }
        }
    }
    for (int i_18 = 1; i_18 < 19;i_18 += 1)
    {
        var_37 = (min(var_37, var_11));
        var_38 = 4194176;
    }
    for (int i_19 = 0; i_19 < 20;i_19 += 1)
    {
        var_39 = var_0;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                {
                    var_40 *= (~5765080915191012339);
                    arr_76 [i_19] [i_20] [i_19] = var_1;

                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        var_41 = (min(var_41, (!var_11)));
                        var_42 = (min(var_42, 61943));
                    }
                    /* vectorizable */
                    for (int i_23 = 1; i_23 < 16;i_23 += 1)
                    {
                        var_43 = (min(var_43, ((-var_8 ? -881998720432171871 : 137592052))));
                        var_44 = (min(var_44, (((2522082146 ? var_10 : var_7)))));
                        var_45 = (min(var_45, 24095));
                        var_46 = (max(var_46, -var_6));
                    }
                    for (int i_24 = 4; i_24 < 18;i_24 += 1) /* same iter space */
                    {
                        arr_84 [i_19] [14] [4] [i_21] &= 2714996401;
                        arr_85 [i_19] [i_20] [8] [i_19] [1] = -7286;
                    }
                    for (int i_25 = 4; i_25 < 18;i_25 += 1) /* same iter space */
                    {

                        for (int i_26 = 3; i_26 < 19;i_26 += 1)
                        {
                            arr_91 [i_19] [i_20] [i_19] [i_21] [i_20] [i_19] [i_21] = var_10;
                            var_47 = (max(var_47, (~-var_9)));
                        }
                        for (int i_27 = 0; i_27 < 20;i_27 += 1)
                        {
                            var_48 = var_11;
                            arr_94 [i_25] [i_20] = var_6;
                            var_49 += 1;
                            var_50 = (max(var_50, 0));
                        }
                        /* vectorizable */
                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            var_51 = -var_3;
                            var_52 = (max(var_52, var_8));
                            arr_99 [i_19] [i_19] [i_20] [i_21] [i_25] [4] [i_20] = (11412767642079886891 ? 1282430568061146814 : 1410759130);
                            arr_100 [i_21] [2] [i_21] [i_28] [i_21] |= ((!(~var_10)));
                        }

                        /* vectorizable */
                        for (int i_29 = 1; i_29 < 1;i_29 += 1)
                        {
                            arr_103 [i_19] [i_20] [i_19] [i_19] [i_29] = 1455263125;
                            var_53 = (7286 ? (!-53) : var_10);
                        }
                        for (int i_30 = 0; i_30 < 20;i_30 += 1)
                        {
                            var_54 *= 225;
                            var_55 = -141801555409263502;
                            arr_106 [i_25] [i_20] [i_19] = (-1 ? 8175 : var_7);
                        }
                        var_56 += var_10;
                        arr_107 [i_20] [4] [i_20] [i_20] = -53;
                    }
                }
            }
        }

        for (int i_31 = 3; i_31 < 16;i_31 += 1)
        {
            arr_110 [i_31] [i_31] = -1282430568061146826;
            var_57 = 5765080915191012337;
            var_58 = ((~(~var_9)));
        }
        for (int i_32 = 2; i_32 < 18;i_32 += 1)
        {

            for (int i_33 = 1; i_33 < 19;i_33 += 1)
            {

                for (int i_34 = 0; i_34 < 20;i_34 += 1)
                {
                    var_59 = (min(var_59, (~21)));
                    var_60 = (((((-57 ? -53 : 60273))) ? (((!(~27)))) : ((-1 ? (~1455263117) : var_8))));
                }
                /* vectorizable */
                for (int i_35 = 0; i_35 < 0;i_35 += 1)
                {
                    var_61 = 28672;
                    var_62 = (min(var_62, (((var_3 ? 4286578688 : (~var_9))))));
                    var_63 = (max(var_63, (~var_7)));
                }
                for (int i_36 = 0; i_36 < 20;i_36 += 1)
                {
                    var_64 = (max(var_64, var_0));
                    var_65 = (min(var_65, -var_11));
                }
                /* vectorizable */
                for (int i_37 = 0; i_37 < 1;i_37 += 1)
                {
                    var_66 = (min(var_66, 57361));
                    var_67 = (max(var_67, 3597));
                    arr_128 [17] [i_32] [i_33] [i_32] = var_7;
                }
                arr_129 [i_32] = var_7;
                /* LoopNest 2 */
                for (int i_38 = 2; i_38 < 17;i_38 += 1)
                {
                    for (int i_39 = 3; i_39 < 18;i_39 += 1)
                    {
                        {
                            var_68 = (~8283620021334138400);
                            var_69 = 4294967293;
                            arr_137 [i_19] [i_32] [4] [19] [i_33] [4] [i_39] = 65512;
                            var_70 = (max(var_70, 1200220811));
                        }
                    }
                }
            }
            for (int i_40 = 0; i_40 < 20;i_40 += 1)
            {
                arr_140 [i_32] [i_32 + 1] [i_32 + 1] = ((!((((!52646) ? (!var_5) : 52627)))));
                var_71 = var_8;
                var_72 = 58099;

                for (int i_41 = 1; i_41 < 18;i_41 += 1)
                {
                    var_73 = (min(var_73, (((-9223372036854775803 ? ((-(!var_6))) : 15480)))));

                    for (int i_42 = 4; i_42 < 16;i_42 += 1)
                    {
                        var_74 = (!var_3);
                        var_75 -= 52651;
                        var_76 ^= (!var_10);
                    }
                    /* vectorizable */
                    for (int i_43 = 0; i_43 < 20;i_43 += 1)
                    {
                        arr_150 [16] [i_32] [13] [16] [8] [i_32] = -18;
                        var_77 -= var_2;
                        arr_151 [i_19] [i_32] [i_41 + 2] [i_32] [19] = var_5;
                        var_78 = (max(var_78, ((((!3) ? 119 : var_9)))));
                    }
                    for (int i_44 = 0; i_44 < 20;i_44 += 1)
                    {
                        arr_156 [i_19] [i_32] [8] [i_44] = (~var_2);
                        var_79 = 19946;
                        arr_157 [i_44] [i_32] [i_32] [i_19] = ((6 ? ((-5 ? 2235777823818167828 : -2006363246)) : (-2147483647 - 1)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_45 = 0; i_45 < 20;i_45 += 1)
            {
                for (int i_46 = 0; i_46 < 20;i_46 += 1)
                {
                    {
                        var_80 = var_5;

                        for (int i_47 = 2; i_47 < 19;i_47 += 1)
                        {
                            arr_166 [i_19] [i_32] [i_32] [i_19] [i_47] = 32767;
                            arr_167 [i_19] [i_32] [5] [i_46] [i_47 - 2] [i_32] [i_45] = var_5;
                            var_81 = (min(var_81, var_2));
                        }
                    }
                }
            }
        }
    }
    var_82 = var_7;
    var_83 = var_8;
    #pragma endscop
}
