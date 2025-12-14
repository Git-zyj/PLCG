/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_2;
    var_14 = (max(var_14, (((var_2 ? var_10 : var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((-(((!(((-(arr_2 [i_2] [i_2]))))))))))));
                    var_16 = ((-(min(((((arr_5 [i_0 + 3]) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0] [i_1])))), (((arr_0 [i_1]) ? var_10 : var_0))))));
                    arr_9 [i_0] [i_0] = (min((max((~268435455), (arr_7 [i_1] [i_2 - 1] [i_0 + 2] [i_0 + 2]))), ((min((((arr_1 [i_1]) ? var_5 : var_4)), var_0)))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        var_17 = (min((((!(arr_4 [i_3 + 2] [i_3])))), (~var_3)));
        var_18 = (max(268435455, 1));
        arr_13 [i_3 - 3] = ((~((((min(var_6, var_12))) ? -1 : (max(var_4, 268435451))))));
    }
    #pragma endscop
}
