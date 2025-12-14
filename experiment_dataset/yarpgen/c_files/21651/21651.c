/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = ((~((~((max(246, 246)))))));
                        var_18 = (max(var_18, ((max(((((((255 ? 63 : var_13))) ? -var_13 : var_16))), (((min(-2, (arr_6 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_3]))) ^ 8)))))));
                        var_19 -= (max((arr_1 [i_0 - 1]), ((-(4294967295 != 65512)))));
                    }
                }
            }
        }
        arr_8 [12] [i_0] = ((!((max((arr_0 [i_0] [i_0]), (arr_0 [i_0 - 2] [i_0 - 2]))))));
    }
    var_20 = ((((~((var_0 ? 2147483647 : var_4))))) ? ((((max(var_11, var_9))) ? ((var_5 ? var_9 : var_16)) : var_6)) : var_8);
    var_21 = var_1;
    var_22 = var_14;
    var_23 -= (((((var_6 || var_6) ? (max(var_14, 22)) : ((max(63, var_15))))) ^ ((((!var_6) >> ((((var_16 ? 32767 : 25)) - 32739)))))));
    #pragma endscop
}
