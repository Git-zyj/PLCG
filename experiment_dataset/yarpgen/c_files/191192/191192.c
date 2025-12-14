/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_2 ? (((62193652 != var_12) ? 57516 : (max(18446744073709551615, 18446744073709551615)))) : -493161615));
    var_21 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = ((-((493161621 ? -493161615 : ((var_15 ? -493161621 : -34858263))))));
                var_22 = -493161620;
            }
        }
    }
    var_23 = (max(((min(var_0, var_8))), 18446744073709551602));
    #pragma endscop
}
