/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-1801659925 + 2147483647) << ((((225331718 ? -var_9 : (((min(var_6, 1)))))) - 3915804743))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, ((max((arr_0 [i_2]), 12036445935936036817)))));
                            arr_11 [i_2] [3] = (max(-var_1, (((arr_5 [i_2]) * (arr_0 [i_3])))));
                            var_13 = (min(var_13, var_8));
                        }
                    }
                }
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
