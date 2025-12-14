/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ? ((8 ? var_5 : 1163837052)) : (((var_0 ? -3406321541454417815 : (var_7 <= var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = var_0;
                var_11 = (arr_6 [i_1]);
            }
        }
    }
    #pragma endscop
}
