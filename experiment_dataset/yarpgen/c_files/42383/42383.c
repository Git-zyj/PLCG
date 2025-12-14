/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = 0;
                    var_14 = (max((max((arr_6 [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2 + 2]), var_1)), (max(1, 2490887802))));
                    arr_9 [i_2] [i_0] [i_1] [10] = (max((min((arr_7 [i_0] [i_1] [i_2] [i_2]), (min(4431649953677929423, var_4)))), (((((max(18446744073709551613, 1342036240))) ? (arr_3 [i_0] [12]) : ((max(1, 22212))))))));
                    var_15 = (max(var_15, ((max(-2147483641, 15)))));
                    arr_10 [i_2] [i_1] [i_2] = 13379640746469991051;
                }
            }
        }
        arr_11 [i_0] = (min((-2147483647 - 1), (((min(1, var_11)) ? ((min(var_11, var_10))) : (-2147483647 - 1)))));
        var_16 = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        var_17 = -17825;
                        arr_18 [i_4] [i_3 - 1] = (arr_4 [i_0] [i_0]);
                        var_18 += (arr_12 [i_4] [i_5 + 2]);
                        var_19 = (min(var_19, ((14015094120031622192 ? ((((min((arr_6 [i_0] [i_3] [i_4] [i_5]), (arr_12 [i_3 - 2] [i_3])))) ? var_0 : (max((arr_5 [10] [i_3 - 2] [i_3 - 3] [11]), var_2)))) : var_1))));
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_20 = -1;
        arr_21 [i_6] = ((var_0 & (arr_19 [i_6])));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = ((((max((max((arr_23 [i_7]), var_4)), (arr_23 [7])))) ? (max(var_5, (min(-9066601491338359739, 65530)))) : ((max(((var_11 ? 65535 : -1)), (arr_22 [15]))))));
        var_21 = (var_7 != 610);
    }
    #pragma endscop
}
