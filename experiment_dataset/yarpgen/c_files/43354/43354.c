/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 &= ((!(arr_3 [i_0] [i_0])));
        var_21 = (min(var_21, 548157458));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (+((var_17 ? (arr_4 [i_1] [i_1]) : var_18)));
        var_23 = (((-548157475 / 1231028038) ? (((((min((arr_5 [4]), var_6))) < ((var_10 ? 156 : var_13))))) : ((548157458 ? (((var_4 < (arr_4 [i_1] [i_1])))) : (~var_3)))));
        var_24 -= (((((((~548157475) + 2147483647)) >> (var_1 + 3397260389078296134))) > ((~((var_16 ? 189 : 1))))));
        var_25 = (min(var_25, ((((max(18446744073709551615, (arr_4 [i_1] [i_1]))) ^ ((max(255, 548157471))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((((((var_14 | var_16) + 2147483647)) >> (var_0 > var_4))));
        arr_9 [i_2] [i_2] = ((((((((-548157472 ? 235 : var_16))) ? (arr_3 [i_2] [i_2]) : 45))) ? (var_16 / 1872449673680057763) : (max((arr_7 [i_2]), 9395877570362434436))));
    }
    var_26 = (!var_15);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_27 = (max(var_27, ((min((((-257 / 9) | (10573165280277681765 <= 3680379477743343080))), (((!((max(-6981390866887864128, 548157471)))))))))));
                arr_14 [i_3] |= ((!(arr_11 [i_3] [i_4])));
                var_28 &= (max(((-(arr_11 [20] [i_4]))), 8330658867518460658));
            }
        }
    }
    #pragma endscop
}
