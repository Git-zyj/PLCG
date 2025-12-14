/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (min((-1286514857 | 1286514848), 0));
                    var_18 = ((-39 ? 120 : -2123659949));
                    arr_9 [2] |= ((~(max(1286514853, -899351431))));
                    var_19 -= ((((27 <= (max(var_0, (arr_0 [i_2] [i_1]))))) ? (arr_5 [i_0]) : ((((!(arr_5 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max((max(1286514857, 1)), (arr_2 [i_0]))))));
                                arr_14 [i_0] [i_1] = var_8;
                                var_21 = ((~(arr_3 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((((var_3 && var_5) ? (!0) : (min(2123659937, var_2))))) && var_10));
    var_23 = var_4;
    var_24 = (((((var_5 ? var_0 : (~var_0)))) ? (((((134 ? var_12 : 1)) ^ (~var_2)))) : var_4));
    #pragma endscop
}
