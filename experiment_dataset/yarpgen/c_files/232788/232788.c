/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = (max(((~(arr_2 [i_4]))), ((max((arr_6 [i_0 + 1]), (arr_13 [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_3 + 1]))))));
                                arr_16 [i_2] [i_3 - 1] [i_3] [i_2] [i_1] [i_2] = (((((1172979950 ? (arr_1 [i_0]) : (arr_10 [i_2] [i_1] [i_0] [i_0 + 4] [i_0] [i_2])))) ? (arr_14 [i_2] [i_0] [5] [i_0 + 3] [i_0] [i_2]) : (max((arr_10 [i_2] [i_1] [i_1] [i_0 + 3] [i_0 + 2] [i_2]), (arr_14 [i_2] [i_3] [i_3] [i_0 + 3] [i_0 - 1] [i_2])))));
                                var_12 = ((0 ? -607775365 : 4));
                                var_13 = -111;
                            }
                        }
                    }
                    var_14 = (max(var_14, (((!((min((max((arr_4 [i_1]), (arr_7 [i_0] [i_0] [i_1] [i_2]))), (arr_11 [i_0] [i_0] [i_2])))))))));
                }
            }
        }
    }
    var_15 = ((-7486 > (((var_0 <= (var_2 - var_4))))));
    #pragma endscop
}
