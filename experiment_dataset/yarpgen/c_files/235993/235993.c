/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((((var_8 << (arr_1 [i_0] [i_1]))) + (2147483647 ^ 4294967286)));
                var_15 = (arr_0 [i_0] [i_0]);
                var_16 = (!1);
            }
        }
    }
    var_17 = ((~var_11) ? var_5 : (!var_2));
    var_18 = var_4;
    var_19 = (~var_2);
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_20 = (arr_3 [i_3 - 1] [i_4 - 1]);
                    arr_10 [i_2] [i_4] = ((((min((arr_5 [3]), ((1 & (arr_4 [i_2] [5])))))) && ((min((min((arr_2 [16] [i_2]), (arr_8 [i_2] [3] [i_4]))), ((min(4294967286, (arr_1 [i_2 - 1] [i_3 - 1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
