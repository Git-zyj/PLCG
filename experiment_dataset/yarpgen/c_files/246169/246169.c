/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    var_14 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (((arr_1 [i_0]) || ((((arr_1 [i_2]) * (arr_1 [i_0]))))));
                    arr_7 [i_2] [i_0] = ((-(((arr_0 [13]) ? var_12 : (arr_3 [i_0] [5] [i_0])))));
                    arr_8 [i_0] = (arr_6 [i_1] [i_0]);
                }
            }
        }
    }
    var_16 |= (max(var_8, ((+((31594 ? (-32767 - 1) : var_4))))));
    #pragma endscop
}
