/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((((min(var_3, (arr_3 [i_1 - 3] [i_1 + 1])))) || (((11 ? (arr_3 [i_0] [i_2]) : (min(11, 134086656)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [1] [18] [i_2] [i_0] [i_2] = ((66 ? (min(288230376151711743, (arr_8 [i_0] [4] [i_0]))) : 60814));
                                arr_15 [i_0] [i_1 + 1] [i_0] [i_0] [2] = (arr_10 [5] [i_3] [i_2] [i_1 + 1]);
                                arr_16 [i_0] [i_0] = ((var_5 ? ((max(67108864, var_5))) : -56));
                                var_13 = (i_0 % 2 == 0) ? (((((((arr_5 [i_0] [i_3] [i_0]) + 2147483647)) << (17816652440683114213 - 17816652440683114213))))) : (((((((((arr_5 [i_0] [i_3] [i_0]) - 2147483647)) + 2147483647)) << (17816652440683114213 - 17816652440683114213)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] = 66;
                                var_14 *= ((-((((((arr_12 [12] [i_5] [4] [3] [4]) ? 66 : var_7))) ? (((arr_3 [i_5] [i_5]) ? -24481 : 24520)) : (arr_20 [i_1 - 1] [i_1] [i_1 + 1])))));
                            }
                        }
                    }
                    var_15 = (max(var_15, (arr_12 [i_0] [i_1 + 1] [11] [i_2] [i_2])));
                }
            }
        }
        var_16 = (max(var_16, ((((((-22785 ? 1 : 0))) ? ((min((arr_5 [10] [10] [i_0]), (arr_5 [6] [i_0] [i_0])))) : ((max(var_3, 7))))))));
        var_17 = (min(var_17, (259259655 & 24520)));
        arr_26 [i_0] = var_4;
    }
    var_18 += var_1;
    var_19 = ((((((min(var_4, var_4))) + 2147483647)) >> (((min(var_0, var_2)) * (!var_2)))));
    #pragma endscop
}
