/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_6;
        var_13 = ((((max((~94), var_11))) ? (4194300 >= 4194319) : (arr_0 [i_0] [i_0])));
        var_14 &= (((arr_1 [i_0]) ? ((var_11 ? var_3 : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : (((var_6 ^ ((3944491814 ? 4290772995 : 4290772995)))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_15 = (-(~-1));
        var_16 |= (max(1, 0));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 ^= (arr_2 [i_2] [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        var_18 -= 4194300;
                        var_19 &= (((arr_10 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]) ? 4290772990 : (arr_10 [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4])));
                        arr_12 [i_1] [i_2] [i_2] [i_3] [i_4 + 1] = ((var_5 ? var_11 : ((((!(arr_1 [i_1])))))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_20 = (max(var_20, (((~((((((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_13 [i_1] [i_5])))) & (arr_9 [i_5]))))))));
            arr_15 [i_1] [i_5] [i_5] = (arr_2 [i_1] [i_5]);
            arr_16 [i_1] = (max(var_2, (arr_6 [i_1] [i_1] [i_1])));
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = ((((!(arr_19 [i_6]))) ? ((((var_2 - (arr_17 [i_6]))) | ((((arr_17 [i_6]) >> (var_0 - 4190779789246968242)))))) : (((+((var_8 ? (arr_19 [i_6]) : var_4)))))));
        var_21 = (min(var_21, (~var_4)));
        var_22 = (var_1 || 4294967295);
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_23 = (max(var_23, ((((arr_18 [i_7]) ? var_9 : (arr_18 [i_7]))))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_24 = (((125 ? (22 % 4194301) : 4294967293)));
                        var_25 = (((max(3905205296, (arr_17 [i_9])))) ? (((arr_28 [i_8] [i_8 - 1] [i_9] [i_10]) ? ((((!(arr_31 [i_10] [i_9 + 1] [i_8] [i_7]))))) : ((4194276 ? (arr_17 [i_7]) : -1222706073)))) : ((((!(((4194325 - (arr_30 [i_7] [i_8 - 1] [i_9 - 1] [i_10])))))))));
                        var_26 ^= var_1;
                    }
                }
            }
        }
        arr_32 [i_7] = (((arr_25 [i_7] [i_7] [i_7]) ? ((((4290772994 || 4194332) == ((var_6 ? 1222706080 : (arr_23 [i_7])))))) : (arr_21 [i_7])));
    }
    var_27 ^= ((var_5 == ((((var_10 ? 4294967281 : var_8)) * (!4294967286)))));
    #pragma endscop
}
