/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(13320, (((((var_19 ? 1 : 0))) ? 11237162587878769797 : (var_0 | 8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] = ((((((var_12 && var_8) * ((((arr_2 [i_0] [i_0]) && var_3)))))) ? (((var_11 - var_9) ? (((arr_0 [i_0]) ? var_17 : 18446744073709551615)) : (((var_0 ? (arr_3 [i_1] [i_2] [i_3 - 3]) : (arr_0 [i_1])))))) : ((((arr_2 [i_2] [i_2]) ? 32767 : var_17)))));
                            arr_10 [i_0] [i_1] [i_1] [i_3 - 3] = (min(var_12, ((((2147483647 & -8353802375407833059) && (((var_3 ? var_6 : (arr_0 [i_0])))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (((((((((min(0, var_9)))) > ((var_2 ? var_7 : var_10)))))) & ((((var_12 && (arr_2 [i_0] [i_0]))) ? -var_0 : (((var_14 ? var_4 : 0)))))));
                        }
                    }
                }
                var_21 -= ((((min((~var_8), (arr_7 [i_0] [i_0] [i_0] [i_0] [8])))) ? (((arr_7 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_14 : -2951163804089845361)) : -32760));
                var_22 += ((!(!var_12)));
                arr_12 [i_1] &= ((((((arr_0 [i_0]) & var_0))) && ((((((~(arr_5 [i_0])))) - ((var_6 ? var_11 : 11237162587878769797)))))));
            }
        }
    }
    var_23 = (((1621 - var_7) && ((min(1, (min(var_6, var_13)))))));
    #pragma endscop
}
