/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 ? -2147483644 : (min(((32116 ? 81 : 9492232279566189694)), (~2147483644)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [9] [9] [9] [9] [i_3] [i_4] = min((((((min(8954511794143361926, (arr_13 [i_1] [i_3] [15] [1])))) ? (arr_0 [i_0 + 2] [i_0 - 1]) : ((110 & (arr_5 [13] [i_1] [i_1] [i_1])))))), (((33420 ? (arr_11 [i_0] [i_0] [i_2] [i_1] [i_3] [i_4]) : 127))));
                                arr_15 [i_0] [i_0] [i_3] [i_0] [2] = ((!(!175)));
                                var_14 += ((99 & (min((min((arr_12 [i_0 + 2] [i_1] [i_2] [i_2] [1] [7]), 98)), (arr_6 [i_3])))));
                                arr_16 [i_0] [i_0] [i_3] [12] [i_0] = (((((230 ? (arr_6 [i_0 + 1]) : (arr_6 [i_0 + 1])))) ? (((!(arr_6 [i_0 + 1])))) : (((arr_6 [i_0 + 1]) % (arr_6 [i_0 + 1])))));
                            }
                        }
                    }
                    arr_17 [i_0 + 1] [i_1] = -1;
                    var_15 += (min((arr_0 [i_0 - 1] [8]), ((((arr_8 [i_0] [i_2] [12] [i_2] [12]) ? -109 : 26)))));
                    var_16 += ((((((arr_13 [i_0 - 1] [i_1] [i_0 + 2] [i_0 - 1]) ? ((81 ? 255 : 8509774228750509265)) : (((-1575666484 ? 15 : 4294967294)))))) || ((((-32 ? (arr_8 [i_1] [i_1] [i_1] [i_1] [i_0 + 2]) : (arr_11 [i_2] [i_2] [6] [i_0 - 1] [i_2] [i_0 + 2])))))));
                }
            }
        }
    }
    var_17 ^= var_6;
    var_18 = ((((min((var_1 | var_12), var_0))) ? (min((var_4 > -83), (var_11 / var_8))) : var_12));
    #pragma endscop
}
