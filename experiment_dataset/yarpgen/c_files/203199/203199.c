/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_18 = (arr_1 [i_0]);
            arr_6 [14] [i_1] [i_1] = ((var_15 ? ((1 ? var_6 : var_14)) : ((var_16 ? (arr_5 [i_0] [i_0] [i_1]) : var_8))));
        }
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            var_19 -= (arr_2 [i_2 + 1] [i_2 - 1]);
            var_20 = 524287;
            arr_9 [i_0] [15] [i_0] = ((var_0 && (arr_8 [i_0])));
            var_21 += ((((arr_5 [i_0] [i_0] [3]) >= -1220924311806072725)) && (arr_0 [i_2] [9]));
        }
        var_22 = (arr_8 [i_0]);
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_6] [i_3] [i_6] = ((~(min((((~(arr_20 [i_3] [i_6 + 2] [i_5 + 1] [i_3])))), (arr_18 [i_4])))));
                        arr_23 [i_3] [i_3] [i_4] = arr_16 [14] [13] [i_4];
                        var_23 = (max((((3283519202 ? var_6 : 298499650618766661))), (max(18446744073709027323, 19298))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                {
                    arr_29 [i_3] [i_3] [i_3] [i_7] = (((arr_15 [i_8 + 2] [i_8 - 1] [i_8 + 1]) == (arr_15 [i_8 - 1] [i_8 + 1] [i_8 + 3])));
                    var_24 = (-var_0 - var_0);
                    var_25 -= -var_15;
                }
            }
        }
        arr_30 [i_3] = (((((1 ? (((arr_7 [i_3] [i_3] [i_3]) ? var_7 : var_3)) : (((var_4 ? 1 : var_16)))))) ? -46209 : ((((!var_3) || ((max(1, (arr_27 [i_3] [i_3])))))))));
    }
    var_26 = (((524287 != 1) ? ((((1 ? (-32767 - 1) : 1)) & var_7)) : 1));
    var_27 = 4194303;
    var_28 = ((524287 >> (-4344024127047386809 + 4344024127047386842)));
    #pragma endscop
}
