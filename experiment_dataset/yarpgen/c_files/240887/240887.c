/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (((((var_5 == 6814746228311769104) ? ((32766 ? 32759 : -32752)) : -var_13))) ? (((min((-32759 || 2147483647), var_6)))) : ((((var_16 ? var_1 : 1471692640)) & -var_12)));
                    arr_8 [i_0] = (5275976357641376828 % 2147483647);
                    var_18 = ((((((((9223372036854775784 ? 252 : 32741))) ? (((-127 - 1) ? 5275976357641376828 : var_16)) : var_15))) ? (min(var_15, 32759)) : 32767));
                }
            }
        }
    }
    var_19 = (((!5275976357641376823) ? 55760 : var_0));
    #pragma endscop
}
