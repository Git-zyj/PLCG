/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_17 += (max(-var_14, ((((max(var_8, var_10)) == 2147483633)))));
            arr_5 [i_1] [i_1 - 2] [i_1 - 2] = (arr_2 [i_0] [i_0]);
        }
        arr_6 [i_0] &= (-56 * ((((arr_2 [i_0] [i_0]) * 20604))));
        var_18 -= (((2147483625 - var_14) ? (arr_0 [i_0] [i_0]) : -69));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_19 -= ((~(((arr_1 [i_2 + 1]) ? (arr_7 [i_2 - 1] [i_2 + 1]) : (arr_1 [i_2 + 1])))));
        var_20 = (min(var_20, (((((max((arr_2 [i_2 + 1] [i_2 + 1]), (arr_2 [i_2] [i_2 + 1])))) ? (((~1) ? var_16 : (!8423053669418202590))) : var_9)))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_21 = (((min(7831463184272128225, -56)) - (((var_5 - (arr_2 [i_2 - 1] [i_3]))))));
            arr_13 [i_3] = (((arr_3 [i_2]) << (((((~2147483636) - -2147483603)) + 63))));
            var_22 = ((!((!(arr_4 [i_2 - 1])))));
            var_23 = var_13;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_17 [i_4] = (((((((arr_2 [i_2] [8]) && (arr_10 [i_4] [i_4]))) && (((-9361 ? var_16 : var_11))))) ? (((!(arr_8 [i_2 - 1])))) : (((10023690404291349023 || ((var_16 && (arr_14 [i_4] [13] [i_2]))))))));
            arr_18 [i_2] [i_4] [i_2] = (max((((arr_7 [i_2 - 1] [i_4]) * (max(17578641797873421942, var_11)))), (((70 > (arr_10 [i_4] [i_2 + 1]))))));
        }
        arr_19 [i_2] [i_2] = (arr_2 [i_2] [i_2]);
        arr_20 [i_2 - 1] [i_2] = (max(11922446723260423049, (arr_4 [i_2 + 1])));
    }
    var_24 ^= var_13;
    var_25 = (-28 ? -349428803969926685 : 2184711123);
    #pragma endscop
}
