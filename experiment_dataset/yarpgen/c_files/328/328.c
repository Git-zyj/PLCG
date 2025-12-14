/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (((((((arr_1 [i_0] [i_0]) + (arr_0 [i_0] [i_0])))) ? 18446744073709551613 : (((-(arr_1 [i_0] [i_0])))))));
        var_13 &= ((1023 ? 54560 : 11));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = (25 % 3779837640571370300);
        var_14 = ((+((var_6 ? (arr_3 [i_1]) : var_1))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_15 = ((!(8 < -827647282294712181)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_16 = (((((18446744073709551603 ? (arr_12 [i_3] [18] [i_5] [i_6]) : (arr_12 [i_2] [i_3] [i_4] [i_6 + 3])))) ? (((var_0 | (arr_12 [i_2] [i_3] [i_4] [i_2])))) : (((arr_12 [i_2] [i_2] [i_4] [i_2]) ? var_6 : (arr_12 [i_2] [6] [i_6 - 1] [i_5])))));
                                var_17 = ((11 << (((arr_8 [i_6 + 2]) + 64))));
                                var_18 += ((!((((arr_12 [i_6 - 3] [i_6 - 1] [i_6 - 1] [i_6 - 3]) ? (arr_12 [i_6 + 3] [i_6 + 3] [i_6 - 4] [i_6 - 2]) : (arr_12 [i_6 - 4] [i_6 - 2] [i_6 - 4] [i_6 + 2]))))));
                            }
                        }
                    }
                    var_19 = (arr_18 [i_2] [i_2] [i_4]);
                    var_20 = (min(var_20, (arr_17 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
