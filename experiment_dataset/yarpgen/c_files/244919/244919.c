/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((((max(230, var_8))) >> (((max(var_2, 8257536)) - 8257530))))), (min(((var_4 ? var_5 : var_1)), var_11))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (min(var_18, (!var_3)));
        var_19 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_20 ^= ((~(max(((max(var_12, 1021455507))), (~var_16)))));
        var_21 -= (min(((((((arr_3 [3]) ? -1 : (arr_4 [i_1])))) ? (!var_14) : (((arr_2 [i_1]) ? (arr_0 [i_1] [i_1 + 3]) : 18446744073709551615)))), ((((1391975515 ? (arr_4 [i_1]) : 8))))));
        var_22 = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 *= (arr_7 [i_2]);
        var_24 ^= (arr_7 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_3] = 18446744073709551615;
                    var_25 = -1391975516;
                    var_26 = (arr_8 [i_2]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_27 += -1391975516;
        var_28 = (min(var_28, ((((-1 + 2147483647) << (((arr_11 [8]) - 8080287567701972213)))))));
        var_29 = (((arr_9 [i_5] [i_5]) == (arr_9 [i_5] [i_5])));
        arr_17 [i_5] = ((!((!(arr_3 [i_5])))));
        var_30 = (((arr_1 [i_5]) ? var_3 : -9426));
    }
    #pragma endscop
}
