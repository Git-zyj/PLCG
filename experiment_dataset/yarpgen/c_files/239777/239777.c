/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1624123583;
    var_13 |= (-((var_11 ? 77 : 4294967295)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [1] [i_4] [i_1] = (((~1525010829) ? (((((2670449306981644407 ? 96 : 15776294766727907209))) ? (((15776294766727907214 ? (arr_11 [i_1] [i_1 - 1]) : (arr_9 [i_0] [i_0] [i_4])))) : 15776294766727907214)) : ((max((((3 <= (arr_1 [i_0])))), 0)))));
                                arr_13 [i_4] [i_4] &= -76;
                                var_14 = (min(var_14, (((((((15776294766727907214 == (arr_3 [i_1 + 1] [i_2 - 1] [i_2 - 1]))))) == var_4)))));
                                var_15 = (max(var_15, (--216)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_18 [i_1] = ((4176 << (2670449306981644402 - 2670449306981644387)));
                            var_16 = var_6;
                            arr_19 [i_1] [i_1] [i_5] [i_6] = ((1 % (((18 << (((arr_6 [3] [i_1 + 1] [22]) + 8333029242372238151)))))));
                        }
                    }
                }
                var_17 *= ((var_3 ^ (~36)));
                var_18 = var_5;
                var_19 = 0;
            }
        }
    }
    #pragma endscop
}
