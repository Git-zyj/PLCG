/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, (((((min((((2147450880 <= (arr_0 [i_0])))), ((-25790 ? var_2 : (arr_0 [i_0])))))) ? (max(((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_6))), (min(8500893868793045048, var_0)))) : 9223372036854775807)))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [10] [i_0] &= (max((((arr_0 [i_1]) | -25790)), (((((var_11 ? var_5 : (arr_4 [i_0] [i_0] [i_0])))) ? (var_8 && var_3) : (((arr_4 [i_0] [i_1] [i_1]) ? 32587 : var_1))))));
            var_14 = (max(var_14, ((max((min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_0] [i_0]))), (((arr_4 [i_0] [i_1] [i_1]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_0]))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_15 [i_3] [i_4] [i_3] [i_2] [i_0] = (((((arr_12 [i_0] [i_0] [i_3] [i_0] [i_4] [i_4]) || (arr_10 [i_0] [i_2] [i_4] [i_5]))) && (((arr_10 [i_5] [i_2] [1] [i_4]) && 2166004893444571165))));
                            var_15 = ((arr_13 [i_3] [i_2] [8] [8] [i_5] [i_4] [i_0]) ? 0 : var_0);
                        }
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            arr_18 [i_0] [5] [i_3] [i_4] [i_0] = (((arr_6 [i_0] [i_0]) && ((((arr_13 [i_3] [i_2] [i_3] [i_4] [i_4] [i_4] [i_6]) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_2] [i_4]))))));
                            arr_19 [i_0] [i_0] [i_3 - 2] [i_4] [i_3] = 336057755;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_22 [i_7] [i_3] [i_3] [i_3] [i_3] [i_0] = (((arr_20 [i_0] [i_0] [i_0] [i_3] [i_7] [i_0]) + (arr_20 [i_7] [i_7] [i_7] [i_3] [i_7] [i_7])));
                            var_16 |= ((arr_4 [i_0] [i_2] [i_3 - 4]) ^ (arr_9 [i_3 + 2] [i_0]));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_17 = ((32587 ? 0 : ((32973 ? (arr_14 [i_0] [i_2] [7] [i_4] [9] [i_4] [i_4]) : -32590))));
                            arr_26 [i_0] [i_2] [i_3] [i_4] [i_8] [i_3] [i_4] = arr_1 [i_3 + 1];
                        }
                        var_18 += (((22873 ? (arr_11 [i_0] [i_3] [i_3 - 1] [i_4]) : 11)));
                        arr_27 [i_3] [i_2] [i_3] [i_4] [i_3] = -29643;
                    }
                }
            }
            var_19 = (--13965);
        }
        var_20 = (((!(((17466 ? 14764 : 65525))))));
    }
    var_21 = 0;
    var_22 = -70368744112128;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                {
                    var_23 = (max((max(288230367561777152, 4091142329)), var_12));
                    var_24 -= min(((((6664 ? -70368744112116 : (arr_34 [14]))))), (((arr_34 [12]) ? (((12 ? 58881 : 11244))) : (max((arr_28 [i_10] [6]), -1)))));
                    arr_36 [i_9] [i_9] [i_9] [i_9] = (((max(var_2, var_12)) != (((((((arr_35 [i_9] [i_9] [i_9]) ? 2345870702 : 4294967295)) != (9223372036854775806 && -1)))))));
                    var_25 *= ((min((((arr_31 [10] [i_10]) ? (arr_35 [i_9] [i_9] [i_11 - 1]) : (arr_28 [i_9] [14]))), (11264 >= 83460815))) + var_12);
                }
            }
        }
    }
    #pragma endscop
}
