/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_0) ? (!var_12) : (((min(var_11, 967997187))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (arr_1 [i_0 + 1])));
        arr_2 [i_0] = 41268;
        var_21 = (arr_1 [i_0]);
        arr_3 [i_0] = ((!(((var_1 ? 3326970109 : (var_8 + 1))))));
        var_22 = (max(var_22, (((~(arr_1 [i_0 - 2]))))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_23 = ((var_3 ? (arr_9 [i_1 - 1] [i_1]) : (!967997179)));
                arr_11 [i_1 - 2] [i_3] = (3326970111 >= -433273536312659655);
                var_24 = (var_9 ? var_6 : -24180);
            }
            var_25 -= (max((~685269753631688618), ((((arr_7 [i_1 - 2]) > (arr_7 [i_1 - 2]))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] [i_1] [i_4] = (-(min((min((arr_7 [i_1 - 1]), 1)), (arr_14 [i_4] [i_4]))));
            arr_16 [i_4] = ((((((arr_12 [i_4] [i_1] [i_4]) ? -7386 : 610)) == ((max((arr_9 [i_4] [i_1]), var_8))))) ? (arr_4 [i_4]) : 3326970119);
            arr_17 [i_4] = ((-((((arr_9 [i_1 + 1] [i_1 + 1]) == 1)))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_26 = (min(var_10, 1));

            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                arr_24 [i_1] [i_5] [i_6] [i_5] = 4294967282;
                arr_25 [i_5] [i_5] [i_5] [i_5] = 3326970108;
                var_27 = var_18;
            }
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                var_28 = (arr_22 [i_1 - 1] [i_1 - 2] [i_7 + 1]);
                var_29 = (((((arr_9 [i_7 + 3] [i_1 - 1]) ? 967997185 : (arr_1 [i_1 - 2]))) | var_18));
            }
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                arr_31 [i_5] [i_5] = ((~(((-22079 != (arr_13 [i_1 - 2] [i_8]))))));
                var_30 = ((((((4294967295 == var_9) ? (arr_30 [i_8 - 1] [i_1]) : ((var_17 ? 14873 : var_12))))) ? (((arr_7 [i_8 - 2]) ? 65535 : (arr_7 [i_8 - 2]))) : (var_0 + 30361)));
            }
            arr_32 [i_5] [i_5] [i_1] = (arr_4 [i_1]);
            var_31 = ((((arr_19 [i_5]) - var_2)));
            var_32 = (min((((arr_27 [i_1 - 2] [i_1 + 1] [i_1 + 1]) ? ((min((arr_6 [i_1]), var_18))) : (arr_27 [i_5] [i_1 - 2] [i_5]))), 17));
        }
        arr_33 [i_1] = (max(((~(max((arr_14 [i_1] [i_1]), 12)))), ((~((((arr_29 [i_1 - 1] [i_1] [i_1 - 2] [i_1]) > (arr_29 [i_1 - 1] [i_1] [i_1 - 2] [i_1]))))))));
        var_33 = (((((~((1 ? (arr_19 [i_1]) : 0))))) ? 1 : 967997184));
        var_34 = 14;
        arr_34 [i_1] = arr_19 [i_1];
    }
    for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_35 = (((~(arr_30 [i_9 - 1] [i_9]))));
        arr_37 [i_9 - 2] [i_9] = (max((~var_17), (arr_1 [i_9])));
        var_36 = ((~(((arr_36 [i_9 - 2] [i_9]) ? var_9 : (arr_0 [i_9])))));
        var_37 = 22079;
        var_38 = 1;
    }
    for (int i_10 = 3; i_10 < 10;i_10 += 1)
    {
        var_39 *= (max(-6349093815571192454, -32761));
        var_40 = var_15;
    }
    var_41 = (min((~var_16), ((((max(var_14, var_1))) ? var_16 : ((1 ? var_7 : var_13))))));
    var_42 = (!var_17);
    #pragma endscop
}
