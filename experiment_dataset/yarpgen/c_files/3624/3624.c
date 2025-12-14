/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = ((+((var_0 ? ((((arr_9 [i_0] [i_1] [i_1] [11]) ? (-2147483647 - 1) : 0))) : (min(var_1, (arr_6 [i_0] [i_1] [i_0] [i_4])))))));
                                arr_14 [i_2] [i_1] [i_2 + 1] [11] [9] [i_1] [11] = (((((((((arr_11 [3] [i_1] [i_2] [i_1] [i_2] [i_1]) ? var_2 : (arr_10 [i_1] [9])))) ? ((91 ? 18446744073709551609 : 18446744073709551606)) : -1))) ? (max((var_7 % 174), (((arr_2 [i_1] [i_1] [i_1]) ? (arr_4 [i_0] [i_1] [3] [i_0]) : var_6)))) : (((~((min(1, -28086))))))));
                            }
                        }
                    }
                    var_12 = ((var_3 ? ((var_4 ? ((221343189 ? var_4 : (arr_11 [i_0] [i_0] [i_2] [i_1] [i_1] [i_1]))) : (((var_4 ? var_1 : (arr_0 [i_0])))))) : (((min((arr_9 [i_0] [i_2 + 3] [i_1] [i_0]), (arr_9 [i_0] [i_2 + 2] [i_1] [i_0])))))));
                    arr_15 [i_0] [i_1] [i_2 + 2] [i_1] = arr_5 [i_0] [i_0] [i_0] [i_1];
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_6] [i_5] [i_5] = (((var_7 ? (arr_8 [i_6] [i_6] [i_6 + 1] [i_5]) : var_5)));
                    var_13 = (arr_1 [i_5]);
                }
            }
        }
    }
    var_14 |= var_1;
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            {
                var_16 -= (~18446744073709551601);
                arr_31 [i_8] = var_7;
                var_17 -= (((((~(arr_28 [i_8 - 1])))) * (((arr_29 [i_9]) ? 18446744073709551609 : (arr_26 [i_8 + 1] [i_9 - 1])))));
            }
        }
    }
    #pragma endscop
}
