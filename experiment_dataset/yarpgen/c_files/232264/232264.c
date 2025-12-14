/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_4 ? ((min(1, 13608))) : ((min(243, 65528)))))) ? ((var_6 >> (65528 - 65503))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = ((((var_0 ? ((0 ? (arr_11 [i_2] [i_3] [i_4]) : 63)) : var_5)) + var_2));
                                arr_13 [i_0] [i_1] [i_0] [i_3] &= ((((((-51 / (0 != 235))) + 2147483647)) << (((((((var_1 ? var_8 : 201))) ? var_7 : 55)) - 2138114106))));
                            }
                        }
                    }
                    arr_14 [i_1] = ((((min(((1503856668 ? 3588 : 51)), (arr_11 [i_2] [i_1] [i_0])))) ? (arr_0 [i_0]) : (arr_6 [i_1] [i_1])));
                    arr_15 [i_1] [i_1] [i_1] = ((((574980279 ? 4335410065426308055 : 44955588)) * 0));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_1] [i_1] = (~54);
                    arr_21 [i_1] [i_1] = ((((((arr_18 [i_0] [i_1] [i_5] [i_5]) ? (arr_18 [i_5] [i_1] [i_1] [i_0]) : 237))) ? var_0 : (!0)));
                    var_12 -= ((65535 != ((~(((arr_11 [i_0] [i_0] [i_0]) ^ 96))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_13 = ((((arr_10 [i_0] [i_0] [i_0] [i_1] [i_1] [i_6]) ? -64 : 51)));
                    arr_25 [i_0] [i_0] [i_0] [i_1] = (min(6, 79));
                    arr_26 [i_6] [i_1] [i_0] = (((((~4164107682) == var_9)) ? 16128 : (((arr_4 [i_0]) << (((arr_4 [i_6]) - 941811026))))));
                }
                var_14 = ((2912683577 ? (((0 * var_9) / var_2)) : 213));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_15 = (var_4 || 2233595452);
                                arr_35 [i_0] [i_1] [i_7] [i_1] [i_0] [i_9] = (((((15 >> var_1) / (((8086 >> (2061371843 - 2061371832))))))) ? ((((-(arr_2 [i_0] [i_8] [i_7]))) / var_10)) : (((arr_11 [i_7] [i_7] [i_9]) ? -112 : var_3)));
                                var_16 = (min(var_16, (~2047)));
                                var_17 = (max(var_17, (~2061371843)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
