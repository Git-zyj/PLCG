/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (7 / var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 += (((!(4294967295 / var_2))));
                arr_6 [i_0] [i_1] [i_1] = 946602407;
                var_16 += var_2;
            }
        }
    }
    var_17 = (min(var_17, ((((52 - var_11) != (((((18446744073709551615 ? var_8 : -54))) - 18446744073709551599)))))));
    var_18 = var_13;
    var_19 *= ((-4 ? -4 : -11));
    #pragma endscop
}
