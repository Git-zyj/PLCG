/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -117;
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (((((var_0 ? 86 : (arr_4 [9] [11] [11])))) | (arr_1 [i_1 - 3] [i_2 - 1])));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_13 += ((((var_10 ? ((~(arr_12 [i_0] [i_2 + 3] [i_0]))) : (arr_6 [i_0 - 1] [i_1]))) << (90 - 90)));
                        var_14 = (max(var_14, ((((((((arr_4 [i_1] [i_1] [10]) + (arr_7 [i_1])))) ? (arr_3 [6]) : (((arr_7 [i_1]) ? (arr_2 [i_1]) : (arr_0 [7])))))))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_15 = (min(var_15, (arr_12 [i_4] [i_4] [i_4])));
                        var_16 -= ((((((((arr_8 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 3]) | (arr_0 [0])))) ? (arr_1 [9] [i_1 + 1]) : (arr_2 [i_4])))) ? ((min(258048, (arr_12 [7] [i_1] [i_1 + 1])))) : (((arr_8 [10] [10] [10] [i_1]) ? (arr_5 [i_2 + 1] [i_1]) : (((arr_2 [i_4]) ? (arr_1 [i_0] [i_0 - 1]) : (arr_8 [i_0] [i_1] [i_2] [i_0]))))));
                    }
                    arr_15 [i_0] = (arr_6 [i_0 - 1] [i_0]);
                }
            }
        }
    }
    var_17 = -8543122335946816937;
    #pragma endscop
}
