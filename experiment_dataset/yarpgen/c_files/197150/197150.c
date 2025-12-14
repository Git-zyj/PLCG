/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ^ ((((max(-4438582019806607919, var_11))) ? 4294967295 : (max(6187, 21))))));
    var_14 += min(var_10, (var_6 <= 1361360550));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((max((arr_0 [i_1 - 2]), (arr_0 [i_1 - 1]))) / (min((min((arr_0 [i_0]), var_9)), var_4))))));
                var_16 = (-var_5 >= var_2);
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_17 = ((5 ? -5848560261484707633 : (max((max((arr_5 [i_2]), -65)), (arr_4 [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_18 = ((!((((((arr_13 [i_2] [i_4] [i_4] [i_5]) > var_12)) ? var_12 : (((arr_14 [i_2] [i_3] [i_4 + 1] [i_5]) ? (arr_10 [i_2] [i_4] [i_5]) : (arr_7 [19]))))))));
                        arr_15 [3] [i_3] [i_4] [i_4] [i_4] [i_4] = ((((max(-32755, (~5)))) ? ((((((var_4 ? 21 : (arr_5 [i_2]))) == 7)))) : (min(((-4659417111905652922 ? (arr_5 [i_4 + 1]) : var_7)), 44))));
                        arr_16 [i_4] = 21;
                        var_19 = (((((((var_8 ? -18843 : var_12))) ? ((1449328807785628938 ? 1048574 : var_2)) : (((min(184, 29)))))) * (((~(((arr_14 [i_5] [i_4] [i_3] [i_2]) ? var_2 : (arr_6 [i_3] [i_3] [i_2]))))))));
                    }
                }
            }
        }
        var_20 = (min(var_20, 184));
        var_21 = (max(var_21, (arr_9 [i_2])));
        var_22 = (max((((((var_6 ? (arr_9 [i_2]) : (arr_11 [i_2] [10] [10]))) + (arr_10 [i_2] [10] [i_2])))), (((arr_11 [i_2] [i_2] [i_2]) ? (arr_11 [i_2] [i_2] [i_2]) : 13))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_20 [6] [i_6] = (min((max((arr_9 [i_6]), -1449328807785628938)), ((var_2 ? (arr_13 [i_6] [6] [i_6] [i_6]) : (max((arr_13 [i_6] [10] [10] [i_6]), -32761))))));
        arr_21 [19] = (max(var_12, (((-10724 ? 166 : (arr_12 [i_6] [i_6] [i_6] [i_6]))))));
        var_23 = 8;
    }
    #pragma endscop
}
