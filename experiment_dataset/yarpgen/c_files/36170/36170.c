/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 -= var_6;
                    arr_9 [i_0] [i_0] [i_2] = (((((((var_6 ? (arr_1 [i_0 + 3]) : var_6))) ? (arr_3 [i_0] [i_0]) : ((~(arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 3]))))) - (((((var_10 != (arr_3 [i_0] [1]))) ? -26245 : (arr_8 [i_2 + 1] [i_2] [i_2] [i_2]))))));
                }
            }
        }
        var_13 = (min(var_13, (~-1994801873)));
        var_14 -= ((!(((var_8 ? ((~(arr_0 [i_0]))) : (var_0 && var_0))))));
    }
    var_15 = ((var_7 ? ((var_8 ? 31 : (var_11 - var_2))) : 0));
    var_16 -= var_7;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_17 = ((-1994801879 ? 31 : ((-1994801874 ? 906572080 : ((max(-1994801875, 29)))))));
                                var_18 = (min(var_18, (((((((min(240, (arr_19 [i_3] [7] [3])))) ? (((var_8 ? var_6 : var_0))) : var_4))) ? 41 : ((((var_8 >= (arr_7 [i_3] [0] [i_5])))))))));
                            }
                        }
                    }
                }
                var_19 ^= var_11;
            }
        }
    }
    #pragma endscop
}
