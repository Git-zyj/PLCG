/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-2147483647 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 += ((-(~1)));
                    var_13 = (-((1 ? (arr_0 [i_0] [i_1 + 3]) : (arr_0 [i_0] [i_1 + 1]))));
                    var_14 = (~-1);
                    arr_7 [i_2] [i_2] [i_2] [i_2] = (+(((arr_6 [i_1 + 2] [i_2] [i_1 + 3]) ? (arr_6 [i_1 + 3] [i_2] [i_1 + 1]) : (arr_6 [i_1 + 2] [i_2] [i_1 + 3]))));
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = (~8450641567233155864);
    var_17 = ((var_3 ? ((1 ? 1 : 168)) : (((!3) ? ((-13843 ? var_4 : 1)) : var_9))));
    #pragma endscop
}
