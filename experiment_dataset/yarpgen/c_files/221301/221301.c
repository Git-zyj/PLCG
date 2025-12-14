/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((var_2 ? (((!(arr_0 [i_0])))) : ((((var_15 % 1) >= ((min(253, (arr_4 [i_1])))))))));
                    var_17 = ((((var_6 ? var_12 : (arr_3 [i_1 + 1] [i_1 - 1])))) ? (arr_3 [i_1 + 1] [i_1 - 1]) : 10);
                    arr_8 [i_0] [i_0] [i_0] = (247 >= -126);
                    var_18 = arr_0 [i_0];
                }
            }
        }
    }
    var_19 = var_4;
    var_20 = ((((((((var_0 >> (var_6 - 37791)))) ? (max(var_14, var_7)) : var_2))) ? 14333 : var_12));
    #pragma endscop
}
