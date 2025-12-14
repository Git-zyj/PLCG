/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((((min((1090890730 + 120), -1234749095))) ? (arr_0 [i_0]) : (120 | 141)));
                arr_5 [i_0] [15] = ((((1090890719 | 115) ? (max(2736581517990441886, 260132909)) : 140)));
            }
        }
    }
    #pragma endscop
}
