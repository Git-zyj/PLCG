/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [7] [i_0] = (arr_9 [i_0] [3] [15] [1] [i_4]);
                                var_17 = (max(var_17, (((((min(((((-9223372036854775807 - 1) ? (-9223372036854775807 - 1) : 105))), (arr_2 [i_0] [i_3])))) || (((arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]) || (!103))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_18 = var_1;
                                var_19 = ((((~((~(arr_8 [i_0] [i_0] [i_5] [i_6] [i_7]))))) / 101));
                                var_20 = ((((((!(arr_15 [i_0] [i_1] [i_6]))))) % ((var_2 ? (arr_15 [i_0] [i_6] [i_5]) : (arr_15 [i_7] [i_5] [i_5])))));
                            }
                        }
                    }
                }
                arr_23 [0] [4] = (arr_15 [i_1] [i_1] [i_0]);
                var_21 -= ((((min((max(var_7, var_16)), 18446744073709551615))) ? (max(18446744073709551615, -9223372036854775784)) : (23 <= var_8)));
            }
        }
    }
    var_22 = (!var_14);
    #pragma endscop
}
