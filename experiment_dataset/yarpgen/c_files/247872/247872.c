/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((((18446744073709551614 ? 1 : var_11))) % var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (max((min(var_2, (arr_4 [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1]))), 71));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 *= (((((var_5 ? var_15 : (arr_9 [i_0] [i_1 - 3] [i_2] [i_3] [i_3])))) ? 3385198313205376437 : 12582912));
                                var_20 = (((((((var_1 ? var_5 : 3385198313205376420))) || 1)) ? 18446744073709551614 : ((((!15061545760504175195) ? (max(var_11, 147765619)) : 36876)))));
                                var_21 = (max((((((var_10 ? 57 : (arr_4 [i_0] [i_1 - 3] [i_3] [i_4])))) ? (arr_3 [i_0] [i_1 - 2]) : (0 % 47))), (arr_11 [i_0])));
                                var_22 = (((var_11 & 2) >> (((arr_3 [i_1 - 1] [i_1 - 3]) + 1806666309))));
                            }
                        }
                    }
                    var_23 = (var_6 == -2);
                }
            }
        }
    }
    var_24 = (max(var_24, var_16));
    #pragma endscop
}
