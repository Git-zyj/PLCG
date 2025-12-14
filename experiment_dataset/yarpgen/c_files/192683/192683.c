/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((((max(49537762, 131008))) ? ((var_4 ? var_5 : var_7)) : var_3)) * ((((62 | 16128) % (var_5 > var_7)))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (((~-16132) ? (((arr_1 [i_0 + 1]) ? (max((arr_0 [i_0]), (arr_2 [i_1 + 3] [i_1 + 2] [i_0]))) : -6059)) : -16));

                for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_1] = (((arr_7 [i_0 - 1] [3] [i_0 - 1] [i_1]) ^ 12288));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (var_3 ? (((4294836288 ? (arr_12 [i_1 + 2] [i_1 + 3] [i_1 - 2]) : (arr_12 [i_1 + 2] [i_1 + 3] [i_1 - 2])))) : (min(((min(var_6, 16132))), (arr_7 [i_3] [i_2 + 1] [i_1 - 1] [i_0 - 4]))));
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_2] = (((max((max(var_5, (arr_5 [i_3] [i_0]))), (arr_12 [i_1 - 2] [6] [i_2 + 1]))) << (((var_1 >= (arr_0 [i_1 + 1]))))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [15] [i_1] = (((((((arr_9 [i_3] [i_1] [i_1] [i_0]) > ((var_4 ? (arr_5 [i_2] [i_1]) : 18446744073709551615)))))) == var_1));
                        var_13 = (((((var_1 ? 18446744073709551615 : var_6))) ? (-1515590669 / -671891011) : ((((-44 ? 114 : -32548)) - ((((arr_5 [i_2] [i_3]) || var_10)))))));
                    }
                    arr_15 [i_0] [i_0] [i_0] &= min((arr_7 [i_1 - 1] [i_1 + 3] [i_1 - 2] [i_1 + 2]), (arr_12 [i_2] [i_1] [i_0]));
                }
                for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                {
                    arr_19 [i_1] = ((var_5 ? 0 : ((var_8 ? (arr_16 [i_4 + 1] [i_1 + 2] [i_0]) : (arr_16 [i_4 + 1] [i_1 - 1] [9])))));
                    arr_20 [i_1] [i_4 + 1] [1] [i_1] = (arr_6 [i_4] [i_4] [i_4 + 1] [i_4]);
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_14 = (min(var_14, (((((((arr_21 [i_5] [i_1 + 2] [14]) + (arr_0 [i_0 + 1])))) ? (min((arr_17 [i_0 - 4]), (~var_10))) : (arr_3 [13] [i_1 + 3]))))));
                    var_15 = -38;
                    arr_24 [i_1] [i_1] = ((((((arr_2 [i_0] [i_1 + 1] [1]) ? var_5 : (max(var_9, 0))))) ? (((arr_12 [i_0] [i_1] [i_5]) ^ (arr_1 [i_0]))) : (arr_3 [i_5] [5])));
                    var_16 = (max(var_16, ((((arr_5 [i_0 - 4] [i_0 - 1]) ^ (((arr_5 [i_0 + 1] [i_0 - 1]) ? var_6 : var_8)))))));
                    arr_25 [i_1] [i_1] = ((((((max(22239, -1)) + 4096))) ? ((((((arr_9 [i_0] [i_1] [i_1] [i_5]) - (arr_22 [i_0] [i_0] [i_0])))) ? 0 : (var_5 + var_5))) : (max(((((arr_23 [i_1]) ? var_4 : var_5))), (((arr_17 [9]) ? (arr_10 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [9]) : 0))))));
                }
            }
        }
    }
    var_17 = var_10;
    var_18 = (((max(0, 0)) & -7));
    #pragma endscop
}
