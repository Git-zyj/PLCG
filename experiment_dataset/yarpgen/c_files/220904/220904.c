/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((((-(55460 && var_5)))) ? (((!((min(var_11, var_5)))))) : (~var_9)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = (min((((((-(arr_2 [i_0])))) ? ((((arr_6 [i_0] [i_0] [i_0] [i_0]) <= var_7))) : 61264)), ((((var_8 <= var_9) < (!55460))))));
                    var_13 = ((-(min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_2])))));
                    arr_10 [i_1] [14] &= ((~(min(-var_9, var_9))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        arr_24 [i_5] [i_4] [i_5] [i_5] [i_5] [1] = (((~((var_1 ? var_10 : (arr_6 [i_3] [i_4] [i_5] [i_6 - 2]))))));
                        arr_25 [8] [i_4] [i_4] [i_4] [i_4] = max((~55460), ((-((-83 - (arr_7 [i_3] [i_4]))))));
                        arr_26 [i_3] [1] [12] [i_6] |= ((-((((var_0 ? 15289 : var_2)) ^ (var_2 && var_8)))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_14 = ((((arr_22 [i_3 - 1] [i_3 - 1]) ? (arr_21 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_3 [i_4] [i_3 - 1]))) == (((var_1 || var_9) | -var_8)));
                        var_15 = (min(var_15, var_3));
                        var_16 = (!(((min(var_8, var_5)))));
                    }
                    arr_30 [i_4] [i_4] = (arr_8 [i_3 - 1] [i_4] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
