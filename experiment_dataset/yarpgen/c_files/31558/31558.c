/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_10 [i_0] = 1151795604700004352;
                    var_11 = (var_4 ? (arr_4 [i_0] [i_0 + 1] [i_0]) : (arr_4 [i_0] [i_0 + 1] [i_0]));
                    var_12 |= (((arr_0 [i_2] [i_0 - 3]) ? 127 : (((-127 - 1) ? -110 : var_5))));
                    var_13 ^= (~-65535);
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    var_14 ^= (((0 <= 0) != (arr_12 [5] [i_0] [i_0] [i_0 - 1])));
                    var_15 *= ((arr_6 [i_0 + 1] [i_0 - 3] [i_0 + 1] [i_3 + 1]) ? 255 : var_4);
                    var_16 = (arr_8 [i_0]);

                    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_17 += (!-1);
                        var_18 += var_4;
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_19 = ((((18446744073709551595 ? 0 : 1)) & var_7));
                        arr_18 [i_0] [i_3] [i_1] [i_0] = (((!(arr_13 [i_0] [i_0] [i_0]))));
                        arr_19 [i_1] [i_3] [i_1] |= (((arr_7 [i_1] [1] [1]) ? ((((arr_17 [i_1] [i_1] [i_1] [i_1]) ? 1023 : (arr_0 [i_5] [i_3 - 1])))) : ((0 >> (((arr_11 [4] [4] [i_3]) + 1925))))));
                        var_20 ^= (((((-256 ? var_8 : (arr_3 [i_1] [4] [i_3])))) ? ((((!(arr_2 [i_1]))))) : (arr_14 [i_0] [i_1] [i_3] [i_5 + 2])));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_21 ^= -72;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_0] = (arr_23 [i_0] [i_8 + 1] [i_6] [i_1] [i_0 - 3] [i_0]);
                                var_22 = (((arr_23 [i_0 - 2] [i_0] [i_0 - 3] [i_1] [i_8 + 1] [i_0]) ? (((0 ? (arr_11 [i_0] [i_1] [i_7]) : (arr_26 [i_8] [i_0] [i_6] [i_0] [i_0])))) : ((71 ? 7565114147996647508 : 18))));
                            }
                        }
                    }
                    var_23 = (arr_20 [i_0] [i_0 - 3] [i_0] [i_0 - 3]);
                }
                var_24 = (min(((var_2 ^ (arr_3 [i_0] [i_0 - 3] [i_0]))), (arr_3 [i_0] [i_0 - 2] [i_0])));
                arr_30 [i_1] [i_1] |= 4294967293;
                var_25 = (var_1 ? (arr_5 [i_0]) : (min((((-1 / (arr_7 [i_0] [i_0] [i_1])))), (max(118, 18446744073709551615)))));
            }
        }
    }
    var_26 -= (!var_7);
    #pragma endscop
}
