/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((max((max(1, var_3)), var_4)));
    var_13 = max(((max(var_0, 10303))), (max((min(var_5, var_0)), var_9)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_0] = (arr_11 [i_0] [i_1] [i_1] [i_2 + 1] [i_2 + 1]);
                            arr_13 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [13] = ((~(((arr_2 [i_0 - 1] [i_0 - 2]) ? var_10 : ((min(-17400, var_6)))))));
                            arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_2] = 35;
                            arr_15 [i_0] [i_1] [i_2 + 1] [i_3] = (arr_9 [i_0 - 2] [i_1] [9] [i_3]);
                        }
                    }
                }
                arr_16 [i_0 + 1] = (var_9 == (((min((arr_1 [i_0]), (arr_1 [i_1]))) ^ (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1]))));
                arr_17 [i_0] [i_1] = (arr_9 [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }
    var_14 = (((min((((var_8 ? var_4 : var_9))), var_5)) << (var_11 - 55)));
    var_15 = ((1 - ((var_0 ? (min(-17391, 1820357088)) : (var_6 - 17400)))));
    #pragma endscop
}
