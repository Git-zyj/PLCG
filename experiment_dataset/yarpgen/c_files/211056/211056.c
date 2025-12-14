/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_15 -= (((arr_2 [i_0]) ? 7156740715516435393 : ((((arr_1 [i_0 - 1]) ? (arr_1 [i_1]) : 63)))));
            var_16 = (max(var_16, (arr_4 [i_0 - 1] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        var_17 = arr_6 [i_2] [i_3];

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_18 = 4294963200;
                            var_19 = (!var_12);
                            var_20 = (max((((min(7, 2048)))), 7156740715516435386));
                        }
                        var_21 = (max(var_3, (((max((arr_2 [i_1]), (arr_10 [i_0] [i_1] [i_2] [i_3]))) > (((((arr_13 [i_0] [i_3 - 2] [i_0] [13] [4] [0] [8]) >= 7699288875337006654))))))));
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_22 += -18612910;
            var_23 = (min(var_23, (arr_14 [i_0] [i_5 - 1] [i_5 - 1])));
            var_24 = (((arr_16 [i_0 + 1] [i_0] [i_0]) <= (arr_16 [i_0] [i_0 + 1] [i_5 + 1])));
            var_25 = ((-(min((min(var_9, 11522)), ((min(var_2, (arr_14 [i_0 + 1] [i_5 + 1] [i_0]))))))));
        }
        var_26 = ((((max(23667, var_7))) && var_2));
        var_27 = (max(var_27, (((~((1426393453 & (((max(1, 10617)))))))))));
        arr_17 [i_0] = (min((arr_7 [1] [i_0]), (~18446744069414588415)));
    }
    var_28 = ((max(var_12, (var_7 / 65348))) <= (((((var_14 ? 1 : 0))) ? (min(var_12, var_10)) : (var_6 || -38))));
    #pragma endscop
}
