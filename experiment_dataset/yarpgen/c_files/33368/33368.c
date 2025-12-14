/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((((min(1, var_7)))), var_2));
        var_17 = -1;
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        var_18 ^= ((((max((48902 ^ var_3), var_8))) ? -var_5 : ((((max(51, 1))) / ((-89 ? 192 : (arr_1 [i_1])))))));
        arr_5 [i_1] = ((!((min((arr_1 [i_1]), 1)))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_19 = 0;
        arr_8 [i_2] = (((((arr_6 [i_2] [i_2 + 1]) ? 4294967290 : 1)) >> (var_5 - 187)));
        arr_9 [i_2] [i_2] = (min(((max(1, 0))), -1));
        arr_10 [i_2] [i_2] = -4;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((min(2735407127376135274, 0)) / (((var_1 ? (arr_17 [i_5 - 1] [i_5 - 1] [i_5]) : (arr_12 [i_5 - 1]))))))));
                            var_21 = var_3;
                            var_22 ^= (min(3909997778, 1));
                        }
                    }
                }
                var_23 *= 64;
                arr_22 [i_4] = var_4;
            }
        }
    }
    #pragma endscop
}
