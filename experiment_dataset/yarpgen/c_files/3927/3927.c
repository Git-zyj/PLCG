/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 9223372036854775807;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~(max(((((arr_5 [i_0]) << var_17))), ((0 ? -9223372036854775797 : (arr_4 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_0] |= (((9223372036854775783 ? 0 : 9223372036854775765)) ^ (arr_13 [i_4] [i_0] [i_0] [i_1] [i_0]));
                                arr_17 [i_0] = (((min(1, 1)) && ((((-9223372036854775766 * 1) * (9223372036854775797 && var_17))))));
                                arr_18 [i_3] [i_3] [i_1] = (((~0) && (((-(~var_17))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_29 [i_6] [i_5] = ((((((var_7 ? var_13 : 118)))) ? ((min(0, (!-9223372036854775784)))) : ((2364803588 ? 9223372036854775772 : (arr_11 [i_5] [i_6 - 3] [i_5] [i_5])))));
                                arr_30 [i_7] [i_6 - 1] [i_5] [i_1] [i_0] = ((-(max((arr_26 [i_1] [20] [i_1] [i_1]), (arr_0 [i_0])))));
                                arr_31 [i_0] [i_0] [i_0] = (max((arr_27 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 2]), var_17));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_36 [i_8] [i_1] [i_1] [i_8] = ((((min((min(-9223372036854775783, var_0)), ((max(var_17, (arr_13 [3] [i_8] [i_8] [3] [3]))))))) ? (min(0, 0)) : ((max((!25), (!0))))));
                            arr_37 [i_1] [i_9] [1] [i_1] [i_1] = var_7;

                            for (int i_10 = 0; i_10 < 22;i_10 += 1)
                            {
                                arr_40 [i_1] [i_8] [i_8] = (2585664682 != 1);
                                arr_41 [i_0] [6] [i_0] [i_0] [i_1] = 12524901824054580910;
                            }
                            arr_42 [i_8] = (((arr_38 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0]) ? ((~(((arr_2 [i_0]) + var_15)))) : (max(18446744073709551612, (((1581534595 ? 9223372036854775784 : var_5)))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_0 != (!var_15)));

    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_45 [i_11] [i_11] = var_11;
        arr_46 [i_11] [i_11] &= (arr_14 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
    }
    #pragma endscop
}
