/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_6));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = (var_14 ? (arr_2 [i_0]) : (min(((((arr_0 [i_0]) ? 127 : (arr_1 [i_0] [i_0])))), (max((arr_1 [i_0] [i_0 + 1]), (arr_2 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = -4437631109462852228;
                        var_20 = min((arr_4 [i_2 + 2] [i_0 + 1] [i_0 - 1]), (max(var_5, -4437631109462852228)));
                    }
                }
            }
        }
        var_21 = (max((arr_3 [i_0 - 1] [i_0 + 1]), (var_14 ^ -4437631109462852228)));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_22 = (((arr_12 [i_4 - 2]) ? var_3 : (arr_13 [i_4 - 3])));
        var_23 = (67108863 >= 67108863);
        var_24 = (arr_14 [i_4 + 1]);
    }
    var_25 = ((var_14 ? 4437631109462852203 : (var_6 + var_6)));
    var_26 = (max(var_26, -4437631109462852213));
    #pragma endscop
}
