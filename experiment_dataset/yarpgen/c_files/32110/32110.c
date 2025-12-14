/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~252);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((((((max(65535, 24691))) ? 35548 : -3982968599148752026))), var_0));
                var_13 *= max((!128999636), (((((max(var_11, 65)))) >= ((var_11 ? var_6 : 9223372036854775807)))));
                var_14 = (((max(var_1, 4294967285)) << ((((var_6 ? var_11 : var_6)) - 203))));
                arr_5 [i_0] [i_0] = var_3;
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
