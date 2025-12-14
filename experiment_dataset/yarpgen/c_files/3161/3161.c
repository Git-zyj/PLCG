/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((var_10 || ((min(-164095400, var_13))))) ? (((var_8 >= var_11) ? ((343321281 ? var_8 : var_1)) : (247342230 ^ var_8))) : (max((~var_13), var_5)));
    var_21 = var_1;
    var_22 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_23 = ((!(((~(arr_1 [8]))))));
        var_24 = max(53265, (15301 >= 4193792));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_25 = ((((((max(58548, 426457811)) / ((-2109930268 ? 1846613830 : 6985))))) ? 1623646488 : (max(9685, 4194296))));
                        arr_12 [i_1] [i_1] [i_3] [i_4] = ((((((((6987 ? 0 : 343321309))) ? 1866791915 : ((-400026854 ? 1623646488 : -1866791916))))) ? 550630706 : 32512));
                    }
                }
            }
        }
        arr_13 [i_1] [i_1] = (((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) > ((((arr_1 [i_1]) == (arr_1 [i_1]))))));
        arr_14 [i_1] [i_1] = 348922469;
        arr_15 [i_1] = var_5;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_26 = (max((55850 || 1866791915), (((arr_9 [i_5] [i_5] [i_5]) ? (arr_9 [i_5] [i_5] [i_5]) : 1794982494))));

        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            arr_21 [i_5] [i_6] = ((((min(var_10, 1))) ? (((!(arr_8 [i_6 + 1] [i_6 + 3] [i_6 - 1])))) : (((arr_8 [i_6 + 2] [i_6 - 3] [i_6 + 2]) ? (arr_8 [i_6 - 1] [i_6 - 3] [i_6 - 1]) : var_10))));
            arr_22 [i_6] [i_6] = (min(((((max(var_10, (arr_18 [i_6])))) ? var_7 : -var_14)), (((min(var_18, var_14))))));
        }
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            var_27 = (max(((1866791903 ? 693364247 : ((max(2104, (arr_16 [i_5])))))), ((((((arr_19 [4]) & 65535)) >= -1623646489)))));
            var_28 += (~(max(-var_11, var_9)));
        }
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 7;i_8 += 1)
    {
        var_29 -= -1866791909;
        var_30 ^= var_12;
        var_31 -= var_18;
        arr_27 [i_8] = ((arr_23 [i_8 + 1] [2]) ^ (arr_23 [i_8 - 4] [i_8]));
    }
    #pragma endscop
}
