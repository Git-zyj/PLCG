/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 *= (var_19 && -0);
    var_22 = ((var_8 ? 0 : var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((!(((arr_0 [i_0]) && var_0)))) && 16716));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_23 = ((~(max(4294967295, var_0))));
                                arr_16 [i_3] = (-1545574560 || 4294967295);
                                var_24 -= 64;
                                arr_17 [i_1] [i_3] = var_17;
                            }
                        }
                    }
                }
                var_25 = ((((min((arr_1 [i_0]), (arr_1 [i_0])))) * (((!(arr_7 [i_0]))))));
            }
        }
    }
    var_26 += var_16;
    #pragma endscop
}
