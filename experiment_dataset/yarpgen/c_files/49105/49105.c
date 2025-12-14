/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = var_4;
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_16 ^= (((arr_2 [i_0] [i_1]) ? (min(((var_12 * (arr_0 [i_0]))), 44)) : (((arr_0 [i_0]) / 8414542379384340773))));
                arr_4 [i_0] [i_0] [i_1] = var_6;
                var_17 = ((var_12 + ((((11663517514478004521 >> (15943 - 15930))) << (((arr_1 [i_1 - 2]) - 4174388019))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = 3030;
                            arr_11 [i_0] [i_1 - 2] [i_0] = (max((~8414542379384340773), ((((arr_2 [i_0] [i_2]) ? (arr_8 [i_0] [i_0] [i_1 - 1] [i_3] [i_1 + 1]) : (arr_2 [i_0] [i_0]))))));
                            var_18 = (max(var_18, ((max(((~(max(var_12, var_0)))), ((((arr_6 [i_0] [2] [i_2] [i_0]) ? 58720256 : ((((arr_9 [i_0] [i_1] [0]) ? var_0 : var_11)))))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [2] [i_0] |= (((arr_7 [i_1 - 1] [i_1 - 2]) != (arr_7 [i_1 - 1] [i_1 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
