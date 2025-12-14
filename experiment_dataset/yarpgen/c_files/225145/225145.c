/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = (min((-32767 - 1), (max(0, -7794488189773213719))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -7794488189773213719;
        var_18 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_19 -= (!-1);
                    var_20 = ((~(arr_6 [i_1] [i_1])));
                }
            }
        }
        var_21 -= (((arr_9 [i_1] [i_1] [i_1] [3]) + (arr_4 [i_1])));
        arr_11 [i_1] [i_1] |= (arr_4 [i_1]);
        arr_12 [i_1] = var_13;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_22 = (((((var_12 ? (arr_14 [i_4] [i_4]) : 0))) ? -2657345212 : var_11));
        var_23 += var_13;
        arr_15 [i_4] [i_4] |= (((((arr_14 [i_4] [5]) ? var_0 : (arr_14 [i_4] [i_4]))) + (((max((arr_14 [i_4] [i_4]), (arr_13 [i_4])))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [12] [i_6] |= ((-(min((arr_14 [i_6 + 1] [i_6 - 1]), (~var_5)))));
                    var_24 = (min(var_24, (24 / 1)));
                }
            }
        }
        var_25 = ((-((var_6 ? var_6 : (arr_14 [i_4] [i_4])))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    arr_30 [i_7] [i_7] [i_7] = var_1;
                    var_26 = (max(var_26, -7794488189773213727));
                }
            }
        }
        var_27 &= (((arr_24 [i_7] [i_7]) ? ((-(arr_18 [i_7] [i_7] [0]))) : (arr_27 [i_7])));
    }
    var_28 |= 141;
    var_29 = var_3;
    #pragma endscop
}
