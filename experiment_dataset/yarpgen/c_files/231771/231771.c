/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (var_11 >= var_9)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_19 |= (--6574461922851363813);
        var_20 |= 8;
        var_21 = (arr_2 [i_0 + 3]);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_22 = (arr_5 [i_1 + 1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_14 [i_3] [i_3] [i_2] [i_2] [i_1] = (((arr_9 [i_1] [i_1 - 1] [i_1 + 2]) ? (arr_8 [i_2] [i_2]) : 23693));
                        var_23 = (arr_8 [i_1 - 1] [i_1 + 3]);
                        var_24 = ((var_10 ? (arr_2 [i_1]) : var_12));
                    }
                }
            }
        }
        var_25 = (min(var_25, (~1)));
    }
    var_26 += var_13;
    #pragma endscop
}
