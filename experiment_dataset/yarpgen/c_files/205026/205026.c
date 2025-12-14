/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_15 | (var_12 ^ 1))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = (((((min(-243459640, (arr_2 [i_0] [i_0 - 1])))) ? 4226616233 : (arr_0 [i_0]))));
        var_20 = 1;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = var_2;
                    arr_8 [1] [1] [i_0] [i_0] = var_1;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_21 = 4226616231;
        arr_12 [i_3] [i_3] = ((((((((4226616248 ? 68351062 : var_4))) ? (((232 ? var_10 : var_6))) : ((var_16 ? var_10 : (arr_11 [20])))))) ? ((max(-17310, 1))) : ((58991 ? (((0 || (arr_11 [13])))) : 186))));
        var_22 += ((var_7 << (((min(68351062, -78)) - 68351040))));
        var_23 = var_0;
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_24 = (min((((arr_10 [i_4 + 1]) ? ((max((arr_13 [i_4]), -76))) : (arr_13 [i_4]))), (arr_15 [i_4] [i_4])));
        arr_16 [i_4] [i_4] = (min(2025451061, (arr_10 [10])));
    }
    var_25 = var_17;
    #pragma endscop
}
