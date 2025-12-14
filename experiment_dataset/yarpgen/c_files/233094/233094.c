/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_4 ? var_7 : var_4) * var_4))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 += (!9942487121558785993);
                    arr_7 [i_0 - 1] [i_0] [i_0] [i_0] = 18446744073709551615;
                    var_13 = (-1484876670157033268 - var_3);
                }
            }
        }
    }
    var_14 = (min((((var_10 + (16368 + -22)))), var_4));
    var_15 = ((min(var_9, (~536870911))));
    var_16 ^= (max(var_3, (max((-284264605 >= var_2), (var_7 ^ 3248006272)))));
    #pragma endscop
}
