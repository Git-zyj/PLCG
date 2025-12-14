/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_3 [i_0]);
                    var_17 += ((arr_2 [i_2 - 4]) < (((-(arr_4 [i_1 - 1])))));
                    var_18 = 37610;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_18 [i_0 - 1] [i_0] [i_4] = (((~14609910705343021390) / (((+((1 ? (arr_8 [i_3 - 1]) : 111)))))));
                        arr_19 [i_0] [i_0] [4] [i_5] = ((-var_9 ? ((max(15, (var_15 / var_0)))) : ((var_11 ^ (~1)))));
                        arr_20 [i_0] [i_3 - 1] [i_4] [i_0] = ((var_11 ? ((((max(-96, -103))))) : (((arr_15 [i_0] [i_3 - 1] [i_3 + 1] [1] [i_5]) ? (arr_3 [i_0 - 1]) : var_7))));
                        var_19 = ((!(((arr_6 [i_3 + 1]) && (18446744073709551615 >= -113)))));
                    }
                }
            }
        }
        arr_21 [i_0] = (((arr_14 [i_0] [i_0 - 1]) ? ((~(arr_14 [i_0] [i_0 - 1]))) : (((arr_14 [i_0 - 1] [i_0 - 1]) * 1))));
    }
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    var_20 = (!11);
                    var_21 += (max((((var_11 ? ((-1 ? 8388607 : 93)) : 8388618))), (((arr_4 [i_6 - 4]) ? var_6 : (arr_4 [i_6 + 2])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_22 = 1;
                    arr_36 [i_11] [i_11] [i_9] [i_11] = 89;
                    arr_37 [i_9] [i_10 + 1] [i_11] [i_11] = ((~((~(arr_32 [i_10 + 1] [i_10 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
