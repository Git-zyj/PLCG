/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_13;
    var_20 *= -1;
    var_21 = (~1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = ((var_5 ^ (((arr_0 [i_0]) & 0))));
                var_23 = (max(var_23, ((((arr_2 [i_0] [i_1]) ? -1 : (((4227705512 ? (arr_1 [i_0]) : (!var_16)))))))));
                arr_5 [i_0] [i_1] = (max((arr_1 [i_0]), ((6 ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
