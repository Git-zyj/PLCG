/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (max((((-109 + var_9) ? (124 + 45905) : (max(var_10, 3485366739883854534)))), ((((((-2147483647 - 1) ? var_8 : var_12)) > (!25))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (min(((var_11 ? (-2147483647 - 1) : (arr_2 [i_0] [1]))), ((min((arr_2 [i_0] [i_1]), -118)))));
                var_15 = ((~((max(var_7, (arr_0 [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = (arr_4 [i_1]);
            }
        }
    }
    #pragma endscop
}
