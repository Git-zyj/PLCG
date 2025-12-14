/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_9;
    var_11 |= ((+(min((var_1 + var_0), var_9))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_12 -= (((((arr_1 [i_0 + 1] [i_0]) >> (arr_1 [i_0 + 2] [i_0]))) | (arr_1 [i_0 + 1] [i_0 + 2])));
        var_13 = (min(var_13, ((min(((((((arr_1 [1] [1]) >> (arr_1 [i_0 + 1] [i_0])))) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))), -2546815012215645162)))));
        arr_2 [i_0] = (arr_0 [i_0]);
        var_14 -= (arr_0 [1]);
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_5 [i_1 - 2] [i_1] = arr_0 [i_1];
        var_15 -= (arr_3 [i_1]);
        var_16 |= ((((((arr_1 [i_1 + 3] [i_1 + 2]) ? (arr_4 [i_1 + 2]) : (arr_1 [i_1 + 1] [i_1 + 2])))) >= (max(var_4, (arr_4 [i_1 + 2])))));
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        var_17 &= max((((arr_13 [i_4] [i_4 - 4] [i_4]) ^ (((arr_10 [i_2] [i_2]) & var_2)))), (((arr_16 [i_5] [10] [i_3 - 1] [i_2] [10] [i_2 - 2]) / ((~(arr_8 [i_4]))))));
                        arr_19 [i_4 - 4] [i_3 + 1] [i_4 - 1] [i_3] [1] [i_2] = (-2029883219098805465 <= 15899929061493906471);
                        var_18 -= (arr_12 [16] [i_3] [i_3] [i_3]);
                    }
                }
            }
        }
        var_19 -= min((arr_13 [i_2] [i_2 - 3] [i_2 - 3]), (arr_13 [i_2 + 1] [i_2] [i_2 + 1]));
    }
    var_20 = ((!(((var_1 ? (var_7 >= var_6) : (min(var_4, var_8)))))));
    var_21 = var_7;
    #pragma endscop
}
