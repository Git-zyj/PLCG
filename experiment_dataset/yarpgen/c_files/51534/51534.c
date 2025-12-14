/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((var_8 * var_10), var_10));
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (((max((arr_6 [i_0] [i_2 + 1] [i_0]), var_4)) + (9262248838215889191 >= 39)));
                    arr_8 [1] [i_0] = (((((5221145762610317518 % ((((arr_2 [i_0]) ? var_5 : var_11)))))) ? -1 : (min((arr_3 [4] [i_0] [i_0]), ((var_7 ? var_6 : var_8))))));
                    arr_9 [i_0] [i_1] [11] [i_0] = 6255384234972187255;
                    var_15 = (((((var_9 < (arr_4 [i_1 + 2])))) % (arr_4 [i_1 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
