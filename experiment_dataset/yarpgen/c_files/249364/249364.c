/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 1] [i_1] [i_0] [i_0] = (min((arr_7 [i_0 - 3] [i_0 + 1] [i_2 - 3]), ((-(arr_4 [i_0 - 3] [i_0 - 2])))));
                    var_18 += ((-101 ? (arr_7 [i_0 - 3] [i_0 - 3] [i_2]) : ((~((max((arr_7 [i_0 - 2] [i_0 - 2] [i_2]), (-32767 - 1))))))));
                    var_19 = (min(var_19, (arr_1 [11] [i_1])));
                }
            }
        }
    }
    var_20 = var_11;
    var_21 = var_15;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_22 = -3513647510984887312;
                    var_23 = var_0;
                    arr_18 [i_3] = (!((((arr_11 [i_4 + 1]) - (arr_0 [i_4 - 2] [i_4 - 3])))));
                }
            }
        }
    }
    #pragma endscop
}
