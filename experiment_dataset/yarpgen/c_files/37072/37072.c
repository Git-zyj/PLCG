/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_13, var_9));
    var_17 &= (((((~(var_5 | var_7)))) ? ((var_9 ? var_12 : var_14)) : var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (((((min(var_11, var_13)) ? (34359738112 | 10957) : (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) || -10936))))))));
                                var_19 = (min(var_19, ((min((min(var_5, 13014)), (arr_6 [i_0] [i_2] [i_2]))))));
                                var_20 = 52546;
                            }
                        }
                    }
                    var_21 += var_13;
                }
            }
        }
    }
    var_22 = (((-10958 / 13016) / (13016 * var_12)));
    #pragma endscop
}
