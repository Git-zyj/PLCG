/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (!((((arr_4 [6] [i_1] [i_1]) ? var_5 : (arr_1 [i_1] [i_1])))));
                arr_6 [i_0] [i_0] [i_1] = (1631319351 * 0);
                arr_7 [i_0] [i_0] [1] = (arr_1 [4] [15]);
                arr_8 [i_1] = (((1662224776 ? 0 : 14136)));
                arr_9 [16] [i_1] = var_8;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_18 [i_2] [7] [1] = ((((((arr_16 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1]) ? (~1249080004) : (((var_4 ? (arr_0 [i_4]) : (arr_10 [i_2] [i_4]))))))) ? (((0 < ((((arr_4 [14] [0] [12]) == (arr_1 [18] [6]))))))) : 0));
                    arr_19 [8] = (arr_1 [i_3] [10]);
                    arr_20 [3] [i_3] [i_2] [i_3] = ((0 ? ((((!(63 - 16164))))) : (min(var_6, (~1)))));
                }
            }
        }
    }
    #pragma endscop
}
