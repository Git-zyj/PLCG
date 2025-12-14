/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = var_4;
                var_11 = (((-1 == 7) / ((-(arr_0 [i_0])))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_12 *= 4294967276;
                    arr_7 [i_1] [i_2] [i_2] = ((max((arr_2 [i_2]), (arr_2 [i_0]))) & (((((1 ? 14 : 63)) / (max((arr_5 [i_1]), var_5))))));
                    var_13 = (max(var_13, (((-9223372036854775783 % ((-45 ? (((~(-32767 - 1)))) : (arr_2 [i_0]))))))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_14 = ((0 & 1) || ((((arr_8 [i_3] [i_1] [i_3]) ? var_6 : 63))));
                    var_15 = ((-(arr_1 [i_1])));
                    arr_10 [i_0] [i_1] [7] [i_1] = ((((((arr_9 [i_0]) % -45))) ? -45 : (arr_9 [i_1])));
                }
            }
        }
    }
    var_16 = (((((((-1 ? 4294967295 : 255))) ? ((var_9 ? 2147483632 : var_3)) : var_6))) ? (var_3 / 9223372036854775783) : ((((max(-33554432, 4294967286))))));
    var_17 = -var_4;
    var_18 = ((9223372036854775802 ? 18446744073709551595 : 1073741823));
    #pragma endscop
}
