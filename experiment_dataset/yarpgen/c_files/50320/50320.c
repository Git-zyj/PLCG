/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (((((var_9 ? var_2 : var_3))) && (((arr_0 [i_0 - 2]) != (arr_1 [i_0])))));
        var_13 = (min(var_13, ((min(((max(-4414, -1))), (((((arr_1 [i_0]) - 2843968263)) - ((((arr_2 [6] [i_0 - 1]) ? 4414 : var_1))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 ^= min(var_10, (arr_9 [2] [2] [2]));
                    var_15 = (min(((max((max(var_1, var_12)), (arr_5 [i_1] [7])))), (min((((~(arr_1 [i_0])))), 4414))));
                    var_16 = (max((((arr_4 [i_1]) ? var_7 : (arr_7 [i_2] [i_0]))), (((1 != (max(4393, 1405474221)))))));
                    arr_10 [i_0] [7] [i_1] [i_1] = (min(((~((~(arr_2 [16] [16]))))), var_0));
                }
            }
        }
    }
    var_17 += var_5;
    var_18 = ((max(var_6, var_6)));
    var_19 = var_10;
    #pragma endscop
}
