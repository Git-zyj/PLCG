/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_8, var_3));
    var_12 = ((((((6745611861360982991 ? var_4 : var_6)) ? var_8 : (var_2 / var_8)))));
    var_13 = (((((5092727780749446132 || (53 % 13354016292960105483)))) ^ var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_3 [i_0]);
        arr_5 [i_0] = (i_0 % 2 == zero) ? (((arr_2 [i_0]) << (((arr_0 [i_0]) - 90)))) : (((arr_2 [i_0]) << (((((((arr_0 [i_0]) - 90)) + 47)) - 12))));
        var_14 = (max(var_14, (((!((((var_6 && 36028522141057024) + ((var_8 ? var_8 : var_6))))))))));
        var_15 = (min(var_15, (((var_10 ? 5092727780749446132 : 13354016292960105512)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_16 = (max(var_0, var_4));
                    var_17 -= ((0 + (((((max(var_4, (arr_8 [i_1])))) < (((var_0 > (arr_15 [i_1] [i_1] [i_3] [i_2 + 2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
