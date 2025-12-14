/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_8 [i_0] |= ((((((arr_4 [i_0] [i_1] [i_1]) > var_8)) ? (arr_5 [i_0] [i_0]) : (arr_6 [0]))));
                var_12 ^= 2648720029;
                arr_9 [i_0] [i_1] |= (arr_2 [i_0] [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (arr_11 [i_2])));
        var_14 = (min(var_14, ((-(2648720004 - -7)))));
        var_15 = (min(var_15, (((!(1607356397 ^ 4080803221))))));
        var_16 = ((((((arr_10 [i_2]) - (min(var_0, 0))))) ? -4479172670231161537 : var_0));
        arr_13 [i_2] = 2648719997;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = (var_9 && var_11);
        arr_17 [i_3] |= ((+((min((var_5 && var_2), (1607356390 == var_0))))));
    }
    #pragma endscop
}
