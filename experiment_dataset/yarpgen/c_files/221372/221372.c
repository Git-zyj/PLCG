/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_4);
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = ((2897686341 ? (((!4906438538223478056) ? 1397280955 : (((min(16540, var_3)))))) : var_9));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_15 += (63 % 9223372036854775792);

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_16 *= 1;
                            var_17 = (~var_10);
                            var_18 = ((!(arr_1 [16] [i_3])));
                        }
                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            var_19 = var_7;
                            arr_13 [i_2] [i_0] [i_1 + 1] [i_2 - 2] [i_3] [i_0] = -2;
                            var_20 |= (((max((!9223372036854775772), (min(300959155057818799, (arr_5 [10] [i_0] [i_0]))))) >> (((var_0 || (arr_11 [i_2 - 2] [i_0]))))));
                        }
                    }
                    arr_14 [1] [i_2] [1] [i_2] = (max((arr_3 [i_1 + 1] [i_1 + 1] [i_0]), (min(0, 1998621703))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_21 &= 9223372036854775796;
                                var_22 = (max((224228188 && 1), (var_3 / var_9)));
                                var_23 = ((((14240566543989813569 && (arr_19 [i_0] [i_0] [i_0] [i_6 - 1] [i_2]))) ? (var_5 / 2039722459473389527) : ((8734522984579224789 ? 1949127911103072476 : (arr_19 [i_0] [i_1 + 2] [i_0] [i_6 + 1] [i_2])))));
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = (((arr_17 [i_0] [i_1 + 2] [i_6 - 2]) == 268435328));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_24 = (min(((var_10 << (var_6 - 58))), (((1 || (arr_17 [i_8 - 1] [1] [i_9]))))));
                        arr_29 [i_0] [i_9] [18] = 101;
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
    {
        var_25 = (((arr_9 [i_11] [i_11] [i_11]) - ((((arr_11 [i_11] [i_11]) ? (arr_11 [i_11] [i_11]) : 0)))));
        var_26 = (((max(148, (arr_4 [i_11] [i_11] [i_11] [i_11])))) ? (11547384407361589296 / -8520) : var_4);
        arr_32 [i_11] = (((((arr_25 [6] [i_11] [10] [i_11] [9]) + 1)) ^ var_8));
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
    {
        var_27 = (max(3660777406, 0));
        var_28 = ((!(((5588471921873967836 ? (arr_4 [i_12] [i_12] [i_12] [i_12]) : var_2)))));
    }
    var_29 = 11547384407361589296;
    var_30 = var_2;
    #pragma endscop
}
