/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, (((max(5660856759783305393, (arr_5 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 3])))))));
                    var_11 += ((((45 ? 18446744073709551607 : 4493)) << ((((7 ? 21754 : 0)) - 21691))));
                    var_12 = (min((max((arr_3 [i_2] [i_1 - 2] [6]), var_4)), (min((arr_3 [i_0] [i_1 - 1] [i_1 - 1]), var_9))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_13 = ((((var_9 ? (arr_7 [i_3]) : -26119)) >= (arr_7 [i_3])));
        var_14 ^= var_4;
        var_15 = (max((max((min(var_1, 16)), -2)), (~0)));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_16 = ((((((arr_10 [i_4]) ? (arr_10 [i_4]) : var_5))) < (min(32767, (arr_11 [i_4])))));
        var_17 = (min((arr_10 [i_4]), 11));
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_18 = (max(var_18, 3));
                    var_19 = (max(218, -19797));
                }
            }
        }
    }
    #pragma endscop
}
