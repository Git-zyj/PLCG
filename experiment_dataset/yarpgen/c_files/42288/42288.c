/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_4));
    var_13 = ((~(var_1 + var_5)));
    var_14 = (~(((-var_11 == (((var_0 ? var_0 : 425129181)))))));
    var_15 = (min(var_15, (((((-((var_0 ? var_3 : var_3))))) ? (((~(425129181 < var_6)))) : ((var_3 ? -var_6 : var_3))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = var_8;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1 + 4] [i_1 + 1] = ((((((var_11 | (arr_5 [i_2]))) | ((17 ? var_11 : var_6)))) >= ((~(arr_3 [i_1 + 2])))));
                    var_17 = ((((-104013825 ? (arr_2 [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 + 2] [i_1 - 2])))) ? (arr_7 [i_1 - 1] [i_2] [i_2]) : (((arr_2 [i_1 + 2] [i_1 + 2]) ? -1716718970 : (arr_0 [i_1 - 1] [i_2]))));
                }
            }
        }
        arr_10 [i_0] = ((+(((arr_0 [i_0] [i_0]) ? -425129179 : (((!(arr_0 [i_0] [i_0]))))))));
        var_18 = ((!((!(arr_1 [i_0])))));
        var_19 = (+((var_1 ? (((arr_3 [i_0]) ? (arr_5 [i_0]) : 1050401652)) : 1722676227)));
    }
    #pragma endscop
}
