/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 >= (((29701 | 534380016) / (191 || var_16)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_18 *= ((-4521843136848727082 && 120) || 1863085383);
            arr_5 [i_0] [13] = ((~(((((-(arr_3 [i_0] [i_1 - 1] [i_1])))) ? (32767 > 28607) : ((var_6 >> (var_4 + 1590436573)))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_0] [i_2] = (((3760587279 <= var_2) ? ((var_7 ? (arr_7 [i_2] [i_0]) : var_12)) : (arr_7 [i_2 + 1] [i_2 + 1])));
            var_19 *= (((arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? var_4 : (arr_1 [i_0] [i_2 + 1])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_13 [i_0] [i_0] [i_0] = var_5;
            arr_14 [i_3] [i_3] [i_0] = ((+(((arr_8 [10] [i_0]) * -27189))));
        }
        arr_15 [1] = 4294967293;
    }
    #pragma endscop
}
