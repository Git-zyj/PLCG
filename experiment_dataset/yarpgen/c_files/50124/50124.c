/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_13 = ((((var_11 + 2147483647) >> ((((var_11 ? (arr_0 [i_0] [i_0]) : var_7)) + 787539249)))));
        var_14 = ((((((arr_1 [i_0]) ? (~13) : (~67)))) ? var_1 : (arr_1 [i_0 - 1])));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = ((var_2 <= (((arr_4 [i_0 - 2] [i_1 - 1]) ? (arr_4 [i_0 - 1] [i_1 - 1]) : (arr_4 [i_0 + 1] [i_1 - 1])))));
            var_15 = -7896448076830169428;
        }
        var_16 = ((5317079888113039306 ? 49152 : 20));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = min(1381309477, -23717);
        var_17 = -49153;

        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            var_18 -= (max((((!var_5) || 1)), ((!(((1 ? (arr_12 [i_2] [i_2 + 1]) : (arr_3 [i_2] [i_2] [i_2]))))))));
            arr_14 [i_3] = (min(var_4, (max(((9 ? -20 : var_7)), (((-971737237 ? -12 : var_1)))))));
            arr_15 [i_2] [i_2] = ((((((min((arr_2 [i_3 - 2]), 1))) % (((7237456570671406802 || (arr_3 [i_2 - 2] [16] [i_3])))))) >= 23));
        }
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = 39;
        var_19 = (max(var_19, (((((-31130 ? (arr_2 [i_4 - 1]) : (arr_2 [i_4 - 2]))) ^ ((((((((arr_12 [i_4] [i_4]) && 72)))) >= (max((arr_17 [16] [i_4]), var_12))))))))));
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_0));

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_24 [13] = (~1637997752077762743);
            var_21 -= (max((max((~19), 188)), 4094));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_22 = (max(var_22, ((max((70 + var_12), ((((max((arr_20 [i_5] [i_5]), var_11)) * (((arr_0 [i_5] [i_7]) ? (arr_8 [i_5] [i_7]) : -1617864155))))))))));
            var_23 += ((((!-26311) ? (1 || 9192766646926244922) : (max((arr_20 [10] [i_5 + 1]), var_6)))) > ((max((arr_25 [i_7] [i_7] [i_7]), (arr_25 [i_7] [i_7] [i_5 - 1])))));
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    var_24 = (max(var_24, (max(-var_5, var_6))));
                    var_25 = (max(var_25, (((((((var_8 ? var_1 : (arr_22 [i_8]))) ? 8728775907428989999 : 8882)))))));
                }
            }
        }
    }
    #pragma endscop
}
