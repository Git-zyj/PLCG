/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 *= ((((max(var_13, (var_7 | var_11)))) ? (((arr_5 [i_0] [i_0] [i_1] [10]) ^ var_1)) : ((10981 - (((var_8 + 2147483647) << (((((arr_3 [i_0]) + 29968)) - 2))))))));
                    var_15 = 0;
                    var_16 = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = 32764;
                                var_18 -= 7752;
                                var_19 |= 32753;
                                arr_15 [1] [i_1] [i_2] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 -= var_0;
    #pragma endscop
}
