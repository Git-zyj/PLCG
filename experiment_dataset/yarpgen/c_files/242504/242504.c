/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 40;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (-46 * 1);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_21 -= var_14;

                    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_22 = 127;
                        var_23 = (((arr_2 [i_0]) ? ((((((2147483647 & (arr_5 [i_0]))) == var_12)))) : ((((((arr_4 [i_0] [i_1]) * -2147483647))) ? var_15 : (57 - var_4)))));
                        arr_10 [i_3 - 2] [i_2] [i_2] [i_0] &= ((~(~-75)));
                    }
                    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_24 = ((((((-75 / 75) ? (arr_0 [i_2]) : (((!(arr_0 [i_0]))))))) ? (max((~105), -var_10)) : -6878));
                        var_25 = (((1099444518912 + -40) + (((arr_1 [i_4 - 2]) ? (arr_3 [i_0]) : -127))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] = (max(var_13, (~248277845)));
                    }
                    arr_14 [i_0] [i_1 + 3] [i_1] [i_0] = ((var_7 ? ((var_0 | (arr_8 [i_1 + 1] [i_0] [i_1 + 2] [2] [i_0] [i_0]))) : (arr_5 [i_0 - 2])));
                    var_26 -= ((((arr_0 [i_0 - 1]) / (1 && 4294967295))) >= ((((((-(arr_2 [i_0])))) <= (((arr_0 [i_0 - 3]) ? var_0 : 7371))))));
                    var_27 = ((17778 ? ((((arr_0 [i_0 - 3]) | (arr_0 [i_0 - 2])))) : (min((arr_11 [i_0]), (((arr_7 [i_0] [i_0] [i_1] [i_2]) * -21275))))));
                }
            }
        }
    }
    #pragma endscop
}
