/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 2150182567;
    var_11 = (min(var_11, -var_5));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = ((var_9 ? ((max((arr_1 [i_0 - 2] [i_0 - 4]), (arr_0 [i_0])))) : (((arr_0 [i_0]) ? (arr_1 [3] [i_0 - 4]) : var_6))));
        var_12 += ((((((arr_1 [i_0] [i_0 + 2]) + 59735))) ? ((((0 ? var_6 : 255)) | 0)) : ((((arr_1 [i_0 - 4] [i_0]) ? (arr_1 [i_0 - 4] [i_0 - 4]) : var_9)))));
        var_13 = ((-(arr_0 [i_0 - 1])));
        var_14 = var_7;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_1 - 3] [i_1 - 2] [i_1] [i_1] [i_1] = ((~(min(3310620296, 0))));
                        var_15 = ((((((min(0, (arr_6 [i_0] [i_0] [i_2]))) ^ var_3))) ? ((((((arr_0 [i_2]) ? var_6 : (arr_3 [i_0] [i_0])))) ? (((arr_7 [i_0] [11] [i_2] [i_3]) | 255)) : (((arr_7 [i_0] [i_1 - 1] [i_2] [i_3 - 1]) ? 5993 : -1)))) : (-32767 - 1)));
                        var_16 = 32767;
                    }
                }
            }
        }
    }
    #pragma endscop
}
