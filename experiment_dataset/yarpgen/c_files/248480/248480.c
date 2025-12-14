/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = ((((((1 ? var_8 : -1661719312))) ? (var_11 & 2147483647) : (((arr_1 [i_1] [i_2 - 2]) ? var_4 : (arr_0 [i_2 - 2]))))));
                    var_15 |= (min(((~(arr_7 [i_2] [i_2 - 2] [i_2 - 1] [1]))), ((((arr_4 [i_2 + 1] [i_2] [i_2 + 1]) - 2147483637)))));
                }
            }
        }
    }
    var_16 += -var_1;
    var_17 = (max((((var_4 - 97) % ((var_12 ? 1661719329 : var_6)))), var_8));
    #pragma endscop
}
