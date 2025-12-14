/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_10 [i_0] [2] [i_2] [i_2] [i_3] = 1893276635;
                    arr_11 [i_0 - 1] [i_1] [i_2] [i_3] = ((((((!(((8732857955364452487 ? 2147483647 : 0))))))) != ((-(arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2])))));
                    arr_12 [i_0] [i_1] [i_0] = (min((max((((-(arr_7 [i_0] [i_2] [i_0] [i_3])))), (max(var_7, var_4)))), 0));
                    var_13 = (max(var_13, var_6));
                    arr_13 [i_3] [10] [i_2] [i_1] [i_0] [i_0] = (min((((!(((1 ? -32 : 651886887)))))), var_9));
                }
                var_14 = (min(var_14, var_8));
            }
            arr_14 [i_0 + 2] [1] [i_1] = 1;
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_15 = (min(var_15, var_10));
            var_16 = (min(((((0 ? 4204564656305156778 : 4204564656305156806)))), (min(((min(var_5, -96))), (((arr_2 [i_4] [i_0]) ? 3072 : (arr_15 [9] [9])))))));
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_17 = 28;
            var_18 = (((((!4294967277) ? var_8 : (((arr_3 [4] [i_5] [i_0]) + -8)))) * (0 > var_5)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_19 = (((76 || var_1) > ((+(max((arr_0 [i_0]), (arr_6 [i_5] [i_5] [i_5] [i_7])))))));
                        var_20 = (min(var_20, -6690));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_28 [i_0 + 1] [i_0] [i_0] = ((var_6 ? (~41557) : ((var_5 ? (arr_19 [i_8] [i_0 + 1] [i_0]) : var_11))));
            var_21 += 65472;
        }
        var_22 &= ((((((arr_5 [i_0] [i_0] [15] [i_0 + 1]) ? (~var_11) : ((-110 - (arr_20 [i_0] [i_0 + 1] [i_0])))))) ? (63527 ^ 3643080415) : ((((((var_6 ? (arr_1 [i_0]) : var_1)) != (var_6 % var_1)))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_33 [i_0] [i_0 - 1] [5] [i_0 - 1] = ((1020 ? -83 : (((!(((179 ? -768859210 : (arr_25 [19] [i_9])))))))));
                    var_23 = (min((-127 - 1), (min((arr_30 [i_0 + 1] [i_9] [i_10]), (arr_30 [i_0 + 2] [i_9] [i_9])))));
                    var_24 = (((((-var_1 % (min(2, (-127 - 1)))))) ? (((1994549374932400931 < (arr_16 [i_0 + 2])))) : -9));
                }
            }
        }
    }
    var_25 = (~-1382159036705648579);
    var_26 = (!var_11);
    #pragma endscop
}
