/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((!var_0) ? (min(var_10, var_3)) : 127))), (max(var_17, -17076999807363839256))));
    var_19 = ((var_1 ? ((((max(248, var_16))) ? var_2 : 3125475979)) : var_9));
    var_20 = (!((max((!-98), ((var_14 ? 1169491326 : var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = var_13;
                arr_6 [i_1] = ((!(((-var_0 ? 3988607459 : (arr_3 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
