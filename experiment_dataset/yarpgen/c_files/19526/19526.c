/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(((var_9 ? var_6 : 763274030)), var_11))) ? ((min(var_4, (19352 || 64513387)))) : ((var_1 ? var_8 : -var_2))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = ((!(-121 % var_5)));
            arr_7 [i_0] = (max(((var_11 ? 838651224 : var_10)), (min(((max(58, 4))), var_5))));
            var_15 += var_3;
            var_16 = 255;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_2] = 29992;
            var_17 = (~var_9);
            var_18 = -var_10;
            var_19 ^= ((var_11 ? var_11 : 0));
            var_20 = (max(var_20, ((((arr_6 [i_0] [i_2]) + -125)))));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_21 = ((((((241 > 763274030) ? 58 : (1 > 29)))) ? (arr_8 [i_0] [i_0] [i_0]) : -8062820965247344105));
                        var_22 = ((((-var_2 ? ((32138 ? 172 : var_11)) : ((min(1, 167))))) / (1 | 92)));
                        arr_18 [i_3] = 1;
                    }
                }
            }
        }
        arr_19 [i_0] = (max(var_9, 255));
        var_23 = (1 - 1);
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_24 = ((~(var_6 || var_4)));
        arr_24 [i_6] = (min(((var_3 || (((arr_21 [i_6 + 2]) || 28895)))), ((((min(var_11, 1))) && var_10))));

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_25 = (((var_9 / ((var_0 ? 9332396323279111987 : var_12)))));
            var_26 = ((((-2147483647 - 1) / (min(134152192, var_7)))));
            var_27 += 214;
        }
        arr_27 [i_6] [i_6] = ((66 ? (3 == 143) : (!8191448572095536267)));
        var_28 = (var_10 / (max((max(var_5, var_0)), (8598975439298489503 > var_4))));
    }
    var_29 = (min(((((max(0, var_3))) ? (!198) : (min(var_9, 0)))), ((((max(var_11, 32756)))))));
    #pragma endscop
}
