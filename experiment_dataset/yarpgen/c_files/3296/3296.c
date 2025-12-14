/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_1 [3]);
                var_15 = (min(var_15, (((~(arr_1 [8]))))));
                arr_6 [i_0] [i_0] [i_0] = ((min((arr_3 [i_1] [i_0]), 223)));
            }
        }
    }
    var_16 = (max((((!209) ? ((32 ? 6126308384353505862 : -19541)) : (!var_0))), (-14030 | 209)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3] = ((((((((!(arr_2 [0] [i_3]))))) <= (arr_3 [i_2] [i_3]))) ? (((173 ? (var_13 || 0) : var_10))) : ((var_7 ? var_0 : ((-(arr_11 [i_2])))))));
                arr_13 [i_2] [i_3] = (~var_12);
            }
        }
    }
    #pragma endscop
}
