/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
        {
            var_16 = (min(var_16, (arr_5 [i_1])));
            var_17 -= (((!(arr_7 [i_0]))));
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
        {
            var_18 = (max(var_18, 138));
            var_19 = -5380507303307074414;
            var_20 = (min(((1 ? var_5 : (((max(var_10, (arr_6 [4] [i_0 - 3]))))))), (((~(arr_5 [i_2 - 1]))))));
        }
        var_21 = (min(var_21, ((((arr_9 [i_0 + 2]) == (arr_9 [i_0 - 2]))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_22 = (arr_12 [i_3] [i_3]);
                        arr_16 [i_0] [i_4] [i_4] = (((--1) ? (((((((arr_4 [1] [i_5] [i_5]) != 1))) >= ((((arr_12 [i_0] [i_3]) != 153)))))) : var_11));
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, (((var_15 - (~var_0))))));
    var_24 = ((var_1 > ((var_10 ? ((var_11 ? var_13 : var_5)) : var_2))));
    var_25 |= var_7;
    #pragma endscop
}
