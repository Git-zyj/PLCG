/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = ((((((~(arr_5 [i_0 - 1] [i_1] [7]))) ^ (((var_7 >> (var_6 + 1765035060920663566)))))) & (~28025)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (max(((var_1 + (arr_0 [i_0]))), (arr_9 [11] [i_4] [i_0] [i_0 + 2] [i_0] [i_0] [i_0])))));
                                var_19 = (min(17, (((!(arr_12 [i_0] [i_0 - 1]))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] = ((((((arr_8 [i_0 + 1] [i_1] [i_0] [i_1]) / (arr_8 [i_0] [i_0] [i_0] [i_0])))) ? 0 : var_4));
                }
            }
        }
    }
    var_20 -= ((1 << (9703340918922702346 - 9703340918922702339)));
    #pragma endscop
}
