/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((~(min((~10466), 18446744073709551615))));
                var_18 *= var_7;
                var_19 = (min(var_19, (((((!var_14) ? -36 : (max(25, var_0))))))));
            }
        }
    }
    var_20 -= (((((var_16 + 2147483647) >> ((((max(-36, 36))) - 10))))) | (((~var_2) >> (var_4 - 65417))));
    var_21 &= ((((var_1 ? ((var_8 ? var_5 : 23868)) : (var_14 * var_16))) * (min((var_16 > var_3), (max(var_7, var_13))))));
    var_22 = ((((((var_5 ? var_3 : 3248659181)) ? (-104 != var_0) : ((6 ? 9414 : 1134060522))))));
    var_23 = var_11;
    #pragma endscop
}
