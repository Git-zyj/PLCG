/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((52859 % 7) ? ((-9223372036854775789 ^ (((min(-8955, (-32767 - 1))))))) : var_1);
    var_11 = ((~((((!var_0) && (~var_5))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0 + 2]) + var_8));
        var_13 = ((var_0 ? (arr_1 [i_0 + 1]) : var_2));
        var_14 = (max(var_14, ((((arr_1 [i_0 - 1]) <= (arr_1 [i_0 - 1]))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_15 = (max(var_15, ((max(var_7, -724350261541530859)))));
                    var_16 = var_4;
                    var_17 = ((var_0 ? ((((var_7 ? var_5 : (arr_7 [i_2]))) ^ (arr_10 [i_1]))) : (((((arr_8 [i_3] [i_1]) / var_2)) / (arr_10 [i_3])))));
                }
            }
        }
        var_18 = (max(var_18, ((max(((var_5 ? (((arr_4 [i_1 - 1] [i_1]) ? 9223372036854775802 : var_2)) : (max(-8699268167032953675, var_1)))), (max((arr_8 [i_1] [i_1]), var_4)))))));
        var_19 = ((!(((var_9 ? (arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1]) : (arr_9 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 - 1]))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_20 = (arr_11 [i_5] [i_4]);
            arr_16 [i_4] [i_4] [14] = (((arr_13 [i_4 + 1]) & ((((arr_15 [i_5]) < var_9)))));
            arr_17 [i_5] = ((31673 ? -var_3 : (var_2 / var_6)));
            var_21 = ((arr_15 [i_4 + 1]) ? var_4 : (arr_15 [i_4 - 1]));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_22 = (arr_13 [i_6]);
            var_23 *= ((!(arr_11 [i_4 + 1] [i_4 - 1])));
            var_24 += ((((arr_11 [i_6] [2]) ? var_3 : var_4)));
        }

        for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
        {
            var_25 = var_8;
            arr_22 [i_7 + 1] [i_4 - 1] = (((arr_12 [i_4 - 1]) ? (arr_21 [i_7 - 2] [i_4 - 1]) : (arr_12 [i_4 - 1])));
        }
        for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_26 = (((arr_11 [i_8 - 2] [i_8 + 1]) ? var_7 : 34114));
            var_27 = ((!(arr_12 [i_8 - 2])));
            var_28 = ((~((((arr_11 [i_8] [i_4]) || (arr_13 [20]))))));
        }
    }
    var_29 = var_6;
    var_30 = (-var_4 % var_0);
    #pragma endscop
}
