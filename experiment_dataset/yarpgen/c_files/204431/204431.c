/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = (max((((arr_1 [i_0 + 1] [i_0 + 1]) >> (-4527820908423398603 + 4527820908423398613))), (var_9 || 0)));
        arr_2 [i_0] [i_0] = (((-14333 <= 0) == (((arr_0 [i_0]) ? var_4 : 1939191928))));
        var_16 = (min(-161, ((((161 % 1646539714) > (-1 ^ 113))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_17 -= (((((18446744073709551615 && ((min(-2042357607, 83)))))) << (((!(arr_10 [i_3 - 1] [i_0 + 1]))))));
                        var_18 = (((((var_0 << (((arr_8 [i_0] [i_1] [i_0]) - 2016258825))))) ? var_12 : ((((arr_10 [i_0] [i_0]) << (var_14 - 93))))));
                    }
                }
            }
        }
        arr_11 [i_0 + 1] = var_14;
    }
    var_19 = var_6;
    var_20 = (((~(((-14333 + 2147483647) >> 17)))));
    #pragma endscop
}
