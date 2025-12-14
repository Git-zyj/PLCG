/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (max(((157 ? 86 : 10664621404881335423)), var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((-8001363434403147900 && 95) ? ((-101 ? 10664621404881335423 : 106)) : 125)) / (max(-1772254097876919922, 3795189315993650898))));
        arr_3 [i_0] = (((((arr_1 [i_0]) ? var_11 : ((var_8 ? -7653 : (arr_1 [i_0]))))) / (min(var_2, ((var_6 ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (min((((arr_13 [3] [i_1 - 2] [3] [i_3] [i_4]) ? 48413 : (arr_13 [i_0] [i_0] [i_2] [i_4] [i_2]))), (var_0 || var_12)));
                                var_18 = ((((((arr_8 [i_0] [i_1] [i_1] [i_1 + 2]) ? -1030997286735436978 : (arr_8 [12] [i_1] [12] [i_1 + 2])))) ? (((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), 18446744073709551612)) / ((0 ? 638059658382641526 : var_12)))) : ((max((((var_0 ? 103 : var_6))), (((arr_1 [i_0]) * (arr_5 [i_0] [i_0] [i_0]))))))));
                            }
                        }
                    }
                    var_19 = ((((min(-2147483634, -2406))) ? (max(var_12, (arr_8 [i_1] [i_1 + 2] [i_2] [18]))) : (((var_9 ? var_10 : var_14)))));
                    var_20 = (min((((var_4 ^ var_15) ? (((arr_6 [i_0] [i_0] [i_2]) ? (arr_1 [i_1]) : (arr_12 [i_2] [i_1] [i_2]))) : ((105 ? 149 : 61377)))), (max(((var_4 ? (arr_7 [i_0] [i_0] [i_2]) : (arr_7 [i_0] [i_2] [i_2]))), (arr_1 [i_1 + 3])))));
                    arr_14 [i_0] [i_0] [17] [i_2] = (((min(16, (arr_11 [i_0] [i_1 + 2] [i_2] [i_2] [i_1 + 2])))) ? (((var_0 ? var_7 : 160))) : ((((((arr_0 [i_0] [i_1]) ? (arr_4 [8] [i_1] [i_1]) : 52))) ? (((arr_8 [10] [10] [i_2] [i_2]) ? 3788366925 : 4)) : ((18178 ? 18446744073709551603 : 105)))));
                }
            }
        }
    }
    var_21 = (max(((((((18446744073709551611 ? var_0 : 28578))) ? ((184 ? var_7 : 0)) : (0 / 12)))), var_13));
    var_22 = (((((var_12 ? (((max(71, -6)))) : ((var_9 ? 2609134096910528920 : var_2))))) ? var_10 : (((((var_0 ? var_8 : var_9))) ? ((78 ? 157 : var_12)) : var_0))));
    #pragma endscop
}
