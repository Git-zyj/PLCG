/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_13 *= ((!((max(-86, 511)))));
                            var_14 *= ((~((1977489160 ? var_6 : var_2))));
                            var_15 = -4294967295;
                        }
                    }
                }
                arr_10 [i_0 + 3] [i_1] &= (148 < 18446744073709551604);
            }
        }
    }
    var_16 = (max(var_16, (((var_7 ? (((211 > 1) ? ((var_11 ? var_7 : var_11)) : (((905 ? 1 : -81))))) : var_12)))));
    var_17 *= 15622469000646949168;
    var_18 ^= (min(var_11, ((max(0, var_1)))));
    #pragma endscop
}
