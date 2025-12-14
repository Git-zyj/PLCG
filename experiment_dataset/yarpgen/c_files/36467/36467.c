/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (min((((arr_4 [i_0 - 1]) ? var_3 : (arr_4 [i_0 - 1]))), (((((arr_4 [i_0 - 1]) + 9223372036854775807)) >> (((arr_4 [i_0 - 1]) + 1271293493135838023))))));
                    var_12 = ((((arr_1 [i_0 - 1]) ? var_9 : (arr_1 [i_0 - 1]))));
                    var_13 = ((!((((arr_0 [i_0]) | -var_4)))));
                }
            }
        }
    }
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            {
                arr_11 [i_3] = (max((min(((((arr_9 [i_4]) / var_7))), var_4)), (min((~var_4), (arr_2 [i_4] [i_4 + 1] [i_4])))));
                var_15 = (arr_7 [9]);
            }
        }
    }
    var_16 = ((var_1 / (((var_2 ? (max(var_2, var_7)) : (min(var_2, var_5)))))));
    #pragma endscop
}
