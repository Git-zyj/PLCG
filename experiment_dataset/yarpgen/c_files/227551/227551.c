/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((max(var_6, (arr_6 [i_0] [i_0 - 1])))) >= var_1)))));
                    var_15 = (min(var_15, (max((((arr_1 [i_0 + 2]) & (arr_1 [i_0 + 3]))), var_5))));
                }
            }
        }
    }
    var_16 -= (73 ? 73 : -74);
    var_17 = (min(var_17, var_6));
    #pragma endscop
}
