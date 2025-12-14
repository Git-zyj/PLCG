/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = var_1;
                var_19 = (((max((((16958549652524677555 ? 1950407964 : var_9))), (~18446744073709551615)))) ? 38 : ((((var_11 <= (arr_2 [i_1]))) ? 1073741823 : (0 & 1950407991))));
                arr_4 [4] [i_1] = (((((~(arr_3 [12] [i_1] [i_1])))) ? ((var_5 ? 1950407957 : (arr_3 [6] [i_1] [i_1]))) : (((~(arr_0 [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    var_20 = 4595995214676913771;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_21 = (-12494 <= 127);
                            arr_16 [i_5] = ((((((arr_13 [i_5 - 1] [i_4 - 1] [i_2 - 1] [i_2 - 1]) ? 65524 : (arr_13 [i_5 - 1] [i_2] [i_2 - 1] [i_2 - 1])))) ? ((var_13 ? (arr_12 [i_4] [i_3] [i_4]) : 3148856805)) : (((max((arr_13 [i_5 - 1] [i_4 - 1] [i_2] [i_2 - 1]), (arr_13 [i_5 - 1] [i_4 - 1] [i_2 - 1] [i_2 - 1])))))));
                            arr_17 [i_5] [i_3] [i_5] [i_3] = (((((!((min(12516, var_10)))))) % ((max(18446744073709551614, var_11)))));
                            var_22 = ((((-1 ? (((arr_11 [i_2 + 1] [i_2 + 1]) ? var_9 : 1950407964)) : (((max(41, var_3)))))) * (!var_7)));
                        }
                    }
                }
                var_23 = ((min(-var_17, ((max(-912350439378485417, (arr_6 [i_2] [i_3])))))) / (((var_1 * var_0) * ((max(2344559338, -45))))));
                var_24 = 18446744073709551613;
            }
        }
    }
    #pragma endscop
}
