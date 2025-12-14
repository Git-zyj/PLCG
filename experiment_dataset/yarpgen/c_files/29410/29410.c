/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((-(((arr_0 [i_0 + 1] [i_1 + 1]) / (arr_0 [i_0 + 1] [i_1 + 1])))));
                arr_6 [i_0] = (min((((~(~var_8)))), (((26800 & 127) ^ 2690751000))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_2] = (min(var_1, ((~(((arr_1 [i_2] [18]) << var_7))))));
                    var_17 = (min(var_17, (((((((arr_9 [i_2] [6]) || (arr_9 [i_3] [6])))) + ((((-127 - 1) != -119))))))));
                    arr_17 [6] [i_3] [i_2] [i_3] = (((((arr_0 [i_3 + 4] [i_3 + 4]) - (arr_0 [8] [i_3 - 1])))) ? (min((arr_0 [i_3] [i_3 - 1]), (arr_13 [i_2] [i_3 + 2] [i_3 + 2]))) : (max(var_15, (arr_13 [i_2] [i_3 + 4] [i_3 + 2]))));
                    arr_18 [i_2] = ((((min((min(26800, 127)), 90))) && ((var_13 && (arr_8 [i_2] [i_3 + 1])))));
                    var_18 = (((((max(var_3, (arr_8 [i_2] [i_2])))) % ((~(arr_2 [i_3] [i_3] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
