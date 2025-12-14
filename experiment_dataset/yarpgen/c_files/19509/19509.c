/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = var_2;
                arr_6 [i_0] [i_1] [i_1] = max(var_9, 18446744073709551609);
                arr_7 [i_1] [i_0] [i_0] = (max(18446744073709551615, (~18446744073709551609)));
                var_19 ^= ((((-26355 ? ((var_4 ? var_6 : var_12)) : (!var_8)))) ? (((!18446744073709551615) ? (((arr_5 [i_0] [i_0]) - var_17)) : (arr_4 [i_0] [i_0]))) : (~-26798));
            }
        }
    }
    var_20 = (((min(((var_0 ? var_17 : 82)), ((18446744073709551615 ? var_7 : var_6)))) ^ (max(((26354 ? -68 : var_7)), var_8))));
    var_21 = ((((((min(var_13, 9717048623617907533)) / -4))) ? (((((-11 >= var_17) <= var_10)))) : ((var_15 ? var_11 : var_13))));
    var_22 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            {
                var_23 ^= 268435456;
                var_24 += (((arr_8 [i_2] [8]) * ((-(arr_10 [i_2] [14])))));
                var_25 -= (((((18446744073709551605 ^ -28526) | var_3)) >> (((!((max(var_7, 15375675923603474363))))))));
            }
        }
    }
    #pragma endscop
}
