/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~291945080) * (966360896 << 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_12 [18] [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = ((-(~1383589963)));
                            var_21 = (min(var_21, (291945080 - 3711390775)));
                        }
                        var_22 = 1;
                        arr_13 [i_0] [i_1] [2] [2] = (4003022216 << 0);
                        var_23 -= ((~(28 || 0)));
                    }
                    arr_14 [i_1] [1] [8] = (~252);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_24 = 1;
                            var_25 = (!1);
                            arr_20 [i_0] [i_0] [1] [i_1] [i_0] [16] [i_0] = (~12);
                            arr_21 [i_1] [i_1] [i_1] [18] [i_6] = (((62 % 255) >> (1 ^ 0)));
                            var_26 = (1 - 1);
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_24 [i_1] [0] [i_2] [i_7] = (((~3852543584) ^ 1));
                            arr_25 [i_0] [i_1] [i_2] [i_1] [1] [i_0] [i_1] = 82;
                            arr_26 [i_0] [i_1] [i_2] [i_1] [i_7] [i_7] [1] = 0;
                            var_27 += 1;
                            arr_27 [i_1] [i_0] [i_1] [i_0] [i_0] [i_1] = (3927510812 == 0);
                        }
                        var_28 = 783940313;
                    }
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_32 [i_1] [i_1] [i_2] = 2147467264;
                        arr_33 [i_1] = (((~(4231533877 & 19))));
                        var_29 += ((-291945079 + 1) || ((5 <= (291945080 - 0))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            arr_37 [6] [1] [i_2] [i_2] [i_1] = (138 / 291945079);
                            arr_38 [i_0] [i_1] [i_0] [12] [i_8] [0] = (2 <= 177);
                            var_30 = -0;
                            arr_39 [i_1] [i_1] [i_1] [i_1] = 109;
                            var_31 += 2974196385;
                        }
                    }
                    arr_40 [i_1] = (~48);
                    var_32 -= (1 >> (1 * 1));
                }
            }
        }
    }
    #pragma endscop
}
