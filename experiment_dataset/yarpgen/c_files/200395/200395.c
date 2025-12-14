/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max((min(9945716342613572097, 448)), ((min(var_12, var_14))))), 1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 |= var_3;
                arr_5 [i_0] [i_1] [i_0] &= ((((max((arr_1 [i_0 - 3]), (arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 3])))) ? ((((min(var_8, var_4))) ? var_2 : (((arr_1 [4]) & 9223372036854775793)))) : ((-139293407 ? (((((arr_0 [i_0] [i_1]) && var_3)))) : (arr_4 [3] [i_0 - 3])))));
                var_18 |= ((-(((!(arr_2 [i_0 - 2] [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
