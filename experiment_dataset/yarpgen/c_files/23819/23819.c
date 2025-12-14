/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = (~127);
                var_14 = (arr_0 [i_0 + 2] [i_0 + 2]);
            }
        }
    }
    var_15 -= (((~((4294967295 ? var_2 : 47)))));
    #pragma endscop
}
