/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 *= (max((min((min(346009314874609966, 4315775435882182810)), 6921576183710106555)), (var_4 - var_0)));
        var_17 = ((~((~(-2147483647 - 1)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] |= (arr_5 [i_0] [i_1 + 2] [i_2] [i_0]);
                    var_18 = (min(var_18, (max((((!(((-1606927908 ? (arr_0 [i_0] [i_0]) : 4666)))))), var_12))));
                    var_19 = 8387584;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_20 [i_5] [i_4] = (((!-11306) ? (arr_9 [i_3] [6]) : -4666));
                                arr_21 [i_5] [i_5] = ((-(arr_16 [i_3] [i_5] [i_5] [4])));
                                var_20 = (min(var_20, ((((arr_12 [9] [i_4] [10]) ? 2867248936 : (arr_2 [i_3] [i_4] [i_5]))))));
                            }
                        }
                    }
                    arr_22 [i_5] [i_5] = 35;
                }
            }
        }
        var_21 = (arr_12 [i_3] [i_3] [i_3]);
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_22 = 11296;
        arr_25 [i_8] = ((((!(-2147483647 - 1)))));
        arr_26 [i_8] = (arr_23 [i_8] [5]);
    }
    #pragma endscop
}
