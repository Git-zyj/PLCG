/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (-1799583347 != -82);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [1] = ((min((arr_6 [i_0]), (max(-1799583335, 1799583347)))));
                    arr_10 [i_2] = (min(((((((arr_5 [i_0] [i_0]) & var_5))) ^ (((arr_0 [i_2]) ? (arr_8 [i_0]) : -5693123943337046716)))), ((max(((((arr_4 [i_0] [3] [i_0]) || var_10))), (min(15909, (arr_2 [i_0] [i_0]))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (arr_12 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = (var_10 ? (((var_9 != var_1) ? (arr_19 [i_3] [i_3] [i_5]) : (arr_17 [i_4 - 3] [i_4 - 2]))) : -15910);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_21 = (max((arr_26 [i_4 - 3] [i_3] [i_7 - 1]), (max((arr_18 [i_3] [i_3] [i_7 + 1]), (arr_13 [i_4 - 1] [i_3])))));
                                arr_27 [i_3] [i_4 - 3] [i_4 - 1] [i_3] [i_6] [i_3] = (max((!var_18), (!var_8)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
