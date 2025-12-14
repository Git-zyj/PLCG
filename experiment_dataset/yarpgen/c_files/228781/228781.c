/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = (((((arr_1 [i_0 - 1] [i_0]) << (var_0 - 425554684880021727))) == 11372816915339943021));
        var_15 = (((arr_1 [i_0 - 1] [i_0 - 1]) ? ((((arr_0 [i_0 - 1]) && var_4))) : (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_9))));
        var_16 = ((((((arr_1 [i_0] [19]) ? 0 : 244))) ? (arr_0 [i_0]) : ((var_6 / (min(5709477924527559269, -1))))));
        var_17 = var_3;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = ((246 * (arr_2 [i_1] [i_1])));

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [1] [i_3] [i_1] = var_7;
                        var_19 = (-127 - 1);
                    }
                }
            }
            var_20 = (((arr_2 [3] [i_2 - 1]) ? (arr_8 [i_1]) : (arr_2 [i_2 + 1] [i_2])));
            var_21 = var_3;
            var_22 = ((((((arr_9 [i_1]) | (arr_4 [i_1] [i_1])))) ? (arr_8 [i_1]) : ((-var_7 ? var_10 : (~var_9)))));
        }
        var_23 = ((-var_1 >= (((((arr_10 [i_1] [i_1] [i_1]) ^ 98)) << (((max(254, var_0)) - 425554684880021672))))));
        var_24 = var_13;
    }
    var_25 = ((-(max(var_12, 65519))));
    #pragma endscop
}
