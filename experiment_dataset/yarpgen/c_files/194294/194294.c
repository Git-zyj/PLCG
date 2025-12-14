/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(-420282335, -23)) + 2147483647)) << (var_7 - 15478922097269066884)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_18 |= (((max(var_13, (arr_2 [i_0 + 3] [i_1 - 1] [i_1 + 2]))) ^ var_11));
                arr_4 [7] [i_0] = (((4143251266 ? var_5 : var_12)));
                arr_5 [i_0] [i_0] = ((((var_11 ? 4143251239 : 43747))));
            }
        }
    }
    #pragma endscop
}
