/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? (!-5804) : ((min(var_12, var_4)))));
    var_14 = (max(0, 89));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [5] = ((32048 ? (var_4 >> var_10) : -71));
                        var_15 = (min(var_15, ((max(29132, (arr_6 [16] [i_1] [i_2] [i_3]))))));
                        arr_10 [i_0] [i_0] [i_0] [7] = -89;
                        var_16 = (min((((((min(var_12, var_7))) || (arr_8 [i_0])))), (min((((var_12 ? (arr_2 [i_0] [i_0]) : -71))), (((arr_3 [13] [i_1]) >> var_3))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_16 [i_5] [i_4] [0] = 27211;
                        var_17 = (((arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 - 1]) < (((arr_12 [i_4 - 2] [i_4 - 3] [i_4 + 2] [i_4 - 3]) ? (((arr_1 [6] [6]) >> (((arr_7 [i_0] [i_4] [1]) - 137)))) : (arr_12 [i_4 + 2] [i_4 - 2] [i_4 - 2] [2])))));
                        arr_17 [i_5] [i_5] = (max((arr_7 [i_0] [i_1] [i_5]), (max((((0 ? 0 : 0))), (max(24071, (arr_6 [13] [i_5] [i_5] [1])))))));
                    }
                }
            }
        }
        arr_18 [i_0] = min((((var_12 || (arr_8 [9])))), (((arr_8 [i_0]) << (arr_8 [i_0]))));
        var_18 = max((max((arr_0 [8]), (min((arr_1 [i_0] [i_0]), var_11)))), (arr_5 [i_0]));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 24;i_8 += 1)
            {
                {
                    var_19 = ((((((arr_23 [i_8 + 1]) ? ((max(var_6, -768205786))) : ((var_4 ? var_0 : 89))))) ? (((var_12 < 3) ? 2739648924 : var_6)) : (arr_21 [i_8 - 3])));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_20 -= 0;
                                var_21 = ((max(((min(var_6, 27206))), -var_6)));
                            }
                        }
                    }
                    arr_33 [i_8 + 1] [1] [i_7] [15] = (arr_26 [i_7] [i_8]);
                    arr_34 [i_7] [i_8] = (min(((-23329 ? (arr_30 [i_8 - 3] [16] [i_8 - 3] [i_8 - 3] [i_7 - 1]) : (arr_32 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_8 - 1] [i_7]))), (((((var_3 ? (arr_28 [i_8] [i_8] [i_8 - 1] [i_7 + 1] [i_6]) : (arr_22 [i_6])))) ? (((((arr_21 [i_6]) <= 32060)))) : (min(var_1, (arr_25 [i_6])))))));
                    arr_35 [i_6] [i_7] [i_8 - 1] = ((max(var_10, (arr_28 [i_8] [i_8 - 3] [i_8 + 1] [i_8 + 1] [i_7 - 2]))));
                }
            }
        }
        var_22 = (max(var_22, ((max(1555318372, 1)))));
        arr_36 [i_6] [i_6] &= (max((((var_4 ? (arr_27 [4] [i_6] [4]) : (arr_32 [i_6] [i_6] [i_6] [i_6] [2])))), -var_8));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] = ((((arr_28 [i_11] [i_11] [i_11] [i_11] [i_11]) >> (((arr_28 [i_11] [i_11] [i_11] [i_11] [23]) - 38)))) >> (((((((var_1 ? 90 : var_7))) ? (arr_19 [i_11]) : (-32062 != var_1))) - 78)));
        var_23 += (max(((1 >> (-72 + 83))), (((min((arr_38 [i_11]), 348501859)) - (((arr_25 [i_11]) ? -348501850 : -1))))));
    }
    #pragma endscop
}
