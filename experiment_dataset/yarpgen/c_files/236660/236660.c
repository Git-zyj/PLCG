/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max((((((var_3 ? var_6 : var_2))) ? var_11 : (max(var_8, var_3)))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max((arr_0 [i_0 + 2]), (arr_1 [i_0 - 3])));
                arr_5 [i_0 + 1] [i_1] = (max(var_8, 4344505688252451402));
                arr_6 [i_0 - 3] = (min((arr_0 [i_0 - 1]), ((((((arr_1 [i_1]) ? var_9 : var_5))) ? (max(-5502573938062742373, -2062553337)) : (arr_1 [i_0 - 3])))));
            }
        }
    }
    var_13 = (min(var_13, (((var_9 ? ((var_2 ? (var_5 || var_6) : 0)) : var_8)))));
    var_14 = var_1;
    #pragma endscop
}
