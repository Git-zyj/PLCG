/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = (min((-127 - 1), 3774));
                            arr_11 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = (min(119, ((-((-(arr_6 [i_0] [i_1] [i_2] [i_3])))))));
                            arr_12 [i_3] [i_3] [8] [8] [i_0] [i_0] = (4283 | 105);
                            arr_13 [i_0] = ((~((((!(arr_2 [i_1] [i_2 - 3] [i_3]))) ? -44 : (arr_7 [i_3] [i_2] [i_1] [i_0])))));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (~-5906599200973305319);
                arr_15 [i_0] [i_0] [i_1] = (((arr_2 [i_1] [i_0] [i_0]) | (min((43 % -127), (53 < 9223372036854775783)))));
                arr_16 [i_0] [i_0] [i_0] = (max(9223372036854775794, 1));
            }
        }
    }
    var_11 = (510 - -51);
    var_12 = ((((min(var_4, (!var_3)))) ? (((((~1843649259) + 2147483647)) >> (((~1) + 31)))) : (((63488 | var_0) << (var_4 - 23785)))));
    #pragma endscop
}
