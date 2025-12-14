/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [0] = (min((58510 + -1319956351), (arr_2 [i_0])));
        var_18 = (max((((min((arr_2 [i_0]), 11)))), (max((var_11 ^ 2147483647), (arr_0 [7])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = ((max(46733, 58490)));
        arr_7 [i_1] = (min(((-115 ? 1 : -18720)), (~var_15)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_19 = (min(-99, var_10));
                            arr_16 [i_1] [i_1] [i_1] [i_3] [i_4] [14] = (max((min((arr_15 [18] [i_4] [i_4] [i_3] [i_2] [i_1]), (arr_15 [i_1] [1] [i_2] [i_3] [i_4] [i_5]))), 192));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_1] [19] [i_6] [i_6] = (min(((1 + (arr_12 [i_1] [i_2] [i_3]))), ((16591086949673761635 ? var_9 : (arr_12 [i_2] [i_3] [i_6])))));
                            var_20 = (max((((((83 ? -79 : 26))) ? ((max(43124, -147964845))) : (max(-115, 8382372850495397286)))), (((((((~(arr_14 [i_1] [i_2] [i_2]))) + 2147483647)) >> (58510 - 58496))))));
                        }
                        var_21 = (-((~(arr_11 [i_2] [i_4]))));
                        arr_21 [i_4] [i_3] [i_2] [i_2] [i_1] = (((arr_11 [i_1] [i_2]) > (max(4890171236418938859, -125))));
                        var_22 = (((((((arr_14 [i_4] [0] [i_1]) * 1)))) || var_6));
                    }
                }
            }
        }
        var_23 = ((arr_10 [i_1] [i_1] [2] [i_1]) > (((max((arr_4 [i_1]), (min((arr_11 [i_1] [i_1]), var_5)))))));
    }
    var_24 = ((((~var_12) ? ((20064 ? 4838 : var_0)) : (-971225886 > var_15))));
    var_25 = (max(var_25, (((-(min(((var_0 ? var_16 : var_14)), (var_12 && var_5))))))));
    #pragma endscop
}
