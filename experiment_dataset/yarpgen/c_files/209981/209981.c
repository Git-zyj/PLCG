/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = (max(var_19, (0 + 30511)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] |= ((((min(20016, 1))) != ((((arr_4 [i_0] [i_0] [i_2 + 1] [i_3]) > (arr_4 [i_0] [i_1] [i_2 - 2] [i_3]))))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_3] |= ((((((arr_6 [i_2 + 3] [i_1] [i_2 + 1]) / (arr_6 [i_2 + 3] [i_1] [9])))) ? 20035 : 1957613879149117811));
                            arr_14 [i_0] [i_1] [7] [i_3] [i_0] = 1;
                            var_20 = (min(((~(arr_2 [i_0]))), 1258095211065332638));
                            var_21 &= ((+(min((arr_11 [i_3] [i_2 - 3] [i_2 + 2] [i_2 - 1]), (!var_7)))));
                        }
                    }
                }
            }
        }
        var_22 = -32752;
        var_23 ^= (max((arr_7 [i_0] [i_0]), (~-144)));
        arr_15 [i_0] = (((((var_12 ? var_9 : (arr_3 [i_0]))) != (((((arr_3 [i_0]) != var_6)))))));
        var_24 = ((~(((!((min((arr_2 [i_0]), (arr_0 [i_0])))))))));
    }
    for (int i_5 = 2; i_5 < 7;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            var_25 += ((-((14868 | (!var_0)))));
            arr_21 [i_6 + 1] [i_6] = ((((((arr_19 [i_6] [i_6]) / (arr_19 [i_6] [i_6])))) ? (arr_19 [i_6] [i_6]) : (arr_19 [i_6] [i_6])));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 7;i_10 += 1)
                    {
                        {
                            var_26 = ((~(arr_0 [i_8])));
                            arr_37 [i_10 + 3] [i_9] [i_8] [i_7] [i_5 + 3] = (arr_20 [1]);
                            var_27 = (32748 ? 0 : 1256212379754493170);
                            var_28 = (~(arr_5 [i_8] [i_7] [i_5 + 1]));
                        }
                    }
                }
            }
            var_29 = (min(var_29, (((!((!(arr_31 [i_5] [i_5 + 2] [i_7] [8]))))))));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_30 = (min(var_30, (arr_2 [i_5])));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_31 = arr_20 [i_11];
                        arr_45 [i_5 + 2] [i_11] = (1 % -20016);
                        arr_46 [i_5] [i_5] [i_5] [i_5 - 2] [i_5 + 2] [1] = (arr_40 [i_5] [i_5]);
                        var_32 *= var_1;
                    }
                }
            }
            var_33 = (max((min(((-161 ? 32766 : 32752)), (!5218210245950006951))), (-127 - 1)));
            var_34 ^= (max(((max(((((arr_40 [i_5 - 1] [i_5 - 1]) ? var_3 : 0))), (arr_25 [i_11])))), (arr_41 [i_5 - 2] [i_5 + 1] [i_5 + 2] [i_5 + 2])));
            arr_47 [i_11] [i_5] [i_5] = var_4;
        }

        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            var_35 -= ((((14362845032812916608 ? 19707 : (arr_6 [i_5 + 3] [i_5 + 3] [i_14])))) ? ((((var_3 < (arr_6 [i_5 + 3] [i_5 + 3] [i_5]))))) : (min((arr_6 [i_5 + 3] [i_14] [2]), (arr_6 [i_5 + 3] [i_14] [i_5]))));
            arr_51 [i_5 - 2] = (min((arr_49 [i_14]), (var_17 / var_6)));
            var_36 = ((-20031 ? 127 : 1414696478));
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            var_37 = 8052279224081330513;
            var_38 = min((-1256212379754493186 / 65535), ((((max(18446744073709551614, (arr_35 [2] [i_15] [7] [i_15] [i_15] [i_5 + 1] [i_15]))) > (((((arr_18 [0] [i_5 - 1] [0]) == (arr_1 [i_15] [i_15])))))))));
        }
        var_39 = ((6 % (arr_38 [i_5] [i_5] [i_5 + 1])));
        var_40 ^= ((-(arr_52 [i_5])));
        arr_54 [i_5] = var_4;
    }
    var_41 = var_15;
    #pragma endscop
}
