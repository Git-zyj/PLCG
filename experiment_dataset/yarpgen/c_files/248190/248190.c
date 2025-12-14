/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_9 - (~3))) << (-21700847 && -var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] = (max(((~(arr_2 [i_0] [i_0 - 1] [i_0 - 1]))), ((0 ? (arr_2 [i_0 + 2] [i_0 - 2] [i_0 + 2]) : (arr_2 [1] [i_0] [i_0 - 1])))));
                arr_5 [i_1] = ((-((min(((((arr_3 [16]) && (arr_2 [i_0 + 2] [i_0] [17])))), var_0)))));
                arr_6 [i_1] [i_1] = (((((arr_1 [i_0 - 2] [i_0 - 2]) ^ var_2)) + ((~(arr_0 [i_0])))));
                var_13 *= ((+(((arr_2 [i_0] [i_0] [i_0 + 1]) ? var_8 : var_5))));
            }
        }
    }
    #pragma endscop
}
