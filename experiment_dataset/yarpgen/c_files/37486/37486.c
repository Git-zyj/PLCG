/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((4502 - -383828545) ^ (var_9 % -28))) >= var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] [i_2] = (arr_4 [i_0]);
                    var_20 = (arr_4 [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_16 [i_4] [i_3 + 1] = 31;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_21 [i_3] [i_4] [i_5] [i_6] = (-4502 | 57);
                            arr_22 [i_3] [i_3 + 1] [i_3 + 1] [5] [i_3] [i_3 + 2] = (((((((-(arr_5 [i_3] [i_4])))) == (((arr_4 [i_3 - 1]) * 3191192411))))) & 29);
                        }
                    }
                }
                arr_23 [i_4] = (~34);
                arr_24 [1] [i_4] [i_4] = 121;
            }
        }
    }
    #pragma endscop
}
