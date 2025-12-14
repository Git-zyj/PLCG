/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(var_8, (((var_6 ? var_2 : var_1))))) | (min(var_5, ((var_5 >> (var_9 - 4528074553525857412)))))));
    var_11 |= (var_5 / 5550912521823785401);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_12 = (min(var_12, (((var_5 ? (arr_7 [i_0] [i_0] [i_2]) : var_0)))));
                    arr_9 [i_2] [i_2] [i_2] [4] = (arr_4 [i_1]);
                    var_13 = var_3;
                }
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    var_14 = (((arr_3 [4] [i_3 + 2] [i_3 + 2]) || (((var_6 ? (var_9 || var_3) : (!280925220896768))))));
                    arr_12 [i_0] [i_3] [i_0] [i_3] = (arr_11 [i_0 - 2] [i_1] [i_1] [i_1]);
                    var_15 = ((((((max(28383, 6729))) && (~var_9))) ? (min((min(var_9, var_9)), 1)) : var_0));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_15 [i_0] = (arr_5 [i_0] [i_0] [i_0]);
                    arr_16 [i_0] [5] [i_4] = min((((37153 / var_5) >> (arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))), ((((min(var_6, (arr_10 [12] [i_1])))) ? ((((arr_5 [1] [i_0] [i_0]) / var_4))) : var_8)));
                    arr_17 [i_0] &= ((((((((arr_4 [i_1]) || (arr_5 [i_4] [i_1] [4]))) ? (-1952532051 || -10737) : (!var_5)))) ? ((((var_2 && var_4) ? (((var_4 || (arr_14 [i_4] [i_4] [i_4] [i_4])))) : (!var_9)))) : var_9));
                }
                arr_18 [i_0] [i_0 - 2] &= 10737;
                var_16 = var_0;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((((max(var_9, (arr_23 [i_7 - 2] [i_7] [i_0 + 1])))) ? ((((arr_23 [i_7 + 3] [i_7 + 3] [i_0 - 2]) || (arr_23 [i_7 - 1] [i_5] [i_0 + 1])))) : (!var_4))))));
                                arr_28 [i_5] [3] [0] [i_1] [i_5] = ((((((~var_9) - ((var_8 ? 6362671637080141785 : var_4))))) ? ((((min(18446744073709551605, (arr_14 [i_1] [i_5] [9] [i_7])))))) : (((arr_20 [i_1]) | ((((arr_4 [i_1]) << (10736 - 10723))))))));
                                var_18 *= (arr_19 [i_0] [i_5]);
                            }
                        }
                    }
                }
                var_19 |= (((arr_7 [i_0 - 4] [i_0 + 1] [i_0 - 4]) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2]) : ((((arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 4]) || (arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 1]))))));
            }
        }
    }
    var_20 = (min(var_0, var_3));
    #pragma endscop
}
