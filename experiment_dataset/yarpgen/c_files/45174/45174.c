/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((((((arr_2 [4] [i_0]) ? (arr_3 [i_0]) : var_2))) & ((var_6 ? (arr_0 [i_0]) : var_10))));
        var_13 = (var_7 ? var_2 : ((max(1494, 1474))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 *= ((~((((var_7 >> var_4) <= (((arr_7 [5] [i_2]) ? var_10 : 4046092712440557095)))))));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_15 = (max(var_5, (arr_10 [i_1] [1] [3] [i_4])));
                            arr_19 [5] [5] [i_4] = -65;
                            var_16 -= ((~(arr_0 [i_3 + 1])));
                        }
                    }
                }
            }
            arr_20 [i_1] [i_2] = (((((!(((var_4 ? var_4 : var_0)))))) >> (((72 % var_7) - 41))));
        }
        var_17 |= (min((((arr_9 [i_1] [9] [12] [12]) ? 14400651361268994530 : 1)), (((4908 ? var_0 : (arr_11 [i_1 - 1]))))));
        var_18 = 1;
    }
    var_19 = var_9;
    #pragma endscop
}
