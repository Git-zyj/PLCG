/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        var_19 |= (((var_7 ? 18267735145921117970 : var_6)));
                        var_20 = ((-711302397 >= (!var_12)));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_21 = ((-(arr_3 [i_2] [i_4 - 1] [i_4])));
                        var_22 = var_0;
                        arr_15 [12] [12] [i_4] [i_4 - 1] = (((arr_1 [i_4]) && ((!(arr_0 [5] [i_1])))));
                        var_23 = var_11;
                        var_24 = ((var_0 << (var_4 - 14)));
                    }
                    var_25 = (((!var_3) ? -var_16 : (arr_7 [i_0] [15] [8] [20])));
                }
            }
        }
    }
    var_26 = -3478;
    var_27 = var_1;
    #pragma endscop
}
