/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 |= ((var_8 ? var_4 : ((((!(((9191961933853763463 ? -28129 : 1)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 -= (arr_1 [13]);
                                var_12 = (((arr_8 [i_0] [9] [i_2 + 1] [i_3 - 2] [i_4 - 2]) ? ((-var_5 ? -795535117 : 133858353)) : (((max((arr_7 [i_0] [i_0] [i_0] [15] [i_0] [i_0]), var_8)) << ((((570249205 ? 910463232 : var_4)) - 910463218))))));
                                var_13 = (max(var_13, (((-1093560709 ? 1 : 3724718090)))));
                                arr_11 [17] [i_1] [i_1 - 4] [5] [i_2] [i_1 - 4] [i_1 - 4] = (arr_4 [i_3 - 2] [i_1 - 4]);
                                var_14 = ((210 ? 5237704418892346748 : ((min((((arr_5 [i_0] [i_1 + 1] [i_1 + 1]) ? 104 : -26631)), (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_1] [15] [i_4 - 2]) : (arr_10 [i_0] [6] [i_0]))))))));
                            }
                        }
                    }
                    var_15 &= 4238668307;
                    var_16 += ((~(max((arr_1 [i_2 - 2]), var_6))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    {
                        var_17 = (((arr_9 [i_7] [i_7] [3] [i_5] [i_0]) ? (min(3408316797, (~570249205))) : (((18742 << ((((var_0 ^ (arr_1 [i_5]))) - 3829467425)))))));
                        var_18 = ((max((arr_9 [i_5 + 2] [i_7 - 1] [i_7 - 1] [i_7] [i_7]), var_0)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            {
                var_19 = (min(var_19, var_0));
                arr_25 [i_9] = ((!((min((arr_4 [i_8] [i_8]), (arr_3 [i_8] [i_8] [20]))))));
            }
        }
    }
    #pragma endscop
}
