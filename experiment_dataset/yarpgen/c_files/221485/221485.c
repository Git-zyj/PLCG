/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min((var_4 || var_7), (~var_5)))) ? (!var_3) : var_6));
    var_19 = ((((-1 * 2107125686) * (246 / 817265003))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_20 = ((((((1 >> var_12) & (~32740)))) ^ (((arr_2 [i_0 + 1]) + (arr_2 [i_0 - 1])))));
        var_21 = (((arr_0 [i_0 + 1]) / (arr_2 [i_0 - 2])));
        arr_4 [i_0] [3] &= ((16368 ? (((0 - ((var_12 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0 - 3])))))) : ((11 / (arr_2 [i_0 - 1])))));
        var_22 = (((0 * -1) * (((min((arr_3 [i_0 - 2]), -1971226322)) / 5585755174266770292))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    var_23 = (arr_0 [i_1]);
                    var_24 = (((((arr_10 [i_2] [i_2 + 1] [i_3 - 1] [i_3 - 1]) ? 1 : var_7)) << (((arr_10 [i_1] [i_2 + 1] [i_3 - 1] [i_3 + 3]) ? 1 : var_15))));
                    arr_12 [i_1] [i_2] [i_3] = var_13;
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_25 = arr_5 [i_1];
                                var_26 = (((var_8 && (arr_5 [i_2 + 3]))) || (!817265003));
                                arr_18 [i_2] [i_5] = ((((max(0, var_4))) || (((((((arr_13 [i_1] [i_5]) ? var_9 : (arr_13 [i_5] [i_5])))) ? (~var_2) : var_15)))));
                                var_27 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
