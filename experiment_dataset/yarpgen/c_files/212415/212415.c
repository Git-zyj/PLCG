/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [12] [i_1] [12] &= (((var_2 | (arr_2 [i_1]))));
                arr_8 [i_0 - 4] [i_1] [9] = (max(9223372036854775807, 51938));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_4] [0] [0] [i_2] |= 72;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_20 [i_5] [i_5] [i_5] [i_5] &= -61364;
                                var_20 = ((((((arr_17 [i_4]) >> ((((var_6 ? (arr_12 [i_2] [i_2]) : (arr_10 [i_3]))) + 9071942523435437868))))) ? ((var_7 ^ (var_8 & var_14))) : (((+((((arr_16 [i_6] [i_6] [i_6] [i_6]) >= 72))))))));
                                var_21 += (((arr_17 [i_5]) ? (((((((arr_16 [i_6] [6] [i_3 + 1] [i_2]) ? (arr_13 [i_2] [i_5] [i_2] [i_2]) : var_4)) != ((((!(arr_18 [14] [12] [i_4] [2] [i_4]))))))))) : (max(((var_18 ? -1 : (arr_16 [1] [i_4] [i_3] [12]))), (((var_16 >> (-72 + 103))))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_22 |= (min(2147483647, (-9223372036854775807 - 1)));
                    var_23 += (arr_23 [9] [i_3] [9]);
                    arr_24 [5] [i_2] [i_2] = (((-1 * ((7497373353719578247 / (arr_10 [i_3]))))));

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_29 [i_2] [i_3] = ((+((-(((arr_19 [14] [i_3 + 1] [i_7] [i_7] [i_8]) ? 1272212401 : var_13))))));
                        var_24 = (min(var_24, (((!((((arr_28 [i_2] [3] [7] [i_2] [11]) >> (!var_3)))))))));
                        var_25 = (min(var_25, ((max(((var_17 ? (arr_9 [i_3]) : (((arr_27 [i_8] [i_8] [3] [i_3] [i_2] [i_2]) * var_0)))), (max(-73, ((var_8 ? (arr_27 [i_8] [16] [i_2] [16] [i_2] [i_2]) : var_18)))))))));
                    }
                    arr_30 [i_3] [i_3] [9] = var_3;
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    var_26 = ((((((-1 ? var_0 : (-2147483647 - 1))))) ? var_1 : (arr_13 [i_2] [i_9] [i_2] [2])));
                    var_27 = (max((arr_31 [i_9] [i_3 - 1] [i_9]), (arr_31 [i_9] [i_3] [i_9])));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                {
                    var_28 = (arr_19 [i_10] [i_3 + 1] [i_3] [i_2] [i_2]);
                    arr_36 [i_2] [i_3 + 1] [i_2] = ((~((var_5 ? var_3 : (arr_21 [i_3] [i_3])))));
                    var_29 = var_10;
                }
                arr_37 [i_2] = (arr_31 [8] [i_2] [i_3]);
            }
        }
    }
    #pragma endscop
}
