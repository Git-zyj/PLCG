/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_11, var_8))) ? (~var_2) : ((var_15 ? 1 : var_3))));
    var_21 = ((0 ? ((((max(192, var_10))) ? ((max(var_7, 22))) : (max(18446744073709551615, -71)))) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 += ((-(max(((var_11 % (arr_5 [i_0] [i_0] [1]))), ((var_8 ? var_8 : (arr_2 [i_1])))))));
                    arr_8 [i_0] [i_1] = ((86 ? ((((arr_0 [i_0]) == (arr_1 [i_2] [i_0])))) : (((!(arr_0 [i_2]))))));
                    var_23 = (max(var_23, ((((((-0 % (((arr_5 [0] [i_1] [0]) + var_1))))) ^ (~3))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_24 = (min(var_24, (((((((arr_10 [i_0] [i_1] [i_2] [i_2]) + 0))) ? (arr_1 [i_3] [i_0]) : 5081)))));
                        var_25 += (((119 % (arr_12 [i_0] [i_1] [i_0] [i_3]))));
                    }
                    arr_13 [i_1] [i_1] = ((((max(1, 222))) ? ((max((arr_10 [i_2] [i_1] [i_1] [i_0]), (arr_10 [i_2] [i_1] [i_1] [i_0])))) : (arr_10 [i_0] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                {
                    var_26 = (arr_18 [i_6 - 2] [i_6] [i_6]);
                    arr_20 [i_4] [i_4] = ((-31 ? (((!(1 + var_16)))) : (~-var_2)));
                }
            }
        }
    }
    #pragma endscop
}
