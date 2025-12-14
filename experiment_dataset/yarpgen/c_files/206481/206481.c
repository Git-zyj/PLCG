/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (((var_12 == (var_7 * var_18))));
    var_20 = (min(var_20, ((((((144 ? 18446744073709551615 : 248))) ? var_16 : (((((var_10 % 10757066411790716391) >= var_14)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((var_13 ? (arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : ((((((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_4 [i_1 + 1] [i_0] [i_0])))) ? (((arr_3 [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_0] [i_0] [i_0]))) : ((min(var_3, -2244500424432435449)))))));
                arr_7 [i_0] [i_1] = (((arr_4 [i_0] [i_1 - 1] [i_0]) % (((~(!var_13))))));
                var_21 = (min((((((arr_3 [i_0]) + 2147483647)) >> (((arr_3 [i_1 + 1]) + 66)))), (arr_2 [i_1 - 1])));
                var_22 = ((((((((arr_0 [i_0]) ? (arr_4 [i_1] [i_0] [i_0]) : (arr_2 [i_0])))))) + var_4));
            }
        }
    }
    #pragma endscop
}
