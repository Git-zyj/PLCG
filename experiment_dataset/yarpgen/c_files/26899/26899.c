/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = var_4;
        arr_3 [i_0] = (--84);
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    {
                        var_17 = 65024;
                        var_18 = (arr_9 [i_3]);
                    }
                }
            }
        }
        var_19 = (min(var_19, ((((max(-9223372036854775782, (~var_6))) > (((1 ? 0 : -9223372036854775782))))))));
        var_20 = 63599;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                arr_21 [i_5] = ((((((((((~9223372036854775807) + 9223372036854775807)) + 9223372036854775807)) << (66 - 66)))) ? (arr_19 [i_6 + 2] [i_5]) : (arr_18 [i_6] [i_6 + 2])));
                var_21 = 0;
                var_22 = (arr_20 [i_5]);
            }
        }
    }
    #pragma endscop
}
