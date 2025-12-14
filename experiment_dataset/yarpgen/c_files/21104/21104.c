/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [11] = 606389832;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_15 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = (4294967269 - -7690744590964546657);
                            var_14 = (((arr_10 [i_1 + 1] [i_1 + 1]) ? (((arr_4 [2] [i_1 + 1]) - 22268)) : (arr_5 [12] [i_1 + 1] [i_0])));
                            var_15 = ((((~(arr_7 [i_3] [1] [6] [1]))) % ((((min((arr_14 [1] [1]), (arr_12 [i_0] [i_1] [i_2] [i_3])))) ^ ((30 << (var_2 + 1525927928)))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, var_6));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_4] = var_4;
                var_17 = arr_4 [i_5] [i_5];
                var_18 &= (min(((var_9 - (arr_13 [5] [i_4] [i_4] [i_5 + 1]))), ((max((arr_13 [i_4] [i_4] [i_5] [i_5 - 1]), var_8)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_19 |= (min(((((arr_26 [i_6] [i_7]) && (!var_6)))), (!0)));
                arr_27 [i_6] = (max(-2513582463810120268, (arr_24 [i_7])));
            }
        }
    }
    #pragma endscop
}
