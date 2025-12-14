/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((var_10 / 15872) - ((90 ? (!78) : ((var_14 ? var_6 : 31569))))));
        var_21 = (min(var_21, var_2));
        var_22 = ((~((max((arr_1 [i_0]), 90)))));
        var_23 = (arr_1 [i_0]);
        var_24 &= ((((min((-931747039 || 101), 49152))) << (((((arr_0 [i_0] [i_0]) ? var_7 : ((49152 ? 166 : 49137)))) - 1068272359))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_25 = ((-(arr_4 [i_1])));
        var_26 &= ((((max(var_3, (arr_3 [i_1])))) / 3181984046669692136));
        var_27 ^= (((min(var_19, var_12))) ? var_6 : var_15);
        var_28 = var_4;
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_29 ^= (((arr_8 [i_2 + 1]) ? -931747057 : 7));
        var_30 = var_16;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_31 = (min(177, 1));
                        var_32 = var_16;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_33 = 18;
                        var_34 = (max((arr_15 [i_4 - 1] [i_2 + 2] [i_2]), var_11));
                        var_35 = var_8;
                    }

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_24 [i_3] [i_4] = 3221645897;
                        var_36 = (-56 < -var_9);
                        var_37 += 16378;
                        var_38 -= -931747029;

                        for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_2] [i_3] [i_4] [1] [i_7] [i_7] [i_8] = (~-53);
                            var_39 = (max(-958797791, 127));
                            var_40 = ((6446578457907176735 ? -101 : -67));
                        }
                        for (int i_9 = 2; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_41 = (min(var_41, 8));
                            var_42 = (((((max(232, var_9))) > 1)));
                            var_43 = (((((8 ? 1 : (arr_15 [i_9 + 2] [i_4 - 1] [4])))) ? 7311977818921200324 : (((1 ? -836092700 : 166)))));
                        }
                        for (int i_10 = 2; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_10] [i_7] [i_4] [i_3] [i_2 - 2] &= (var_17 <= 297562251);
                            var_44 = (max((((!(arr_30 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_2])))), (arr_30 [i_10] [i_10 - 2] [i_10 + 1] [i_10] [i_3])));
                        }
                    }
                }
            }
        }
        var_45 = ((~-1358002394946457652) != ((var_18 ? 1 : (arr_14 [i_2] [i_2]))));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_46 = (min(var_46, (((((var_15 + 1) ? ((max(57491, (arr_36 [i_11])))) : (arr_37 [i_11])))))));
        var_47 &= (9343608116052524497 & 931747039);
    }
    var_48 = var_11;
    #pragma endscop
}
