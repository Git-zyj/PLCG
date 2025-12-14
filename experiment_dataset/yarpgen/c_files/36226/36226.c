/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(--30720)));
    var_13 &= (((3491 | ((max(1, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = ((!((min(42536, 0)))));
                                var_15 = (((min(1, 224))));
                                var_16 = (min(var_16, (((-(95 * 0))))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] [0] &= ((min(1, (min(20346, 228)))));
                var_17 = ((224 ? (var_3 + var_7) : 1));

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_15 [i_0] [i_0] [i_1] [i_5] = (max(-1, var_3));

                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_6 - 2] [i_5] &= ((-32752 + ((36956 ? 224 : 1))));
                        var_18 += ((+(min(var_7, (((arr_9 [i_0] [i_0] [i_1] [i_5] [6]) ? (arr_16 [i_0] [i_1] [i_5] [i_6] [i_6]) : var_8))))));
                        var_19 = 3670016;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_20 += (arr_2 [i_0] [i_5]);
                                var_21 = 8128;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((min(((((-118 && -7650) >= 2034801369))), (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                                var_23 = 56827;
                                var_24 = ((((max((arr_11 [i_0] [i_1] [i_5] [i_9 - 1] [i_10]), var_9))) ? -2471 : (min((arr_11 [i_0] [i_1] [i_5] [i_9 + 2] [i_10]), (arr_11 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0] [i_0])))));
                            }
                        }
                    }
                }
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    var_25 = (max(((((-29589 % 32767) >= 2034801360))), (((max(212, (arr_0 [i_0])))))));
                    var_26 = (~-0);
                    arr_35 [i_0] [i_1] [i_1] = 2147483647;
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_40 [i_0] [i_1] = var_10;
                            arr_41 [i_0] [i_1] [i_0] = (~(1 ^ -2));
                            arr_42 [i_0] [i_0] [i_13] [i_13] [i_13] |= ((65527 >> (182 - 160)));
                            arr_43 [i_13] [i_0] [i_0] [i_0 + 1] = (((((168 ? var_6 : var_8))) && (((var_6 ? (arr_2 [i_1] [i_1]) : (arr_32 [i_0] [i_0] [i_12] [i_12 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = var_9;
    var_28 = (min(var_9, var_5));
    #pragma endscop
}
