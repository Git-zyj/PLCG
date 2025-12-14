/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_13 ? ((var_1 ? ((var_0 ? var_15 : var_9)) : (((var_2 + 2147483647) >> (var_17 + 7720768221695975947))))) : -var_8)))));
    var_19 ^= var_16;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (((((min(1, 1)))) | (min((arr_0 [i_0] [i_0]), var_0))));
        arr_2 [i_0] [i_0] = var_15;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = ((var_15 > ((((((arr_3 [i_1]) ? var_7 : (arr_0 [i_1] [i_1])))) ? (arr_0 [i_1] [i_1]) : (((!(arr_1 [i_1]))))))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_22 = ((((arr_9 [i_1] [i_1] [i_1] [i_2 - 2] [i_3 - 1] [i_4 + 2]) ? (arr_9 [i_1] [i_1] [i_1] [i_2 - 1] [i_2] [i_4 + 3]) : (arr_9 [9] [9] [9] [i_2 + 4] [i_4 + 1] [i_4 + 3]))));
                        var_23 = var_10;
                    }
                }
            }
        }
        var_24 = (((((+((var_15 ? (arr_0 [i_1] [i_1]) : var_13))))) ? (arr_3 [i_1]) : 8959));
    }
    #pragma endscop
}
