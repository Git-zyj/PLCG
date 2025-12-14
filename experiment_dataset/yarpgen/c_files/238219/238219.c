/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 20345;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((~(arr_1 [i_0]))) > 20594);
        var_21 = (min(((~(arr_0 [i_0]))), 0));
        arr_3 [11] = (min((!-18446744073709551604), (min((arr_0 [i_0]), -32754))));
        var_22 = max((((((32738 << (arr_1 [i_0])))) ? ((32746 + (arr_0 [i_0]))) : ((23 ? 1498306351331429606 : 65520)))), 40447);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_23 = 65520;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_24 = (((arr_11 [i_1] [i_1] [i_1] [i_4]) > ((min((arr_11 [i_3] [i_4 + 2] [i_4 + 2] [i_3]), var_12)))));
                        arr_13 [i_1] [i_1] = (min(1, 96));
                    }
                }
            }
        }
        var_25 = (min(-29336, (min((arr_6 [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_1])))));
        var_26 = (((((-1 ? -var_5 : -70))) || (arr_10 [i_1])));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_19 [i_6] [i_5 - 2] [19] = ((-(min((((4246201354 ? 25 : var_6))), (min(9118777455048263407, var_18))))));
                    var_27 = (arr_14 [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            {
                arr_24 [i_7] [i_8 - 1] [i_7] = (arr_7 [i_8 + 1] [i_8 - 1] [i_8]);
                var_28 = (~18446744073709551601);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        {
                            var_29 = ((((min((arr_25 [i_7] [12] [i_7]), (arr_0 [i_7])))) ? (((var_15 ? -2306 : 16203463741928557628))) : (arr_9 [i_7] [i_8 - 1] [i_8 - 1] [i_10 + 1])));
                            arr_30 [i_7] [i_8] [i_7] [i_10] [i_9] = 1;
                        }
                    }
                }
                var_30 = 255;
            }
        }
    }
    var_31 = var_1;
    #pragma endscop
}
