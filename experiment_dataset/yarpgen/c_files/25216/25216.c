/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 28;
    var_12 = (max(var_12, (((34 ? var_0 : ((((var_7 == var_1) && var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 += 1;
                arr_5 [i_0] [6] [i_0 + 1] = ((0 <= (var_9 >= var_3)));
            }
        }
    }
    #pragma endscop
}
