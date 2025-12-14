/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_12;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((((!(arr_0 [i_0])))), 12))) ? (arr_0 [i_0]) : (((min((arr_0 [i_0]), var_0)) & (arr_1 [i_0] [i_0])))));
        var_15 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
    }
    var_16 = ((var_2 ? (min((!var_1), 5009702966444960115)) : var_4));
    var_17 = ((((min((min(5335082378367078453, var_2)), (var_12 >= var_1)))) || var_11));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_18 += (arr_7 [i_1] [i_1] [i_3]);
                    arr_9 [i_1] [i_1] = ((((((1 ? -2147483642 : (arr_8 [i_1] [i_1]))) >> (-1 + 31)))) ? 5009702966444960116 : (((var_9 ? -5335082378367078454 : 3))));
                    var_19 -= ((((((arr_3 [i_2 - 2] [i_3 + 4]) ? var_7 : (arr_3 [i_2 - 1] [i_3 + 3])))) || (arr_3 [i_2 - 1] [i_3 + 2])));
                    var_20 *= ((((arr_7 [i_3 + 4] [3] [i_2 - 2]) ? (arr_8 [i_2 + 1] [i_3]) : (((-6 - (arr_8 [i_1] [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
