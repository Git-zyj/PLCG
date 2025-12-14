/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -2742232203;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_12 = (max(var_12, (((!(arr_0 [i_0 + 2]))))));
        var_13 ^= ((-((min(-18182, (8057540405660330449 != 18181))))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((28046 ? -76 : (((1968494589 % var_0) * var_6))));
        arr_7 [i_1] = (min((((((arr_4 [i_1] [i_1]) ^ var_6)) ^ (((var_9 & (arr_3 [13])))))), ((max((arr_3 [14]), 1)))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [12] [i_3] = (((((-(arr_4 [i_1 + 1] [i_2 + 2])))) - (12914442458485376338 ^ var_1)));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_14 = (arr_16 [1] [i_2]);
                            var_15 = ((var_5 ? (arr_16 [i_2] [i_2]) : (arr_19 [i_2 - 1] [i_4] [i_4 - 1] [i_5] [14])));
                            var_16 = (((((var_3 ? var_0 : 12914442458485376323))) ? (arr_18 [i_1] [14] [i_3]) : var_9));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_17 = (((var_9 | var_10) | (((var_4 == (arr_5 [3]))))));
                            var_18 &= ((var_8 ? var_6 : (-18182 ^ 52567)));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [16] [i_2] [i_3] [i_2] [13] = (((((-(arr_8 [16] [0] [i_2])))) ? -121 : ((var_0 ? var_0 : 1624821623))));
                            arr_25 [i_1] [i_2] [12] [i_4] [i_2] = (arr_22 [i_1 - 2] [i_7] [i_7] [i_7] [i_7]);
                            var_19 = (min(var_19, (((~((var_0 ? (arr_14 [2] [i_2] [i_3] [i_4]) : var_8)))))));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_20 = 18181;
                            arr_28 [i_1] [i_2] [i_3] [i_4] [i_8] = (arr_20 [i_1 + 2] [i_2 + 3] [i_3] [i_8] [i_8]);
                        }
                        var_21 = 65530;
                        var_22 ^= (var_7 || 57369);
                    }
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        var_23 -= ((((min(((25954 ? (arr_4 [14] [2]) : -25961)), 95))) + (max(((var_9 & (arr_10 [2]))), (arr_21 [i_3] [i_1])))));
                        arr_33 [i_1] [i_2] [i_3] [i_2] = (--14);
                        var_24 = var_5;
                    }
                    arr_34 [i_2] [i_2] [15] [i_3] = (arr_27 [i_1] [18] [i_1] [i_1] [16] [i_3] [i_3]);
                    arr_35 [i_2] = (32742 && 7708);
                }
            }
        }
        var_25 = (min(var_25, ((((arr_16 [8] [4]) ? (((-127 - 1) | (max((arr_22 [12] [i_1] [i_1] [i_1] [i_1]), var_8)))) : ((min((min((arr_11 [i_1] [i_1]), (arr_17 [11] [i_1] [i_1] [i_1] [1]))), ((((arr_17 [i_1] [i_1] [16] [11] [i_1]) < 1740185814)))))))))));
    }
    for (int i_10 = 3; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_26 = (max(var_26, ((((((var_5 ? (((arr_26 [i_10] [i_10] [i_10] [i_10]) ? 4 : (arr_20 [i_10] [8] [i_10] [9] [i_10]))) : (arr_36 [i_10])))) ? (max(17921419191603687494, 1)) : (((((112 ? 1 : (arr_11 [i_10] [0])))))))))));
        var_27 = (-127 - 1);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    var_28 = -22473968;
                    var_29 = var_0;
                }
            }
        }
        var_30 = (max(var_30, (arr_21 [i_10] [i_10])));
    }
    var_31 = (((max(((max(var_6, 1))), (var_9 ^ var_0))) << (((((var_2 & -13345) ^ 37014)) - 56167))));
    #pragma endscop
}
