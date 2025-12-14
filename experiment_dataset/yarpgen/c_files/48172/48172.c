/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (min((arr_0 [i_0]), (min((min((arr_5 [i_2] [i_1] [i_0] [i_0]), (arr_0 [i_2]))), -1))));
                    arr_6 [i_0] [i_2] [i_2] = -var_7;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_11 = (min(((-((110 ? 109 : var_7)))), ((((max(1997899341, 203))) ? ((18446744073709551600 ? 110 : (arr_11 [i_3]))) : var_0))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_12 = 5296079283114149481;

                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                arr_20 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3] [i_3 + 1] = (!var_4);
                                var_13 ^= arr_0 [9];
                                var_14 = arr_2 [i_3 + 4];
                                var_15 = ((((min((!44), (arr_12 [i_3 - 2])))) ? ((((((-55 ? 110 : (arr_11 [i_5])))) % (min(1, (arr_5 [i_4] [i_5] [i_4] [i_7])))))) : (max(1997899333, 5296079283114149490))));
                            }
                            arr_21 [i_3] [i_4] [i_5] [i_5] [i_6] = ((((((arr_5 [i_3 + 4] [i_3 + 3] [i_6] [i_6]) ? (arr_1 [i_3]) : (arr_5 [i_3] [i_3 - 2] [i_3] [i_5])))) ? 1035693573 : (((arr_13 [i_4]) ? 43 : (arr_16 [i_3] [i_3 + 3] [i_3] [i_3])))));
                            var_16 = 23;
                            var_17 = 110;
                        }
                    }
                }
                var_18 = (18446744073709551615 > 1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                var_19 = -5296079283114149482;
                var_20 = arr_22 [i_8] [i_8];
                var_21 &= ((!((!(arr_24 [14])))));
                var_22 = (-(max((!627597555), (min((arr_26 [i_8] [i_8]), 16)))));
            }
        }
    }
    var_23 = (var_0 % (((var_6 ? var_7 : var_9))));
    #pragma endscop
}
