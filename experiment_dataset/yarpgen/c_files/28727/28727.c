/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_10 *= (((((((~(arr_0 [i_0]))) ^ 89))) ? (arr_4 [i_0] [11]) : 149411474));
                var_11 = (1052856121 | 161);
                arr_6 [i_0] [i_0] = ((~(((34359738336 & 31) - 989412155498901811))));
            }
        }
    }
    var_12 = ((((-17 ^ 2042210771) ? var_5 : (((7803447535529454993 ? var_2 : var_6))))));
    var_13 = ((1939216056 ? var_4 : -6963));
    var_14 = (!var_0);
    var_15 = (min(var_15, (((max(((var_9 ? var_4 : var_2)), var_4))))));
    #pragma endscop
}
