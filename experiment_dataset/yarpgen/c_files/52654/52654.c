/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (max((~10), (min((-2147483647 - 1), 24))));
                var_20 = (min(var_20, (((((-44 * 0) < ((min(0, 122)))))))));
            }
        }
    }
    var_21 = (max(var_21, (~-18)));
    var_22 = var_8;
    var_23 &= (((~1) ? -var_0 : (((~(((-127 - 1) ^ 16)))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_24 = ((((max(var_13, var_2))) ? ((min(var_12, -26))) : ((max(3, 1)))));
                arr_12 [i_3] [i_3] [i_3] = ((-1022977094 ? (((-((1 ? 1 : -109))))) : ((-24 ? 0 : 9223372036854775807))));
                var_25 = ((-(((((-2147483647 - 1) ^ 1339306644863708260)) + -0))));
            }
        }
    }
    #pragma endscop
}
