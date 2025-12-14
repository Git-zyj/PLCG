/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((max(8989607068696576, 1))) ? (min((arr_5 [i_0] [i_1]), var_1)) : ((((!(arr_3 [i_0] [i_0] [i_0])))))));
                    arr_9 [i_0] [10] [i_0] = var_0;

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_19 = ((((((arr_10 [i_0] [8] [i_3 - 1] [8] [i_2]) ? (arr_10 [i_0] [i_1] [i_3 - 1] [i_3] [i_2]) : (arr_10 [i_0] [8] [i_3 - 1] [i_2] [i_0])))) & (~var_7)));
                        var_20 = (((((((var_5 ? (arr_4 [i_2] [i_2]) : (arr_0 [i_0] [i_0])))) ? (((arr_7 [i_3]) ? var_8 : var_4)) : (arr_2 [i_3 - 1]))) & ((min(4294967292, ((1 ? 1099511627775 : 102)))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_4] [i_0] = (((arr_11 [i_0] [8] [i_0] [i_4]) ? ((-(arr_11 [i_0] [i_1] [i_0] [i_4]))) : (arr_11 [i_0] [i_0] [i_0] [i_0])));
                        var_21 = (min(var_21, ((min(((((arr_11 [i_4] [i_0] [i_0] [6]) ? (arr_11 [i_0] [i_1] [i_0] [i_4]) : (arr_11 [i_0] [i_0] [i_0] [i_0])))), (((arr_0 [i_0] [i_4]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_0]))))))));
                        var_22 = (var_16 & (((arr_0 [i_0] [i_0]) ? var_11 : (arr_0 [i_2] [i_2]))));
                        arr_16 [1] [i_4] [i_2] [i_1] [i_1] [11] = (min((arr_1 [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_1] [i_4] [i_2])));
                    }
                }
            }
        }
    }
    var_23 &= ((((((((var_5 ? var_9 : var_14))) ? var_12 : (var_6 < var_11)))) ? var_11 : var_15));
    var_24 = (max(var_14, var_14));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            {
                var_25 = (((max((((var_17 ? var_14 : var_12))), (arr_17 [i_5] [i_6 - 4])))) ? ((((((arr_20 [11] [i_6 + 3] [i_6]) ? var_14 : var_6))) ? (arr_21 [i_5] [i_6] [i_5]) : (arr_17 [i_5] [i_6]))) : (max((!8989607068696584), var_1)));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_32 [i_9] [i_6] [i_6] = ((!((var_4 == (arr_20 [i_6 - 4] [i_6 - 1] [i_6 - 1])))));
                                var_26 ^= (((((arr_24 [i_5] [i_5] [i_9 + 1]) ? ((((arr_29 [i_5]) ? (arr_29 [i_5]) : (arr_25 [3])))) : (max(var_17, (arr_23 [1] [i_6] [2])))))) ? (((arr_21 [i_5] [i_5] [1]) ? (((arr_19 [i_6] [i_8] [i_9 - 1]) ? (arr_24 [i_5] [4] [i_6]) : var_6)) : var_13)) : (arr_20 [i_6] [i_8] [i_6]));
                                var_27 += (min(((((arr_26 [i_6 - 4] [i_7] [i_7] [i_9] [4] [i_9]) || (arr_26 [i_6 - 4] [i_6 - 4] [i_6] [1] [i_6 - 4] [1])))), (((arr_28 [i_6 + 3] [i_6 - 4] [i_8 - 1]) ? var_4 : (arr_28 [i_6 - 1] [i_6 - 2] [i_8 - 1])))));
                                arr_33 [i_8] [i_9] [15] [13] [19] [i_8] = (max((arr_31 [i_6] [i_7] [i_6]), ((8989607068696584 ? 65522 : 18437754466640855031))));
                            }
                        }
                    }
                }
                arr_34 [i_6] [i_5] = (((((-(arr_20 [i_6 - 2] [i_6 + 4] [i_6 + 1])))) ? (((arr_20 [i_6 + 1] [i_6 + 2] [i_6 - 4]) ? (arr_20 [i_6 - 2] [i_6 - 1] [i_6 + 3]) : (arr_20 [i_6 - 2] [i_6 - 1] [i_6 - 1]))) : (max((arr_20 [i_6 + 1] [i_6 - 2] [i_6 + 2]), (arr_20 [i_6 - 4] [i_6 - 2] [i_6 - 4])))));
            }
        }
    }
    #pragma endscop
}
