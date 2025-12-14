/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_0 - 1] [i_1] [24] = ((max((arr_3 [i_0 - 2]), var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_1] = (((1 ? (arr_2 [i_0] [i_0]) : (arr_11 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                                arr_16 [i_0 - 2] [i_1] [i_2] [i_4] = (max(var_4, (max((((!(arr_10 [i_0] [i_0] [i_4 - 1])))), ((var_5 ? 4474912260454923738 : 496))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_13 = ((((arr_5 [i_0 - 2] [i_0 + 1] [i_1 + 1]) ? (arr_5 [i_0 - 2] [i_0 + 1] [i_1 + 1]) : 104)));
                    var_14 = ((-var_1 ? (min((arr_18 [i_0] [i_1] [i_5]), var_5)) : var_10));
                    arr_19 [i_0] [i_5] [i_0] [i_5] = ((((-((1 ? var_7 : 3700862822)))) ^ ((((max(var_2, (arr_2 [i_0 - 2] [i_1 + 3]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_26 [1] [i_5] [i_5] = (arr_11 [i_0 - 2] [i_1 + 3] [i_5] [i_6] [i_1 + 3] [i_7]);
                                arr_27 [i_0] [i_1 + 3] [i_5] [i_6] [i_7] = (var_5 >= 3063107968);
                                arr_28 [i_0] [i_5] [i_5] [16] [i_7] = ((((((min(var_9, var_9))) ? (arr_7 [i_0] [i_1 + 1]) : 1)) > ((+(((arr_25 [i_0] [i_0 - 1]) ? 1 : 101))))));
                            }
                        }
                    }
                    var_15 = (max(var_15, ((max((((((arr_4 [4]) > 1)))), ((~(max(1808233334, 1808233334)))))))));
                }
                var_16 = ((max(((var_4 ? (arr_0 [i_1]) : var_3)), ((max(1, var_5))))));
                var_17 *= ((((!(var_7 > var_3))) ? ((max(((max(var_7, var_5))), 9187307741218413487))) : ((+(((arr_6 [i_0] [i_0] [i_1]) ? var_6 : var_11))))));
            }
        }
    }
    var_18 = (max(var_18, var_11));
    var_19 = (min(var_19, 65047));
    var_20 = (!var_2);
    #pragma endscop
}
