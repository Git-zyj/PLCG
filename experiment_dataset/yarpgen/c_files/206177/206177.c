/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((((((9223372036854759424 ? 1 : var_1))) ? (-10283 | var_0) : 10283)) + ((-1 / ((139637976727552 ? 127 : 18786)))));
                arr_7 [i_0] [i_1] [i_0] = -1;
                var_11 += arr_0 [i_0] [i_1];
            }
        }
    }
    var_12 = 18786;
    #pragma endscop
}
