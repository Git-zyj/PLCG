/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = ((20127 ? 65525 : 1050710872));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = 1;
                arr_5 [i_0] [i_0] [i_1] = -1;
                var_15 = (max(var_15, (((((22 ? ((3 >> (28672 - 28641))) : (((var_5 ? (arr_0 [i_1]) : 3584))))) % 1)))));
            }
        }
    }
    #pragma endscop
}
