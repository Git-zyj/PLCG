/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 <= (((var_5 ? var_1 : (4398046511103 <= 19))))));
    var_15 = var_7;
    var_16 -= ((((((65535 & var_9) ? -1712 : var_8))) ? 17631 : 207));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = var_13;
                arr_7 [i_0 - 1] [0] [i_1] &= 794248044;
                var_18 = ((var_2 ? ((9223372036854775807 ^ (arr_6 [i_0] [i_0]))) : ((18446744073709551615 ? 106 : ((134217712 >> (203 - 140)))))));
            }
        }
    }
    #pragma endscop
}
