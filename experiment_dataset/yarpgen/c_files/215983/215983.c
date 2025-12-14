/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_20 = 11093690860501012747;
        arr_2 [i_0] [i_0] = (max((!885784108137387605), (((arr_1 [i_0]) || ((max(var_4, var_14)))))));
        var_21 = arr_0 [i_0] [i_0];
        var_22 -= -1;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                arr_7 [i_2] [1] [i_2 + 2] = (((~(arr_4 [i_0]))));
                arr_8 [3] [i_2] [i_2 - 1] = 1385191073;
            }
            var_23 = ((((max((min(1385191068, (arr_1 [i_1]))), (var_6 ^ var_11)))) ? (arr_1 [i_0]) : var_18));
        }
    }
    var_24 = (max(var_24, ((max(((var_17 ? var_3 : var_4)), var_8)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_4] [i_3] [i_3] [i_4] [i_3] = (((var_8 + 2147483647) >> (885784108137387617 - 885784108137387596)));
                                var_25 *= (((arr_13 [i_6]) || (((-(arr_21 [i_3] [i_3] [i_5] [i_3]))))));
                            }
                        }
                    }
                    var_26 &= -2121958358;
                    var_27 = 2909776191;
                }
            }
        }
    }
    #pragma endscop
}
