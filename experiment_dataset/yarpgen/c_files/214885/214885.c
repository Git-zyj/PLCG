/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (40 + 65535)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((-(max(((max(var_7, 42))), 16383)))))));
                arr_4 [i_0] [i_0] = 0;
            }
        }
    }
    var_14 = -1;
    var_15 |= ((((128121217 && (((var_8 ? var_3 : 17592186028032))))) ? (var_10 && 0) : (!2047)));
    var_16 = 65526;
    #pragma endscop
}
