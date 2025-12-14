/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((5161 ? ((var_15 >> ((((max(-5162, -324))) + 380)))) : (((-5162 ? ((305369655 ? var_16 : var_1)) : (((var_10 ? 32 : 5161))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 += 198;
                                var_22 = ((((max((arr_8 [i_0] [i_0] [i_0] [i_3]), ((10715078342958607609 << (5160 - 5139)))))) ? (max(((-(arr_10 [i_0] [i_0] [i_2] [7] [i_0]))), (arr_11 [i_1 + 1] [6] [i_4 - 3] [i_4 - 1] [i_0]))) : -5161));
                                arr_14 [i_0] [i_0] [i_2] [i_4] [i_1] = ((!(var_12 != 5161)));
                            }
                        }
                    }
                    var_23 = (16128 ? ((max((arr_8 [i_1] [i_0] [i_0] [i_1]), 5162))) : (((~var_3) | ((var_5 ? 6804457841690865585 : 5166)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_24 = (min(var_24, var_16));
                                arr_23 [i_0] [i_1 - 1] [i_0] [i_5] [10] &= ((5161 > (((((var_0 ? -5162 : (arr_18 [i_0] [4])))) ? ((var_17 - (arr_3 [0] [0] [0]))) : (((max(-5161, var_4))))))));
                            }
                        }
                    }
                }
                var_25 = ((((9003 ? -5144 : -5178)) - (((arr_3 [i_0] [i_1] [i_1 + 2]) ? (arr_10 [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_0]) : (arr_10 [i_0] [i_1] [i_1 - 1] [i_1 + 2] [i_0])))));
            }
        }
    }
    var_26 = -5123;
    var_27 = ((18446744073709551615 < (max(var_19, (((0 ? 5163 : -5162)))))));
    #pragma endscop
}
