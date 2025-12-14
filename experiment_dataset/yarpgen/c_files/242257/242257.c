/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((((((-119 + 2147483647) << (((arr_0 [i_0]) - 5791874504737425019))))) ? ((16697 >> (((arr_1 [i_0] [i_0]) - 103)))) : (((3263896764 != (arr_0 [i_0]))))))) : (((((((-119 + 2147483647) << (((((((arr_0 [i_0]) - 5791874504737425019)) + 7327452740216962343)) - 26))))) ? ((16697 >> (((arr_1 [i_0] [i_0]) - 103)))) : (((3263896764 != (arr_0 [i_0])))))));
        var_16 = ((var_1 ? (arr_0 [i_0]) : (((min((arr_1 [i_0] [i_0]), 1))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((arr_3 [i_1]) - 71));
        arr_6 [i_1] = var_2;

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_12 [i_2] [i_1] [i_2] = ((34 > (arr_8 [i_2 + 1] [i_2 + 1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_17 = arr_18 [i_1] [8] [14] [i_4] [i_5] [i_4];
                            var_18 ^= (arr_13 [i_2 - 1] [i_2 - 1]);
                        }
                    }
                }
                var_19 = ((-(arr_17 [i_3] [i_2] [i_2] [i_1] [10] [i_2 - 1] [i_1])));
            }
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                var_20 ^= ((1 ? 142989288169013248 : 72));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_27 [i_1] [i_2] [i_6] [i_2] [16] [i_8] [i_8] = var_7;
                            arr_28 [i_1] [i_2 + 1] [i_2] [i_2] [i_8] = (((arr_26 [i_2 + 1] [i_6 - 1] [i_1] [1] [i_1] [i_2 + 1] [i_1]) / (arr_15 [i_1] [i_2] [i_1])));
                            arr_29 [i_2] [i_6] [i_6] [i_2] [i_2] = (arr_9 [i_7] [i_6 - 1] [i_1]);
                            arr_30 [12] &= ((~((60 ? (arr_10 [0] [i_7] [i_6 - 1] [0]) : var_11))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                arr_33 [i_1] [i_2] [i_2] = (var_11 % (arr_21 [i_1] [i_2 + 1] [i_9] [i_9]));
                arr_34 [i_1] [i_2] [i_1] [i_1] = (((arr_14 [i_2 + 1] [i_2 - 1]) * 11417119177844875581));
            }
            var_21 = (((arr_19 [i_2] [i_2] [i_2 + 1] [i_2 + 1]) ^ (arr_19 [i_2] [i_2] [i_2 - 1] [i_2])));
            var_22 = (((arr_15 [i_1] [i_2] [i_2]) ? 174 : (arr_31 [i_1] [4] [4])));
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_37 [i_10] = (min(((1 ? -8039632949541494173 : var_10)), ((((arr_11 [i_10] [i_10] [i_10]) || (arr_11 [i_10] [i_10] [i_10]))))));
        arr_38 [i_10] = (max(0, 6));
        arr_39 [i_10] = (((((arr_3 [i_10]) ? ((71 ? -6578 : 2259673116545528610)) : ((((arr_3 [i_10]) & 47748))))) & (arr_14 [i_10] [i_10])));
        var_23 = (max(var_23, 388580875491575162));
    }
    #pragma endscop
}
