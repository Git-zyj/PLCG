/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(var_9, 9223372036854775794);
    var_21 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (min((((arr_5 [i_0] [i_1] [i_1]) <= 1)), ((!(arr_5 [i_1] [i_1] [i_0])))));
                arr_6 [i_0] = ((2 > (max(18446744073709551614, (arr_2 [i_0])))));
            }
        }
    }
    #pragma endscop
}
