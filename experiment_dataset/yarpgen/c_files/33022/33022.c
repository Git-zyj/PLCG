/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max(1, 10559087166703514546)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((((arr_0 [i_0 + 1]) ? var_12 : (arr_0 [i_0 + 1])))) ? var_10 : -1556195574))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] = ((max((arr_4 [i_2] [i_1] [i_0]), var_5)));
                        var_20 = (arr_6 [13] [i_1] [i_2] [i_3]);
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((var_2 ? (1556195573 / 1556195573) : (max(-1556195564, 1553291560))));
                        var_21 += (max((-6718889084374515056 % var_8), 9658));
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, (((var_3 ? ((max(((var_15 ? 23872 : 3)), (min(var_0, var_7))))) : (((((var_9 ? var_0 : var_8))) ? (~var_8) : (41661 - var_1))))))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            {
                arr_19 [i_4] = var_1;
                var_23 = (((((((max(var_7, -1556195576))) ? ((var_5 ? (arr_13 [i_5]) : var_5)) : var_2))) ? var_3 : (((arr_16 [i_4] [i_4 - 1] [i_5]) ? (-1556195574 - -1556195580) : (arr_17 [i_5 - 3] [i_4 + 1] [i_4 + 1])))));
                var_24 = (min(var_24, (15432032865178331099 > 23872)));
                var_25 = (arr_16 [i_5 - 3] [i_5 - 3] [0]);
                var_26 = ((((~(arr_18 [i_5] [i_5 - 1])))) ? (min((arr_18 [i_5 - 3] [i_5 + 1]), (arr_18 [i_5] [i_5 - 1]))) : ((104 ? (arr_18 [i_5 - 3] [i_5 - 2]) : var_2)));
            }
        }
    }
    #pragma endscop
}
