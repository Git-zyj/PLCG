/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 += ((~(min((max(1280032652, 8732379605454902965)), ((((arr_2 [19] [i_0]) ? var_12 : var_8)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((arr_6 [i_0] [20] [i_2 + 2]) - ((~(arr_2 [i_0] [i_1 + 1])))));
                    var_16 = ((((((arr_6 [i_0] [i_1 - 1] [i_0]) ? (arr_5 [i_1]) : ((var_10 ? var_2 : var_13))))) - (arr_2 [20] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (((~19) + ((~(((arr_2 [i_0] [i_0]) ? var_11 : var_13))))));
                                var_18 -= (((arr_6 [11] [i_3] [11]) ? ((((max(var_1, (arr_6 [i_1 - 1] [i_2] [i_4])))) ? var_0 : (arr_9 [i_3] [i_1 + 1]))) : var_14));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (arr_10 [i_0] [i_0 - 1] [i_0]);
        var_20 = (min(var_20, (((+((((max((arr_12 [i_0] [i_0] [16]), (arr_12 [i_0 + 2] [0] [18])))) + ((1782 ? 65517 : (-127 - 1))))))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_21 -= (((var_12 == var_9) * (((!(arr_13 [i_5]))))));
        arr_15 [i_5] = min(-5617653751692010370, (arr_3 [i_5]));
        arr_16 [i_5] = (((((~(((arr_12 [i_5] [i_5] [i_5]) ? var_6 : var_3))))) ? (arr_1 [i_5]) : ((-(!var_2)))));
        var_22 = (max(var_22, var_3));
    }
    var_23 = var_10;
    #pragma endscop
}
