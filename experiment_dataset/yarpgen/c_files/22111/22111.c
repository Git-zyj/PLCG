/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((3726683013 ? ((3110339572 ^ (arr_2 [i_1] [i_1]))) : ((((((-1 ? 82 : (arr_3 [i_0] [9] [i_0])))) ? var_4 : var_6)))));
                var_13 = ((var_3 ? (((arr_3 [i_0] [i_1] [i_1]) / var_7)) : (arr_0 [i_0] [i_0])));
            }
        }
    }
    var_14 = ((var_12 == (max(192, var_4))));
    #pragma endscop
}
