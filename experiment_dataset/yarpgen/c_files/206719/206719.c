/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((min((var_4 / var_2), var_6)) / (max(8191, (var_12 > -8191)))));
    var_15 = ((!(!24)));
    var_16 = (max(var_10, (min(var_1, (max(8203, var_2))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_17 = (min(((((var_10 ? 0 : (arr_1 [i_4] [i_1]))) | ((252 + (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (min(((0 ? 576250446 : var_2)), (!8213)))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] [13] = ((var_0 && var_6) ? (arr_3 [i_3 - 1]) : (((!(arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                        }
                    }
                }
            }
            arr_16 [i_0] [18] |= 10;
            var_18 += (+((((((-8191 ? (arr_7 [i_0] [i_0] [i_1]) : 113))) || ((((arr_13 [i_0] [i_0] [i_0] [4]) % 17754)))))));
            arr_17 [i_1] [i_1] [i_1] = (min((~-19610), ((((((arr_13 [i_0] [1] [i_0] [i_1]) || 1))) & (!var_2)))));
        }
        var_19 = (~113);
    }
    #pragma endscop
}
