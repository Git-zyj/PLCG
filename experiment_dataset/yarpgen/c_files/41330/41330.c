/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(((((max(var_0, 1903265681))) ? 205 : var_8)), var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_7 ? var_0 : (arr_0 [i_0])))) <= (arr_2 [17]));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_12 = (min(var_12, (var_0 | 1)));
            var_13 = (min(var_13, ((((((var_7 ? 58666 : 1918407096))) % ((-711133916 ? 1325155268801157413 : (arr_5 [i_0]))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_13 [i_3] [2] [i_2] [i_3] [i_3] [i_0] = 255;
                            arr_14 [i_4] [i_3] [i_1 + 2] [i_1 + 2] [i_0] = var_8;
                            var_14 = ((1 ? -8 : -711133914));
                            var_15 = (((-1077865645 + var_8) ? (45 ^ 387836075) : 711133915));
                            var_16 -= (47 % 107);
                        }
                    }
                }
            }
            arr_15 [i_0] = var_5;
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_17 = var_5;
            arr_18 [i_0] [i_5] = (((arr_2 [i_0]) < (arr_7 [i_0] [i_0])));
            var_18 = ((1077865645 ? 0 : 180));
        }
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            var_19 -= ((((((arr_1 [i_0]) & (arr_0 [i_6])))) ? (((((arr_17 [i_0]) || (arr_6 [i_0]))))) : ((-11792 ? -126 : -2397849699787542561))));
            var_20 += ((((((arr_5 [i_0]) >> (var_2 - 3732183988)))) ? (arr_10 [i_0] [13]) : (arr_10 [6] [6])));
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        arr_23 [i_7] = (((((3300384324346757125 ? -2740558648817203060 : 4294967295))) ? -41 : (((arr_21 [i_7]) << (((-17331 + 17388) - 55))))));
        var_21 ^= ((309252340 ? ((((arr_22 [i_7] [1]) || 26257))) : var_0));
        arr_24 [i_7] [i_7] = arr_22 [i_7] [i_7];
        var_22 = -1939962144;
        var_23 = 18446744073709551615;
    }
    #pragma endscop
}
