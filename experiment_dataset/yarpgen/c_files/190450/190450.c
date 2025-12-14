/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((((var_2 + 2147483647) >> (((min(var_8, 63206)) - 63182)))))));
        arr_3 [i_0 + 1] = (2339 <= 63188);
        var_13 ^= ((-(((max(2330, 2330))))));
        var_14 = var_4;
        var_15 = (max(var_15, ((min(63206, 34)))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_16 = var_11;
                    arr_11 [i_1 - 1] [i_1] [7] = (max((((min(63201, var_2)))), (min(var_9, (arr_10 [i_1 + 1] [i_2] [i_3] [i_3])))));
                    arr_12 [i_1 - 1] [i_1] = 17960;
                }
            }
        }
        var_17 = ((!((((((var_8 ? 3490138310578474620 : (arr_5 [i_1])))) ? (arr_2 [i_1 - 1]) : (arr_1 [i_1 + 1]))))));
    }
    var_18 ^= var_10;
    #pragma endscop
}
