/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((((((var_11 ? 2452299246 : var_4))) == (1125899906842623 % var_6)))), (+-2084775624)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [8] |= (arr_0 [2]);
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] = (arr_1 [i_0] [0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_13 = (((0 && 2452299246) ^ (1155130874 | 1)));
                    var_14 *= ((((max(1, (max(var_0, 7))))) % 628799940));
                }
            }
        }

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_15 [i_1] [i_4] = (!var_2);
            var_15 = (max((min((min(var_5, (arr_14 [i_4]))), (arr_10 [i_4]))), (min((arr_12 [i_1] [i_1] [i_1] [1]), (arr_6 [i_1])))));
            arr_16 [i_4] |= var_8;
        }
        var_16 = (((253 <= 38321) ? ((((arr_7 [i_1]) != (arr_9 [i_1])))) : 3448857468850213962));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_17 |= -5672377333147387550;
        var_18 = (max(var_18, 1));
    }
    #pragma endscop
}
