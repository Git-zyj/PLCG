/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((-5658566741056191813 ? 1 : (arr_5 [i_0] [5])))) < var_2));
                var_13 = (max(var_13, ((((((8887913902530130569 << (((-1591673728 + 1591673781) - 53)))) == 1))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_14 -= -1770309512;
                    var_15 = ((((1073217536 ? var_6 : -1073217529)) != 1808777174));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_3] = (((var_5 / ((((-991747623 != (arr_11 [i_0] [i_0] [i_3]))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_16 += (((((((var_0 ? (arr_0 [i_0] [i_1]) : var_12))) ? (var_10 | var_9) : 33554431)) >= -var_8));
                                arr_20 [i_0] [i_0] [i_5] = ((arr_16 [i_4] [i_0] [i_0] [i_1]) / (((~-33554431) ? (max(7977220282277771635, (arr_3 [i_4 - 2] [i_0]))) : ((26388 ? 1989961752086579611 : 39147)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_17 = (min(var_17, var_0));
                                arr_28 [i_0] [i_0] [i_0] = var_10;
                                var_18 = ((((((var_4 % (arr_9 [i_0] [i_6 + 1] [i_7] [i_8]))))) ? ((((255 % var_10) < var_11))) : ((max((((!(arr_13 [i_0] [i_1] [i_6] [i_7] [7] [i_6])))), var_10)))));
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = -33554451;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((84 ? var_12 : (1 / 63476)));
    var_20 = ((-81 + (((12589807547354306509 == var_7) ? var_8 : (max(var_9, var_3))))));
    var_21 = (min(var_21, (((var_10 || ((((var_11 && var_4) ? var_12 : -var_3))))))));
    var_22 = var_4;
    #pragma endscop
}
