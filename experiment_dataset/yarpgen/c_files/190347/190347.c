/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_12 += ((var_9 ? (max(var_7, (((-2147483647 - 1) ? var_5 : 1)))) : ((min(65505, var_8)))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((((min(((var_5 ? -12067 : 1741398278)), ((min(var_6, var_8)))))) ? ((-(((arr_9 [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 3]) ? var_3 : 16326545340039113397)))) : (arr_3 [i_0 + 2])));
                        var_13 = (min(var_13, ((((((var_7 ? (arr_9 [i_0 + 2] [i_1] [i_2] [i_2] [i_3]) : var_4))) ? (max((arr_6 [i_0] [12] [i_2] [i_3]), var_6)) : (1 ^ var_5))))));
                    }
                }
            }
        }
        var_14 = (arr_7 [i_0 + 1]);
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        arr_13 [i_4] = (((min((arr_4 [i_4 + 1] [i_4]), var_0)) % 1));
        var_15 += ((((((arr_7 [i_4 - 1]) ? ((min(-112, (arr_9 [i_4 + 2] [i_4 - 1] [i_4 + 1] [1] [i_4 + 1])))) : (((arr_8 [i_4 + 2] [i_4]) ? var_2 : 100))))) ? (arr_3 [i_4]) : ((-(max(1, (arr_11 [i_4])))))));
        arr_14 [i_4] [i_4] = var_7;
    }
    var_16 = var_0;
    var_17 = 18799;
    #pragma endscop
}
