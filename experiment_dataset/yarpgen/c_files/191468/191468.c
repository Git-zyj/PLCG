/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = -1;
                arr_4 [i_1] [i_1] = (arr_0 [i_1 + 3] [i_1 - 1]);
            }
        }
    }
    var_12 = (min(((var_5 ? (min(var_0, var_0)) : var_7)), (((var_1 >= ((min(-27149, 0))))))));
    var_13 = (min((((1 && (((var_7 ? var_7 : var_4)))))), ((-(var_4 - var_10)))));
    #pragma endscop
}
