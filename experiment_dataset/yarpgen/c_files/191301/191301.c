/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_15 >> var_5);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 = (min((160441123 || 11648945790604397828), (min(((2799174397 ? 2 : 1)), (arr_2 [i_1])))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_22 = (min(255, 65303));
                            var_23 *= ((((!(arr_3 [i_2] [6] [i_3 + 1]))) ? (!12) : (min(((min(var_19, 0))), var_7))));
                            arr_11 [16] [i_4] [i_4] [i_4] [i_2] [i_4] [i_4] = (arr_1 [i_0]);
                            arr_12 [i_0] [i_2] [i_2] = (((var_2 * (0 * 0))));
                        }
                    }
                }
            }
            var_24 *= 108;
        }
        arr_13 [i_0 + 3] [i_0] = (min(4107801456951014429, (arr_4 [i_0] [i_0])));
        arr_14 [i_0] [i_0] = (((((!(((var_19 << (65529 - 65509))))))) != (min(-9290, (~1140044314)))));
    }
    #pragma endscop
}
