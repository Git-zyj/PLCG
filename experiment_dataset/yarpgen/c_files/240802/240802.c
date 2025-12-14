/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((-var_0 ? (min(((7 ? 3396650151896201537 : var_12)), (-121 + var_4))) : var_8));
    var_17 -= var_10;
    var_18 = (!var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [1] = ((((arr_5 [i_0]) ? (arr_2 [21] [i_1] [i_0]) : 124)));

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_19 = (!((((arr_7 [i_3 + 1] [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3]) ? (var_9 ^ 28137) : ((max((arr_7 [i_1] [i_2] [i_1] [i_1] [11]), (arr_7 [i_1] [i_2] [i_1] [i_0] [i_0]))))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = (((((((max((arr_2 [19] [i_1] [i_3]), var_12))) ? (arr_2 [i_3 + 1] [i_3] [i_3]) : 152))) >= (((arr_1 [i_3 + 2]) ? var_12 : (arr_4 [i_3] [i_3 - 3])))));
                        var_20 *= ((2147483647 ? 0 : -12));
                        var_21 = ((max((arr_7 [i_0] [i_3 + 1] [3] [i_3 - 3] [3]), var_10)));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_22 = 103;
                        var_23 = (((((arr_11 [16] [i_1] [i_1] [16]) / -2016)) + 252));
                        var_24 = (min(var_24, ((((arr_13 [i_0] [i_1] [i_2] [i_4]) ? 1 : (((((var_15 ^ (arr_4 [3] [2])))) % (arr_2 [i_0] [i_0] [i_0]))))))));
                    }
                    var_25 = (1 && 25990);
                }
            }
        }
    }
    #pragma endscop
}
