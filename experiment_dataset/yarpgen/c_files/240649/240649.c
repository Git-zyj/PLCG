/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        var_10 = ((((((0 ? 845681426 : var_6)) + ((79288789999530571 ? var_5 : (arr_0 [i_0]))))) - (((((var_8 ? var_1 : (arr_1 [i_0]))) % (arr_1 [1]))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_1] [i_1] = (((5212998758981276866 ? (arr_4 [i_1] [i_1]) : var_0)));
                    arr_12 [i_1] [3] = ((((((arr_9 [i_1 + 1]) < (arr_9 [i_1 + 1])))) >= (arr_9 [i_1 + 2])));
                }
            }
        }
        var_11 -= -3521;
        arr_13 [i_1] [i_1] = (((var_5 < 36) | var_2));
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_12 = (arr_3 [7]);
        arr_18 [i_4] = -817481906;
        arr_19 [i_4] = ((((-(arr_15 [i_4] [i_4 - 2])))) & (min(-var_3, 127)));
        var_13 += (max((arr_8 [0]), (((arr_17 [i_4 + 1]) ? (arr_17 [i_4 + 2]) : (arr_17 [i_4 + 3])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_14 |= var_1;
                arr_25 [i_5] = (-562949953421312 <= 193327117);
                arr_26 [i_5 - 1] [i_5 - 1] = var_7;
                arr_27 [1] [i_5] [i_6] = (min(((((min(var_4, -39))) ? (!127) : 193327117)), var_5));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            {
                var_15 = (arr_30 [i_8] [i_7]);
                arr_33 [i_7] [2] = (((~(~17753990020634707328))));
            }
        }
    }
    #pragma endscop
}
