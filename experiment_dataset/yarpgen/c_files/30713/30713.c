/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((255 ? 255 : var_16)) | ((min(10928, -81))))), (((((var_13 ? var_12 : 239))) ? (var_1 > var_13) : var_1))));
    var_21 &= ((var_17 ? ((((((var_2 ? var_18 : -17343)) + 9223372036854775807)) << ((var_1 ? var_16 : var_10)))) : var_17));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = 17;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_23 = ((((70 ? (arr_3 [i_1] [1]) : 240)) & -17332));
                    arr_9 [i_0] [i_0] = (((((15 % (arr_5 [i_0] [i_1 + 1] [i_0])))) ? ((64 ? var_10 : (arr_3 [i_0] [i_1 + 2]))) : var_11));
                    var_24 = (min(var_24, ((((arr_3 [i_1 - 1] [i_1 + 1]) ? (arr_3 [i_1 + 1] [i_1 - 1]) : (arr_3 [i_1 + 2] [i_1 + 1]))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {
                    {
                        var_25 *= ((((((arr_14 [i_4] [i_3] [i_4] [i_5 + 2]) ? (arr_8 [i_5]) : -55616185))) ? (((var_6 ? (arr_15 [i_5] [i_4] [18] [i_0]) : 0))) : (((arr_5 [i_0] [i_4] [i_5]) | 21))));
                        arr_17 [i_0] [i_5 - 1] [i_5 - 2] [i_5] = (((((((arr_8 [i_0]) ? (arr_0 [i_3]) : -16006)) + 2147483647)) >> ((((253 ? -6516903211933880881 : 100)) + 6516903211933880889))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
