/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -0;
    var_16 = var_1;
    var_17 = var_13;
    var_18 = (min(var_9, 1));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = var_11;
        var_20 &= (~var_4);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = ((-336 ? (min((0 + 246), (var_3 >= 251))) : (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [4]) : (arr_4 [i_1] [i_1])))));
        var_22 = (max(var_22, 1));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_23 = var_6;

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [i_2] = (max(237, ((1 ? 254 : 33550336))));
                    var_24 -= ((((1 | (arr_7 [13] [i_3]))) != (((arr_7 [i_4] [i_4]) ? (arr_7 [i_4] [i_5]) : var_6))));

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_25 = ((max((arr_19 [i_6 - 1] [i_2] [i_6 - 1] [i_2] [i_6 - 1]), (arr_19 [i_6 - 1] [i_2] [i_6 - 1] [i_2] [i_4]))));
                        arr_21 [i_2] [i_3] = (arr_8 [i_2] [i_2]);
                        arr_22 [i_2] [i_2] = ((18 << (64195 - 64191)));
                    }
                    var_26 = 4;
                    arr_23 [i_3] |= arr_19 [10] [i_3] [10] [i_4] [i_5];
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_27 = (min(var_27, ((((((!(arr_14 [i_3] [i_3] [i_7])))) * 18)))));
                    var_28 = (arr_10 [i_3] [i_2]);
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_28 [i_2] [8] [i_4] [i_2] = -9;
                    var_29 = (((((-((min(135, 0)))))) && ((((arr_24 [i_3] [i_3]) ? ((var_10 >> (var_12 - 2324844935980848557))) : ((min(var_9, var_11))))))));
                    arr_29 [i_2] [1] [i_3] [i_4] [i_8] = (max((!1), -1211350271));
                }
                var_30 = 0;
            }
            arr_30 [i_2] = 1;
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_31 = 1;

            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                var_32 = (max(var_32, (arr_10 [i_2] [i_9])));
                var_33 = (max(233, -33550354));
                var_34 += var_4;
                arr_35 [i_2] [i_2] [i_2] [i_2] = (~3354);
                var_35 = (min(var_35, var_8));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_36 = 43;
                arr_38 [i_2] [i_2] = (arr_34 [i_2] [i_2] [i_2]);
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                arr_42 [i_2] [i_2] [i_12] = ((((min((max(var_14, (arr_36 [i_2]))), (min(var_2, 1))))) << (237 - 230)));

                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {
                    var_37 = ((!((max(10852571679528267897, (arr_11 [i_13]))))));
                    arr_47 [i_13] [i_2] [i_2] [i_2] = ((((5 + (arr_10 [i_2] [i_2])))) <= var_12);
                }
                var_38 = (((((max((arr_19 [i_12] [i_2] [i_2] [i_2] [i_2]), (arr_17 [i_2] [i_9] [i_9] [i_12]))))) > (((((max(0, (arr_25 [i_12] [8]))))) | -28771))));
                var_39 ^= (1 >> 1);
            }
            var_40 = (((((var_11 | var_3) & (arr_5 [i_2]))) << ((((~(18233 << var_10))) + 18262))));
        }
        var_41 |= 230;
    }
    #pragma endscop
}
