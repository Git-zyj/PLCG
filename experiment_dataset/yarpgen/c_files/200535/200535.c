/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (min(var_3, (((0 ? 53 : (min(var_14, var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 3] = (arr_2 [i_1 + 1]);
                arr_5 [i_0] = var_3;
                arr_6 [i_0] [i_0] [i_0] = var_9;
                arr_7 [i_0] [i_1 + 1] = (arr_0 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = ((~(arr_15 [i_0] [i_0] [i_0])));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_4] = (((1 ? (((((arr_8 [i_0]) == (arr_1 [i_2]))))) : (arr_8 [i_0]))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = (min((15111 || 0), 11542373614936949570));
                                arr_18 [i_0] [i_1] [i_1 - 3] [i_1 - 4] = (arr_0 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 -= ((0 ? 1656457735 : 50424));
    #pragma endscop
}
