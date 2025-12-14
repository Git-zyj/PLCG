/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (arr_1 [i_1]);

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_8 [i_0] [i_2] [i_0] [i_2] = (((((arr_4 [i_0]) ? (arr_4 [i_0]) : var_3)) > (-1096346265 - -1)));
                var_10 = ((0 >= (((var_9 >= (arr_1 [i_2]))))));
            }
            arr_9 [5] = (arr_2 [i_0]);

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                var_11 = ((!83) ? ((var_2 ? 29 : -1096346265)) : ((var_0 ? -1096346265 : 1691086988)));
                var_12 = -1;
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_16 [i_4] = (arr_15 [i_0] [i_1] [i_4]);
                arr_17 [i_4] [i_4] = var_9;
                var_13 = var_8;
            }
        }
        var_14 = ((~(max((arr_10 [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0] [i_0])))));
        var_15 = (((~(arr_15 [6] [6] [6]))) - ((((((arr_1 [i_0]) == 11681202416818380562)) ? 12327625576646791187 : ((((arr_0 [3]) <= var_1)))))));
    }
    var_16 = var_7;
    var_17 = ((((var_3 ? var_7 : (!51))) >= var_2));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_18 &= (arr_6 [i_7] [i_6] [i_7]);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_19 = (~var_1);
                                arr_33 [i_5] [i_6] [i_7] [1] [i_7] = (18446744073709551615 >= -127);
                            }
                        }
                    }
                    var_20 = (~1096346265);
                }
            }
        }
    }
    #pragma endscop
}
