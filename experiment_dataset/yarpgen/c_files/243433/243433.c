/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((((var_13 ? (min((arr_3 [i_1] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_1]))) : (!8158516309605714366))) + var_4));
                var_22 = (((((((21521 == -1) < ((-7715365351597665996 ? (arr_4 [5] [i_0] [19]) : 34153)))))) == (((((var_5 ? (arr_1 [i_0] [i_0]) : var_11))) ? var_19 : 6181235014240568138))));
                arr_5 [i_0] = ((!(arr_1 [9] [9])));
            }
        }
    }
    #pragma endscop
}
