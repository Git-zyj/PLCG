/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 29970;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (min((((arr_2 [i_1 + 1] [17]) * ((9337685274533931808 ? var_4 : 9109058799175619813)))), -85));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 |= min((max(9337685274533931786, 9109058799175619807)), (((~(max(-1, -2))))));
                                arr_13 [i_2] = -6358522562469877634;
                                var_14 = (((!-50) + (4611686018427387896 | 9337685274533931802)));
                                var_15 *= (((((((max(2048, -1))) ? (max(-1, var_5)) : -1))) && (((~(arr_10 [i_1 - 1] [i_2 - 3] [i_2 - 2] [i_4 + 2] [i_4 + 2]))))));
                                arr_14 [i_0] [i_2] [10] [i_2] = ((((((((9109058799175619814 ? -51 : 57783))) / -16))) ? (((((min(2853604431486837124, 5932491283384826912))) ? -1 : 4))) : (min(7012956755042207029, -65535))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_16 = (((((18446744073708503040 + 9337685274533931802) ^ -549755813888)) % (((2 ? -1 : 32382)))));
                                var_17 = ((((min(14688440806859605607, 63499)) > (min(4735674365794789982, -7159)))) ? ((((var_3 / -5) / (((var_3 ? 49764 : 43131)))))) : (18446744073708503040 + -7066));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
