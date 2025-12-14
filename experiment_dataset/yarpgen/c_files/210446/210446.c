/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] &= ((max(4291293013, 3674259)));
                arr_5 [3] [i_1] = ((!(1 - 871872667)));
            }
        }
    }
    var_19 = var_11;
    var_20 = ((-(!-9223372036854775806)));
    #pragma endscop
}
