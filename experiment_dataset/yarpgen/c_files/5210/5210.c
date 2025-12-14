/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((-(((arr_5 [i_1 - 2] [i_1 - 1] [1] [i_1 - 2]) & (arr_0 [i_1 - 2] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (arr_1 [4]);
                                arr_13 [i_0] [i_2] [i_3 - 1] = ((-(((!(arr_7 [i_3 - 1] [i_3 + 1] [13] [i_3 - 1]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [6] [i_0] |= (arr_7 [i_0] [10] [10] [i_2]);
                }
            }
        }
    }
    var_18 = ((!(((((max(1860, var_5))) ? var_15 : ((var_1 ? 4179378125 : var_2)))))));
    #pragma endscop
}
