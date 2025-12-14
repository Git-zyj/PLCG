/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = (max(2064384, 4458815782520197072));
        arr_2 [i_0] = ((!(arr_1 [i_0])));
        var_21 *= (max(18446744073709551615, -4266970178282374694));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 = (max((arr_0 [i_1] [i_1]), (arr_5 [i_1] [10])));
        arr_6 [i_1] = var_16;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_23 = ((((((arr_13 [i_3 - 1] [i_3 - 1] [i_4] [i_3 + 1]) ? (arr_13 [i_3 - 1] [i_2] [i_4] [i_2]) : (arr_13 [i_3 + 1] [i_3 + 1] [i_4] [i_4])))) ? ((-(arr_10 [i_3 + 1] [i_2]))) : var_5));
                    var_24 = (~105);
                    arr_16 [i_3 - 1] [i_3] = (max((((~(arr_11 [i_4] [i_2] [i_2])))), var_17));
                }
            }
        }
    }
    #pragma endscop
}
