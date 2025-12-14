/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((18446744073709551615 ? -1 : var_9)) | 253));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] &= (var_2 ? var_11 : (var_4 || var_9));
            arr_6 [i_0] = ((var_2 || (var_3 || var_11)));
            arr_7 [i_0] [i_0] [i_1] &= var_4;
        }
        var_13 -= (((~var_5) | (var_6 <= var_3)));
        arr_8 [i_0] [i_0] = ((~253) ? 253 : 32640);
        var_14 = ((((~(-25338 <= var_4))) / (!-0)));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_17 [i_3] [i_2 + 2] [i_3] [i_4] [i_4 + 1] [i_2 - 2] = (var_9 == -var_10);
                        var_15 = (((((-(~var_11)))) ? (((((var_9 ? (-32767 - 1) : var_9)) * (var_0 * 22)))) : -var_2));
                        arr_18 [i_3] = (((var_3 ? (!var_7) : var_2)));
                        arr_19 [i_0] [i_2 + 3] [i_2 + 2] [i_3 - 1] [i_3] = ((((var_8 > ((var_7 ? var_10 : var_1)))) ? (((!(var_2 / var_1)))) : ((((!var_8) > (var_9 | 9223372036854775807))))));
                    }
                }
            }
        }
    }
    var_16 *= var_5;
    #pragma endscop
}
