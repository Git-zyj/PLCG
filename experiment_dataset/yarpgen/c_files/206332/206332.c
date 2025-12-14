/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (32763 != var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((~(4294967285 != 0)))) ? ((-118 ? (arr_3 [i_0] [i_0] [i_1]) : var_8)) : (((((arr_0 [i_0]) > 174)))))))));
                arr_4 [12] [12] = min(((~(arr_2 [i_0]))), (arr_0 [i_1]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = ((((((min(var_0, var_5)) ^ 18446744073709551601))) ? var_13 : -var_13));
                            var_17 *= 0;
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((((((arr_1 [i_2] [i_3]) & ((0 ? 5855505796384641198 : var_2))))) ? (((var_4 <= 18446744073709551610) & -var_7)) : -1));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_18 = var_4;
                    var_19 += var_4;
                }
            }
        }
    }
    #pragma endscop
}
