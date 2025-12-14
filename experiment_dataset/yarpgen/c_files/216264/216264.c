/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 542416950;
    var_18 = (((!-var_5) * (!var_6)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (min((max((min(1, var_0)), (max(239, (arr_1 [i_0]))))), (arr_0 [i_0])));
        arr_3 [i_0] = ((((((arr_1 [i_0]) << (((arr_1 [i_0]) - 101))))) ? (((arr_1 [i_0]) << (((arr_2 [i_0]) + 123)))) : ((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 = ((+(((((arr_4 [i_1]) & 15420))))));
        arr_7 [i_1] = (max((((17 ^ 0) + (((arr_1 [i_1]) ? var_16 : var_11)))), (arr_2 [i_1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_12 [0] = (max(74, 163));
        arr_13 [i_2] = ((~(max(0, 838448534))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_17 [i_3] = (((min((arr_9 [i_3] [i_3]), (arr_9 [11] [i_3]))) | (((arr_9 [i_3] [i_3]) ? (arr_9 [i_3] [i_3]) : (arr_9 [i_3] [i_3])))));
        arr_18 [i_3] [i_3] = -30;
        var_21 = (((arr_16 [i_3]) ? ((-542416950 ? (arr_11 [i_3] [i_3]) : (arr_10 [i_3] [i_3]))) : ((-(arr_8 [i_3] [i_3])))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    {
                        var_22 = var_16;
                        arr_27 [5] [5] [i_4] [10] = (((((111 >= (127 % 17)))) & ((((-(-127 - 1))) ^ (!1)))));
                        var_23 = min(1357573559, 542416950);
                    }
                }
            }
            arr_28 [i_4] [i_4] = (((((~(arr_21 [i_3])))) ? 8754336690449511154 : (((352953070 != ((max(var_1, -79))))))));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_33 [i_3] [i_3] [i_3] = (min((((arr_14 [i_3] [i_7]) ? var_9 : var_10)), 239));
            var_24 = ((!((!(arr_9 [i_3] [i_3])))));
            var_25 = (((((max(403720836, 93)) - -var_6))) ? ((-(-127 - 1))) : ((-5 ? (-127 - 1) : 109)));
            arr_34 [i_3] = ((((((arr_14 [i_3] [i_7]) ? var_9 : (arr_14 [i_3] [i_7])))) ? 1 : (max((arr_14 [i_3] [i_7]), (arr_14 [i_3] [i_7])))));
        }
    }
    var_26 = ((var_2 ? ((-var_6 ? (~var_11) : var_13)) : (((max(var_3, var_7)) * ((var_1 ? 1 : 0))))));
    #pragma endscop
}
