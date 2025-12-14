/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_4 ? var_7 : var_3)) || (((var_11 ? 255 : var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 |= 12793538521659754052;
                var_14 = (max((max((((arr_5 [i_0] [i_1]) + (arr_4 [i_0] [i_0 + 1] [i_0]))), ((((-2147483647 - 1) ? 33554431 : (arr_3 [i_0 - 1] [3])))))), (min((arr_3 [i_0 + 1] [i_0]), (min((arr_4 [i_0] [i_1] [i_0]), -121))))));
            }
        }
    }
    #pragma endscop
}
