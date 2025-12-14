/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (((arr_7 [i_1 - 2] [i_1 - 2] [i_2 - 1]) ? (arr_7 [i_1 + 2] [i_1 + 2] [i_2 - 3]) : ((1 ? 65535 : 2161114215))));
                    arr_9 [i_2 - 3] [i_1 + 1] [i_0] = ((-9223372036854775796 == (arr_5 [17] [17])));
                }
            }
        }
    }
    var_13 = var_4;
    var_14 = ((var_4 ? var_3 : var_8));
    #pragma endscop
}
