/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_0 - 1] = (((!106864117) && (((((arr_6 [i_0 + 1]) ? 0 : var_2))))));
                arr_9 [i_1] = (max(((-(arr_4 [i_0] [i_0] [i_1]))), (((arr_4 [i_0] [i_0] [i_1]) ? (arr_4 [i_0 - 1] [i_1] [i_1]) : (arr_4 [i_0 - 1] [1] [i_1])))));
            }
        }
    }
    var_16 += ((~(~-106864099)));
    #pragma endscop
}
