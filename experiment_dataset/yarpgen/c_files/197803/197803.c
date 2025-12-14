/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_18 = (max(var_18, ((((((((((arr_2 [1] [i_1] [i_1]) * var_16))) ? (2337243142643495018 + 20) : (((-(arr_6 [i_0] [9] [9] [9]))))))) ? ((-(arr_5 [i_0] [i_0]))) : (arr_1 [10]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = 3;
                                var_20 -= ((((((!(arr_2 [i_0] [i_0] [i_0]))) ^ (arr_11 [i_0] [i_0] [i_0] [8])))));
                                var_21 = (~var_6);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_15 [i_0] [i_1 + 1] [i_5] [12] &= var_17;
                    arr_16 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((var_5 != (((var_11 ? (arr_11 [i_0 + 1] [i_0 - 2] [9] [i_0 + 2]) : (arr_11 [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_0 + 2]))))));
                }
                var_22 -= (var_1 / (-9223372036854775807 - 1));
                arr_17 [i_0 + 1] [12] [i_1] = 103;
                arr_18 [1] = (((arr_3 [i_0 - 1]) ^ 171));
            }
        }
    }
    var_23 = var_5;
    var_24 = ((var_3 && ((max(var_6, ((var_11 ? var_10 : var_4)))))));
    #pragma endscop
}
