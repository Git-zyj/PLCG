/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, (((arr_4 [i_2]) ? (((arr_6 [5] [i_1]) ? (arr_6 [i_3] [i_1]) : (arr_1 [i_0]))) : ((max((arr_3 [i_2 - 2]), (arr_3 [i_2 + 1]))))))));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_18 = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_0] [i_4] [i_0] [i_0] = (arr_13 [i_3] [i_2 - 2] [i_2] [i_2] [i_1]);
                                var_19 = ((-1 ? (((max((arr_1 [i_0]), (arr_0 [i_4]))) ^ (-390518054 / 163))) : (arr_2 [i_3] [i_1])));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_19 [i_0] [i_0] [16] [i_0] [4] [16] [4] = (((arr_10 [i_0] [i_2 + 1] [i_2] [i_3]) ? (((arr_10 [i_0] [i_2 - 2] [i_2] [i_3]) ? (arr_9 [21] [i_2 - 3] [i_2] [21]) : 6503907445731018795)) : (arr_9 [i_0] [i_2 - 3] [i_2 - 3] [i_3])));
                                var_20 = ((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_2 - 3] [i_3]) ? (arr_11 [i_0] [i_1] [i_3] [i_1] [i_2 - 2] [i_5]) : (arr_11 [i_0] [i_3] [11] [i_3] [i_2 - 1] [i_3])))) ? ((((arr_8 [i_2 - 1]) ^ (arr_8 [i_2 - 1])))) : ((((((arr_9 [i_2] [i_2] [9] [20]) ? (arr_10 [i_1] [i_2] [i_3] [i_5]) : (arr_0 [i_1])))) ? (arr_13 [i_3] [i_2 - 1] [i_2] [3] [i_5]) : (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_5])))));
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((var_7 ? (((arr_2 [i_2 + 1] [i_2 - 2]) << (((arr_2 [i_2 + 1] [i_2 - 1]) - 16191)))) : (((((max((arr_18 [i_0] [i_0] [18] [i_3] [6]), 2436898097401466658))) >= ((-2436898097401466659 ? 6993339874292452827 : 21625)))))));
                            }
                            arr_21 [i_0] [i_0] [i_0] [i_2] [i_3] = (max(((803911737 ? (arr_12 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 3] [i_2 - 1]) : var_12)), (arr_13 [i_0] [i_0] [i_2] [16] [16])));
                        }
                    }
                }
                var_21 = (min(var_21, (((arr_10 [i_0] [i_0] [i_0] [i_1]) ? (((arr_10 [i_0] [i_0] [i_1] [i_1]) ? (arr_10 [i_0] [i_0] [i_1] [i_1]) : (arr_10 [i_0] [i_0] [i_1] [i_1]))) : ((max((arr_10 [i_1] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_1] [i_1]))))))));
            }
        }
    }
    var_22 = (max(var_22, var_4));
    #pragma endscop
}
