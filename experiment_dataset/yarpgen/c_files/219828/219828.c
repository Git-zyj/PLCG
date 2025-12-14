/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((((((var_1 ? var_8 : var_8)) + 2147483647)) >> (((~var_3) - 2555221341))))), (((((max(4625, 4614)))) + ((var_5 ? var_7 : -1203342624))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 *= (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (max((arr_1 [i_0] [i_0]), (((min(var_3, (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = (((max((arr_4 [i_1] [i_1]), (arr_5 [i_1] [i_1]))) & (((arr_5 [i_1] [i_1]) ? var_3 : (max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))));
        arr_6 [i_1] [i_1] = (-2147483647 - 1);
        var_14 = ((((((-(arr_4 [i_1] [i_1])))) ? (max(var_1, (arr_4 [i_1] [i_1]))) : (((((arr_4 [i_1] [i_1]) <= (arr_5 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = (!-268435456);
        var_15 -= (arr_4 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_16 += (max(var_10, (((arr_5 [i_3] [i_3]) ? (arr_11 [i_3]) : (arr_11 [i_3])))));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_17 = (arr_8 [i_3] [i_4]);
            arr_15 [i_4] [i_3] = ((-(arr_11 [i_3])));
            arr_16 [i_3] [i_3] = (min(((var_4 ? ((max(var_3, var_3))) : (min(-50, (arr_7 [i_3]))))), (arr_0 [i_3] [i_3])));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_18 = (min(((((~var_1) || var_10))), (max((max((arr_11 [i_3]), (arr_7 [i_5]))), (arr_7 [i_5])))));
            var_19 = min((((((min((arr_12 [i_3] [i_3] [9]), -4608)))) | (arr_0 [i_3] [i_5]))), (max((arr_12 [i_3] [i_3] [i_5]), (max((arr_0 [i_3] [i_5]), (arr_17 [i_5]))))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_24 [i_6] [i_6] [i_3] = (min((((((2147483647 ? var_0 : var_10))) ? ((22725 ? (arr_12 [i_3] [i_6] [i_6]) : (arr_4 [i_6] [i_6]))) : (((arr_23 [i_3] [i_6] [i_6]) ? (arr_21 [i_3]) : var_4)))), (((-(arr_8 [i_6] [i_3]))))));
            arr_25 [i_6] [i_3] [8] = min(-22709, (arr_5 [i_6] [i_6]));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_20 = (max(var_20, ((((((arr_17 [i_7]) ^ (arr_13 [i_3] [i_3] [i_3])))) >= (((~var_8) ? (((-(arr_2 [i_3])))) : (max((arr_21 [i_3]), 9383503200591053465))))))));
            var_21 = ((20555 ? 18446744073709551609 : 42826));
            arr_29 [i_3] = (max((arr_17 [i_3]), (arr_28 [i_3] [i_3])));
            arr_30 [i_3] [i_3] [i_7] = (((max(1, 1884590259))) ? var_8 : (((arr_27 [i_3] [i_3]) + (arr_10 [i_7]))));
            arr_31 [i_3] [i_3] [i_3] = (max(((max(1557, 1557))), (((arr_19 [i_3] [i_3] [i_3]) ? (((arr_11 [i_3]) ? (arr_27 [i_3] [i_7]) : (arr_14 [i_3] [i_7] [i_3]))) : 17671317421252743481))));
        }
        arr_32 [i_3] = ((~(min(((228064839980618672 ? -1884590260 : var_2)), (~65535)))));
        var_22 = (arr_11 [i_3]);
        var_23 = (((max((max(var_4, (arr_7 [i_3]))), (arr_8 [i_3] [i_3]))) ^ (((4294967273 && var_4) ? var_0 : (((177 ? var_4 : var_5)))))));
    }
    var_24 -= ((((((-53 <= var_6) ? (~var_3) : (var_9 && var_2)))) ? ((775426652456808146 ? 9383503200591053465 : 22709)) : ((((var_0 + var_2) ? (var_1 - var_6) : ((var_6 ? var_0 : var_1)))))));
    #pragma endscop
}
