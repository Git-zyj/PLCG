/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = ((0 ? (((var_9 / var_5) * var_13)) : ((((max(182, 255))) & ((min(var_14, var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] = ((arr_6 [i_1] [i_1]) || 0);
                    arr_9 [i_0 + 2] [i_1] [i_0] = (arr_2 [i_0] [i_0]);
                }
            }
        }
    }
    var_22 = (min(var_0, (max((((var_5 << (244 - 230)))), (max(var_17, var_9))))));
    #pragma endscop
}
