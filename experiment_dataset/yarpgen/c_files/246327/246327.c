/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [7] [i_1] = (-(-32767 - 1));
                arr_7 [i_1] = ((arr_2 [i_0 - 2]) == ((8603 ? (arr_2 [i_0 + 1]) : var_4)));
            }
        }
    }
    var_10 = (((!var_9) ? (((((var_8 ? var_4 : 0)) > ((max(9223372036854775807, var_5)))))) : ((((var_1 < var_3) < (!var_1))))));
    var_11 *= (((1 * 0) ? ((var_4 ? var_1 : (!var_9))) : var_8));
    #pragma endscop
}
