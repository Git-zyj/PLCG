/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((!(((-18 ? -18 : -181372212)))))) <= (((((var_3 ? var_5 : 1))) ? (!0) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (((((var_3 > var_3) && (var_3 / -13980))) ? (((((var_3 ? -29741 : (arr_4 [i_4]))) > (960 > 2147483647)))) : (!1536)));
                                var_14 = (!0);
                            }
                        }
                    }
                }
                var_15 -= ((((arr_6 [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1 + 3]) <= (arr_6 [i_1 - 3] [i_1 - 2] [i_1 + 3] [i_1 + 1]))));
            }
        }
    }
    #pragma endscop
}
