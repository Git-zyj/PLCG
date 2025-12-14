/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((max((min(var_16, 18446744073709551614)), ((var_1 ? 234881024 : 15865174360640464602)))) % (((max(1, 55))))))));
                    var_18 = (arr_2 [i_0]);
                    var_19 = var_5;
                    var_20 &= ((!(15 % 1)));
                }
            }
        }

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_21 ^= (11598 > 2530897527);
            arr_11 [i_0] = (~((926433075 ? -26 : var_15)));
            var_22 = (((2525408120 || 1) || ((((arr_3 [i_0]) ? var_7 : (var_0 || 3178484272))))));
        }
    }
    var_23 = ((0 ? 7 : 7));
    var_24 = ((var_2 * var_16) * (-37 * 12008));
    #pragma endscop
}
