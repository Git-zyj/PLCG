/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_1 ? var_2 : var_3)) << (var_8 + 117))) ^ ((((!558101262) ? var_8 : var_7)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_1] [11] [i_1] = (max(var_6, 10245046704010851922));
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] = (max((((max(var_11, var_1)) ^ (((((arr_1 [i_0] [i_0]) != 1324101795750826473)))))), ((max(((min((arr_1 [i_2] [i_3]), var_8))), (max(558101262, 155)))))));
                    }
                }
            }
        }
        arr_11 [i_0] &= (max((((!(((-127 - 1) && 1))))), (max(-18803, ((46647 ? var_13 : var_1))))));
        arr_12 [i_0] [i_0] = ((558101262 ? ((((min(var_2, 4128180851465070076))) ? var_4 : (min(0, 4128180851465070081)))) : ((((((max(var_7, (arr_0 [i_0])))) < (arr_3 [i_0])))))));

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_0] [i_4] [i_4] = (((((-(arr_2 [i_0] [i_4] [i_4])))) ? (((!(((var_5 ? var_14 : var_14)))))) : (arr_5 [12] [i_4] [i_0] [i_0])));
            arr_17 [i_0] [i_4] = (max((max((arr_8 [i_4] [i_4] [i_0]), (arr_1 [11] [i_4]))), (arr_15 [i_0] [i_4] [i_0])));
            arr_18 [i_0] [0] = ((((max((((var_9 ? var_7 : (arr_14 [i_0] [i_0] [5])))), (arr_2 [i_4] [i_4] [i_0])))) ? ((-(arr_13 [i_0] [i_4] [i_0]))) : ((min((arr_15 [11] [i_0] [11]), var_3)))));
            arr_19 [i_0] = -558101259;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_22 [i_5] [i_5] [i_5] = (((2394822122 != 37420) ? -1 : ((((((arr_15 [i_5] [i_5] [9]) ^ 87))) ? (~3651778259) : ((max(-1783039790, 65535)))))));
            var_17 = (min(var_17, (((((max(((((((arr_20 [i_5] [i_0]) + 2147483647)) << (var_15 - 15296322005898253466)))), (max(-4128180851465070081, var_14))))) ? (max((min(3, -8705659999737078875)), 8139)) : 34621)))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_28 [i_5] [i_5] [4] [4] = -4611686018427387904;
                        arr_29 [i_0] [i_5] [i_6] [i_7] = (((min((((94 ? var_6 : -85))), var_15)) >= (((min((arr_0 [i_6 - 1]), (arr_0 [i_6 - 1])))))));
                    }
                }
            }
            arr_30 [i_5] = (max(((-(arr_4 [i_5] [i_0]))), ((((((-(arr_14 [i_0] [i_0] [i_5])))) ? (arr_24 [i_0] [12]) : -var_2)))));
        }
    }
    #pragma endscop
}
