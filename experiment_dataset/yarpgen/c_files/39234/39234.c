/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_9 ? 8229712962550383810 : var_3))) % ((27872 ? 191 : (var_7 % 27864))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min(var_12, ((((-1 + 2147483647) >> (8191 - 8171))))));
        var_13 = ((999902463 && ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_3 [i_0] = (min(((163 ? (arr_2 [i_0]) : (arr_2 [i_0]))), ((-4597317669655916693 ? 27872 : 65535))));
        var_14 += ((27863 ? var_9 : (arr_2 [22])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_15 = 9281;
        var_16 = 20721;

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_17 -= 5974;
            var_18 = (min(var_18, (((93 ? 1 : 4597317669655916688)))));
            arr_10 [i_1] [i_1] [i_1] = ((1152921504606846975 ? (arr_8 [6] [i_2 + 1] [i_2]) : 64));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_14 [i_1] [i_3] = var_2;
            arr_15 [i_1] [i_1] [i_1] = ((!(((~(arr_5 [i_1]))))));
        }
        arr_16 [i_1] [i_1] = (((arr_0 [8]) ? 27863 : (((arr_1 [i_1]) % 15))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_24 [i_5] [i_6] = ((((((((4274330181 - (arr_9 [i_4])))) - ((-5964 & (arr_19 [i_4] [i_5 - 1])))))) ? (((~(~24858)))) : (min((((9256 ? var_9 : var_5))), 2380344705))));
                    arr_25 [i_5] = ((-31092 ? 5919261819270835151 : 1));
                    var_19 = var_3;
                    arr_26 [i_5] [i_4] [i_5] [i_4] = ((4095 | ((((((arr_18 [i_4]) >> (arr_2 [i_5])))) ? ((var_1 ? (arr_22 [i_4] [i_5] [i_5]) : var_4)) : var_7))));
                }
            }
        }
        var_20 = ((8191 ? ((((var_10 ? -34 : var_3)))) : ((2388153523 ? (((arr_6 [i_4]) ? 28799 : var_0)) : (((1 && (arr_22 [0] [i_4] [0]))))))));
    }
    #pragma endscop
}
