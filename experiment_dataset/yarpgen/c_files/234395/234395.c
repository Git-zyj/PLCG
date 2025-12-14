/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_8;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_20 ^= 40;
        var_21 = (min((((arr_3 [i_0 - 4] [i_0 - 1]) | (((min(4080, 4080)))))), (arr_0 [i_0 - 3] [1])));
        arr_4 [i_0] = (min(var_1, ((min((arr_2 [i_0 - 4] [i_0]), (arr_2 [i_0 - 3] [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_9 [i_1] = (((((~(var_10 || var_4)))) ? ((((arr_8 [i_1] [i_1]) | (arr_6 [i_1] [i_1])))) : (min((arr_6 [i_1 - 1] [i_1 - 1]), (arr_7 [i_1 + 2] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [20] = 2040;
                        arr_18 [i_1] [i_1] [i_3] [i_4] = (((((((arr_10 [i_4]) & (arr_6 [i_1] [i_1]))) ^ (((arr_8 [i_1] [i_3]) ? (arr_15 [i_1]) : var_7)))) ^ (0 ^ -34)));
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_21 [i_5] = (min((arr_19 [i_5 - 1] [i_5]), (min((min((arr_20 [10]), (arr_19 [i_5] [i_5]))), ((var_10 ? (arr_19 [i_5] [i_5]) : 38))))));
        var_22 = var_2;
        var_23 = (min(var_23, var_11));
    }
    var_24 = (min(var_24, ((min(((((var_16 | var_15) ? (var_10 & var_11) : (var_14 ^ var_17)))), (~20))))));
    #pragma endscop
}
