/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_11 >= 76609305) % (~var_5)))) ? var_3 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] = (((((-1608572532 && -76609304) ? (-76609298 & var_4) : (var_5 & var_12)))) ? (max((min(var_11, 5370073509219675666)), 1)) : (min(18446744073709551602, var_3)));
                                var_14 = max((((3670016 >= -76609291) ? var_10 : (min(18446744073709551606, var_1)))), (((((18446744073709551615 ? var_3 : var_3))) ? (min(var_7, 18446744073709551574)) : (max(1191418889, 10333117646104602517)))));
                                var_15 = (max(var_15, ((((((18446744073709551596 ? (var_2 * var_0) : (((var_7 ? var_2 : -1713544375)))))) ? ((~(max(var_4, var_6)))) : (max(((((-1693277310 + 2147483647) >> (-1713544382 + 1713544396)))), (min(var_9, var_6)))))))));
                            }
                        }
                    }
                }
                var_16 -= ((((min(var_9, var_11)) - var_12)) * ((76609323 + (max(var_4, 4611686018426339328)))));
                arr_13 [i_0] [i_0] |= ((((var_2 ? (max(var_5, var_9)) : 18446744073709551615)) & var_5));
                arr_14 [i_0] [i_1] [i_0] = ((-718474023 ? var_7 : (min((min(-147295745, var_1)), ((var_9 ? 10666161 : 18446744073709551584))))));
                var_17 = ((((((31457280 ? var_3 : 2179046073981773717)) / ((var_4 ? 704872419966606164 : var_8)))) * (min(((8122291294785179250 ? 32 : var_0)), (min(var_0, 10))))));
            }
        }
    }
    #pragma endscop
}
