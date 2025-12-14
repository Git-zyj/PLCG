/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 &= 1;
                                arr_11 [i_0] [0] [i_2] [i_0] [i_4] = 129390013;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((((arr_4 [i_3 - 1] [i_3 - 1] [i_3 - 2]) >> 0))), ((11053202577568841698 | (arr_10 [i_0] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_2 - 2] [i_2 - 3] [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_18 [i_5] [i_0] [i_0] [i_1] = ((((((((arr_0 [i_1]) ? 11053202577568841685 : 1))) ? (((1 ? (arr_7 [i_0] [17]) : (arr_1 [i_1] [i_1])))) : (arr_16 [i_0] [i_0] [i_2] [i_5] [i_6])))) ? ((-(arr_6 [i_0] [9] [i_0]))) : ((((arr_1 [i_2 + 1] [i_2 - 1]) | (arr_1 [i_2 - 3] [i_2 - 2])))));
                                arr_19 [i_6] [i_5] [i_2] [i_0] [i_1] [i_0] [i_0] = ((((((((arr_15 [i_0] [17] [i_1] [i_5] [i_1] [i_0] [i_1]) && (arr_1 [i_0] [i_0]))) ? (arr_0 [i_2 - 1]) : (arr_14 [i_0] [i_0] [i_0] [i_2 - 1])))) ? (((arr_8 [i_5] [i_1] [i_5] [i_2]) | ((32767 ? 1 : (arr_13 [i_0] [i_1] [i_2] [i_5]))))) : ((((arr_9 [i_2 + 1]) != 1)))));
                                arr_20 [i_6] [i_0] [i_1] = ((!(((4165577296 ? (arr_15 [i_0] [i_1] [15] [i_1] [i_0] [i_0] [i_2 - 2]) : (arr_15 [i_0] [i_1] [i_2] [i_5] [i_6] [i_5] [i_2 - 3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 53238;
    var_21 = ((-((-(max(4294967278, var_7))))));
    #pragma endscop
}
