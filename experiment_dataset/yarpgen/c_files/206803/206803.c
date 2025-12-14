/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(6580874223066059948, 230));
    var_19 = ((((-2077512106 - 2038704755) < ((min(1, -1015612833))))) ? (((((1772656836568275075 ? 1 : var_4))) ? var_4 : 1172926186)) : (((min(var_1, var_14)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 *= (max((min(var_16, ((1772656836568275065 ? 3220079618576248027 : (arr_0 [1] [i_0]))))), (((((((arr_0 [i_0] [12]) ? (arr_1 [i_0]) : var_16))) && (arr_0 [i_0] [i_0]))))));
        var_21 = (max(((((arr_1 [i_0]) && (arr_1 [i_0])))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_3] [i_2] = arr_9 [i_1];

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_22 = var_12;
                        var_23 *= ((((max((arr_8 [i_3 - 2] [12]), (arr_8 [i_1 - 2] [i_3 + 1])))) && ((max(-16749, ((max((arr_0 [i_1 - 2] [13]), (arr_9 [i_1 + 3])))))))));
                        var_24 ^= (((((arr_7 [11] [11] [5] [11]) - (arr_3 [i_4]))) & (min((3 + -1839311365), 1))));
                        var_25 = (arr_2 [i_1 - 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
