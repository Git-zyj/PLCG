/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((+(((-32767 - 1) | 10))));
    var_14 = 4294967290;
    var_15 = ((~(((min(var_4, 29)) >> (32755 - 32731)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = ((var_5 > ((((max(var_9, var_2))) ? (arr_2 [i_0 - 3]) : -2043628759))));
                    arr_12 [i_2 - 2] [i_2] [i_0] = ((((max(((min(-120, 0))), (arr_7 [i_2] [i_1] [i_0])))) ? (((-(arr_6 [i_0] [i_1 + 1])))) : var_5));
                }
            }
        }
    }
    var_17 &= var_0;
    #pragma endscop
}
