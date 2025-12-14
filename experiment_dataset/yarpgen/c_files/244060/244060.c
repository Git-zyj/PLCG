/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((((min((!var_5), (max(var_10, var_5))))) ? ((max(var_9, var_2))) : var_9));
    var_15 = (min((max(var_2, var_13), (((var_0 ? var_8 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((max((arr_5 [i_1 + 2] [i_1]), var_12))) ? (min((arr_5 [i_1 + 1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_1]))) : (((arr_5 [i_1 - 2] [4]) ? var_5 : (arr_5 [i_1 - 2] [i_1 - 2]))));
                var_16 -= (((max((arr_0 [i_1 - 2]), (arr_0 [i_1 + 2])))) ? ((var_13 ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 + 2]))) : ((max(var_12, (arr_0 [i_1 - 2])))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_17 = (max((arr_6 [i_2] [i_2] [i_2]), (min((arr_0 [i_2 + 1]), (arr_5 [i_2] [i_2 - 1])))));
        arr_10 [i_2] = (min(((min((arr_8 [i_2]), ((-(arr_0 [12])))))), (min(-985090071117971420, -985090071117971422))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_18 = (var_11 ? ((var_1 ? (max(var_13, var_8)) : var_6)) : (max(var_4, (arr_4 [i_3]))));
                var_19 = min((arr_9 [1]), (arr_2 [i_3] [i_4]));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_22 [10] [i_6] [i_6] [9] [i_5] = ((((((arr_18 [i_4] [i_5] [i_6]) ? (arr_18 [3] [i_5] [i_6]) : (arr_14 [i_3])))) ? (max(var_10, ((var_7 ? (arr_12 [i_3]) : (arr_3 [i_5]))))) : ((((arr_19 [i_3] [i_3] [i_3] [i_4] [i_5] [i_6]) ? (((arr_1 [i_4] [i_6]) ? var_10 : (arr_5 [i_3] [i_3]))) : var_7)))));
                            var_20 = ((var_3 ? (min(985090071117971431, (min(16, 985090071117971443)))) : ((min(((var_4 ? (arr_21 [i_3] [i_4] [i_3] [i_6] [i_3]) : var_4)), var_2)))));
                            var_21 = (min(var_21, var_4));
                            var_22 ^= var_1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
