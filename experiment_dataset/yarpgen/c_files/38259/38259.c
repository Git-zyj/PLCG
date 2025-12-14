/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (min(((((arr_0 [i_1 - 1] [i_1]) && (arr_4 [i_1 + 3] [i_0])))), (((arr_6 [i_1 - 1] [i_1]) - (arr_3 [i_1 + 1] [i_0] [i_1])))));
                arr_8 [i_0] = (min(((~(((arr_0 [i_0] [i_1]) ? (arr_4 [i_0] [i_0]) : (arr_5 [i_0]))))), var_9));
                arr_9 [i_0] = (max((((0 + var_9) + (arr_3 [i_0] [i_0] [i_1]))), ((((((arr_6 [i_1] [i_0]) * (arr_3 [i_1] [i_0] [i_0])))) ? var_1 : var_4))));
            }
        }
    }
    var_10 = ((min(((var_2 ? var_5 : var_7), 0))));
    var_11 -= (-var_2 == (((((var_0 >> (var_3 - 2316)))) ? (min(var_1, var_6)) : (((1 ? 1 : 152711564))))));
    #pragma endscop
}
