/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = ((!(13206 > var_14)));
    var_18 ^= min(var_8, -var_10);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -52346;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_19 = ((((var_1 ? 1 : var_13)) | (arr_1 [i_0])));
            var_20 = (((arr_2 [i_0]) || (arr_2 [i_0])));
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_0] = var_0;
            var_21 = var_2;
            arr_11 [i_0] [i_2] = ((207 ? (((~(13190 * 13206)))) : (max((((arr_7 [i_2]) ? 13190 : 4680052394673883419)), (((var_6 ? 13190 : var_5)))))));
        }
        var_22 = (14466971655093191204 != 18446744073709551615);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] = (((((arr_0 [i_3] [i_3]) % (arr_8 [i_3] [i_3] [i_3])))) ? ((((arr_0 [i_3] [i_3]) ? (arr_0 [i_3] [i_3]) : (arr_0 [i_3] [i_3])))) : (arr_8 [i_3] [i_3] [i_3]));
        arr_15 [i_3] [i_3] = var_11;
        var_23 += ((!(((((max(1975450064, 52345))) ? -162047377 : (min(var_8, 557724242561333786)))))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_4] [i_3] [i_6] = -var_10;
                        var_24 |= (((arr_12 [i_3]) / (arr_20 [i_3] [i_3] [i_5])));
                    }
                }
            }
        }
        var_25 |= (((((-(52345 + 64512)))) ? var_7 : var_6));
    }
    #pragma endscop
}
