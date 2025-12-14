/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, var_1));
                    var_15 = 14242861264531103086;
                }
            }
        }
    }
    var_16 = (min(var_16, 2450));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            {
                var_17 ^= (((((arr_10 [i_4] [i_4 - 2]) && var_5)) ? (arr_11 [i_4 - 2] [i_4 - 1]) : (((arr_6 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1]) >> 1))));
                var_18 |= (((((min((arr_2 [i_4 - 1] [18]), (arr_10 [18] [18])))) && (arr_6 [i_4 - 2] [19] [i_4] [i_4 - 1]))));
                arr_12 [i_3] [i_3] [i_3] = ((-(((!((min((arr_8 [i_3]), var_2))))))));
            }
        }
    }
    var_19 = ((((min((min(var_1, var_12)), var_1))) ? ((var_12 ? var_11 : var_11)) : ((max(((min(1, var_9))), (var_6 | var_6))))));
    #pragma endscop
}
