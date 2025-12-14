/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((+(((var_14 != var_11) + var_2))));
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_21 *= ((((~(max(0, 63)))) <= (arr_3 [i_0 - 1])));
                var_22 = ((-0 <= (-108 - 17691)));
                var_23 = min(var_3, (max(47864, 39193)));
            }
        }
    }
    #pragma endscop
}
