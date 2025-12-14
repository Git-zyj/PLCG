/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(min((max(var_8, var_10)), (min(var_7, var_9))))));
    var_17 = (max((max(var_13, (var_7 < var_7))), ((((var_13 ? var_8 : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((((var_12 || (arr_2 [i_0] [i_1])))));
                    var_19 ^= (max((max((arr_5 [i_0 - 1] [i_0 - 2]), (arr_2 [i_2 + 1] [i_0 + 1]))), var_10));
                    arr_7 [i_0] [9] = ((max(var_3, (arr_6 [i_1] [i_1] [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
