/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 ^= (max((((arr_4 [4] [i_1] [i_2]) ? var_8 : (arr_3 [i_1 - 1] [i_1 - 1] [i_2]))), ((max((var_2 > var_8), var_10)))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_15 *= (min(var_0, (min(54, (min(40, var_1))))));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = (((min((((arr_8 [i_3] [i_3] [i_0]) ? (arr_6 [i_0] [8]) : var_6)), var_13)) * (((29134 ? -54 : 54)))));
                        var_16 = ((var_1 % ((var_6 ? var_7 : (arr_9 [i_1 - 1] [1] [i_1 - 1] [i_1 - 1])))));
                    }

                    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, ((max(2231232197, 0)))));
                        var_18 = ((((min(2231232197, var_9)) * (arr_12 [i_0] [i_2] [i_1 - 1] [i_0]))));
                    }
                    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [4] |= (((max(((25059 ? 121 : 246)), ((25067 ? 10949 : var_5)))) >> (((min((((arr_7 [i_0] [6] [i_2]) ? var_11 : 14)), (arr_6 [11] [i_1 - 1]))) - 1795227313))));
                        var_19 = (((((((!(arr_7 [i_0] [i_0] [8]))) ? var_0 : (-636650375 <= 3)))) ? ((((arr_8 [i_0] [i_1] [i_0]) ? -46 : var_5))) : (min(17836884035023257767, 63))));
                        arr_18 [i_5 - 1] [i_0] [i_1 - 1] = (arr_13 [i_5] [2] [i_0] [i_1] [i_0]);
                        arr_19 [i_0] [2] [i_0] = -1380289608;
                    }
                }
            }
        }
    }
    var_20 = ((min((~15), var_8)));
    #pragma endscop
}
