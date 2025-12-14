/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 4002870670904386037));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (83 > 248319370);
                arr_6 [i_1] = ((((max((!var_13), (var_5 % var_15)))) ? (((((2584936661 ? var_10 : var_9))) ? (2147483647 - 127) : 4095733000)) : (((~(((((-127 - 1) + 2147483647)) << (127 - 127))))))));
                arr_7 [i_0] [i_1] = (((+((min((-127 - 1), var_13))))));
                arr_8 [i_1] [i_0 - 2] [i_0 - 2] = (max((~-127), ((((arr_3 [i_0 + 1] [23]) <= 9167397613981758518)))));
            }
        }
    }
    var_19 = var_4;
    var_20 = var_1;
    #pragma endscop
}
