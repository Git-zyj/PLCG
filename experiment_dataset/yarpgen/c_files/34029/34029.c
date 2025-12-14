/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 1] = var_14;
                arr_6 [i_0] [i_0] [i_1 + 1] = (((~((-1308021765 ? (arr_2 [i_0] [i_1 - 1]) : 0)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_20 = (((((arr_8 [i_2 + 1]) ? 1 : ((-716922958 ? 39 : var_7)))) > (max((arr_9 [i_2]), -524288))));
        var_21 = -1;
        arr_11 [i_2] [i_2] = ((((((-1666507254 ? 1 : (arr_10 [i_2]))))) <= (!32765)));
        var_22 = (((arr_7 [i_2] [i_2]) ? ((~(arr_7 [i_2] [i_2 + 1]))) : (((231 != (min((-9223372036854775807 - 1), 3854351002)))))));
        var_23 = (max(((-(min(0, 1147538460)))), ((min((arr_7 [i_2] [i_2 + 1]), (arr_7 [i_2] [i_2 + 1]))))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_24 = (max(var_24, (arr_14 [i_3])));
        arr_15 [i_3] [i_3 - 1] = var_11;
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            {
                var_25 *= var_8;
                var_26 = 27245;
            }
        }
    }
    #pragma endscop
}
