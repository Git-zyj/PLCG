/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] = (((arr_4 [i_0] [i_0] [i_1]) / 1));
            var_13 = var_7;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] = ((((1 | (max((arr_11 [i_0] [i_1] [i_1 - 1] [i_1 - 1] [i_1]), (arr_6 [i_0] [i_0]))))) << ((((11 + (arr_6 [1] [i_1]))) - 429155835))));
                            var_14 = 65528;
                            var_15 = (((((((arr_10 [i_3] [i_2] [i_0]) ? 65535 : var_0)))) && (((+((12606 ? (arr_7 [i_0]) : 8747)))))));
                        }
                    }
                }
            }
            var_16 = (arr_1 [i_1]);
            arr_14 [i_0] [i_0] = (((var_1 ? ((var_8 ? 8746 : var_10)) : ((58105 ? (arr_10 [i_0] [i_0] [i_0]) : var_10)))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_17 = (((0 / (arr_16 [i_0] [i_0] [i_0]))));
            arr_17 [i_0] [i_0] = 7425;
            arr_18 [i_0] = (((min((51159 - 58116), var_9)) + var_4));
            arr_19 [i_0] [i_0] = (((((11685333532831830158 > 1563356991) ? (((((arr_10 [i_0] [i_5] [i_5]) && (arr_0 [i_0]))))) : (1 * 0))) + ((~(arr_11 [i_0] [i_5] [i_0] [i_5] [i_0])))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_22 [i_0] [i_6] = ((((min(65523, 51137))) + ((((arr_0 [i_0]) > (arr_3 [i_0] [i_0]))))));
            var_18 = ((~(min(65519, var_2))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_19 = (arr_3 [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_32 [i_0] [i_7] = ((-(((arr_24 [1] [i_0] [i_8]) ? var_1 : (65535 + 1598736078018812408)))));
                        var_20 *= 411078357;
                    }
                }
            }
            var_21 = (((max((min(4294967295, (arr_28 [i_0] [i_7] [i_0]))), 16383))) ? (arr_16 [i_0] [i_0] [i_7]) : var_9);
        }
    }
    for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (arr_33 [i_10])));
        arr_36 [i_10] = ((~(arr_33 [i_10])));
    }
    for (int i_11 = 3; i_11 < 16;i_11 += 1) /* same iter space */
    {
        arr_39 [i_11] [i_11] = (min((min(((min(var_2, (arr_33 [i_11])))), 13742)), ((max((arr_37 [i_11] [i_11 - 1]), (arr_33 [i_11 - 2]))))));

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_23 = ((((!(arr_41 [i_11 - 2] [i_11]))) ? (~var_7) : (1 + 11841800545017869620)));
            var_24 = -1;
        }
        arr_42 [i_11] = 29362;
        var_25 &= (arr_41 [i_11] [i_11]);
        arr_43 [i_11] [i_11] = 29370;
    }
    #pragma endscop
}
