/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((!(((-104 ? 0 : 9223372036854251520))))))) + (max(((104 ? 98 : var_8)), -13921))));
    var_17 ^= ((((min(var_6, ((max(var_14, var_14)))))) ? (var_10 - 5) : 255));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 ^= (!var_4);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_19 = var_15;
            arr_6 [i_0] [i_1] = (arr_0 [i_0]);
            arr_7 [i_0] = (((arr_5 [i_1 + 1] [i_1 + 1]) ? var_3 : (arr_5 [i_1 + 1] [i_1 - 1])));
            arr_8 [i_0] [i_0] [i_0] = ((104 ? 35 : 87));
        }
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((((((97 ? 102 : 92))) % (((arr_15 [i_4] [i_4] [i_5]) ? var_3 : 1295833109212386214)))) < ((((((arr_17 [7] [7] [i_3] [4]) ? (arr_12 [i_2]) : (arr_9 [i_4]))) | (!var_5)))))))));
                        var_21 = (max(((var_14 ? (arr_19 [i_2] [i_3] [i_4] [i_5]) : 39)), ((((((!(arr_18 [i_5] [i_4] [1] [i_2] [i_2])))) == -71)))));
                    }
                }
            }
        }
        var_22 = var_13;
        var_23 = -2840170721;
    }
    var_24 = (8 || (((((min(var_0, var_7)))) < (~var_8))));
    #pragma endscop
}
