/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_1;
    var_13 = (min((((29758 < var_4) ? ((-3555716223888536421 ? var_7 : var_1)) : var_6)), (((min(var_2, var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [11] [1] [i_2 - 3] [i_1] [i_0] = ((((min((max((arr_9 [i_2]), (arr_0 [17] [i_1 - 1]))), (arr_12 [i_0] [7] [i_1 + 1] [1] [i_2 - 2] [i_1 - 1])))) ? (max(((max(29758, 130))), (max((arr_4 [i_0] [8] [i_2 + 1] [11]), var_6)))) : var_5));
                                arr_15 [i_1] [i_2 - 1] [i_2] [1] [2] = ((((((arr_10 [i_1]) < (arr_0 [i_0] [i_3]))) ? var_10 : ((min(127, (arr_4 [i_4] [i_3] [4] [5])))))));
                                var_14 = (max(var_14, var_11));
                            }
                        }
                    }
                    var_15 = (min((arr_2 [i_1 - 1] [i_2 + 2]), var_10));
                }
            }
        }
    }
    var_16 = 3555716223888536420;
    #pragma endscop
}
