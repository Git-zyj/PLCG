/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [6] = var_7;
                    var_12 = (((arr_2 [i_0]) + 32760));
                    var_13 = (((max((max((arr_4 [i_2] [i_2] [i_2]), (arr_0 [i_0] [i_2]))), (arr_0 [i_0] [i_0]))) | 65535));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            {
                var_14 = (min(var_14, ((((arr_7 [i_3] [i_3]) << (((max((!127), (((arr_9 [i_3 + 1]) ^ (arr_7 [i_3] [i_4]))))) - 44801)))))));
                var_15 = 5452929778924975881;
                var_16 = (min(var_16, (((0 << ((((((max(74, 56316))) << (((arr_9 [i_3]) - 38318)))) - 901049)))))));
                var_17 = (min(var_17, ((((((((max(var_4, (arr_9 [0])))) >> ((((max((arr_8 [i_3] [i_3]), (arr_8 [i_4] [i_3])))) - 41179))))) & (max(var_2, (arr_8 [i_4 - 1] [i_3]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_18 = (((arr_12 [i_6] [i_6]) & (((-16791 > (70368744144896 ^ -29))))));
                    arr_20 [i_6] [i_6] [i_7] [i_6] = max(1, (arr_17 [18]));
                }
            }
        }
    }
    #pragma endscop
}
