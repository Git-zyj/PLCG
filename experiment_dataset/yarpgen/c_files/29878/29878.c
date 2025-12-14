/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((var_6 ? ((min(15, var_9))) : ((var_3 ? var_10 : var_7)))))));
    var_14 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((var_3 >> (18446744073709551615 + 17)));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_16 = ((~(arr_7 [i_0 - 3] [i_3 - 1])));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_17 *= (((arr_8 [4] [12] [i_2] [i_1]) >> (var_2 - 61422)));
                            var_18 = ((var_3 >> (((arr_0 [i_0 - 3] [i_0 - 1]) - 1792016796))));
                            arr_12 [i_3] [6] = (arr_5 [i_0] [0] [5]);
                            arr_13 [i_3] [i_1] [0] [i_1] [6] = (!67);
                        }
                        arr_14 [i_0] [i_3] [7] [13] = (~var_1);
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 = 2960143980;
                        var_20 = ((min(10698653842996772837, (min(var_3, (arr_0 [9] [10]))))));
                        var_21 = (!347880024);
                    }

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_20 [i_0] [i_1] [8] [5] [i_6] = ((((min(var_5, (arr_8 [i_0] [i_0 + 1] [6] [i_2])))) ? ((((arr_2 [i_0 - 2]) || var_5))) : (57683 / var_1)));
                        var_22 = (((var_9 ? (min(var_3, var_3)) : (((min((arr_9 [i_1] [i_1] [i_2] [12]), (arr_8 [i_1] [i_2] [i_1] [i_1]))))))) > var_2);
                        var_23 = (max(var_23, ((((max((arr_10 [1] [i_0 - 2] [i_1] [i_0] [2] [i_2]), var_1)) / (arr_11 [4] [i_0 - 2] [i_2] [16] [16] [10]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        arr_23 [8] [2] [1] [13] [3] [i_7] = 10698653842996772825;
                        var_24 = ((var_5 >> (var_0 - 60950)));
                        arr_24 [16] [i_1] [i_2] [i_7] |= (((~var_8) ^ (arr_22 [1] [i_1] [i_1] [i_7])));
                    }
                }
            }
        }
    }
    var_25 = var_0;
    #pragma endscop
}
