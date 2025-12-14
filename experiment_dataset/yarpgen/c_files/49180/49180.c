/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (i_1 % 2 == 0) ? (((((~(5527196194985383243 | var_5))) >> ((((~(arr_5 [i_1]))) + 33948))))) : (((((~(5527196194985383243 | var_5))) >> ((((((~(arr_5 [i_1]))) + 33948)) + 22139)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((arr_5 [i_1]) != (((!(((var_2 ? -12 : var_1)))))));
                                var_19 = (max(var_19, (((-(min((arr_6 [i_1 - 1] [8] [i_1 + 1] [i_1]), (arr_12 [i_0] [i_0] [6]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= (~var_8);
    var_21 |= (var_0 / var_16);
    var_22 = (!-82);
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_23 *= (((((-15 != (arr_18 [i_5])))) & (-12 / -27050)));
                    var_24 = (max(var_24, 29247));
                    var_25 = max((!7692779850128208044), ((~(arr_12 [i_6] [i_6] [i_6]))));
                }
            }
        }
    }
    #pragma endscop
}
