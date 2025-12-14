/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(var_4, 1152903912420802560);

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_4 - 1] [1] [i_0 + 1] = (min((min((arr_5 [i_3]), (max((arr_1 [i_3]), (arr_0 [i_3]))))), (((arr_2 [i_0 + 2] [i_4 - 1]) ? (arr_6 [i_2] [i_1]) : (arr_2 [i_1] [i_1])))));
                                var_17 ^= (min((min(16496082096457842776, 84)), ((((arr_6 [i_3] [0]) ? 82 : 2386023114)))));
                                var_18 = ((!(arr_7 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 1])));
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] = (((arr_3 [i_0 + 1]) ? 0 : (min((arr_2 [i_1] [i_2]), (arr_2 [i_0 + 2] [i_1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_19 &= (max(((var_10 ? (~var_9) : (arr_18 [i_0 + 1] [i_5] [16] [i_7]))), (max((var_5 | var_13), (arr_8 [i_0 - 1] [i_5] [i_5] [i_6] [i_7])))));
                        var_20 ^= (arr_8 [i_0 + 2] [i_0] [i_5] [i_6] [4]);
                        var_21 = (((max((arr_18 [i_0] [i_5] [i_5] [i_7]), var_14)) + ((((arr_18 [i_0] [i_5] [i_6] [1]) | (arr_18 [i_5] [i_5] [i_5] [i_5]))))));
                    }
                }
            }
        }
        var_22 &= (min(((-(arr_5 [i_0]))), ((((arr_5 [i_0 + 1]) <= (arr_10 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]))))));
    }
    var_23 = (max(var_7, (((((min(var_12, var_7))) < var_4)))));
    #pragma endscop
}
