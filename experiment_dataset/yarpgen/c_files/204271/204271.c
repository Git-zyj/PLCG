/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = ((!(arr_1 [i_0])));
        arr_2 [i_0] = ((max(((min(2105139458, (arr_1 [3])))), (((-15 + 9223372036854775807) << (((-4369755700604227283 + 4369755700604227329) - 46)))))) >> 9221120237041090560);
        var_19 = (arr_0 [5]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            {
                var_20 = (max(var_20, ((min((((-var_10 - (arr_5 [i_1] [i_2])))), (max(((((arr_3 [i_1]) ? (arr_7 [i_2]) : 1))), 2467940226)))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [i_3] [i_1] [i_1] = (((((14515 > (arr_1 [i_1])))) - ((max(-45, ((89 * (arr_10 [i_1] [1] [i_1] [i_4]))))))));
                            var_21 = (min(var_21, (arr_7 [i_3])));
                            var_22 = (((max(((((arr_1 [i_1]) >= 166))), ((var_17 ? var_5 : (arr_12 [i_1 + 1] [i_1 + 2] [i_2] [0] [i_4])))))) ? (((((((arr_7 [i_4]) ? var_2 : 3689933398))) ? var_2 : (((!(arr_5 [i_4] [i_1]))))))) : (((arr_0 [i_3]) ? -var_15 : (((27 ? (arr_3 [i_1]) : -125))))));
                            arr_14 [i_4] [i_3] [i_1 - 1] [i_1 - 1] = (max((arr_7 [i_1 + 2]), (((((1 ? -1 : 117))) ? var_16 : (var_0 > var_10)))));
                            var_23 *= (arr_10 [i_1] [i_1] [i_1] [i_1 + 1]);
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, 1));
    var_25 = (((((-96 ? (min(var_1, var_11)) : (((var_5 ? 1 : var_5)))))) ? (((var_13 ? var_13 : ((var_10 ? 79 : var_17))))) : ((-(var_11 - var_1)))));
    #pragma endscop
}
