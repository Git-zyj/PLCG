/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = var_16;
                var_19 = (((min((arr_2 [i_0]), (0 == var_8))) * (((!(arr_5 [i_0] [i_0]))))));
            }
        }
    }
    var_20 = var_17;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_9 [i_2] = (((arr_6 [i_2] [i_2]) ^ (arr_6 [i_2] [i_2])));
        arr_10 [i_2] = ((~(var_16 || var_11)));
        var_21 = (((arr_8 [i_2]) ? 3051261073 : (((var_8 ? (arr_8 [i_2]) : -68)))));
    }
    var_22 = 67;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_23 = (arr_5 [i_3] [i_3]);
                var_24 = (~1687);
            }
        }
    }
    #pragma endscop
}
