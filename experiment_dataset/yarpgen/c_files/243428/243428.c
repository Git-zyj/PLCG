/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_3 ? (((var_10 + 2147483647) << (((var_3 + 937599516) - 28)))) : (2147483647 / 29147)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = (arr_3 [i_1] [i_1] [i_1]);
                    arr_10 [3] [3] [i_1] [i_1] = (((((var_6 ? 44259 : 1))) && 1));
                    arr_11 [i_0] [i_0] [i_1] = ((44264 | ((((max(var_2, var_2))) / (arr_2 [i_0] [i_0])))));
                }
            }
        }
    }
    var_15 = var_4;
    var_16 = var_3;
    var_17 = (((min(-3323836066721114611, var_5)) / (((var_6 ? var_1 : var_3)))));
    #pragma endscop
}
