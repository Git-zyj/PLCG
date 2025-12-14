/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 ^= ((+(((((-1 ? (-32767 - 1) : 18446744073709551611)) < 1)))));
                    arr_9 [i_0] [i_0] [i_0] = (min((-7 | -7), (-7 < 0)));
                }
            }
        }
    }
    var_18 ^= var_14;
    #pragma endscop
}
