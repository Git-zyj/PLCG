/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((!-4196817779781535841) ? (((136 ? var_11 : 0))) : (((max(71, 11)) % 13))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((1 ? (arr_1 [i_0]) : (((((var_3 ? (arr_4 [i_1 + 3] [i_1 + 3] [i_0 + 2]) : 4292870144))) ? (((-(arr_1 [i_1 - 1])))) : var_9))));
                arr_5 [i_0] [i_1] = ((((~((1133068128 ? 18446744073709551593 : 4057915580)))) >= (((~(arr_1 [i_1 + 3]))))));
            }
        }
    }
    var_18 = ((2459185944 ? 180 : var_8));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_19 *= (~1014363323);
                        var_20 = (arr_14 [i_2] [i_3 - 2]);
                    }
                }
            }
        }
        var_21 = (max(var_21, 0));
        var_22 = ((4057915580 ? 1 : 2380772855));
        arr_18 [i_2] [i_2] = ((var_8 ? (arr_11 [i_2] [i_2]) : var_10));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_21 [i_6] = ((-((var_1 ^ (arr_1 [i_6])))));
        arr_22 [i_6] [i_6] = 2590641982;
        var_23 = ((172 ? var_13 : -8604163));
    }
    #pragma endscop
}
