/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((min((min(var_14, 394639762)), ((max(var_7, 177)))))), (max((3932160 >= 394639782), ((-36 ? (-2147483647 - 1) : 9985535919089318502))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 *= ((~(((max(1, 394639798)) >> (((~0) + 5))))));
                var_17 = (!(-2147483647 - 1));
            }
        }
    }
    var_18 = (max(var_0, var_7));
    var_19 = var_6;
    var_20 &= (((((~var_7) & (max(var_13, var_10)))) ^ (~10)));
    #pragma endscop
}
