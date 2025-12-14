/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 -= ((var_13 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_17 -= (((1 & 143122243) ^ var_6));
        var_18 &= (1 ^ 12364);
    }
    var_19 |= (10634899101104952835 <= 115);

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((6251 ? -15359 : 17708717341011715658));
        arr_5 [8] [i_1] = var_7;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            arr_14 [i_2 + 1] &= ((var_0 ? (var_2 ^ var_14) : (((var_1 ? var_3 : var_0)))));
            arr_15 [i_2] [i_2] [9] |= (var_4 >= var_14);
            var_20 = (((((var_12 ? var_14 : var_15))) ? 425 : var_0));
        }
        var_21 |= ((var_1 - ((((min(var_3, 3251040548115931737))) ? (7141 >= 7677898071783064533) : (var_11 | 220)))));
        var_22 = (((((-(arr_8 [i_2 + 1] [i_2])))) ? var_3 : (arr_8 [i_2 - 1] [i_2 + 1])));
        var_23 = (min(var_23, (((!((min(var_1, -69195206918582454))))))));
    }
    var_24 = (36970 ^ 170);
    #pragma endscop
}
