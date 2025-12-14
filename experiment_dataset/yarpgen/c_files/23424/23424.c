/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] = var_14;

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                arr_8 [i_0] = var_15;
                arr_9 [i_0] [i_0] [i_2] [i_1] = -8225870935728777483;
                arr_10 [i_0] = var_0;
            }
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] = var_11;
            arr_14 [i_0] [i_0] [i_0] = var_2;
            arr_15 [i_0] [i_3] [i_0] = var_12;
        }
        arr_16 [i_0] = var_9;
        arr_17 [i_0] = -111;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_23 [i_5] = var_9;
            arr_24 [i_4] [i_5] = var_4;
            arr_25 [i_5] [i_4] = 4159986725;
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_28 [i_6] [i_4] |= var_9;
            arr_29 [i_4] [i_4] = var_0;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_38 [i_8] = var_0;
                            arr_39 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = var_0;
                            arr_40 [i_4] [i_4] [i_7] [i_8 - 1] [i_8 - 1] = var_9;
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_43 [i_4] [i_4] [3] [i_8] [i_10] [i_4] = var_14;
                            arr_44 [i_10] [i_8 - 1] [i_7] [i_6] [i_4] = 523264;
                        }
                        arr_45 [i_8 - 1] [i_7] [i_4] = var_4;
                    }
                }
            }
        }
        arr_46 [i_4] = var_7;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
    {
        arr_49 [i_11] = 2147483647;
        arr_50 [i_11] = 98;

        for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
        {
            arr_54 [i_12] [i_12] [i_12] = var_7;
            arr_55 [i_11] [i_11] [i_11] = var_4;

            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {

                for (int i_14 = 1; i_14 < 8;i_14 += 1)
                {
                    arr_61 [i_11] [8] [i_13] = 134980555;
                    arr_62 [i_14] [i_11] [i_11] = var_4;
                }
                arr_63 [i_11] [i_11] = var_7;
                arr_64 [7] [i_11] [7] = var_15;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        {
                            arr_71 [i_11] [i_16] [i_16] [i_11] [i_16] [7] = 134980599;
                            arr_72 [i_16] [i_12] [i_15] [i_13] [i_12] [i_12] [i_11] = 28148;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_79 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = var_8;
                            arr_80 [i_11] [i_12] [i_12] [i_13] [i_17] [i_18] = 1;
                            arr_81 [i_18] [i_13] [i_12] [i_11] = var_4;
                            arr_82 [i_11] [i_11] [i_11] [i_11] [i_11] = var_9;
                        }
                    }
                }
            }
            arr_83 [i_11] [i_11] = 36877;
        }
        for (int i_19 = 3; i_19 < 9;i_19 += 1) /* same iter space */
        {
            arr_87 [i_19] = 4159986721;
            arr_88 [i_11] [i_19 - 2] [i_19] = var_15;
            arr_89 [i_19] = var_7;
        }

        for (int i_20 = 0; i_20 < 10;i_20 += 1)
        {
            arr_93 [i_20] = 1;
            arr_94 [i_11] = 134980560;
            arr_95 [i_11] = 4952755230490826283;
            arr_96 [i_11] [0] [i_20] = 1;
        }
        for (int i_21 = 1; i_21 < 9;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
            {
                arr_101 [i_21] [i_21] [i_22] [i_21] = var_3;
                arr_102 [i_11] [i_21] [7] [i_11] = var_11;
            }
            for (int i_23 = 0; i_23 < 10;i_23 += 1) /* same iter space */
            {
                arr_105 [i_21] [i_21] [i_21] [i_21] = 580422976;
                arr_106 [i_23] [i_21] [i_21] [i_11] = -60;
                arr_107 [i_11] [i_21] [i_23] [i_21] = var_12;
            }

            for (int i_24 = 0; i_24 < 10;i_24 += 1)
            {
                arr_110 [6] [i_21] [i_24] = var_15;
                arr_111 [i_21] [i_21] [i_21] = var_10;

                for (int i_25 = 0; i_25 < 10;i_25 += 1)
                {
                    arr_116 [8] [i_24] [8] = 1;
                    arr_117 [i_11] [i_21] = 55400;
                }

                for (int i_26 = 2; i_26 < 6;i_26 += 1) /* same iter space */
                {
                    arr_122 [i_21] [i_21] = var_5;

                    for (int i_27 = 0; i_27 < 10;i_27 += 1)
                    {
                        arr_125 [i_11] [i_21 - 1] [i_21] [i_24] [i_27] [i_27] = var_7;
                        arr_126 [i_11] [i_11] [i_21] [i_11] [i_11] = var_8;
                        arr_127 [i_11] [i_21 - 1] [i_24] [i_26] [i_21] = 134980599;
                    }
                    arr_128 [i_21] [i_21] [i_21 - 1] [i_21] [i_21] [i_21] = var_2;
                    arr_129 [i_11] [4] [i_24] [1] = 134980571;
                }
                for (int i_28 = 2; i_28 < 6;i_28 += 1) /* same iter space */
                {
                    arr_132 [i_21] [i_21] [i_21] = var_8;

                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        arr_136 [i_11] [i_21] [i_24] [i_21] [i_29] = var_11;
                        arr_137 [i_21] [i_21] [i_21] = var_0;
                    }
                    arr_138 [i_11] [i_28] [i_21] = 8192;
                }
                for (int i_30 = 2; i_30 < 6;i_30 += 1) /* same iter space */
                {
                    arr_142 [i_11] [i_11] [i_11] [i_21] [i_11] [i_11] = var_14;
                    arr_143 [i_21] [i_24] = 1771434965;
                    arr_144 [i_21] = var_9;
                    arr_145 [i_11] [4] [i_24] [i_30] |= 1;
                }
            }
        }
        arr_146 [i_11] = 10078643205448908843;
    }
    var_16 = var_6;
    var_17 = 110;
    /* LoopNest 2 */
    for (int i_31 = 1; i_31 < 15;i_31 += 1)
    {
        for (int i_32 = 0; i_32 < 1;i_32 += 1)
        {
            {

                for (int i_33 = 0; i_33 < 16;i_33 += 1)
                {
                    arr_155 [i_31] [i_32] [7] = var_14;
                    arr_156 [i_31] [i_32] [i_33] = 56824;
                }
                for (int i_34 = 0; i_34 < 16;i_34 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_35 = 0; i_35 < 16;i_35 += 1)
                    {
                        for (int i_36 = 0; i_36 < 16;i_36 += 1)
                        {
                            {
                                arr_165 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35] [i_35] = var_12;
                                arr_166 [i_31] [i_32] [i_34] [i_34] [i_35] [i_36] = 4;
                            }
                        }
                    }
                    arr_167 [i_31] = 91;

                    /* vectorizable */
                    for (int i_37 = 0; i_37 < 16;i_37 += 1)
                    {
                        arr_171 [i_31] [i_32] [i_32] [i_32] [i_32] [i_37] = var_9;

                        for (int i_38 = 4; i_38 < 14;i_38 += 1)
                        {
                            arr_174 [i_38] [i_37] [i_37] [i_31 - 1] [i_31 - 1] [i_31 - 1] [i_31 - 1] = var_5;
                            arr_175 [i_38] [i_31] [i_37] [i_37] [i_32] [i_32] [i_31] &= var_12;
                        }
                        for (int i_39 = 0; i_39 < 16;i_39 += 1)
                        {
                            arr_179 [i_31] [i_32] [i_34] [i_37] [i_39] [i_32] = var_8;
                            arr_180 [i_31] [i_31] [i_31 - 1] = 9;
                            arr_181 [i_39] = 1;
                        }
                        for (int i_40 = 0; i_40 < 16;i_40 += 1)
                        {
                            arr_186 [i_31] [i_32] [i_34] [i_34] [i_34] [i_34] [i_31] = var_8;
                            arr_187 [i_31] [i_32] [i_34] [i_40] = (-127 - 1);
                        }
                        arr_188 [i_31] [i_31] [i_37] [i_34] = var_9;
                        arr_189 [i_31 + 1] [i_32] [i_32] [i_31 + 1] = 4159986696;
                        arr_190 [i_31] = var_13;
                    }
                }
                /* vectorizable */
                for (int i_41 = 0; i_41 < 16;i_41 += 1) /* same iter space */
                {
                    arr_193 [i_31] [i_32] [i_32] [i_32] = var_0;
                    /* LoopNest 2 */
                    for (int i_42 = 0; i_42 < 16;i_42 += 1)
                    {
                        for (int i_43 = 3; i_43 < 12;i_43 += 1)
                        {
                            {
                                arr_200 [i_32] [i_32] [i_41] [i_43] [i_43] = 134980583;
                                arr_201 [i_43] [i_43] = 9378344435013870128;
                            }
                        }
                    }
                    arr_202 [i_41] [i_32] [i_31] = var_0;
                    arr_203 [i_31] [i_32] [i_41] [i_41] = 1;
                }
                for (int i_44 = 0; i_44 < 16;i_44 += 1) /* same iter space */
                {
                    arr_206 [i_31] [i_31] [i_31] [i_31] &= var_6;
                    arr_207 [i_31 + 1] [i_32] [i_44] [i_44] = 2835145654;
                    arr_208 [i_31] [i_31 - 1] [i_32] [i_44] = 3117570331746613457;
                }
                arr_209 [i_32] [i_31 - 1] = 1060935426;
            }
        }
    }
    #pragma endscop
}
