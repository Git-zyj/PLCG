/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_13 ? var_10 : -var_19));
    var_21 = var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = -1166862820832768522;
        var_22 = (((arr_1 [i_0]) | 5191885493121505706));
        arr_5 [i_0] |= arr_1 [i_0];
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1 + 1] = (((((max(var_19, (arr_8 [i_1 - 2]))))) ? 6895667764532934237 : ((-5191885493121505707 * ((((arr_8 [i_1]) / var_0)))))));
        arr_11 [i_1] = (((var_8 / var_10) ? (arr_8 [i_1]) : ((max((arr_9 [i_1 + 1] [i_1 - 2]), (arr_7 [i_1 + 1] [i_1 - 1]))))));
        var_23 = (max(((((arr_9 [i_1] [17]) ? (arr_6 [i_1]) : (arr_7 [i_1 + 1] [i_1 + 1])))), 5191885493121505712));
        var_24 *= (min((((!(arr_7 [i_1 + 1] [i_1 + 1])))), ((-(arr_7 [0] [i_1])))));
        var_25 = (max((((((min((arr_7 [20] [20]), (arr_9 [i_1] [i_1])))) || (arr_8 [i_1 + 1])))), ((var_0 ? -var_12 : ((-(arr_7 [i_1] [i_1])))))));
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_26 = (min(var_26, ((((arr_12 [i_2 - 2]) << (((arr_9 [i_2] [i_2 - 1]) + 99)))))));
        arr_14 [i_2] = (!-593422286);
        var_27 = (((arr_6 [i_2 - 2]) ? var_19 : ((((arr_13 [i_2 - 2] [i_2 - 2]) <= (arr_13 [i_2 - 2] [i_2 - 1]))))));
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_27 [i_4] = (((arr_13 [i_5] [i_6 + 3]) + (((arr_15 [i_5]) / (arr_18 [i_4] [i_5] [i_4])))));
                        arr_28 [i_6] [i_4] [i_4] [i_3] = ((((max((((arr_17 [i_3] [i_4]) ? 4913287360335921210 : (arr_7 [i_5] [i_6]))), 0))) && ((((((arr_23 [i_5] [i_4 - 1]) <= (arr_26 [i_4]))) ? (arr_8 [i_5]) : ((var_18 ? (arr_9 [11] [i_5]) : (arr_12 [3]))))))));
                        var_28 = ((((((17669267655508218643 ? 109 : 593422285)) == (1 | 0))) ? (((max((-32767 - 1), -10521)))) : (arr_18 [i_5] [i_5] [i_4])));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_31 [i_4] [i_5] [i_4] [1] = -74311598293092240;
                            arr_32 [i_3] [i_5] [i_4] = ((((18623 ? 20 : 6917529027641081856))));
                            arr_33 [i_7] [i_4] [i_5] [i_4] [i_3] = ((((56 && 1) ? (!14) : (arr_22 [i_4] [i_4 - 2]))));
                            var_29 = max(((((arr_6 [i_6 + 3]) || (arr_26 [i_4])))), (max(4913287360335921213, var_13)));
                            var_30 = ((min((((arr_17 [1] [i_4]) != var_5)), (((arr_21 [i_4] [i_5] [i_4]) >= (arr_6 [i_5]))))));
                        }
                    }
                }
            }
        }
        var_31 -= ((1 * ((min(var_17, 5191885493121505704)))));
        var_32 = arr_6 [i_3 - 1];
    }
    #pragma endscop
}
