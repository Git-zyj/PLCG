/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (((((~(arr_3 [i_0] [i_1 - 1])))) ? (((arr_4 [i_1 - 1] [i_1 + 2]) | (arr_3 [i_1 - 1] [i_1 + 1]))) : (((~(arr_2 [i_1 - 1] [i_1 + 2]))))));
                var_18 = (6154 - -101);
                arr_5 [i_0] = (max((((arr_2 [i_1 + 1] [i_1]) ? (arr_2 [i_1 + 1] [i_0]) : var_11)), (((arr_3 [3] [i_1 - 1]) ? 1 : (arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [i_2] = var_1;
                arr_14 [i_2] [i_2] = (~1);
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_18 [i_4] = ((((arr_2 [i_4] [1]) - 4294967295)));
        arr_19 [i_4] = 17800564084714968993;
        var_19 = (max(var_19, (((var_14 | ((((((-1 + 2147483647) >> (3793670819 - 3793670809)))))))))));
        var_20 -= ((~((min((arr_15 [i_4] [1]), (arr_3 [i_4] [i_4]))))));
    }
    #pragma endscop
}
