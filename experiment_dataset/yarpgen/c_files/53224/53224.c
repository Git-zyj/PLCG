/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((var_10 * (((((0 ? var_8 : 19760)) == var_11)))));
    var_18 = (min(var_18, -19760));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = var_0;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = var_3;
                                var_20 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : ((-19761 ? -91 : -1))));
                                var_21 = (min((((max(111, var_1)) & (max(var_7, var_1)))), (arr_6 [i_0] [i_0 + 2] [i_0 + 2])));
                                var_22 = -123;
                            }
                        }
                    }
                    var_23 = ((min((min(var_5, var_16), (((119 ? (arr_6 [i_2] [i_1] [i_0]) : 125)))))));
                }
            }
        }
    }
    var_24 &= -111;
    #pragma endscop
}
