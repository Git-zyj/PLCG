/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((1 | (min(var_3, (arr_0 [i_0] [i_0])))));
                    var_14 = ((((((arr_2 [i_0]) ? var_5 : var_3))) || ((min((arr_2 [i_0]), var_2)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_15 = (max((((!(arr_17 [i_3] [i_3] [i_3])))), var_10));
                    var_16 = ((-322669018 & (max(0, (~18446744073709551615)))));
                    var_17 = ((((-(arr_5 [i_3] [i_4 + 1]))) / ((~(arr_7 [i_4 + 1] [0])))));
                    var_18 = 0;
                }
            }
        }
    }
    #pragma endscop
}
