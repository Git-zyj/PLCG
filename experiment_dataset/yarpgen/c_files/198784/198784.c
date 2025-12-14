/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = var_2;
                    var_11 ^= -2927982099;
                    var_12 = (max(var_12, ((((((((var_9 ? var_9 : 9606392478459406550))) ? 65515 : ((-(arr_3 [i_0] [6] [i_0]))))) < (!var_1))))));
                }
            }
        }
        arr_6 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (((arr_1 [i_0]) ? var_2 : 1)) : -var_2))) ? ((((((135 ? (arr_4 [i_0]) : -872826457))) ? (-30 % 65535) : (arr_1 [i_0])))) : (max(((((arr_1 [i_0]) >> (((arr_2 [i_0] [i_0] [i_0]) - 56))))), ((11522327370642643068 ? -1 : var_7))))));
        arr_7 [i_0] [i_0] |= ((~((((((arr_4 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) ? (((((arr_5 [i_0] [i_0] [i_0] [i_0]) >= 3774514470)))) : ((var_0 ? 1 : (arr_5 [i_0] [i_0] [i_0] [0])))))));
    }
    var_13 -= ((!(((1339536686 ? var_2 : ((max(1339536686, var_0))))))));
    #pragma endscop
}
