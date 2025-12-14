/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((max(((-(~var_15))), ((((((arr_1 [i_1] [i_1]) ? 1 : -1730047629))) ? (1 | var_3) : (((arr_3 [i_1] [i_1]) * 1)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_18 &= (((max(((var_14 ? var_16 : 60)), (min(-1730047610, var_14))))) ? -1 : (arr_5 [i_0 + 1] [i_2] [i_1]));
                            arr_12 [i_0] [i_2] [i_1] [i_1] [i_0] = ((((min(var_9, (min(0, 1))))) - (max(((-61 ? 1730047628 : (-2147483647 - 1))), (min((arr_6 [i_0] [i_0] [i_2] [i_0]), var_0))))));
                        }
                    }
                }
                var_19 = (((~((var_2 >> (var_12 + 7903313337091047622))))));
                var_20 *= var_11;
            }
        }
    }
    var_21 *= ((max(((max(var_2, 0))), var_14)));
    var_22 = ((var_1 & ((~(7467431419792683208 >> var_4)))));
    #pragma endscop
}
