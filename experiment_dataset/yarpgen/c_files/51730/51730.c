/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_9 [i_3] = ((var_0 > ((((((863203398 ? (arr_1 [i_0]) : var_8))) && (var_7 || 9547393350347039222))))));
                        arr_10 [i_2] [i_1] [i_2] [i_3] [i_0] = ((((((arr_1 [i_2]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_2]) ? (arr_1 [i_1 - 2]) : (arr_1 [i_1 - 2]))) : (((((arr_1 [i_0]) >= 8899350723362512393))))));
                        arr_11 [i_3] [i_3] [i_1] = (arr_6 [i_0] [1] [i_3]);
                        arr_12 [i_0] [i_3] [7] [i_3] = arr_0 [i_3];
                    }
                }
            }
        }
        var_12 = ((var_1 ? (((arr_5 [i_0] [i_0] [i_0] [i_0]) - (arr_5 [9] [i_0] [i_0] [i_0]))) : var_10));
    }
    var_13 = var_9;
    var_14 = var_2;
    #pragma endscop
}
