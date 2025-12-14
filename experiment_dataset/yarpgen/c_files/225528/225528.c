/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_5;
        var_15 = var_13;
        var_16 = ((((((arr_1 [i_0]) ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : (min(var_11, 31))))) || (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 3;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_17 -= var_2;
                        var_18 *= (((((var_5 ? 249 : (arr_2 [i_1])))) ? (arr_11 [3]) : var_11));
                        arr_15 [i_1] [i_2] = (((((arr_9 [i_2] [i_4]) != (arr_13 [i_1] [i_2]))) ? (arr_10 [i_3 - 2]) : ((~(arr_10 [i_3])))));
                    }
                }
            }
        }
        var_19 |= var_11;
    }
    var_20 = var_6;
    #pragma endscop
}
