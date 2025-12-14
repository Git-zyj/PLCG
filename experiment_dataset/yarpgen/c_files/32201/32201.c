/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 ? (((-4577665466785784650 / var_11) ? var_8 : var_1)) : var_6));
    var_14 = ((((max((((var_12 ? -1915772587 : var_8))), var_9))) ? -18446744073709551611 : ((208 ? (min(var_12, var_10)) : var_5))));
    var_15 = min(((max((min(var_5, var_10)), var_5))), 9223372036854775780);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [22] = ((((min((((arr_1 [i_0 + 2]) ? var_1 : 4577665466785784645)), (119 / 9223372036854775749)))) ? (((4577665466785784650 - (arr_3 [4] [i_0 + 1] [i_1])))) : (max(4577665466785784652, -9223372036854775775))));
                arr_5 [i_0] [i_0] = (i_0 % 2 == zero) ? (((65535 < (min(((((((arr_3 [i_0] [12] [i_0 + 2]) + 2147483647)) << (var_11 - 54885)))), ((var_10 ? 4629028392682193652 : (arr_1 [i_0])))))))) : (((65535 < (min(((((((((arr_3 [i_0] [12] [i_0 + 2]) - 2147483647)) + 2147483647)) << (var_11 - 54885)))), ((var_10 ? 4629028392682193652 : (arr_1 [i_0]))))))));
                arr_6 [i_0] [15] [i_0] = (min((((((var_5 ? (arr_0 [i_0] [i_0 - 1]) : var_2))) ? (arr_0 [i_0] [i_1 - 3]) : (var_0 & 99))), 127));
            }
        }
    }
    #pragma endscop
}
