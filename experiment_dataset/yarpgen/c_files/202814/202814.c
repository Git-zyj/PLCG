/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (((-807310299 == var_5) == (arr_6 [i_0] [i_0])));
                var_15 = ((((((min(var_5, 16384))) ? ((min((arr_3 [10] [i_1]), (arr_3 [i_1] [8])))) : (arr_4 [i_0]))) <= ((-(max(1, var_7))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_14 [i_2] [13] [13] = ((arr_12 [i_2] [i_2]) ^ (max((!var_9), (-947304957 + var_7))));
                var_16 = 3896997060;
            }
        }
    }
    #pragma endscop
}
