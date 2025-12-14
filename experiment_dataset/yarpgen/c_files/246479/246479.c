/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_5 ^ var_6) ? ((var_7 ? 0 : 2767188734)) : 2767188718)) != var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((min(0, 3410363916)) << ((((arr_2 [i_1 - 1]) < (((1527778561 ? 5650 : 5650)))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 &= (1527778561 ? (min((min((arr_6 [i_0]), var_15)), (1419583042 & 1))) : var_11);
                                var_19 = (arr_8 [i_0] [i_0] [i_2] [i_0]);
                                var_20 = min(((~(max((arr_4 [i_4] [i_1]), var_10)))), (3047833609 & var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (-1 > 1);
    var_22 = 1527778554;
    #pragma endscop
}
