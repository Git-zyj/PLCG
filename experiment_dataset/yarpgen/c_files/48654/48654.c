/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (max(((-(arr_0 [i_0] [i_0]))), var_8));
        arr_3 [i_0] [10] = ((var_6 ? ((((((arr_0 [i_0] [i_0]) >> (3738041463651818955 - 3738041463651818914)))) ? var_0 : (0 >> 0))) : var_2));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (arr_4 [i_1]);
        arr_8 [i_1] = ((((~-1953395296) ? (max(var_2, var_6)) : ((var_4 ? var_5 : var_6)))));
        var_10 = (!18446744073709551592);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [i_2] = var_9;
                    arr_15 [i_1] [i_2] [i_2] [i_3] = ((18446744073709551592 >> (2147483646 - 2147483633)));
                }
            }
        }
    }
    var_11 = var_0;
    var_12 = (min(var_12, ((((max(var_1, (~var_1))) >> var_1)))));
    var_13 *= (((max(var_8, 1277107138)) >> 0));
    #pragma endscop
}
