/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [2] = ((((max(var_16, 67108863)) | (min(8954767574025107683, var_5)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 ^= ((((max(((~(arr_2 [i_0] [5]))), (arr_8 [i_0] [i_0] [i_2] [i_3] [i_3])))) ? ((((arr_3 [7]) ? -59 : (arr_2 [i_2] [3])))) : var_2));
                            var_19 = (((-67108869 | var_1) ? (((var_15 || (arr_4 [i_1 + 4] [i_2] [i_3])))) : 57318));
                            var_20 = 15604;
                            var_21 = arr_9 [i_2];
                        }
                    }
                }
            }
        }
    }
    var_22 = 124;
    var_23 = (min(var_23, ((((((-(18446744073709551607 <= var_8)))) > var_12)))));
    var_24 = var_12;
    #pragma endscop
}
