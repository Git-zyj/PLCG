/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((10 ? -var_5 : (min(var_7, var_0)))) | (max(var_7, var_7))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 += (((min((~var_0), -18446744073709551612)) - -var_7));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (~var_8)));
                                arr_13 [i_0] = (3165074201 <= 1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_13 += ((-var_0 ? (~var_6) : ((min(1, var_0)))));
                                var_14 *= var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 *= var_5;
    var_16 = (max(var_16, var_5));
    var_17 |= ((18446744073709551603 ? (((~((min(92, 1)))))) : var_8));
    #pragma endscop
}
