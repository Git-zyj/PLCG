/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((!((((var_14 ? var_1 : var_6))))));
    var_20 -= -var_0;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_21 ^= var_10;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_0 - 2] [i_1 + 3] [i_2] [i_1] = (!var_15);
                        arr_11 [i_1] [i_2] [i_1] [i_1] [i_1 + 4] [i_1] = (((!var_4) ? (((var_2 + 2147483647) << (5649108829826388272 - 5649108829826388272))) : var_2));
                    }
                    arr_12 [i_1] [10] = (!var_12);
                    arr_13 [i_0] [i_0 + 1] [i_0 - 2] [i_1] = ((16171226837115658244 ? ((var_6 ? var_10 : -20)) : var_16));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1 + 3] [i_1 + 3] [i_2] [i_2] [i_1 + 3] [i_1] = (var_12 ? 2519841086 : 1775126208);
                                arr_20 [i_1] [i_1 + 4] [i_1 + 4] [i_1] [i_1] = var_6;
                                arr_21 [i_1] [i_1] [i_1] [i_4 + 2] = 1775126209;
                                arr_22 [i_0 - 1] [i_1] [i_1] [i_2] [i_1] [i_1] = var_16;
                                var_22 -= 32767;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
