/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 |= (min(-946676845, (arr_1 [i_0 - 3])));
                arr_4 [i_0 + 1] [i_1 - 2] = ((-115 ? 0 : 1937660386));
                var_21 = -69;
                var_22 = (max(var_22, (min(var_3, (min((arr_3 [i_0 - 2] [i_0 - 3] [i_1 + 2]), 0))))));
                arr_5 [i_1] = var_3;
            }
        }
    }
    var_23 |= var_7;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_24 = (min(var_24, (((!((((arr_11 [i_3 + 3] [i_3 + 1]) ? (arr_6 [i_3 + 3] [i_3 + 1]) : 423448234))))))));
                    var_25 = (((~1937660360) ? (((((arr_13 [i_2] [i_3] [i_4]) < (arr_13 [i_2] [i_3 + 1] [i_3 + 1]))) ? var_19 : 3871519064)) : ((min(((min(49325, 26333))), (min(var_3, 423448245)))))));
                    var_26 |= (var_19 ? var_11 : 1937660364);
                }
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    var_27 = (((~3871519065) ? var_11 : 2357306909));
                    var_28 = (max(var_28, ((max(423448211, (arr_14 [i_3] [i_3]))))));
                    var_29 = ((-(max(var_2, (arr_11 [i_2] [12])))));
                }
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    arr_18 [i_2] = (((arr_6 [i_2] [i_2]) && ((min((arr_15 [i_3 + 3] [i_3 + 1] [i_3] [i_3]), (423448227 == 709875786))))));
                    var_30 = (~178);
                }
                var_31 = var_19;
                arr_19 [i_2] = (min((~-127), ((var_5 ? (min(var_3, 11451624861658750661)) : 738181131))));
            }
        }
    }
    #pragma endscop
}
