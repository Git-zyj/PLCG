/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (((arr_2 [6] [18]) == (min((min(var_12, (arr_2 [i_0 + 1] [i_0 + 1]))), -31817))));
                var_20 |= var_0;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((min((max(((((arr_8 [i_0]) | var_3))), var_12)), ((((~68) ? var_16 : (arr_11 [i_1] [i_1] [i_3 - 1] [i_3 - 1])))))))));
                            arr_13 [i_2] [i_1] [i_2 - 1] [i_3 - 1] |= (min(var_2, -120));
                            arr_14 [i_2] &= (!18127468612078094556);
                            var_22 = (min(var_22, (((31835 + ((((((var_3 ? (arr_2 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0])))) > (((arr_0 [i_0]) / var_11))))))))));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_23 ^= min(((-32756 ? 14680064 : 43915058)), (max(2021991526, (32758 >= -31835))));
                        arr_20 [i_0] [i_1] = (((min(31854, (((arr_11 [6] [7] [6] [6]) ? 1682605973 : (arr_19 [i_0] [i_0] [i_0] [i_0])))))) - ((var_6 - (var_15 + 68))));
                        var_24 = ((!(((((min(var_2, 16955671086013432260))) ? ((min(19321, var_8))) : var_14)))));
                        arr_21 [i_0] = (((~(arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_5]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        arr_24 [i_0] [i_0] [15] [i_0] [7] [i_6] = (((arr_6 [16] [15]) & (((arr_16 [i_0] [i_0]) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : var_5))));
                        arr_25 [i_6] = ((((arr_8 [17]) ? (arr_6 [i_0] [i_0]) : 2147483635)));
                    }
                    var_25 = var_2;
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    arr_29 [i_0] [i_0] [i_7 + 1] [i_7] = (min(((((((arr_2 [i_7] [7]) & 6015223591912452888)) <= (((max((arr_3 [i_0 - 1] [i_1]), 31809))))))), var_5));
                    arr_30 [i_0] [i_7] [i_7] [i_0] = (min(((~(arr_9 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1]))), var_17));
                }
            }
        }
    }
    var_26 = (min(var_26, (((~(((var_1 + 536805376) ? var_4 : var_18)))))));
    #pragma endscop
}
