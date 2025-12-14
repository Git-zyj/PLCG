/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -40;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = ((var_14 <= (((arr_0 [i_0 + 2]) & var_9))));
        arr_3 [i_0] [i_0 - 1] = ((min(((-126 ? 57 : 1), var_0))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            var_20 = (~var_10);
                            var_21 = (max(((-(min(-1378520295, 57)))), ((((~var_15) <= ((1926764435 ? 198 : var_5)))))));
                            var_22 = (max(var_22, var_11));
                        }
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            arr_22 [12] [i_2] [7] [i_3] [7] [i_5] = -126;
                            arr_23 [i_0] [i_1 - 1] [i_5] [i_3] [15] = ((var_3 ? (min(var_2, ((-813241668 ? var_6 : var_5)))) : var_17));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_23 = ((~(arr_8 [i_0 + 1] [i_6])));
                            var_24 = (max(var_24, (((((10815863782893398059 || (arr_11 [i_2]))) ? 39 : (var_3 ^ var_9))))));
                        }
                        var_25 += 94;
                    }
                }
            }
        }
    }
    var_26 = ((~(min(((min(var_3, var_12))), ((var_15 ? 117 : var_17))))));
    #pragma endscop
}
