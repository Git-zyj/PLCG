/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((min(((min(var_9, (-9074868850231817059 != 1)))), ((var_0 | ((var_8 ? var_3 : var_7)))))))));
                var_12 += ((min((((var_6 && (arr_5 [i_0] [i_0] [i_1 - 1]))), (~10924)))));
                var_13 = (max(var_13, (((0 ? ((min(((max(var_5, var_2))), var_8))) : (arr_0 [i_0 - 1]))))));
            }
        }
    }
    var_14 = var_5;
    #pragma endscop
}
