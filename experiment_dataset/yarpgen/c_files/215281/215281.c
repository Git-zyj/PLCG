/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_11 += (arr_6 [i_1 + 1] [i_3 - 1] [i_1 + 1]);
                        var_12 = ((arr_4 [i_0] [i_2] [i_3]) < (min((arr_7 [i_1 - 1] [i_3 - 2]), (max(var_9, (arr_6 [16] [1] [i_3 - 2]))))));
                    }
                }
            }
        }
        var_13 = ((((!((max(-28, (arr_1 [i_0])))))) ? (~var_8) : var_3));
    }
    var_14 = (min(var_14, (((((!(((var_9 ? var_7 : var_5))))) ? var_2 : var_0)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    arr_16 [i_4] [i_4] [i_4] = (((((((max(12887617826691306734, (arr_8 [i_4] [i_4])))) ? var_10 : (min((arr_13 [i_4] [i_4]), -1))))) ? (max((var_1 != 155), (max((arr_14 [1] [i_5] [i_5] [i_4]), var_2)))) : 127));
                    var_15 = (max((((arr_10 [i_4] [i_4]) ? (arr_10 [i_4] [i_4]) : (arr_10 [i_4] [i_4]))), (min((arr_10 [14] [i_4]), (arr_10 [i_4] [i_4])))));
                    arr_17 [i_4] [19] [i_4] = (min((((-4 / var_2) - (((max(var_6, 8666)))))), (((!((1 < (arr_14 [i_4] [17] [7] [i_4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
