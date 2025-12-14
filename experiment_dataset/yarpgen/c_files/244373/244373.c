/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_7);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [1] [i_1] [i_1] [1] = ((-((((arr_5 [i_3]) == (arr_2 [i_2] [i_3]))))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = var_3;
                    }
                }
            }
        }
        var_12 = ((((min((((arr_8 [i_0] [i_0] [5] [i_0] [i_0] [i_0]) ? var_3 : (arr_7 [i_0] [1] [2] [i_0]))), var_5))) ? ((((((((arr_3 [8]) ? 1 : var_10))) >= ((-57 - (arr_0 [i_0]))))))) : ((var_8 ? (((arr_6 [i_0] [5]) ? (arr_1 [6] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? -1758384160234393986 : var_5))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_15 [14] &= ((var_9 % ((((max(var_2, (arr_13 [8])))) ? (arr_13 [0]) : (((arr_14 [i_4] [8]) ? (arr_14 [i_4] [10]) : var_1))))));
        var_13 -= (min((((-((min((arr_13 [4]), 1)))))), (((arr_13 [6]) / ((var_10 ? var_6 : var_1))))));
        var_14 = (((arr_14 [i_4] [20]) ? (-32767 - 1) : (((arr_13 [8]) | (arr_14 [18] [18])))));
        var_15 = -var_9;
        var_16 = (arr_14 [i_4] [i_4]);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_17 -= (max((((246 ? var_8 : var_6))), (max((arr_16 [i_5]), (((arr_16 [i_5]) + var_4))))));
        arr_19 [i_5] [i_5] = ((!((min((arr_17 [i_5]), (((arr_13 [18]) ? 618073721001112380 : var_2)))))));
        arr_20 [i_5] = (((max(((((arr_14 [i_5] [10]) ? (arr_13 [6]) : var_4))), (((arr_14 [14] [14]) >> 1)))) / (!var_0)));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_18 *= (var_0 / var_2);
            arr_26 [i_6] [i_6] = (((~16383) ? (!var_6) : ((-1 ? 4354070427781027348 : (arr_10 [i_7] [i_6] [i_6] [i_7] [i_7])))));
            var_19 *= ((~(arr_22 [i_6])));
        }
        arr_27 [i_6] [i_6] = (arr_23 [i_6]);
    }
    #pragma endscop
}
