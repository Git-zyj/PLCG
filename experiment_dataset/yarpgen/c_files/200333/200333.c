/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_10, 361543673))) & (((~(min(3739824871, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (((((((!(arr_2 [i_0] [i_0]))) ? var_0 : (arr_3 [i_0] [i_0] [i_0])))) ? (max(((0 ? (arr_2 [i_0] [i_0]) : 1)), (1 >= 2587797167018790489))) : (((arr_0 [i_1]) ? var_2 : (arr_2 [i_0] [i_1])))));
                var_13 = (!var_2);
                var_14 = (min(var_14, var_4));
                var_15 = (max(var_15, 2089782669));
            }
        }
    }
    #pragma endscop
}
