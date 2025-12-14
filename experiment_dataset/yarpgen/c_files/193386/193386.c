/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(var_18, ((var_16 ? var_7 : var_13))))) ? 9599 : 242);

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 = (((((((var_7 ? (arr_5 [i_0]) : (arr_5 [i_0]))) | (((arr_8 [i_0] [i_0] [10] [2]) / (arr_0 [i_1])))))) ? ((-((var_18 ? 18446744073709551612 : (arr_8 [i_0 - 2] [i_1] [i_1] [i_3]))))) : 5158862426968129593));

                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_0] [i_3] [7] [i_0] [0] [i_0] [i_0] = ((17160 >> (!var_5)));
                            var_22 *= (min((((~(arr_7 [8] [i_1 + 4] [i_1 + 4])))), (max(3637355520, 37))));
                            arr_15 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0 - 2] = var_1;
                            var_23 = ((var_17 | ((-(min((arr_9 [i_4] [i_0] [2] [i_0]), var_2))))));
                            var_24 *= (((min((min(var_11, 0)), var_10))) ? ((2585576881 ? (arr_7 [9] [i_1] [i_1]) : (((arr_2 [i_2]) ? 7770104496613996281 : 885001429)))) : ((((!((min((arr_1 [4]), -32742))))))));
                        }

                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, (((min((arr_18 [i_0] [i_0] [i_2] [i_3] [i_5]), 102))))));
                            var_26 -= (arr_18 [i_5] [i_1] [6] [14] [i_5]);
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_22 [0] [i_1] [i_1] [i_3] [i_1] = (arr_1 [i_0]);
                            var_27 = (arr_5 [i_0]);
                        }
                    }
                }
            }
        }
        var_28 = (~748039675);
        var_29 = (!var_5);
    }
    var_30 = var_16;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        var_31 = (var_16 ? 15 : ((0 ? 0 : 73)));
                        var_32 = (((arr_32 [i_7] [i_9] [i_7] [i_10] [4] [i_8]) ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]) : var_8));
                        var_33 *= (min(94, 18284884340681827324));
                    }
                    var_34 = ((-32767 - 1) ? 18422367303494528830 : (-9223372036854775807 - 1));
                }
            }
        }
    }
    #pragma endscop
}
