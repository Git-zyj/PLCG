/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (9 & var_7)));
                var_20 = (min(((-(arr_4 [i_0] [1]))), (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [2])))));
                arr_5 [i_0] [i_0] [i_1] = (1024 ? 65 : 388932561);
            }
        }
    }
    var_21 &= (((((max(var_11, var_16))) ? var_17 : (min(1708831894618579979, var_12)))));
    #pragma endscop
}
