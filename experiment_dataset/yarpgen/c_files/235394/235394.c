/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 = var_4;
        var_12 = ((1 ? 1 : (!-32765)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = ((!(((var_2 ? (arr_2 [i_0 + 4] [i_0 + 4]) : (arr_2 [i_0 - 2] [i_0 + 3]))))));
            var_14 = (max(var_14, ((!(arr_2 [i_0 + 1] [i_0 + 1])))));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_2] = (arr_5 [i_0] [i_2 - 1] [i_0]);
            var_15 = (max(var_15, ((((((1 ? 859980977800431873 : (arr_7 [i_0])))) <= (((((0 >> (9814741057607032702 - 9814741057607032659)))))))))));
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, ((((arr_11 [i_0] [i_3] [1]) ? (((arr_5 [i_0] [i_3] [i_4]) ? (arr_0 [i_3 + 3] [i_3 + 4]) : (503332805606822932 | 134))) : (((max((arr_5 [i_0] [i_3] [i_4 + 2]), (min((arr_9 [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0]))))))))))));
                    arr_14 [i_0] [i_0] [i_4] = (~-30);
                }
            }
        }
    }
    var_17 += 1;

    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        arr_19 [i_5] = ((((min(134, 1))) && (32765 && -73)));
        var_18 = (max((((-10114278023019945144 ? ((max((arr_0 [i_5] [i_5]), (arr_17 [i_5])))) : (0 + 116)))), (max((var_1 | var_4), (((~(arr_1 [i_5]))))))));
        var_19 = (max(var_19, (((~(arr_7 [i_5]))))));
    }
    #pragma endscop
}
