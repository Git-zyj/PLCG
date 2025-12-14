/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 ^= 1;
                                arr_13 [11] [i_0 - 1] [i_1] [i_2] [i_1] [0] = (min(-53143, (arr_2 [i_2])));
                                var_16 = (max(var_16, var_10));
                            }
                        }
                    }
                    var_17 |= ((!(((76 << ((((1 ? var_2 : var_10)) - 2893621876)))))));
                    var_18 += (!12378);
                }
            }
        }
    }
    var_19 |= 16444;
    var_20 ^= (max((max(-6070872394066579717, -4611686018427387904)), (((var_0 ? 53143 : var_14)))));
    #pragma endscop
}
