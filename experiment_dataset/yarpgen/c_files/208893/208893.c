/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (min(36461, ((((min(240, (arr_2 [i_0])))) ? 60 : var_10))));
                    var_13 = (((((arr_8 [i_2 + 1] [i_0] [i_2 + 2]) ? var_5 : var_9)) % 32760));
                    var_14 = ((-914290701 || (arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 2])));
                    arr_10 [i_0] [i_1] [i_1] = ((((min(var_0, ((var_9 ? 20 : 2147483647))))) ? (max(1, (((-2147483647 - 1) / var_6)))) : ((var_0 ^ (-2147483647 - 1)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_15 = var_2;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_23 [i_0] [15] [i_4] [i_5] [i_6] [i_0] = var_11;
                            arr_24 [i_0] [i_0] [i_3] [0] [i_0] [8] = (arr_12 [i_0] [i_0]);
                            var_16 = var_2;
                            arr_25 [i_0] = 18061;
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_28 [i_7] = ((((min((arr_26 [i_7]), var_8))) ? (((((2147483647 ? 232 : (arr_26 [i_7])))) ? 1 : 5)) : ((max(((2147483647 ^ (arr_27 [i_7]))), var_9)))));
        var_17 -= (3313843930404615025 / 627786366338693249);
    }
    var_18 = 0;
    var_19 = ((-8023273799594619455 <= ((-8271385534121463157 ? 179 : -3313843930404615025))));
    #pragma endscop
}
