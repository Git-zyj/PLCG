/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = 18446744073709551615;
                    var_20 = (max((max(-5793030312083111496, ((((arr_1 [i_0]) ? (arr_8 [i_0] [i_1 - 3] [0] [i_2]) : (arr_8 [i_1 - 3] [i_1 - 3] [i_0] [i_0])))))), (((max(var_8, 32))))));
                }
            }
        }
    }
    var_21 -= max(var_18, var_15);
    var_22 = (min(var_22, (((var_0 ? var_17 : (!18446744073709551615))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_23 = (((arr_10 [i_3] [i_4]) ? (((((9 >> (var_2 - 794107885)))) ? var_4 : var_6)) : var_5));
                arr_14 [i_3] = (max((((var_14 ? (arr_11 [i_3] [i_3]) : ((3291629634080637429 ? -17 : var_5))))), (min((arr_13 [20] [i_3] [i_3]), (arr_13 [i_4] [i_3] [i_3])))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_24 = (((((var_14 ? (arr_13 [i_5 - 2] [13] [i_5 - 1]) : (arr_10 [i_4] [i_4])))) ? (!var_16) : (min((arr_13 [i_5 + 1] [i_4] [i_3]), ((max(121, 21)))))));
                            arr_20 [i_4] = (arr_12 [i_4]);
                            var_25 ^= -629561034;
                        }
                    }
                }
                var_26 = (min(var_26, (~112)));
            }
        }
    }
    var_27 = var_9;
    #pragma endscop
}
