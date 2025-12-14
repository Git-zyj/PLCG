/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 = ((((((arr_0 [i_0] [i_0]) <= 32402))) * ((-1 ? (arr_0 [i_0] [i_0 + 1]) : var_5))));
        var_19 = (((arr_2 [i_0]) ? -112 : 1295357642));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = (56166 > 9002801208229888);

            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {
                var_20 = ((arr_7 [i_0 - 1] [i_1] [i_2] [i_1]) ? -16384 : 15488117568535938419);
                arr_11 [i_0] [i_1] [i_1] [i_1] = (-5558354288457538150 != var_11);
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_21 = ((!(arr_9 [i_0] [i_1] [i_3])));
                arr_14 [i_0] [i_0] [i_3] = (arr_10 [i_0] [i_1] [i_0 + 1] [i_0]);
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_17 [i_4] [i_0] [i_0] [12] = 41659;
                arr_18 [i_0] = (-(arr_15 [i_1] [i_1] [i_0 - 1] [i_0]));
                var_22 = (((-6050018092998509452 / 115628996) || (((arr_15 [i_0] [i_1] [i_4] [i_0 + 1]) && var_3))));
            }
            var_23 = ((var_4 >> (((arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]) - 8492))));
        }
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_24 = (arr_3 [i_5 + 2] [i_0 + 1] [i_0 - 1]);
            var_25 = ((arr_20 [i_5 - 2] [i_0] [i_0]) ? 31896 : ((129 ? 64551 : -11302)));
        }
        arr_21 [i_0] = (32402 ^ -13449);
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_24 [3] = ((max(-545412912, (977 > 6610828691869037733))));
        arr_25 [i_6] = -var_0;
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_37 [i_7] [i_8] = ((-(~var_15)));
                    var_26 = ((~(min(var_13, (~2901581107)))));
                    var_27 = ((-(((arr_32 [i_9]) / -182222343))));
                }
            }
        }
        var_28 = ((1125899906842623 / (arr_34 [10])));
    }
    var_29 = var_5;
    var_30 = -32403;
    #pragma endscop
}
