/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (((arr_2 [i_0] [i_0]) << (((((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [i_0]))) - 9981))));
        arr_3 [10] = (max(var_6, var_13));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])));
        var_20 = (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_21 = ((((~(((arr_5 [i_2] [i_2]) >> (var_18 - 61)))))) ? (!var_9) : (!var_7));
        var_22 = (((((((max(-29052, var_5))) & var_0))) ? (arr_4 [i_2] [i_2]) : ((max(29051, 1)))));
        arr_11 [12] = ((!var_8) ? ((252 ? 24708 : 1793798931)) : ((-(!29052))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_23 = (max(((var_9 ? ((var_18 ? 29052 : var_3)) : var_12)), (((141 <= (!var_13))))));
                                var_24 = (max(var_7, var_11));
                            }
                        }
                    }
                    arr_23 [i_2] [i_2] [6] = (arr_12 [1] [7] [i_4]);
                }
            }
        }
        arr_24 [i_2] [4] = var_8;
    }

    for (int i_7 = 4; i_7 < 20;i_7 += 1)
    {
        var_25 = (((((!(arr_25 [i_7 - 1])))) - ((-8 ? 60 : -776913))));
        var_26 = (arr_1 [i_7 - 3]);
    }
    var_27 = ((!((!(3406215424 & -29052)))));
    var_28 = (((((!((max(var_0, var_8)))))) << (-var_1 - 10354)));
    #pragma endscop
}
