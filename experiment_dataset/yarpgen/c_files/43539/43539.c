/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((((arr_2 [i_0] [i_0]) + 2147483647)) << (((var_4 + 3195324439065124025) - 11)));
                arr_6 [i_0] = (((((arr_5 [i_0]) ^ 1))));
                var_13 = 43221;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_14 = ((var_8 * (((arr_9 [i_2] [i_5 + 1] [i_5]) - (arr_9 [i_2] [i_5 - 2] [i_5])))));
                        arr_17 [i_2] [i_3 - 3] [i_4] [i_5] = (((((arr_15 [i_4 + 1] [i_4 + 1] [i_4]) ? (arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : 12683)) <= 124));
                    }
                    arr_18 [16] [i_3] [i_4] &= (((((arr_14 [18] [i_3 - 1] [i_2 - 4]) <= (arr_16 [8]))) ? (((arr_14 [6] [i_3 + 1] [i_2 + 1]) ? var_7 : 6)) : ((var_4 ? var_5 : (arr_14 [20] [i_3 + 1] [i_2 - 2])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            {

                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    arr_28 [i_6] [11] [i_8] = (((((177 ? var_6 : (arr_20 [i_6])))) ? (((~(((arr_20 [i_6]) ? var_2 : (arr_21 [10] [i_8])))))) : (arr_8 [i_6 - 1])));
                    var_15 &= (((!var_0) ? (((var_5 / (max((arr_11 [i_6 - 1] [i_6 - 1] [i_8]), 25))))) : 41));
                    var_16 = -32766;
                }
                var_17 ^= 15849575253368538090;
                arr_29 [i_6] = (min(var_3, ((((1951410196 ? var_8 : (arr_22 [i_7] [i_6])))))));
            }
        }
    }
    #pragma endscop
}
