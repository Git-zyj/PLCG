/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                arr_15 [i_0] = ((((((((31968 ? -64 : 0))) ? (arr_4 [i_2] [1]) : (((arr_14 [i_3] [i_3] [i_3] [i_3] [i_4]) - (arr_1 [i_1])))))) ? (!3248939639) : (min(((var_0 ? 4294967295 : var_11)), (arr_13 [i_3] [i_3] [i_3] [i_4] [i_4] [i_4 + 1])))));
                                var_14 |= (max(((var_11 ? (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]) : (arr_14 [i_0] [i_0] [i_2] [4] [i_2]))), ((((arr_0 [i_0]) & (arr_0 [4]))))));
                            }
                            arr_16 [i_0] [i_1] [i_1] [1] = (((9845889568088810674 ? 23392 : 1)));
                            arr_17 [i_0] [i_0] [3] [i_0] = (((((-(-38 && 2637992135)))) && ((((1 + (arr_5 [i_1]))) <= (arr_12 [i_0])))));
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_22 [i_0] [i_0] [1] [i_5] = (-((((3628726170 ? 0 : var_2)))));
                    arr_23 [i_0] = ((((0 ? (~-1378909361268880336) : 0)) >= (arr_10 [i_5 - 1] [i_5] [i_1] [4])));
                    arr_24 [i_0] = (min(0, (max(1, (max(1, 805306368))))));
                    var_15 |= (min((((-((var_11 ? 27 : -3537))))), (arr_3 [i_5 - 1])));
                }

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_16 = (min(var_16, (arr_20 [i_0] [i_1] [i_1] [i_6])));
                    var_17 *= var_3;
                }
                var_18 = (!(arr_5 [i_0]));
                var_19 = ((((!(((1 ? (arr_0 [10]) : (arr_14 [i_1] [i_1] [1] [i_1] [1])))))) ? (((((88 ? var_7 : (arr_2 [i_0]))) != (var_4 > 0)))) : -3537));
            }
        }
    }
    var_20 = ((((((127 ? -22729 : -84)) + 2147483647)) << (((((((min(-2147483630, var_4))) && 38))) - 1))));
    #pragma endscop
}
