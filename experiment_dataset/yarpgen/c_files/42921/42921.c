/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 ^= (max(((85 ? 15078358555812546058 : 12)), var_7));
                    var_18 = (max(216172782113783808, 1950));
                    arr_8 [i_0] = (min((((arr_2 [i_1 - 1] [i_0 + 1]) ? var_14 : (arr_2 [i_1 + 1] [i_0 + 1]))), ((~(arr_2 [i_1 - 2] [i_0 + 1])))));

                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        var_19 = (max(var_19, (((((~(0 / var_9))) | ((max(2204565362, 1))))))));
                        var_20 = ((((((~30151) >= (arr_6 [i_0] [i_0] [i_0] [i_0])))) <= -27426));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_21 -= (((arr_6 [i_0] [i_0] [16] [i_4]) ? (arr_6 [14] [14] [14] [i_0 - 2]) : (arr_7 [i_4] [i_1] [i_1] [i_1 + 1])));
                        var_22 = ((((((arr_10 [i_2] [i_1 + 1] [i_0]) > var_10))) - (!2021559900)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
