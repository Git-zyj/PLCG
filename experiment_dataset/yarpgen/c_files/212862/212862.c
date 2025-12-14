/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = var_3;
                var_21 = (max(var_21, var_17));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_22 &= 7603506816229321675;
                                var_23 = (((min(7603506816229321692, -1)) / (1 > -7603506816229321693)));
                            }
                        }
                    }
                    var_24 = (arr_16 [i_4] [i_4 + 1] [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4]);
                    var_25 = ((min((arr_12 [i_2] [i_4 - 1] [i_2]), (max((arr_7 [i_2] [i_3] [i_2]), -7603506816229321693)))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_26 = (arr_19 [i_7]);
        arr_20 [i_7] = (((((var_14 ? var_3 : (arr_18 [i_7] [i_7])))) == (arr_19 [i_7])));
    }
    var_27 = -var_5;
    #pragma endscop
}
