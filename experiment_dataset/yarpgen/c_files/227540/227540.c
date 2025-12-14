/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-7865154935947586250 ? 168 : var_6))) ? (((-55 / 1) ? var_2 : 255)) : 11123311544680001064));

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 = (!9063360122409561073);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 ^= var_3;
            arr_6 [i_1] = ((var_3 * (var_10 > var_4)));
        }
        var_16 = (max(var_16, (67 | 0)));
        var_17 ^= (max((((var_12 + 21137) - var_2)), var_3));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_18 = (((((var_1 ? var_1 : var_9))) ? ((var_3 ? var_5 : var_2)) : ((20 ? var_11 : 15533864853511563053))));
        var_19 = (-3 > var_9);
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_20 = (((((var_10 ? (50925 * 0) : 0))) ? 2147483647 : 1));
        arr_13 [i_3] = ((var_9 == (((1 | -855231926) & ((var_12 ? 2142237163 : var_0))))));
        var_21 = var_4;
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_22 = ((11406 ? 54121 : 2595025703733060464));
                    arr_21 [i_4] [i_4] [i_5] = var_6;
                }
            }
        }
        var_23 = 18446744073709551615;
        arr_22 [i_4] = ((var_0 / (((((var_10 ? var_1 : var_6))) ? ((var_2 ? var_5 : 562786121)) : (((0 ? 7 : 2161688191)))))));
    }
    var_24 = (15851718369976491151 == -21120);
    #pragma endscop
}
