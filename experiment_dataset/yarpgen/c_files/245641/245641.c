/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (1 > var_1);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((((arr_2 [10]) ? (arr_2 [6]) : ((max(var_10, var_15))))))));
                    arr_6 [i_0] [i_1] [i_0] [i_2] = (arr_1 [i_2]);
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((((((arr_0 [i_0] [i_1]) / var_14)) > (!56070))));
                    var_22 = ((23203 && (arr_5 [i_2] [i_0] [i_2] [i_2])));
                }
            }
        }
        var_23 = 44230;
        arr_8 [i_0] [i_0] = ((1 ? ((29715 ? -9956 : 18446744073709551615)) : (var_15 && -23195)));
        var_24 = (arr_1 [i_0]);
        var_25 = ((182 ^ ((((0 <= (arr_2 [i_0]))) ? 1199050818 : 9223372036854775807))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_26 = (max(var_26, (((var_3 * (((var_14 ? var_7 : var_3))))))));
            arr_16 [i_3] [i_3] [i_3] = 1051054956;
            var_27 = (max(var_27, 1));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_28 = ((arr_18 [i_5] [i_5] [i_5]) % (arr_15 [i_3] [i_3] [i_3]));
            arr_19 [i_5] [i_5] = var_7;
        }
        arr_20 [17] [9] = (arr_12 [i_3]);

        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            arr_23 [i_3] [i_3] [i_3] = (arr_17 [i_3] [i_3] [i_3]);
            arr_24 [3] [3] [i_3] = (~1);
            arr_25 [i_3] [i_6] [i_6] = ((32256 ? var_14 : (arr_14 [i_3] [i_6 + 1])));
        }
        var_29 = (((((var_6 ? (arr_15 [10] [10] [i_3]) : var_13))) || (((~(arr_14 [i_3] [i_3]))))));
    }
    var_30 = var_16;
    #pragma endscop
}
