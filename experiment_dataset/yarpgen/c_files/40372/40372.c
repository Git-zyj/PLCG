/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((min((var_0 * var_3), (((var_1 % -53) ? (max(8374920368884812501, 0)) : var_10)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, ((((((arr_0 [i_0] [i_0]) ? ((max(var_5, (arr_0 [i_0] [i_0])))) : (arr_1 [i_0]))) < ((13709123958081985905 ? 24 : 32083)))))));
        var_16 = ((((((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : 32083))) ? var_13 : (arr_0 [i_0] [i_0])))) ? (min(33453, 8430231127214234554)) : 101);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = (((((max(1, 42159)) ? (arr_3 [0]) : (arr_3 [i_1])))));
        var_18 = (arr_4 [i_1]);
        var_19 = (min(var_19, (arr_3 [i_1])));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_20 = (((((arr_4 [i_1 + 1]) ? (arr_8 [i_1 - 1]) : (arr_8 [i_1 + 3]))) << ((((max((arr_6 [i_2] [i_1]), (arr_8 [i_1])))) ? (3409765059 * 0) : 1229336323427010798))));
            arr_9 [i_1] = 42861;
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_12 [i_3] = (((18446744073709551615 < 17) << (var_13 - 6124)));
            var_21 = ((4184007149946442811 ? (((arr_7 [i_1]) ? ((((arr_6 [i_1] [i_3]) ? var_11 : var_12))) : 3925617856106617726)) : 33453));
            arr_13 [i_1] [i_1 + 3] [0] = arr_3 [i_1];
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            var_22 = (min(var_22, (arr_7 [i_1])));
            var_23 = 4184007149946442811;
        }
        arr_16 [i_1] [i_1 + 2] = (arr_7 [i_1]);
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = var_7;
        arr_22 [i_5 + 3] = 1;
        var_24 = 0;
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_25 = (max(var_25, ((((+(((arr_24 [i_6] [i_6]) ? (arr_19 [i_6]) : var_1)))) << (var_1 - 66)))));
        var_26 = (((((max((arr_14 [i_6] [i_6] [i_6 - 1]), (arr_14 [i_6] [i_6] [i_6]))))) != (((5643263165867199617 ? 0 : 3925617856106617726)))));
        arr_27 [i_6] [i_6] = (((((arr_18 [i_6 + 3]) ? (arr_24 [i_6 - 1] [i_6]) : ((max((arr_3 [i_6]), var_10))))) / -5471740740956339433));
    }
    var_27 = var_7;
    #pragma endscop
}
