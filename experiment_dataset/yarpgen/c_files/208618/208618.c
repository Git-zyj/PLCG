/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -4;
    var_17 = (max(var_17, var_14));
    var_18 = (max(var_18, var_13));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (max(-22517, ((((max(-16112, -18))) ? (arr_0 [i_0] [i_0]) : -2479))));
        var_19 = (min(((var_4 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), ((max(240, 0)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [1] [i_1] = (+-22625);
        var_20 = (arr_4 [i_1] [i_1]);
        var_21 = (min(var_21, 32749));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = (max((max(((-(arr_5 [22]))), ((~(arr_6 [i_2] [i_2]))))), (((((arr_9 [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_4 [i_2] [i_2])))))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_15 [i_2] [22] [8] [22] |= (((arr_4 [i_3 + 1] [i_3 + 1]) ^ (arr_4 [i_3 + 1] [i_3 - 2])));
                var_22 *= (arr_4 [i_3 + 1] [i_4]);
                var_23 |= var_12;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_24 += (arr_14 [i_5] [i_5] [i_3 - 1]);
                arr_18 [i_2] = ((~(-3321 | var_15)));
            }
            arr_19 [21] [21] [i_3 - 1] = (arr_13 [i_2]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_25 = ((-32750 ? (arr_17 [i_2] [i_2] [i_2]) : (arr_6 [i_2] [i_2])));
            var_26 = 32757;
        }
    }
    #pragma endscop
}
