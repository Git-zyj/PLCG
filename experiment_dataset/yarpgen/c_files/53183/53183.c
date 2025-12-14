/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((min(7, var_8)) ? var_9 : (var_6 % var_5)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_12;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_16 = (max(var_16, ((((arr_0 [i_0 - 1]) ? (((arr_1 [10] [i_1]) ? (arr_0 [i_0]) : 32)) : var_0)))));
            var_17 *= ((var_11 ? 1 : (arr_2 [i_0 + 1] [i_0 - 2])));
        }
        arr_6 [i_0] = ((236 % (arr_5 [i_0])));
        var_18 = (arr_4 [i_0 + 3] [i_0 + 3]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = -var_9;
        arr_10 [i_2] = 4294967264;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 = (min(var_19, (((-1576199764 ? 250 : var_6)))));

        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            var_20 = (arr_12 [i_4] [i_4 + 2]);
            var_21 = (arr_1 [i_4] [i_4]);
            var_22 = (min(var_22, ((((((5384 ? var_3 : (arr_4 [i_3] [i_3])))) * 0)))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_23 = -1287360022;
                var_24 = (min(var_24, ((((((var_12 ? 774360681 : -15))) ? (var_4 % var_0) : (!var_8))))));
                arr_21 [i_3] [i_5] [i_6] = (((arr_17 [i_3] [i_3]) % var_11));
            }
            arr_22 [i_3] [i_5] [i_5] = (~var_8);
        }
        arr_23 [i_3] [i_3] = (11324248655820975585 % var_4);
    }
    var_25 = ((((max(-4531365609583088198, (var_6 / var_14)))) ? 32 : (~1)));
    #pragma endscop
}
