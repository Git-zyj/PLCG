/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = var_4;
    var_21 = (((!var_4) ? ((((!(((var_14 ? var_14 : var_16))))))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = var_3;
                arr_7 [i_1] [i_1] [i_1] = ((-var_1 == ((((((var_6 + 9223372036854775807) >> (var_0 - 27685)))) ? ((var_6 ? var_14 : var_13)) : var_13))));
            }
        }
    }
    #pragma endscop
}
