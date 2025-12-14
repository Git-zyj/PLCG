/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = ((~(min(((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (~11974737804108804710)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 6;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_12 *= ((0 ? 1699042150 : (0 && 58231)));
                            arr_14 [1] [i_1] [i_2] [8] [i_0] [0] = ((1 ? 1 : 2520477612));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_13 = ((~(~1152919305583591424)));
                            arr_18 [1] [i_0] [i_2] [i_2] [i_2] = (((134217727 || var_2) >= ((var_7 ? var_2 : (arr_15 [i_5] [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2])))));
                        }
                        var_14 = (((0 < 30107) ? ((-1 ? ((((!(arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))))) : var_1)) : (((-9223372036854775802 ? 3334 : (arr_16 [i_2] [i_1] [i_2] [8] [9] [i_0] [i_0]))))));
                        var_15 = (((((-(arr_7 [i_0])))) / var_3));
                        var_16 = ((var_9 ? ((((((-(arr_8 [i_0] [i_0] [i_0]))) == ((var_7 ? 864 : 0)))))) : (max(425120016437813334, 79))));
                    }
                }
            }
        }
    }
    var_17 += ((((((!18446744073709551615) ? var_6 : (((var_4 ? var_10 : var_2)))))) ? ((45350 ? -17 : 5476)) : var_8));
    #pragma endscop
}
