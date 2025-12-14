/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (((((-((var_7 % (arr_0 [i_1])))))) ? ((~(arr_0 [2]))) : (((((arr_3 [i_1]) < -1884795514))))));
                    var_19 = (arr_6 [i_0] [i_0] [i_1]);
                    var_20 = (((max(((10 ? (-127 - 1) : var_12)), (8191 || var_15)))) ? (((((var_4 % (-127 - 1)))) ? (arr_1 [i_2]) : var_16)) : (((((arr_4 [i_0] [i_1] [i_2]) < var_18)))));
                }
            }
        }
    }
    var_21 = ((((((var_3 ? var_13 : var_6)) > var_15)) ? ((((((-12 ? var_8 : var_11)) >= (min(240, var_5)))))) : var_13));
    var_22 = (((var_0 > (((var_1 ? var_12 : 1691800962))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_23 = (((((max(var_4, var_3)) << ((((var_2 ? var_18 : var_11)) - 58012)))) < ((((var_9 + 2147483647) << 0)))));
                    var_24 = (((((-(151 / var_6)))) ? 28347 : ((-((0 / (arr_14 [i_3] [i_4 + 1] [i_5])))))));
                    var_25 -= var_12;
                }
            }
        }
    }
    #pragma endscop
}
