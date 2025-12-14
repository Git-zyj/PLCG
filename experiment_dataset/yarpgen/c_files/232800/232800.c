/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-var_1 || (((-106 ? var_7 : var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (!var_13);

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_1] [i_3] = (min((((((arr_2 [i_2] [1]) * (arr_3 [i_0] [i_1] [5]))) / var_17)), (((-32 ? (((arr_2 [i_2] [i_3]) / var_5)) : (arr_6 [i_0 + 1] [i_0 - 1] [i_2 + 1]))))));
                        arr_13 [i_0] [i_3] = (arr_10 [i_0] [i_3] [i_2 - 1] [i_3] [i_0]);
                        var_19 -= var_12;
                        arr_14 [i_3] [i_3] [i_3] = (!-89);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_1] = ((((((arr_1 [i_0] [i_4]) ? (!var_16) : var_5))) ? (((~(arr_11 [i_4] [i_4] [i_2 - 1] [i_1] [0])))) : ((var_14 / (((51745 ? 1860102694 : (arr_17 [i_4] [i_0] [i_0] [i_0]))))))));
                        arr_19 [i_2 + 1] = (((((3034139645 * var_13) ? 2823769401167235778 : ((min(-1860102694, 642946442))))) / 1192803908798571472));
                        var_20 = (((((8503142500534225411 >> (-121 + 181)))) ? (arr_11 [1] [i_0] [i_1] [1] [i_4]) : ((max((arr_8 [4] [1] [i_0 - 1] [7] [i_0 - 1] [i_0]), (max(var_16, (arr_10 [i_0 - 2] [i_2] [i_0 - 2] [i_4] [i_4]))))))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = (min(var_21, ((max((arr_22 [i_1]), 2147483647)))));
                            var_22 = (-(((32767 + 2147483647) << (var_6 & var_1))));
                            var_23 = var_16;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_24 &= (((((14241739202528274944 | (~var_8)))) ? (min(0, 18446744073709551615)) : ((((((-1860102703 * (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]))) != (var_16 > 33)))))));
                            arr_27 [4] [i_1] [i_2] [i_5] [i_7] = ((var_8 && (~2092738905)));
                        }
                        var_25 = (~753669710);
                        arr_28 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] &= (max(2147483647, (max(15, ((((arr_22 [i_2]) != var_2)))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_26 = -107;

                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            var_27 |= (((arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) >> (((arr_30 [i_9 + 4] [i_0 - 4]) + 123))));
                            arr_35 [i_0 - 2] [4] = ((-2092738905 ? (((arr_3 [i_0 - 1] [1] [i_0 - 1]) >> (var_6 - 22778109))) : 0));
                        }
                    }
                    var_28 = (((arr_15 [i_2 + 1] [i_0] [i_2] [i_2 + 1] [i_0] [i_0]) ? ((583394030 ? 1 : var_4)) : (((~(arr_16 [i_1] [i_1] [8] [i_1]))))));
                    arr_36 [i_1] [i_1] [i_2 + 2] = ((var_6 <= (((!18446744073709551614) & ((var_9 | (arr_30 [i_2 + 1] [i_0])))))));
                    var_29 = (max(var_29, (((arr_21 [i_0] [i_0 - 3] [i_0 - 4] [i_0 - 4] [i_0] [i_0 - 1]) / (((((arr_32 [i_0] [i_0 - 3]) || (arr_5 [i_0] [i_1] [i_1] [i_0])))))))));
                }
            }
        }
    }
    #pragma endscop
}
