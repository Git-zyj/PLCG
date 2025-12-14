/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((9330862464126196375 != 14123296884479168201) ? (max(153, ((32439 ? 9330862464126196375 : 15)))) : (((193 ? 144 : 1))));
        var_20 = (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 2]) : (~52376)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] = var_19;
                    arr_8 [i_0] [i_0] [i_0] = ((((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))) ? ((1 ? (arr_1 [i_0 - 1]) : 243)) : (arr_1 [i_0 - 3])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_21 = var_16;
                    arr_17 [i_4] [i_4] [i_4] [i_5] = (var_10 - 48);
                    arr_18 [16] [i_5] [i_5] [i_5] = (~47710);
                }
            }
        }
    }
    #pragma endscop
}
