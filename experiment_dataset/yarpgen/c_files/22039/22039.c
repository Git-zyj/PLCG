/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_7 [i_0] [i_1 - 4] [i_1 - 2] [13]);
                    arr_10 [i_0] [i_0] [i_0] [0] = (((arr_2 [18] [i_1 - 2]) ? 18446744073709551615 : ((min(9584945693664139820, 18446744073709551615)))));
                }
            }
        }
    }
    var_17 = (((min((var_4 || var_9), (!var_0))) && var_7));

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = min((max(1383519589, (arr_4 [i_3] [i_3]))), 1);
        var_18 = (min(var_18, (((~((~(~1))))))));
        arr_15 [i_3] &= (arr_1 [i_3]);
        arr_16 [i_3] [i_3] = (((!1) >= (arr_1 [i_3])));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            {
                arr_22 [i_5] [i_4] [i_5] = max(1, ((min((max((arr_12 [i_5]), 127676851)), 65535))));
                arr_23 [i_5] [i_5] = var_16;
            }
        }
    }
    #pragma endscop
}
