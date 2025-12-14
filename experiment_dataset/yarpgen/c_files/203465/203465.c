/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = 8394764567730204395;
                var_15 *= ((((((min(var_9, var_6))) ? (((arr_1 [i_0]) ? var_9 : (-2147483647 - 1))) : var_7)) <= (((-3603 * var_13) ? ((-(arr_0 [i_0] [i_1]))) : (arr_1 [i_1])))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] = (((max(var_8, (arr_4 [i_0] [i_1] [i_1] [i_2]))) & var_9));
                    arr_8 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_2] [i_0]);
                    arr_9 [i_0] [i_1] [i_2] = ((-950502346 < ((var_13 ? -5 : (!var_13)))));
                }
            }
        }
    }
    var_16 = ((-(min(var_7, ((8 ? 141 : 10051979505979347250))))));
    #pragma endscop
}
