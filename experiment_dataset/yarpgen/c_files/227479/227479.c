/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((((arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]) <= -2000927588)) ? -0 : (min(((max(46534335, 46534335))), (arr_2 [i_0] [i_0])))));
                arr_5 [i_0] = ((arr_4 [i_0]) ? -1008312025 : (arr_3 [2] [2] [i_0]));
            }
        }
    }
    var_17 = (-32767 - 1);
    var_18 = (max(var_18, var_1));
    var_19 = var_9;
    var_20 = var_10;
    #pragma endscop
}
