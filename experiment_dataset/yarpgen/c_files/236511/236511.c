/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((min(149, (~4294967295))))));
    var_17 *= ((((~var_2) - var_15)) - var_9);
    var_18 &= (min((max(((var_1 ? 4294967288 : 91)), ((min(var_7, var_7))))), (!var_12)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (((((2147483647 ? 25 : (arr_0 [i_0 - 1])))) / (arr_1 [i_0])));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
            {
                var_19 = min(((var_13 & (arr_2 [i_2]))), var_2);
                var_20 ^= ((((min(((min(var_6, var_15))), (((arr_4 [2]) ? (arr_6 [i_0 - 1]) : var_2))))) ? (((((var_13 ? var_2 : 63)) > ((((!(arr_4 [8])))))))) : var_7));
                arr_9 [i_1] = ((!((max(var_0, var_6)))));
                arr_10 [i_1] [i_1 + 1] [i_2] = ((-(max(((25 ? var_8 : 4294967288)), (~21)))));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [6] [i_0 + 1] |= (max((arr_2 [i_1 + 1]), (((arr_5 [i_0 - 1] [i_0 + 1]) * (arr_11 [i_0] [6] [i_0])))));
                var_21 = ((!(((1 ? (arr_1 [i_0 - 1]) : 2910582283)))));
                arr_15 [i_1] = (((((((max(21, (arr_4 [i_1]))))) > (min(var_3, var_12)))) ? ((min((max(var_3, -29314853)), var_7))) : ((18446744073709551615 - (((36 ? -1422796801 : var_8)))))));
                arr_16 [i_1] [i_1 - 1] [i_0 - 1] = ((((min(((var_1 ? var_10 : var_13)), (min(18446744073709551615, 17711799667464427709))))) ? var_4 : (var_4 || -1178967888)));
            }
            var_22 = 9;
            var_23 = ((((17711799667464427698 << (var_5 - 1579790666))) & var_13));
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                var_24 = (max(var_24, (((~(arr_6 [i_0 - 1]))))));
                var_25 = (min(var_25, (!18244972266330447255)));
                var_26 = (min(var_26, var_0));
            }
            var_27 = (max(62677, (((var_12 ? var_8 : 3402077762)))));
            arr_22 [i_4] [i_4] [i_4] = (((!(!var_8))) ? (min(var_12, ((min(12, 1422796802))))) : -27);
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_26 [i_6] [i_0] = 9;
            arr_27 [i_6] = var_5;
        }
        var_28 = 2449;
    }
    var_29 = var_8;
    #pragma endscop
}
