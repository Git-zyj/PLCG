/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_1;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = (min((((176 && 17) >> (((((arr_1 [i_0]) ? 176 : (arr_1 [i_1]))) - 151)))), (80 & 90)));
            var_18 = ((((min(4787425020932427577, (arr_2 [i_1] [i_1])))) ? ((max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))) : (arr_2 [i_1] [i_1])));
        }
        arr_6 [i_0] = arr_1 [i_0];
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            {
                arr_12 [8] [i_3 + 1] [i_3 - 3] = var_10;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_19 [i_4] [i_2] [i_2] [i_2] [i_2] [i_4] = 65535;
                            var_19 = ((~((-(23612 ^ -3)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        {
                            var_20 = (min(var_20, var_1));
                            arr_26 [i_7 + 1] [i_2] [i_2] [i_2] [i_2] = 2954573212813265006;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
