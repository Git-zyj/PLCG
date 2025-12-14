/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_13 = (!96);
                        arr_11 [i_0] [13] [i_2] [i_0] [i_3] = (arr_5 [i_0] [i_1]);
                    }
                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1 - 2] [i_2] [i_2] [i_4] = -84;
                        arr_16 [i_4] [i_2] [15] [i_0] [i_0] = (31 + var_12);
                        var_14 -= (((((65535 ? 114 : 4777))) ? (arr_3 [i_4 + 3] [i_1 - 2] [i_0]) : (arr_1 [i_1 - 1] [1])));
                    }
                    var_15 -= (min(((((arr_0 [i_1 - 1]) <= (arr_0 [i_1 - 1])))), (arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])));
                }
            }
        }
    }
    var_16 = (max(var_16, var_3));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_17 = var_2;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_34 [6] [6] [i_8 + 1] [13] = (((((((min((arr_1 [3] [i_6]), (arr_25 [i_6])))) ? (arr_17 [i_7] [i_7]) : var_8))) ? ((max((arr_27 [i_6] [i_6]), (arr_5 [i_6] [i_8])))) : (((!(!var_9))))));
                                var_18 = var_5;
                                var_19 = ((!(arr_2 [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
