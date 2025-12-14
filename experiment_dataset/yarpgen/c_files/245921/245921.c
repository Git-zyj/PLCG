/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (~-32756);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((!((var_4 > (~0)))));
                var_15 = (max(var_15, ((((-23 + 9223372036854775807) << (((-32767 + 32825) - 58)))))));
                var_16 = 0;
            }
        }
    }
    #pragma endscop
}
