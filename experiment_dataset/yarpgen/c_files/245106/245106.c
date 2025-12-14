/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = min(((((arr_4 [i_0] [i_0 - 2] [i_0 - 2]) && (arr_4 [i_0 - 2] [i_0 - 2] [i_1])))), 18446744073709551585);
                arr_6 [i_0] = ((~(arr_4 [i_0] [i_0 + 1] [i_0])));
                arr_7 [i_0] [i_0] = ((4 ? var_12 : ((var_15 & (arr_2 [i_0] [i_0])))));
                var_16 = (-(~var_4));
            }
        }
    }
    var_17 = (max(var_17, (min(var_7, ((((min(var_6, var_6))) % ((var_6 ? 5426912809395265143 : var_11))))))));
    var_18 |= (((((!13) ? (var_15 * var_8) : (13019831264314286472 <= 8611533398984934818)))) ? ((min(var_2, var_0))) : var_13);
    var_19 = (~(min(var_0, (~var_9))));
    #pragma endscop
}
