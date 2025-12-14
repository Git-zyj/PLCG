/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [7] [7] = ((1 ? (arr_0 [i_0]) : var_10));
        arr_3 [i_0] = (max(((min(8349532764389156472, var_10))), ((((arr_1 [i_0]) > var_3)))));
        var_13 = (min(var_13, (((var_0 ? ((((arr_0 [i_0]) <= (max((arr_0 [i_0]), (arr_1 [i_0])))))) : ((((!(arr_0 [i_0]))) ? (((arr_1 [i_0]) ? -1 : (arr_0 [i_0]))) : (arr_0 [i_0]))))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 = (244 / 191);
            arr_7 [i_1] [i_1] [i_1] = ((((((((var_2 ? var_3 : var_8))) ? -1 : 1251147854))) ? (((!var_3) ? 0 : (((arr_4 [i_0] [i_0] [i_1]) ? (arr_0 [i_1]) : 1946631812)))) : (((min((max(var_8, 0)), 1))))));
        }
        var_15 = (~var_2);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_16 [4] [5] = (arr_10 [i_2] [i_3]);
                    arr_17 [i_2] [i_2] = ((var_5 < (((arr_0 [i_2]) ? var_4 : (arr_0 [i_2])))));
                    var_16 = (min(var_16, ((min(((((-1641100323 ? var_8 : 64)))), (((var_5 + 1) | ((min(var_8, var_8))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 = var_8;
                                var_18 = var_2;
                                var_19 = (~(max(0, (arr_10 [i_2] [i_2]))));
                            }
                        }
                    }
                }
            }
        }
        var_20 = (max((((15933812089959969326 == var_9) & (((arr_15 [i_2] [i_2] [i_2] [8]) ? var_1 : 2558136249708924808)))), ((max(1, (arr_15 [i_2] [i_2] [i_2] [i_2]))))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                arr_27 [i_7] = ((((min((arr_26 [i_7]), 15888607824000626807))) ? 9907352913933927075 : (max(((max((arr_24 [i_7]), 45591295))), var_12))));
                arr_28 [i_8] [i_8] [i_7] = (((arr_23 [i_7]) < (arr_26 [i_7])));
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_21 = ((((var_10 ? ((var_4 ? var_2 : var_1)) : (var_8 >> 0))) <= (!var_7)));
                                arr_36 [i_10] [i_10] [i_10] = (max(-44797511, 41));
                                arr_37 [i_7] [i_8] [i_10] [i_11] = (((((((arr_35 [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_31 [i_9] [i_11] [i_9] [i_7] [19]) : 1548730521)))) != (((-0 && (arr_32 [6] [i_8]))))));
                                var_22 -= var_9;
                            }
                        }
                    }
                }
                var_23 = (max((min((var_2 * 1946631812), var_12)), ((min((arr_30 [i_8] [i_8] [i_7] [11]), (min(4062649767, 1)))))));
                arr_38 [i_8] [6] = ((var_1 & ((var_10 ? (arr_29 [12] [i_8] [12]) : 2754655140883097998))));
            }
        }
    }
    var_24 = ((var_11 ? -var_9 : ((max(var_4, 29972)))));
    var_25 = (min(var_25, ((((((-var_0 | ((var_1 ? 1 : 12829029316640666253))))) ? ((((min(var_11, var_11))) ? 1 : 1)) : var_3)))));
    #pragma endscop
}
