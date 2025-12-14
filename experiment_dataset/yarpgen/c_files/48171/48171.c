/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_13;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 -= (max((min((arr_10 [i_0] [i_0] [i_0 + 1] [i_0] [i_2]), (arr_1 [5]))), (((arr_11 [i_0] [i_0 + 4] [i_0] [i_0 - 1] [i_0] [i_0 + 1]) - (var_0 % var_4)))));
                                var_18 = ((((~(max(1962842079, (arr_10 [13] [i_1 - 1] [i_1 + 1] [i_1] [i_4]))))) ^ (arr_4 [i_1 - 2])));
                                arr_12 [i_2] &= ((-((1 ? -3939076971689117546 : -1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [11] [i_2] [i_6] [11] = (max(((((arr_1 [i_2]) == (min(var_5, var_11))))), (((0 && 217) | (!2332125217)))));
                                var_19 = 1962842079;
                                var_20 = (min(((max((92 * -1), (max(454401022, (arr_5 [i_2])))))), (max((arr_17 [i_0 + 3] [i_5] [i_2] [i_5]), 3240284938478332750))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((min(var_6, (((arr_23 [4] [8] [6] [i_7] [i_2]) | var_0))))) ? ((0 ? 256 : -257)) : (((((var_8 ? 3096905344841914184 : (arr_11 [i_8] [i_1 - 1] [15] [11] [i_1 - 1] [i_0])))) ? ((((arr_21 [i_7] [i_7] [i_7]) ? 4294967295 : 1))) : ((255 ? (arr_10 [i_0] [i_1] [10] [i_0] [i_2]) : var_0)))))))));
                                var_22 = (max(var_22, ((min(-1, -821862961)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_23 = ((!((max((arr_5 [i_9]), var_1)))));
        var_24 = var_12;
        arr_26 [i_9] = (max((arr_15 [i_9]), (((max(100, 14366851265416115245))))));
    }
    var_25 -= (max(((max((3008895614 / var_4), var_10))), (min((max(var_1, var_0)), (!var_2)))));
    var_26 = (((-((2299169916 ? 3840566273 : 8462)))));
    #pragma endscop
}
