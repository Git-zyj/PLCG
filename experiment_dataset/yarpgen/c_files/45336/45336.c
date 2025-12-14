/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= -96;
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_1] = (((((min((arr_7 [i_0]), 1)))) != (((arr_8 [i_3] [i_2] [i_1] [i_0]) | ((var_13 ? var_8 : 17))))));
                            var_19 |= var_6;
                            var_20 = (((min((((-96 ? (arr_12 [i_0] [i_1] [i_2] [i_3]) : var_14))), (min(25667, (-9223372036854775807 - 1))))) >= (arr_8 [i_1 - 2] [i_1] [i_1] [i_1 + 3])));
                        }
                    }
                }
                var_21 = (~3354455431);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            {
                var_22 = (min(var_22, 96));
                var_23 = (arr_7 [i_4]);
            }
        }
    }
    var_24 ^= var_2;
    #pragma endscop
}
