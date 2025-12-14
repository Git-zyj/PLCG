/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (max(var_14, -10));
    var_15 = ((((((((var_4 ? 22150 : 246))) ^ ((250 ? 3146507128 : 246))))) ? var_12 : var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] = var_8;
                                var_16 = ((((((arr_4 [i_2] [i_3] [i_4]) ? (1464332432 + 65535) : 20137))) && ((min(38010, -1760839686)))));
                                var_17 *= (((arr_5 [i_2 - 1] [i_2 + 1] [12]) ? (((min(var_2, (arr_5 [i_2 - 1] [i_2 - 1] [i_2]))))) : ((3655 ? 131071 : var_12))));
                                arr_13 [i_0] [i_2] [i_1] [11] [i_2 - 1] [8] [i_4] = ((((((((min(0, 0))) && ((!(arr_9 [i_3] [i_3]))))))) / ((16383 ? ((~(arr_4 [i_2] [i_1] [i_2]))) : var_2))));
                                var_18 = (max(var_18, (((((((((32767 ? 13217 : 31075))) ? (arr_11 [i_3] [13]) : 38010))) ? ((((~-116) ? (((!(-9223372036854775807 - 1)))) : (!-16383)))) : (max(var_11, (((arr_0 [9]) ^ 7754)))))))));
                            }
                        }
                    }
                    arr_14 [13] [5] [i_2] [10] = arr_4 [i_2] [i_2 - 1] [i_2 - 3];
                    arr_15 [i_2] [i_1] [7] = ((27515 ? ((((~3828782710) ? ((-3655 ? (arr_6 [5] [5] [2] [i_2 - 1]) : 0)) : ((2364266713359226948 ? 20 : 7743))))) : (((arr_11 [i_2 - 1] [i_2 - 2]) ? (arr_11 [i_2 + 1] [i_2 + 1]) : (arr_11 [i_2 - 2] [i_2 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
